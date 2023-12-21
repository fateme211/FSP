/** @file

  @copyright
  Copyright (C) 2023 Intel Corporation

  SPDX-License-Identifier: BSD-2-Clause-Patent

  This file is automatically generated. Please do NOT modify !!!

**/

#ifndef __FSPSUPD_H__
#define __FSPSUPD_H__

#include <FspUpd.h>

#pragma pack(1)


/** FSP-S Configuration
**/
typedef struct {

/** Offset 0x0020 - Processor TurboMode Function
  Processor TurboMode Function - <b>1: Enable(Default)</b>, 0: Disable Processor TurboMode Function.
  0: Disable, 1: Enable
**/
  UINT8                       TurboMode;

/** Offset 0x0021 - Processor Safer Mode Extensions Function
  Processor Safer Mode Extensions Function - <b>0: Disable(Default)</b>, 1: Enable
  Processor Safer Mode Extensions Function.
  0: Disable, 1: Enable
**/
  UINT8                       ProcessorSmxEnable;

/** Offset 0x0022 - SstCp
  SstCp - 1: Enable, <b>0: Disable SstCp(Default)</b>.
  0: Disable, 1: Enable
**/
  UINT8                       SstCpSetting;

/** Offset 0x0023 - SstCp Capable Status
  SST-CP Capable Status in system - <b>0: Disable(Default)</b>, 1: Enable.
  0: Disable, 1: Enable
**/
  UINT8                       SstCpCapableSystem;

/** Offset 0x0024 - PCH Protect Range Limit
  Left shifted address by 12 bits with address bits 11:0 are assumed to be FFFh for
  limit comparison.
**/
  UINT16                      PchProtectedRangeLimit[5];

/** Offset 0x002E - PCH Protect Range Base
  Left shifted address by 12 bits with address bits 11:0 are assumed to be 0.
**/
  UINT16                      PchProtectedRangeBase[5];

/** Offset 0x0038 - PchAdrEn
  PchAdr - <b>0: PLATFORM POR(Default)</b>, 1: FORCE ENABLE, 2:FORCE DISABLE.
  0: PLATFORM POR, 1: FORCE ENABLE, 2: FORCE DISABLE
**/
  UINT8                       PchAdrEn;

/** Offset 0x0039 - EnableTme
  EnableTme - <b>0: Disabled(Default)</b>, 1: Enabled, 2:Software Controlled.
  0: Disabled, 1: Enabled, 2:Software Controlled
**/
  UINT8                       EnableTme;

/** Offset 0x003A - EnableTmeBypass
  EnableTmeBypass - <b>0: Disabled(Default)</b>, 1: Enabled.
  0: Disabled, 1: Enabled
**/
  UINT8                       EnableTmeBypass;

/** Offset 0x003B - SgxFactoryReset
  SgxFactoryReset - <b>0: Disabled(Default)</b>, 1: Enabled.
  0: Disabled, 1: Enabled
**/
  UINT8                       SgxFactoryReset;

/** Offset 0x003C - EnableSgx
  EnableSgx - <b>0: Disabled(Default)</b>, 1: Enabled.
  0: Disabled, 1: Enabled
**/
  UINT8                       EnableSgx;

/** Offset 0x003D - SgxPackageInfoInBandAccess
  SgxPackageInfoInBandAccess - <b>0: Disabled(Default)</b>, 1: Enabled.
  0: Disabled, 1: Enabled
**/
  UINT8                       SgxPackageInfoInBandAccess;

/** Offset 0x003E - SgxQoS
  SgxQoS - 0: Disabled, <b>1: Enabled(Default)</b>.
  0: Disabled, 1: Enabled
**/
  UINT8                       SgxQoS;

/** Offset 0x003F - EpochUpdate
  EpochUpdate - 1: Change to New Random Owner EPOCHs, <b>2: Manual User Defined Owner
  EPOCHs(Default)</b>.
  1: Change to New Random Owner EPOCHs, 2: Manual User Defined Owner EPOCHs
**/
  UINT8                       EpochUpdate;

/** Offset 0x0040 - SgxLeWr
  SgxLeWr - <b>0: Disabled(Default)</b>, 1: Enabled.
  0: Disabled, 1: Enabled
**/
  UINT8                       SgxLeWr;

/** Offset 0x0041 - SgxDebugMode
  SgxDebugMode - <b>0: Disabled(Default)</b>, 1: Enabled.
  0: Disabled, 1: Enabled
**/
  UINT8                       SgxDebugMode;

/** Offset 0x0042 - SgxAutoRegistrationAgent
  SgxAutoRegistrationAgent - <b>0: Disabled(Default)</b>, 1: Enabled.
  0: Disabled, 1: Enabled
**/
  UINT8                       SgxAutoRegistrationAgent;

/** Offset 0x0043 - DfxSgxRegistrationServerSelect
  DfxSgxRegistrationServerSelect - <b>0: SBX(Default)</b>, 1: PRX, 2:AUTO, 3:LIV,
  4:SW Defined Server.
  0: SBX, 1: PRX, 2:AUTO, 3:LIV, 4:SW Defined Server
**/
  UINT8                       DfxSgxRegistrationServerSelect;

/** Offset 0x0044 - Processor Enable Monitor MWAIT
  Processor Enable Monitor MWAIT - <b>1: Enable(Default)</b>, 0: Disable Processor
  Monitor MWAIT.
  0: Disabled, 1: Enabled
**/
  UINT8                       CpuPmMonitorMWait;

/** Offset 0x0045 - Processor C6
  Processor C6 - <b>1: Enable(Default)</b>, 0: Disable Processor C6 (ACPI C3) report to OS.
  0: Disabled, 1: Enabled
**/
  UINT8                       CpuPmC6Enable;

/** Offset 0x0046 - Hardware P-States
  Hardware P-States - 0:  Disable: Hardware chooses a P-state based on OS Request
  (Legacy P-States), <b>1:Native Mode:Hardware chooses a P-state based on OS guidance(Default)</b>,
  2:Out of Band Mode:Hardware autonomously chooses a P-state (no OS guidance), 3:Native
  Mode with No Legacy Support.
  0: Disable, 1: Native Mode, 2: Out of Band Mode, 3: Native Mode with No Legacy Support
**/
  UINT8                       CpuPmProcessorHWPMEnable;

/** Offset 0x0047 - Power Performance Tuning
  Power Performance Tuning - <b>0: OS Controls EPB (Default)</b>, 1: BIOS Controls
  EPB, 2: PECI Controls EPB.
  0: OS Controls EPB, 1: BIOS Controls EPB, 2: PECI Controls EPB
**/
  UINT8                       CpuPmPwrPerfTuning;

/** Offset 0x0048 - Configure SST-BF
  Allow (Default)/Disallow BIOS to configure SST-BF High Priority Cores so that SW
  does not have to configure - 0:Disable, <b>1:Enable(Default)</b>.
  0:Disable, 1:Enable
**/
  UINT8                       CpuPmProcessorConfigurePbf;

/** Offset 0x0049 - CF9 Global Reset Promotion
  CF9 Global Reset Promotion - 1: Enable promoting CF9 reset to global, <b>0: Disable
  promoting CF9 reset to global(Default)</b>.
  0: Disabled, 1: Enabled
**/
  UINT8                       MeGrPromotionEnabled;

/** Offset 0x004A - Global Reset Lock
  Global Reset Lock - <b>1: Enable locking the joint ME and host reset capability(Default)</b>,
  0: Disable locking the joint ME and host reset capability.
  0: Disabled, 1: Enabled
**/
  UINT8                       MeGrLockEnabled;

/** Offset 0x004B - Delayed Authentication Mode
  Enable or disable Delayed Authentication Mode - <b>0: Disable(Default)</b>, 1: Enable.
  0:Disable, 1:Enable
**/
  UINT8                       DelayedAuthenticationMode;

/** Offset 0x004C - Delayed Authentication Mode Override
  Enable or disable Delayed Authentication Mode Override - <b>0: Disable(Default)</b>,
  1: Enable.
  0:Disable, 1:Enable
**/
  UINT8                       DelayedAuthenticationModeOverride;

/** Offset 0x004D - Core Bios Done Message
  Enable or disable Core Bios Done message sent to ME - 0: Disable, <b>1: Enable(Default)</b>.
  0:Disable, 1:Enable
**/
  UINT8                       CoreBiosDoneEnabled;

/** Offset 0x004E - End Of Post Message
  Enable or disable sending END_OF_POST message to ME - 0: Disable, 1: Send in PEI,
  <b>2: Send in DXE(Default)</b>.
  0:Disable, 1:Send in PEI, 2:Send in DXE
**/
  UINT8                       EndOfPostMessage;

/** Offset 0x004F - HMRFPO_LOCK Message
  Enable or disable sending HMRFPO_LOCK message to ME - 0: Disable, <b>1: Enable(Default)</b>.
  0:Disable, 1:Enable
**/
  UINT8                       MeHmrfpoLockEnabled;

/** Offset 0x0050 - HMRFPO_ENABLE Message
  Enable or disable sending HMRFPO_ENABLE message to ME - <b>0: Disable(Default)</b>,
  1: Enable.
  0:Disable, 1:Enable
**/
  UINT8                       MeHmrfpoEnableEnabled;

/** Offset 0x0051
**/
  UINT8                       UnusedUpdSpace0[3];

/** Offset 0x0054
**/
  UINT8                       ReservedSiliconInitUpd[16];
} FSPS_CONFIG;

/** Fsp S UPD Configuration
**/
typedef struct {

/** Offset 0x0000
**/
  FSP_UPD_HEADER              FspUpdHeader;

/** Offset 0x0020
**/
  FSPS_CONFIG                 FspsConfig;

/** Offset 0x0064
**/
  UINT8                       UnusedUpdSpace1[2];

/** Offset 0x0066
**/
  UINT16                      UpdTerminator;
} FSPS_UPD;

#pragma pack()

#endif
