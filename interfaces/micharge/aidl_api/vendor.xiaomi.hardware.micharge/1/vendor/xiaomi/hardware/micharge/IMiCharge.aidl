//
// SPDX-FileCopyrightText: The LineageOS Project
// SPDX-License-Identifier: Apache-2.0
//
///////////////////////////////////////////////////////////////////////////////
// THIS FILE IS IMMUTABLE. DO NOT EDIT IN ANY CASE.                          //
///////////////////////////////////////////////////////////////////////////////

// This file is a snapshot of an AIDL file. Do not edit it manually. There are
// two cases:
// 1). this is a frozen version file - do not edit this in any case.
// 2). this is a 'current' file. If you make a backwards compatible change to
//     the interface (from the latest frozen version), the build system will
//     prompt you to update this file with `m <name>-update-api`.
//
// You must not make a backward incompatible change to any AIDL file built
// with the aidl_interface module type with versions property set. The module
// type is used to build AIDL files in a way that they can be used across
// independently updatable components of the system. If a device is shipped
// with such a backward incompatible change, it has a high risk of breaking
// later when a module using the interface is updated, e.g., Mainline modules.

package vendor.xiaomi.hardware.micharge;
@VintfStability
interface IMiCharge {
  String getBatteryAuthentic();
  String getBatteryCapacity();
  String getBatteryChargeFull();
  String getBatteryChargeType();
  String getBatteryCycleCount();
  String getBatteryIbat();
  String getBatteryResistance();
  String getBatterySoh();
  String getBatteryTbat();
  String getBatteryThermaLevel();
  String getBatteryVbat();
  String getBtTransferStartState();
  String getCarChargingType();
  String getChargingPowerMax();
  String getCoolModeState();
  String getFastChargeModeStatus();
  String getInputSuspendState();
  String getMiChargePath(String path);
  String getNightChargingState();
  String getPSValue();
  String getPdApdoMax();
  String getPdAuthentication();
  String getQuickChargeType();
  String getSBState();
  String getSocDecimal();
  String getSocDecimalRate();
  String getTxAdapt();
  String getUsbCurrent();
  String getUsbVoltage();
  String getWirelessChargingStatus();
  String getWirelessFwStatus();
  String getWirelessReverseStatus();
  boolean isBatteryLifeFunctionSupported();
  boolean isDPConnected();
  boolean isFunctionSupported(String function);
  boolean isUSB32();
  boolean isWirelessChargingSupported();
  boolean isWiressFwUpdateSupported();
  int setBtState(String value);
  int setBtTransferStartState(String value);
  int setCoolModeState(String value);
  int setInputSuspendState(String value);
  int setMiChargePath(String path, String value);
  int setNightChargingState(String value);
  int setRxCr(String value);
  int setSBState(String value);
  int setSmCountReset(String value);
  int setUpdateWirelessFw(String value);
  int setWirelessChargingEnabled(boolean enabled);
  int setWlsTxSpeed(String value);
}