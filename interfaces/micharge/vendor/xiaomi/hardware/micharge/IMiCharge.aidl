//
// SPDX-FileCopyrightText: The LineageOS Project
// SPDX-License-Identifier: Apache-2.0
//

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
    String getTypeCCommonInfo(String key);
    int setTypeCCommonInfo(String key, String value);
    String getChargeCommonInfo(String key);
    int setChargeCommonInfo(String key, String value);
    String getBatteryCommonInfo(String key);
    int setBatteryCommonInfo(String key, String value);
}
