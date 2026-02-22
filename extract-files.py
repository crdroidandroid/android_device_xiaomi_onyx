#!/usr/bin/env -S PYTHONPATH=../../../tools/extract-utils python3
#
# SPDX-FileCopyrightText: 2024 The LineageOS Project
# SPDX-License-Identifier: Apache-2.0
#

from extract_utils.fixups_blob import (
    blob_fixup,
    blob_fixups_user_type,
)
from extract_utils.fixups_lib import (
    lib_fixup_remove,
    lib_fixups,
    lib_fixups_user_type,
)
from extract_utils.main import (
    ExtractUtils,
    ExtractUtilsModule,
)

namespace_imports = [
    'hardware/qcom-caf/sm8750',
    'hardware/qcom-caf/wlan',
    'hardware/xiaomi',
    'vendor/qcom/opensource/commonsys/display',
    'vendor/qcom/opensource/commonsys-intf/display',
    'vendor/qcom/opensource/dataservices',
    'vendor/qcom/opensource/display',
    'device/xiaomi/onyx',
]


def lib_fixup_vendor_suffix(lib: str, partition: str, *args, **kwargs):
    return f'{lib}_{partition}' if partition == 'vendor' else None


lib_fixups: lib_fixups_user_type = {
    **lib_fixups,
    (
        'libagm',
        'libagmclient',
        'libagmmixer',
        'libar-acdb',
        'libar-gsl',
        'libats',
        'liblx-osal',
        'libvui_intf',
    ): lib_fixup_remove,
    (
        'vendor.qti.diaghal-V1-ndk',
        'vendor.qti.diaghal@1.0',
        'vendor.qti.hardware.wifidisplaysession_aidl-V1-ndk',
        'vendor.qti.ims.uceaidlservice-V1-ndk',
        'vendor.qti.ImsRtpService-V1-ndk',
        'vendor.qti.qccsyshal_aidl-V1-ndk',
        'vendor.qti.qccvndhal_aidl-V1-ndk',
    ): lib_fixup_vendor_suffix,
}


blob_fixups: blob_fixups_user_type = {
    'system_ext/etc/vintf/manifest/vendor.qti.qesdsys.service.xml': blob_fixup()
        .regex_replace(r'(?s)^.*?(?=<manifest)', ''),

    'system_ext/lib64/libwfdmmsrc_system.so': blob_fixup()
        .add_needed('libgui_shim.so'),

    'system_ext/lib64/libwfdnative.so': blob_fixup()
        .add_needed('libbinder_shim.so')
        .add_needed('libinput_shim.so')
        .remove_needed('android.hidl.base@1.0.so'),

    (
        'odm/etc/camera/enhance_motiontuning.xml',
        'odm/etc/camera/motiontuning.xml'
    ): blob_fixup()
        .regex_replace('xml=version', 'xml version'),

    (
        'odm/lib64/libAncHumanPreviewBokeh.so',
        'odm/lib64/libMiEmojiEffect.so',
        'odm/lib64/libMiVideoFilter.so',
        'odm/lib64/libTrueSight.so',
        'odm/lib64/libwa_widelens_undistort.so',
        'vendor/lib64/libMiPhotoFilter.so'
    ): blob_fixup()
        .clear_symbol_version('AHardwareBuffer_allocate')
        .clear_symbol_version('AHardwareBuffer_describe')
        .clear_symbol_version('AHardwareBuffer_isSupported')
        .clear_symbol_version('AHardwareBuffer_lock')
        .clear_symbol_version('AHardwareBuffer_lockPlanes')
        .clear_symbol_version('AHardwareBuffer_release')
        .clear_symbol_version('AHardwareBuffer_unlock'),

    (
        'odm/lib64/libaudioroute_ext.so',
        'vendor/lib64/libagm.so',
        'vendor/lib64/libar-pal.so',
        'vendor/lib64/libmcs.so',
        'vendor/lib64/libmikaraoke.so',
        'vendor/lib64/libtiantongpal.so'
    ): blob_fixup()
        .replace_needed(
            'libaudioroute.so',
            'libaudioroute-v34.so'
    ),

    (
        'odm/bin/hw/vendor.xiaomi.hw.touchfeature-service',
        'odm/lib64/libadaptivehdr.so',
        'odm/lib64/libcolortempmode.so',
        'odm/lib64/libdither.so',
        'odm/lib64/libflatmode.so',
        'odm/lib64/libhistprocess.so',
        'odm/lib64/libmiBrightness.so',
        'odm/lib64/libmiSensorCtrl.so',
        'odm/lib64/libpaperMode.so',
        'odm/lib64/librhytheyecare.so',
        'odm/lib64/libsdr2hdr.so',
        'odm/lib64/libsre.so',
        'odm/lib64/libtruetone.so',
        'odm/lib64/libvideomode.so',
        'vendor/lib64/hw/camera.qcom.so',
        'vendor/lib64/libgnss.so'
    ): blob_fixup()
        .replace_needed(
            'android.hardware.sensors-V2-ndk.so',
            'android.hardware.sensors-V3-ndk.so'
    ),

    (
        'odm/bin/hw/vendor.xiaomi.sensor.citsensorservice.aidl',
        'odm/lib64/camera/plugins/com.xiaomi.plugin.anchor.so',
        'odm/lib64/camera/plugins/com.xiaomi.plugin.offlineawbideal.so',
        'odm/lib64/camera/plugins/com.xiaomi.plugin.offlineb2y.so',
        'odm/lib64/camera/plugins/com.xiaomi.plugin.offlineformatconvertor.so',
        'odm/lib64/camera/plugins/com.xiaomi.plugin.offlinehdrraw2y.so',
        'odm/lib64/camera/plugins/com.xiaomi.plugin.offlineheic.so',
        'odm/lib64/camera/plugins/com.xiaomi.plugin.offlinei2y.so',
        'odm/lib64/camera/plugins/com.xiaomi.plugin.offlinejpeg.so',
        'odm/lib64/camera/plugins/com.xiaomi.plugin.offlinemfnr.so',
        'odm/lib64/camera/plugins/com.xiaomi.plugin.offlinemlawb.so',
        'odm/lib64/camera/plugins/com.xiaomi.plugin.offlinetintless.so',
        'odm/lib64/camera/plugins/com.xiaomi.plugin.offlinetintlesshdr.so',
        'odm/lib64/camera/plugins/com.xiaomi.plugin.offlineyuvreprocess.so',
        'odm/lib64/camera/plugins/com.xiaomi.plugin.offlineyuvsplit.so',
        'odm/lib64/libmiXmlParser.so',
        'vendor/bin/hw/vendor.qti.camera.provider-service_64',
        'vendor/bin/hw/vendor.qti.hardware.display.composer-service',
        'vendor/bin/poweropt-service',
        'vendor/lib64/hw/libaudioeffecthal.qti.so',
        'vendor/lib64/libaodoptfeature.so',
        'vendor/lib64/libapengine.so',
        'vendor/lib64/libaudiocloudctrl.so',
        'vendor/lib64/libcamxcoreutils.so',
        'vendor/lib64/libcamxods.so',
        'vendor/lib64/liblearningmodule.so',
        'vendor/lib64/libmicamera_aidl_provider.so',
        'vendor/lib64/libmicamera_hal_core.so',
        'vendor/lib64/libpowercore.so',
        'vendor/lib64/libpsmoptfeature.so',
        'vendor/lib64/libsdmclient.so',
        'vendor/lib64/libsimulation.so',
        'vendor/lib64/libstandbyfeature.so',
        'vendor/lib64/soundfx/libquasar.so'
    ): blob_fixup()
        .replace_needed(
            'libtinyxml2.so',
            'libtinyxml2-v34.so'
    ),

    (
        'odm/lib64/camera/plugins/com.xiaomi.plugin.gainmap.so',
        'odm/lib64/camera/plugins/com.xiaomi.plugin.jpegrAggr.so'
    ): blob_fixup()
        .replace_needed(
            'libultrahdr.so',
            'libultrahdr_prebuilt.so'
    ),

    'odm/lib64/hw/displayfeature.default.so': blob_fixup()
        .replace_needed(
            'android.hardware.sensors-V2-ndk.so',
            'android.hardware.sensors-V3-ndk.so'
        )
        .replace_needed(
            'libtinyxml2.so',
            'libtinyxml2-v34.so'
    ),

    'odm/bin/hw/vendor.xiaomi.sensor.citsensorservice.aidl': blob_fixup()
        .replace_needed(
            'android.hardware.graphics.common-V5-ndk.so',
            'android.hardware.graphics.common-V7-ndk.so'
        )
        .replace_needed(
            'android.hardware.sensors-V2-ndk.so',
            'android.hardware.sensors-V3-ndk.so'
        )
        .replace_needed(
            'libtinyxml2.so',
            'libtinyxml2-v34.so'
    ),

    'vendor/etc/sensors/hals.conf': blob_fixup()
        .regex_replace('.*vl53l8.*\n?', ''),

    (
        'vendor/lib64/camera/components/com.qti.node.dewarp.so',
        'vendor/lib64/hw/com.qti.chi.override.so',
        'vendor/lib64/libcamximageformatutils.so',
        'vendor/lib64/libchifeature2.so',
        'vendor/lib64/libqvrservice.so',
        'vendor/lib64/vendor.qti.hardware.camera.offlinecamera-service-impl.so'
    ): blob_fixup()
        .replace_needed(
            'android.hardware.graphics.allocator-V1-ndk.so',
            'android.hardware.graphics.allocator-V2-ndk.so'
    ),

    (
        'vendor/lib64/soundfx/liblvacfsprocessingaidl.so',
        'vendor/lib64/soundfx/libdlbvolaidl.so',
    ): blob_fixup()
        .replace_needed(
            'android.media.audio.common.types-V4-ndk.so',
            'android.media.audio.common.types-V3-ndk.so'
    )
        .replace_needed(
            'android.hardware.audio.effect-V2-ndk.so',
            'android.hardware.audio.effect-V3-ndk.so'
    ),

    (
        'vendor/lib64/soundfx/libbundleaidl.so',
        'vendor/lib64/libaudioserviceexampleimpl.so',
    ): blob_fixup()
        .replace_needed(
            'libaudio_aidl_conversion_common_ndk.so',
            'libaudio_aidl_conversion_common_ndk_prebuilt.so'
    ),

    'vendor/lib64/libaudioserviceexampleimpl.so': blob_fixup()
        .add_needed('libaudioutils_shim.so')
        .replace_needed(
            'android.hardware.bluetooth.audio-impl.so',
            'android.hardware.bluetooth.audio-impl_prebuilt.so'
        )
        .replace_needed(
            'libbluetooth_audio_session_aidl.so',
            'libbluetooth_audio_session_aidl_prebuilt.so'
        )
        .replace_needed(
            'libaudio_aidl_conversion_common_ndk.so',
            'libaudio_aidl_conversion_common_ndk_prebuilt.so'
    ),

    'vendor/lib64/android.hardware.bluetooth.audio-impl_prebuilt.so': blob_fixup()
        .replace_needed(
            'libbluetooth_audio_session_aidl.so',
            'libbluetooth_audio_session_aidl_prebuilt.so'
    ),

    (
        'vendor/lib64/libVoiceSdk.so',
        'vendor/lib64/libcapiv2uvvendor.so',
        'vendor/lib64/liblistensoundmodel2vendor.so'
    ): blob_fixup()
        .replace_needed(
            'libtensorflowlite_c.so',
            'libtensorflowlite_c_vendor.so'
    ),

    'vendor/lib64/libultrahdr_prebuilt.so': blob_fixup()
        .replace_needed(
            'libjpegdecoder.so',
            'libjpegdecoder_prebuilt.so'
        )
        .replace_needed(
            'libjpegencoder.so',
            'libjpegencoder_prebuilt.so'
    ),

    'vendor/lib64/libcameraopt.so': blob_fixup()
        .add_needed('libprocessgroup_shim.so'),

    'vendor/lib64/libqcodec2_core.so': blob_fixup()
        .add_needed('libcodec2_shim.so')
        .replace_needed(
            'android.hardware.graphics.common-V5-ndk.so',
            'android.hardware.graphics.common-V7-ndk.so'
    ),

    'vendor/lib64/libwfdmmsrc_proprietary.so': blob_fixup()
        .replace_needed(
            'android.media.audio.common.types-V2-ndk.so',
            'android.media.audio.common.types-V3-ndk.so'
    ),

    'vendor/lib64/vendor.libdpmframework.so': blob_fixup()
        .add_needed('libhidlbase_shim.so'),
}  # fmt: skip

module = ExtractUtilsModule(
    'onyx',
    'xiaomi',
    blob_fixups=blob_fixups,
    lib_fixups=lib_fixups,
    namespace_imports=namespace_imports,
    add_firmware_proprietary_file=True,
)

if __name__ == '__main__':
    utils = ExtractUtils.device(module)
    utils.run()
