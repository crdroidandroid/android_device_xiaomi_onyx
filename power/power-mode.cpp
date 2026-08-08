/*
 * Copyright (C) 2021 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <aidl/android/hardware/power/BnPower.h>
#include <android-base/logging.h>
#include <android-base/unique_fd.h>

#include <fcntl.h>
#include <sys/ioctl.h>

#include <touch/xiaomi_touch.h>

#define TOUCH_DEV_PATH "/dev/xiaomi-touch"
#define TOUCH_ID 0

namespace aidl {
namespace google {
namespace hardware {
namespace power {
namespace impl {
namespace pixel {

using ::aidl::android::hardware::power::Mode;

static int getTouchFd() {
    static ::android::base::unique_fd fd = [] {
        ::android::base::unique_fd f(open(TOUCH_DEV_PATH, O_RDWR));
        if (f < 0) {
            LOG(ERROR) << "Failed to open " << TOUCH_DEV_PATH;
            return ::android::base::unique_fd();
        }
        ioctl(f.get(), TOUCH_IOC_SELECT_TOUCH_ID, TOUCH_ID);
        return f;
    }();
    return fd.get();
}

static bool setTouchModeValue(int mode, int value) {
    int fd = getTouchFd();
    if (fd < 0) {
        return false;
    }

    common_data_t data = {};
    data.touch_id = TOUCH_ID;
    data.cmd = SET_CUR_VALUE;
    data.mode = mode;
    data.data_len = 1;
    data.data_buf[0] = value;

    return ioctl(fd, TOUCH_IOC_COMMON_DATA, &data) == 0;
}

bool isDeviceSpecificModeSupported(Mode type, bool* _aidl_return) {
    switch (type) {
        case Mode::DOUBLE_TAP_TO_WAKE:
            *_aidl_return = true;
            return true;
        default:
            return false;
    }
}

bool setDeviceSpecificMode(Mode type, bool enabled) {
    switch (type) {
        case Mode::DOUBLE_TAP_TO_WAKE:
            return setTouchModeValue(Touch_Doubletap_Mode, enabled ? 1 : 0);
        default:
            return false;
    }
}

}  // namespace pixel
}  // namespace impl
}  // namespace power
}  // namespace hardware
}  // namespace google
}  // namespace aidl
