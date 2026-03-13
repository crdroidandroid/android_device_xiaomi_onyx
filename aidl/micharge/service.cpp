#include <aidl/vendor/xiaomi/hardware/micharge/BnMiCharge.h>
#include <aidl/vendor/xiaomi/hardware/micharge/IMiCharge.h>
#include <android/binder_manager.h>
#include <android/binder_process.h>

#include <memory>
#include <string>

using ::aidl::vendor::xiaomi::hardware::micharge::BnMiCharge;
using ::aidl::vendor::xiaomi::hardware::micharge::IMiCharge;
using ::ndk::ScopedAStatus;

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-parameter"

struct MiChargeService : public BnMiCharge {
    ::ndk::ScopedAStatus getBatteryAuthentic(std::string* _aidl_return) override {
        *_aidl_return = "";
        return ScopedAStatus::ok();
    }
    ::ndk::ScopedAStatus getBatteryCapacity(std::string* _aidl_return) override {
        *_aidl_return = "";
        return ScopedAStatus::ok();
    }
    ::ndk::ScopedAStatus getBatteryChargeFull(std::string* _aidl_return) override {
        *_aidl_return = "";
        return ScopedAStatus::ok();
    }
    ::ndk::ScopedAStatus getBatteryChargeType(std::string* _aidl_return) override {
        *_aidl_return = "";
        return ScopedAStatus::ok();
    }
    ::ndk::ScopedAStatus getBatteryCycleCount(std::string* _aidl_return) override {
        *_aidl_return = "";
        return ScopedAStatus::ok();
    }
    ::ndk::ScopedAStatus getBatteryIbat(std::string* _aidl_return) override {
        *_aidl_return = "";
        return ScopedAStatus::ok();
    }
    ::ndk::ScopedAStatus getBatteryResistance(std::string* _aidl_return) override {
        *_aidl_return = "";
        return ScopedAStatus::ok();
    }
    ::ndk::ScopedAStatus getBatterySoh(std::string* _aidl_return) override {
        *_aidl_return = "";
        return ScopedAStatus::ok();
    }
    ::ndk::ScopedAStatus getBatteryTbat(std::string* _aidl_return) override {
        *_aidl_return = "";
        return ScopedAStatus::ok();
    }
    ::ndk::ScopedAStatus getBatteryThermaLevel(std::string* _aidl_return) override {
        *_aidl_return = "";
        return ScopedAStatus::ok();
    }
    ::ndk::ScopedAStatus getBatteryVbat(std::string* _aidl_return) override {
        *_aidl_return = "";
        return ScopedAStatus::ok();
    }
    ::ndk::ScopedAStatus getBtTransferStartState(std::string* _aidl_return) override {
        *_aidl_return = "";
        return ScopedAStatus::ok();
    }
    ::ndk::ScopedAStatus getCarChargingType(std::string* _aidl_return) override {
        *_aidl_return = "";
        return ScopedAStatus::ok();
    }
    ::ndk::ScopedAStatus getChargingPowerMax(std::string* _aidl_return) override {
        *_aidl_return = "";
        return ScopedAStatus::ok();
    }
    ::ndk::ScopedAStatus getCoolModeState(std::string* _aidl_return) override {
        *_aidl_return = "";
        return ScopedAStatus::ok();
    }
    ::ndk::ScopedAStatus getFastChargeModeStatus(std::string* _aidl_return) override {
        *_aidl_return = "";
        return ScopedAStatus::ok();
    }
    ::ndk::ScopedAStatus getInputSuspendState(std::string* _aidl_return) override {
        *_aidl_return = "";
        return ScopedAStatus::ok();
    }
    ::ndk::ScopedAStatus getMiChargePath(const std::string& in_path, std::string* _aidl_return) override {
        *_aidl_return = "";
        return ScopedAStatus::ok();
    }
    ::ndk::ScopedAStatus getNightChargingState(std::string* _aidl_return) override {
        *_aidl_return = "";
        return ScopedAStatus::ok();
    }
    ::ndk::ScopedAStatus getPSValue(std::string* _aidl_return) override {
        *_aidl_return = "";
        return ScopedAStatus::ok();
    }
    ::ndk::ScopedAStatus getPdApdoMax(std::string* _aidl_return) override {
        *_aidl_return = "";
        return ScopedAStatus::ok();
    }
    ::ndk::ScopedAStatus getPdAuthentication(std::string* _aidl_return) override {
        *_aidl_return = "";
        return ScopedAStatus::ok();
    }
    ::ndk::ScopedAStatus getQuickChargeType(std::string* _aidl_return) override {
        *_aidl_return = "";
        return ScopedAStatus::ok();
    }
    ::ndk::ScopedAStatus getSBState(std::string* _aidl_return) override {
        *_aidl_return = "";
        return ScopedAStatus::ok();
    }
    ::ndk::ScopedAStatus getSocDecimal(std::string* _aidl_return) override {
        *_aidl_return = "";
        return ScopedAStatus::ok();
    }
    ::ndk::ScopedAStatus getSocDecimalRate(std::string* _aidl_return) override {
        *_aidl_return = "";
        return ScopedAStatus::ok();
    }
    ::ndk::ScopedAStatus getTxAdapt(std::string* _aidl_return) override {
        *_aidl_return = "";
        return ScopedAStatus::ok();
    }
    ::ndk::ScopedAStatus getUsbCurrent(std::string* _aidl_return) override {
        *_aidl_return = "";
        return ScopedAStatus::ok();
    }
    ::ndk::ScopedAStatus getUsbVoltage(std::string* _aidl_return) override {
        *_aidl_return = "";
        return ScopedAStatus::ok();
    }
    ::ndk::ScopedAStatus getWirelessChargingStatus(std::string* _aidl_return) override {
        *_aidl_return = "";
        return ScopedAStatus::ok();
    }
    ::ndk::ScopedAStatus getWirelessFwStatus(std::string* _aidl_return) override {
        *_aidl_return = "";
        return ScopedAStatus::ok();
    }
    ::ndk::ScopedAStatus getWirelessReverseStatus(std::string* _aidl_return) override {
        *_aidl_return = "";
        return ScopedAStatus::ok();
    }
    ::ndk::ScopedAStatus isBatteryLifeFunctionSupported(bool* _aidl_return) override {
        *_aidl_return = false;
        return ScopedAStatus::ok();
    }
    ::ndk::ScopedAStatus isDPConnected(bool* _aidl_return) override {
        *_aidl_return = false;
        return ScopedAStatus::ok();
    }
    ::ndk::ScopedAStatus isFunctionSupported(const std::string& in_function, bool* _aidl_return) override {
        *_aidl_return = false;
        return ScopedAStatus::ok();
    }
    ::ndk::ScopedAStatus isUSB32(bool* _aidl_return) override {
        *_aidl_return = false;
        return ScopedAStatus::ok();
    }
    ::ndk::ScopedAStatus isWirelessChargingSupported(bool* _aidl_return) override {
        *_aidl_return = false;
        return ScopedAStatus::ok();
    }
    ::ndk::ScopedAStatus isWiressFwUpdateSupported(bool* _aidl_return) override {
        *_aidl_return = false;
        return ScopedAStatus::ok();
    }
    ::ndk::ScopedAStatus setBtState(const std::string& in_value, int32_t* _aidl_return) override {
        *_aidl_return = 0;
        return ScopedAStatus::ok();
    }
    ::ndk::ScopedAStatus setBtTransferStartState(const std::string& in_value, int32_t* _aidl_return) override {
        *_aidl_return = 0;
        return ScopedAStatus::ok();
    }
    ::ndk::ScopedAStatus setCoolModeState(const std::string& in_value, int32_t* _aidl_return) override {
        *_aidl_return = 0;
        return ScopedAStatus::ok();
    }
    ::ndk::ScopedAStatus setInputSuspendState(const std::string& in_value, int32_t* _aidl_return) override {
        *_aidl_return = 0;
        return ScopedAStatus::ok();
    }
    ::ndk::ScopedAStatus setMiChargePath(const std::string& in_path, const std::string& in_value, int32_t* _aidl_return) override {
        *_aidl_return = 0;
        return ScopedAStatus::ok();
    }
    ::ndk::ScopedAStatus setNightChargingState(const std::string& in_value, int32_t* _aidl_return) override {
        *_aidl_return = 0;
        return ScopedAStatus::ok();
    }
    ::ndk::ScopedAStatus setRxCr(const std::string& in_value, int32_t* _aidl_return) override {
        *_aidl_return = 0;
        return ScopedAStatus::ok();
    }
    ::ndk::ScopedAStatus setSBState(const std::string& in_value, int32_t* _aidl_return) override {
        *_aidl_return = 0;
        return ScopedAStatus::ok();
    }
    ::ndk::ScopedAStatus setSmCountReset(const std::string& in_value, int32_t* _aidl_return) override {
        *_aidl_return = 0;
        return ScopedAStatus::ok();
    }
    ::ndk::ScopedAStatus setUpdateWirelessFw(const std::string& in_value, int32_t* _aidl_return) override {
        *_aidl_return = 0;
        return ScopedAStatus::ok();
    }
    ::ndk::ScopedAStatus setWirelessChargingEnabled(bool in_enabled, int32_t* _aidl_return) override {
        *_aidl_return = 0;
        return ScopedAStatus::ok();
    }
    ::ndk::ScopedAStatus setWlsTxSpeed(const std::string& in_value, int32_t* _aidl_return) override {
        *_aidl_return = 0;
        return ScopedAStatus::ok();
    }
    ::ndk::ScopedAStatus getTypeCCommonInfo(const std::string& in_key, std::string* _aidl_return) override {
        *_aidl_return = "";
        return ScopedAStatus::ok();
    }
    ::ndk::ScopedAStatus setTypeCCommonInfo(const std::string& in_key, const std::string& in_value, int32_t* _aidl_return) override {
        *_aidl_return = 0;
        return ScopedAStatus::ok();
    }
    ::ndk::ScopedAStatus getChargeCommonInfo(const std::string& in_key, std::string* _aidl_return) override {
        *_aidl_return = "";
        return ScopedAStatus::ok();
    }
    ::ndk::ScopedAStatus setChargeCommonInfo(const std::string& in_key, const std::string& in_value, int32_t* _aidl_return) override {
        *_aidl_return = 0;
        return ScopedAStatus::ok();
    }
    ::ndk::ScopedAStatus getBatteryCommonInfo(const std::string& in_key, std::string* _aidl_return) override {
        *_aidl_return = "";
        return ScopedAStatus::ok();
    }
    ::ndk::ScopedAStatus setBatteryCommonInfo(const std::string& in_key, const std::string& in_value, int32_t* _aidl_return) override {
        *_aidl_return = 0;
        return ScopedAStatus::ok();
    }
};

#pragma clang diagnostic pop

int main(int, char**) {
    ABinderProcess_setThreadPoolMaxThreadCount(0);

    auto service = ndk::SharedRefBase::make<MiChargeService>();
    const std::string instance = std::string(IMiCharge::descriptor) + "/default";

    if (AServiceManager_addService(service->asBinder().get(), instance.c_str()) != STATUS_OK) {
        return 1;
    }

    ABinderProcess_joinThreadPool();
    return 0;
}
