#
# SPDX-FileCopyrightText: The LineageOS Project
# SPDX-License-Identifier: Apache-2.0
#

# Inherit from those products. Most specific first.
$(call inherit-product, $(SRC_TARGET_DIR)/product/core_64_bit_only.mk)
$(call inherit-product, $(SRC_TARGET_DIR)/product/full_base_telephony.mk)

# Inherit some common LINEAGEOS stuff.
$(call inherit-product, vendor/lineage/config/common_full_phone.mk)
TARGET_SCREEN_WIDTH := 1080

# Inherit from onyx device
$(call inherit-product, device/xiaomi/onyx/device.mk)

PRODUCT_NAME := lineage_onyx
PRODUCT_DEVICE := onyx
PRODUCT_MANUFACTURER := Xiaomi
PRODUCT_BRAND := POCO
PRODUCT_MODEL := 25053PC47G

PRODUCT_SYSTEM_NAME := onyx_global
PRODUCT_SYSTEM_DEVICE := onyx

# Flags
EXTRA_UDFPS_ANIMATIONS := true
TARGET_HAS_UDFPS := true

PRODUCT_BUILD_PROP_OVERRIDES += \
    BuildDesc="onyx_global-user 16 BP2A.250605.031.A3 16OS3.1.260526.154531468.QCPEGL.S release-keys" \
    BuildFingerprint=POCO/onyx_global/onyx:16/16OS3.1.260526.154531468.QCPEGL.S:user/release-keys \
    DeviceName=$(PRODUCT_SYSTEM_DEVICE) \
    DeviceProduct=$(PRODUCT_SYSTEM_NAME)

PRODUCT_GMS_CLIENTID_BASE := android-xiaomi
