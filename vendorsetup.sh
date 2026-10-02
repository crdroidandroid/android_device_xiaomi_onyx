#!/bin/bash

# Xiaomi Hardware
git clone -b 17.0 https://github.com/crdroidandroid/android_hardware_xiaomi_peridot.git hardware/xiaomi

# Xiaomi SM8735 Kernel
git clone -b 17.0 https://github.com/crdroidandroid/android_kernel_xiaomi_sm8735.git kernel/xiaomi/sm8735

# Xiaomi SM8735 Device Trees
git clone -b 17.0 https://github.com/crdroidandroid/android_kernel_xiaomi_sm8735-devicetrees.git kernel/xiaomi/sm8735-devicetrees

# Xiaomi SM8735 Kernel Modules
git clone -b 17.0 https://github.com/crdroidandroid/android_kernel_xiaomi_sm8735-modules.git kernel/xiaomi/sm8735-modules

# Onyx Vendor
git clone -b 17.0 https://gitlab.com/crdroidandroid/proprietary_vendor_xiaomi_onyx.git vendor/xiaomi/onyx

# MIUICamera Vendor
git clone -b 16.0-onyx https://gitlab.com/crdroidandroid/proprietary_vendor_xiaomi_miuicamera.git vendor/xiaomi/onyx-miuicamera

# MIUICamera Device Tree
git clone -b 17.0-onyx https://gitlab.com/crdroidandroid/android_device_xiaomi_miuicamera.git device/xiaomi/onyx-miuicamera
