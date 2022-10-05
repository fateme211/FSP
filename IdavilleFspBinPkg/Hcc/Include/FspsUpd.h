/** @file

Copyright (c) 2022, Intel Corporation. All rights reserved.<BR>

Redistribution and use in source and binary forms, with or without modification,
are permitted provided that the following conditions are met:

* Redistributions of source code must retain the above copyright notice, this
  list of conditions and the following disclaimer.
* Redistributions in binary form must reproduce the above copyright notice, this
  list of conditions and the following disclaimer in the documentation and/or
  other materials provided with the distribution.
* Neither the name of Intel Corporation nor the names of its contributors may
  be used to endorse or promote products derived from this software without
  specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
  THE POSSIBILITY OF SUCH DAMAGE.

  This file is automatically generated. Please do NOT modify !!!

**/

#ifndef __FSPSUPD_H__
#define __FSPSUPD_H__

#include <FspUpd.h>

#pragma pack(1)


/** FSP-S Configuration
**/
typedef struct {

/** Offset 0x0020
**/
  UINT32                      PcdCpuMicrocodePatchBase;

/** Offset 0x0024
**/
  UINT32                      PcdCpuMicrocodePatchSize;

/** Offset 0x0028 - SATA Controllers
  Enable/disable SATA Controller .Byte 0,1,2 is for SATA controller 0,1,2 respectively.
  Byte4 is unused
**/
  UINT32                      PcdEnableSATA;

/** Offset 0x002C - SATA Mode
  0:AHCI, 1:RAID.  Byte 0,1,2 is for SATA controller 0,1,2 respectively. Byte4 is
  unused as only 3 SATA controllers present
**/
  UINT32                      PcdSATAmode;

/** Offset 0x0030 - SATA Interrupt Mode
  0:Msix, 1:Msi, 2:Legacy .  Byte 0,1,2 is for SATA controller 0,1,2 respectively.
  Byte4 is unused as only 3 SATA controllers present
**/
  UINT32                      PcdSATAInterruptMode;

/** Offset 0x0034 - SATA port Enable for Controller 0
  0:Disabled , 1: Enabled .  Each one of 8 ports are represented by a nibble . for
  example : nibble 0 controls port 0 , nibble 1 controls port 1
**/
  UINT32                      PcdSATA0PortEnable;

/** Offset 0x0038 - SATA port HotPlug capability for Controller 0
  0:Disabled , 1: Enabled .  Each one of 8 ports are represented by a nibble . for
  example : nibble 0 controls port 0 , nibble 1 controls port 1
**/
  UINT32                      PcdSATA0PortHotplug;

/** Offset 0x003C - SATA port Enable for Controller 1
  0:Disabled , 1: Enabled .  Each one of 8 ports are represented by a nibble . for
  example : nibble 0 controls port 0 , nibble 1 controls port 1
**/
  UINT32                      PcdSATA1PortEnable;

/** Offset 0x0040 - SATA port HotPlug capability for Controller 1
  0:Disabled , 1: Enabled .  Each one of 8 ports are represented by a nibble . for
  example : nibble 0 controls port 0 , nibble 1 controls port 1
**/
  UINT32                      PcdSATA1PortHotplug;

/** Offset 0x0044 - SATA port Enable for Controller 2
  0:Disabled , 1: Enabled .  Each one of 8 ports are represented by a nibble . for
  example : nibble 0 controls port 0 , nibble 1 controls port 1
**/
  UINT32                      PcdSATA2PortEnable;

/** Offset 0x0048 - SATA port HotPlug capability for Controller 2
  0:Disabled , 1: Enabled .  Each one of 8 ports are represented by a nibble . for
  example : nibble 0 controls port 0 , nibble 1 controls port 1
**/
  UINT32                      PcdSATA2PortHotplug;

/** Offset 0x004C - EMMC controller
  Enable/Disable EMMC controller.
  $EN_DIS
**/
  UINT8                       PcdEmmc;

/** Offset 0x004D - EMMC HS400 Support
  Enable/Disable EMMC HS400 Support.
  $EN_DIS
**/
  UINT8                       PcdEmmcHS400Support;

/** Offset 0x004E - PCH PCIe Root Port 0 Link Speed
  Desired Link Speed level for PCIe Root Port 0
  1:GEN1, 2:GEN2, 3:GEN3
**/
  UINT8                       PcdPcieRootPort0LinkSpeed;

/** Offset 0x004F - PCH PCIe Root Port 1 Link Speed
  Desired Link Speed level for PCIe Root Port 1
  1:GEN1, 2:GEN2, 3:GEN3
**/
  UINT8                       PcdPcieRootPort1LinkSpeed;

/** Offset 0x0050 - PCH PCIe Root Port 2 Link Speed
  Desired Link Speed level for PCIe Root Port 0
  1:GEN1, 2:GEN2, 3:GEN3
**/
  UINT8                       PcdPcieRootPort2LinkSpeed;

/** Offset 0x0051 - PCH PCIe Root Port 3 Link Speed
  Desired Link Speed level for PCIe Root Port 3
  1:GEN1, 2:GEN2, 3:GEN3
**/
  UINT8                       PcdPcieRootPort3LinkSpeed;

/** Offset 0x0052 - PCH PCIe Root Port 4 Link Speed
  Desired Link Speed level for PCIe Root Port 8
  1:GEN1, 2:GEN2, 3:GEN3
**/
  UINT8                       PcdPcieRootPort4LinkSpeed;

/** Offset 0x0053 - PCH PCIe Root Port 5 Link Speed
  Desired Link Speed level for PCIe Root Port 8
  1:GEN1, 2:GEN2, 3:GEN3
**/
  UINT8                       PcdPcieRootPort5LinkSpeed;

/** Offset 0x0054 - PCH PCIe Root Port 6 Link Speed
  Desired Link Speed level for PCIe Root Port 8
  1:GEN1, 2:GEN2, 3:GEN3
**/
  UINT8                       PcdPcieRootPort6LinkSpeed;

/** Offset 0x0055 - PCH PCIe Root Port 7 Link Speed
  Desired Link Speed level for PCIe Root Port 8
  1:GEN1, 2:GEN2, 3:GEN3
**/
  UINT8                       PcdPcieRootPort7LinkSpeed;

/** Offset 0x0056 - PCH PCIe Root Port 8 Link Speed
  Desired Link Speed level for PCIe Root Port 8
  1:GEN1, 2:GEN2, 3:GEN3
**/
  UINT8                       PcdPcieRootPort8LinkSpeed;

/** Offset 0x0057 - PCH PCIe Root Port 9 Link Speed
  Desired Link Speed level for PCIe Root Port 9
  1:GEN1, 2:GEN2, 3:GEN3
**/
  UINT8                       PcdPcieRootPort9LinkSpeed;

/** Offset 0x0058 - PCH PCIe Root Port 10 Link Speed
  Desired Link Speed level for PCIe Root Port 10
  1:GEN1, 2:GEN2, 3:GEN3
**/
  UINT8                       PcdPcieRootPort10LinkSpeed;

/** Offset 0x0059 - PCH PCIe Root Port 11 Link Speed
  Desired Link Speed level for PCIe Root Port 11
  1:GEN1, 2:GEN2, 3:GEN3
**/
  UINT8                       PcdPcieRootPort11LinkSpeed;

/** Offset 0x005A - PCH PCIe Root Port 0 Aspm
  Desired Active state power management settings for PCIe Root Port 0
  0:Disabled, 1:L0, 2:L1, 3:L0SL1
**/
  UINT8                       PcdPcieRootPort0Aspm;

/** Offset 0x005B - PCH PCIe Root Port 1 Aspm
  Desired Active state power management settings for PCIe Root Port 1
  0:Disabled, 1:L0, 2:L1, 3:L0SL1
**/
  UINT8                       PcdPcieRootPort1Aspm;

/** Offset 0x005C - PCH PCIe Root Port 2 Aspm
  Desired Active state power management settings for PCIe Root Port 2
  0:Disabled, 1:L0, 2:L1, 3:L0SL1
**/
  UINT8                       PcdPcieRootPort2Aspm;

/** Offset 0x005D - PCH PCIe Root Port 3 Aspm
  Desired Active state power management settings for PCIe Root Port 3
  0:Disabled, 1:L0, 2:L1, 3:L0SL1
**/
  UINT8                       PcdPcieRootPort3Aspm;

/** Offset 0x005E - PCH PCIe Root Port 4 Aspm
  Desired Active state power management settings for PCIe Root Port 4
  0:Disabled, 1:L0, 2:L1, 3:L0SL1
**/
  UINT8                       PcdPcieRootPort4Aspm;

/** Offset 0x005F - PCH PCIe Root Port 5 Aspm
  Desired Active state power management settings for PCIe Root Port 5
  0:Disabled, 1:L0, 2:L1, 3:L0SL1
**/
  UINT8                       PcdPcieRootPort5Aspm;

/** Offset 0x0060 - PCH PCIe Root Port 6 Aspm
  Desired Active state power management settings for PCIe Root Port 6
  0:Disabled, 1:L0, 2:L1, 3:L0SL1
**/
  UINT8                       PcdPcieRootPort6Aspm;

/** Offset 0x0061 - PCH PCIe Root Port 7 Aspm
  Desired Active state power management settings for PCIe Root Port 7
  0:Disabled, 1:L0, 2:L1, 3:L0SL1
**/
  UINT8                       PcdPcieRootPort7Aspm;

/** Offset 0x0062 - PCH PCIe Root Port 8 Aspm
  Desired Active state power management settings for PCIe Root Port 8
  0:Disabled, 1:L0, 2:L1, 3:L0SL1
**/
  UINT8                       PcdPcieRootPort8Aspm;

/** Offset 0x0063 - PCH PCIe Root Port 9 Aspm
  Desired Active state power management settings for PCIe Root Port 9
  0:Disabled, 1:L0, 2:L1, 3:L0SL1
**/
  UINT8                       PcdPcieRootPort9Aspm;

/** Offset 0x0064 - PCH PCIe Root Port 10 Aspm
  Desired Active state power management settings for PCIe Root Port 10
  0:Disabled, 1:L0, 2:L1, 3:L0SL1
**/
  UINT8                       PcdPcieRootPort10Aspm;

/** Offset 0x0065 - PCH PCIe Root Port 11 Aspm
  Desired Active state power management settings for PCIe Root Port 11
  0:Disabled, 1:L0, 2:L1, 3:L0SL1
**/
  UINT8                       PcdPcieRootPort11Aspm;

/** Offset 0x0066 - PCH PCIe Root Port 0 Connection Type
  Set Connection Type for PCIe Root Port 0. PCIe Root Port 0 Hotplug enable forces
  connection type to Slot.
  0:Built-In, 1:Slot
**/
  UINT8                       PcdPcieRootPort0ConnectionType;

/** Offset 0x0067 - PCH PCIe Root Port 1 Connection Type
  Set Connection Type for PCIe Root Port 1. PCIe Root Port 1 Hotplug enable forces
  connection type to Slot.
  0:Built-In, 1:Slot
**/
  UINT8                       PcdPcieRootPort1ConnectionType;

/** Offset 0x0068 - PCH PCIe Root Port 2 Connection Type
  Set Connection Type for PCIe Root Port 2. PCIe Root Port 2 Hotplug enable forces
  connection type to Slot.
  0:Built-In, 1:Slot
**/
  UINT8                       PcdPcieRootPort2ConnectionType;

/** Offset 0x0069 - PCH PCIe Root Port 3 Connection Type
  Set Connection Type for PCIe Root Port 3. PCIe Root Port 3 Hotplug enable forces
  connection type to Slot.
  0:Built-In, 1:Slot
**/
  UINT8                       PcdPcieRootPort3ConnectionType;

/** Offset 0x006A - PCH PCIe Root Port 8 Connection Type
  Set Connection Type for PCIe Root Port 8. PCIe Root Port 8 Hotplug enable forces
  connection type to Slot.
  0:Built-In, 1:Slot
**/
  UINT8                       PcdPcieRootPort8ConnectionType;

/** Offset 0x006B - PCH PCIe Root Port 9 Connection Type
  Set Connection Type for PCIe Root Port 9. PCIe Root Port 9 Hotplug enable forces
  connection type to Slot.
  0:Built-In, 1:Slot
**/
  UINT8                       PcdPcieRootPort9ConnectionType;

/** Offset 0x006C - PCH PCIe Root Port 10 Connection Type
  Set Connection Type for PCIe Root Port 10. PCIe Root Port 10 Hotplug enable forces
  connection type to Slot.
  0:Built-In, 1:Slot
**/
  UINT8                       PcdPcieRootPort10ConnectionType;

/** Offset 0x006D - PCH PCIe Root Port 11 Connection Type
  Set Connection Type for PCIe Root Port 11. PCIe Root Port 11 Hotplug enable forces
  connection type to Slot.
  0:Built-In, 1:Slot
**/
  UINT8                       PcdPcieRootPort11ConnectionType;

/** Offset 0x006E - PCH PCIe Root Port 0 HotPlug
  Enable/Disable HotPlug for PCIe Root Port 0
  $EN_DIS
**/
  UINT8                       PcdPcieRootPort0HotPlug;

/** Offset 0x006F - PCH PCIe Root Port 1 HotPlug
  Enable/Disable HotPlug for PCIe Root Port 1
  $EN_DIS
**/
  UINT8                       PcdPcieRootPort1HotPlug;

/** Offset 0x0070 - PCH PCIe Root Port 2 HotPlug
  Enable/Disable HotPlug for PCIe Root Port 2
  $EN_DIS
**/
  UINT8                       PcdPcieRootPort2HotPlug;

/** Offset 0x0071 - PCH PCIe Root Port 3 HotPlug
  Enable/Disable HotPlug for PCIe Root Port 3
  $EN_DIS
**/
  UINT8                       PcdPcieRootPort3HotPlug;

/** Offset 0x0072 - PCH PCIe Root Port 8 HotPlug
  Enable/Disable HotPlug for PCIe Root Port 8
  $EN_DIS
**/
  UINT8                       PcdPcieRootPort8HotPlug;

/** Offset 0x0073 - PCH PCIe Root Port 9 HotPlug
  Enable/Disable HotPlug for PCIe Root Port 9
  $EN_DIS
**/
  UINT8                       PcdPcieRootPort9HotPlug;

/** Offset 0x0074 - PCH PCIe Root Port 10 HotPlug
  Enable/Disable HotPlug for PCIe Root Port 10
  $EN_DIS
**/
  UINT8                       PcdPcieRootPort10HotPlug;

/** Offset 0x0075 - PCH PCIe Root Port 11 HotPlug
  Enable/Disable HotPlug for PCIe Root Port 11
  $EN_DIS
**/
  UINT8                       PcdPcieRootPort11HotPlug;

/** Offset 0x0076 - PCH PCIe Root Port 4 Connection Type
  Set Connection Type for PCIe Root Port 4. PCIe Root Port 4 Hotplug enable forces
  connection type to Slot.
  0:Built-In, 1:Slot
**/
  UINT8                       PcdPcieRootPort4ConnectionType;

/** Offset 0x0077 - PCH PCIe Root Port 5 Connection Type
  Set Connection Type for PCIe Root Port 5. PCIe Root Port 5 Hotplug enable forces
  connection type to Slot.
  0:Built-In, 1:Slot
**/
  UINT8                       PcdPcieRootPort5ConnectionType;

/** Offset 0x0078 - PCH PCIe Root Port 6 Connection Type
  Set Connection Type for PCIe Root Port 6. PCIe Root Port 6 Hotplug enable forces
  connection type to Slot.
  0:Built-In, 1:Slot
**/
  UINT8                       PcdPcieRootPort6ConnectionType;

/** Offset 0x0079 - PCH PCIe Root Port 7 Connection Type
  Set Connection Type for PCIe Root Port 7. PCIe Root Port 7 Hotplug enable forces
  connection type to Slot.
  0:Built-In, 1:Slot
**/
  UINT8                       PcdPcieRootPort7ConnectionType;

/** Offset 0x007A - PCH PCIe Root Port 4 HotPlug
  Enable/Disable HotPlug for PCIe Root Port 4
  $EN_DIS
**/
  UINT8                       PcdPcieRootPort4HotPlug;

/** Offset 0x007B - PCH PCIe Root Port 5 HotPlug
  Enable/Disable HotPlug for PCIe Root Port 5
  $EN_DIS
**/
  UINT8                       PcdPcieRootPort5HotPlug;

/** Offset 0x007C - PCH PCIe Root Port 6 HotPlug
  Enable/Disable HotPlug for PCIe Root Port 6
  $EN_DIS
**/
  UINT8                       PcdPcieRootPort6HotPlug;

/** Offset 0x007D - PCH PCIe Root Port 7 HotPlug
  Enable/Disable HotPlug for PCIe Root Port 7
  $EN_DIS
**/
  UINT8                       PcdPcieRootPort7HotPlug;

/** Offset 0x007E - Bios WPD
  Enable / Disable LockDown Bios WPD
  $EN_DIS
**/
  UINT8                       PcdLockDownBiosWpd;

/** Offset 0x007F - Bios Interface
  Enable / Disable LockDown Bios Interface
  $EN_DIS
**/
  UINT8                       PcdLockDownBiosInterface;

/** Offset 0x0080 - Global Smi
  Enable / Disable LockDown Global Smi
  $EN_DIS
**/
  UINT8                       PcdLockDownGlobalSmi;

/** Offset 0x0081 - Bios Lock
  Enable / Disable LockDown Bios Lock
  $EN_DIS
**/
  UINT8                       PcdLockDownBiosLock;

/** Offset 0x0082 - SbAccessUnlock
  Enable / Disable P2sbConfig SbAccessUnlock
  $EN_DIS
**/
  UINT8                       PcdSbAccessUnlock;

/** Offset 0x0083 - PCH PCIe Root Port VppOverride
  Each one of 12 PCH Port VppOverrides are represented by a nibble.For example, nibble
  0 controls PciePort 0, nibble 1 controls PciePort 1.A nibble takes value 0(Disable)~1(Enable).
  The last 4 nibbles are unused. Nibble default value: 0x0
**/
  UINT64                      PcdPcieRootPortVppOverride;

/** Offset 0x008B - PCH PCIe Root Port VppPort
  Each one of 12 PCH VppPorts are represented by a nibble.For example, nibble 0 controls
  VppPort 0, nibble 1 controls VppPort 1.A nibble takes value 0~1. The last 4 nibbles
  are unused. Nibble default value: 0x0
**/
  UINT64                      PcdPcieRootPortVppPort;

/** Offset 0x0093 - PCH PCIe Root Port VppAddress
  Each one of 12 PCH VppAddresses are represented by a nibble.For example, nibble
  0 controls VppAddress 0, nibble 1 controls VppAddress 1.A nibble takes value 0~7.
  The last 4 nibbles are unused. Nibble default value: 0x7
**/
  UINT64                      PcdPcieRootPortVppAddress;

/** Offset 0x009B - PCH PCIe Root Port PTM Enable
  Each one of 12 PCIe Port PTM Enable are represented by a nibble.For example, nibble
  0 controls PciePort 0, nibble 1 controls PciePort 1.A nibble takes value 0~1. The
  last 4 nibbles are unused. Nibble default value: 0x1
**/
  UINT64                      PcdPcieRootPortPtmEnable;

/** Offset 0x00A3 - PCH Flash Protection Ranges Write Enable
  Write or erase is blocked by hardware. Each byte represents a WriteProtectionEnable
  for respective Ranges. Total Protected ranges = 5
**/
  UINT8                       PcdWriteProtectionEnable[5];

/** Offset 0x00A8 - PCH Flash Protection Ranges Read Enable
  Read is blocked by hardware. Each byte represents a ReadProtectionEnable for respective
  Ranges. Total Protected ranges = 5
**/
  UINT8                       PcdReadProtectionEnable[5];

/** Offset 0x00AD - PCH Protect Range Limit
  Left shifted address by 12 bits with address bits 11:0 are assumed to be FFFh for
  limit comparison.Each two bytes represents a ProtectedRangeLimit for respective
  Ranges. Total Protected ranges = 5
**/
  UINT16                      PcdProtectedRangeLimit[5];

/** Offset 0x00B7 - PCH Protect Range Base
  Left shifted address by 12 bits with address bits 11:0 are assumed to be 0.Each
  two bytes represents a ProtectedRangeBase for respective Ranges. Total Protected
  ranges = 5
**/
  UINT16                      PcdProtectedRangeBase[5];

/** Offset 0x00C1 - Address of PCH_DEVICE_INTERRUPT_CONFIG table.
  The address of the table of PCH_DEVICE_INTERRUPT_CONFIG.
**/
  UINT32                      PcdDevIntConfigPtr;

/** Offset 0x00C5 - Number of DevIntConfig Entry
  Number of Device Interrupt Configuration Entry. If this is not zero, the DevIntConfigPtr
  must not be NULL.
**/
  UINT8                       PcdNumOfDevIntConfig;

/** Offset 0x00C6 - Interrupt config PxRcConfig
  PxRcConfig can be confiured here. First byte is for PIRQA, second byte is for PIRQB,
  and so on.
**/
  UINT64                      PcdIntConfigPxRcConfig;

/** Offset 0x00CE - Interrupt config GpioIrqRoute
  GpioIrqRoute can be confiured here. Valid value should be set
**/
  UINT8                       PcdIntConfigGpioIrqRoute;

/** Offset 0x00CF - Interrupt config SciIrqSelect
  SciIrqSelect can be confiured here. Valid value should be set
**/
  UINT8                       PcdIntConfigSciIrqSelect;

/** Offset 0x00D0 - PCH PCIe Root Port 0 L1 SubState
  L1 Substates settings for PCIe Root Port 0
  0:Disabled, 1:L1.1, 2:L1.2, 3:L1.1 & L1.2
**/
  UINT8                       PcdPcieRootPort0L1SubStates;

/** Offset 0x00D1 - PCH PCIe Root Port 1 L1 SubState
  L1 Substates settings for PCIe Root Port 1
  0:Disabled, 1:L1.1, 2:L1.2, 3:L1.1 & L1.2
**/
  UINT8                       PcdPcieRootPort1L1SubStates;

/** Offset 0x00D2 - PCH PCIe Root Port 2 L1 SubState
  L1 Substates settings for PCIe Root Port 2
  0:Disabled, 1:L1.1, 2:L1.2, 3:L1.1 & L1.2
**/
  UINT8                       PcdPcieRootPort2L1SubStates;

/** Offset 0x00D3 - PCH PCIe Root Port 3 L1 SubState
  L1 Substates settings for PCIe Root Port 3
  0:Disabled, 1:L1.1, 2:L1.2, 3:L1.1 & L1.2
**/
  UINT8                       PcdPcieRootPort3L1SubStates;

/** Offset 0x00D4 - PCH PCIe Root Port 4 L1 SubState
  L1 Substates settings for PCIe Root Port 4
  0:Disabled, 1:L1.1, 2:L1.2, 3:L1.1 & L1.2
**/
  UINT8                       PcdPcieRootPort4L1SubStates;

/** Offset 0x00D5 - PCH PCIe Root Port 5 L1 SubState
  L1 Substates settings for PCIe Root Port 5
  0:Disabled, 1:L1.1, 2:L1.2, 3:L1.1 & L1.2
**/
  UINT8                       PcdPcieRootPort5L1SubStates;

/** Offset 0x00D6 - PCH PCIe Root Port 6 L1 SubState
  L1 Substates settings for PCIe Root Port 6
  0:Disabled, 1:L1.1, 2:L1.2, 3:L1.1 & L1.2
**/
  UINT8                       PcdPcieRootPort6L1SubStates;

/** Offset 0x00D7 - PCH PCIe Root Port 7 L1 SubState
  L1 Substates settings for PCIe Root Port 7
  0:Disabled, 1:L1.1, 2:L1.2, 3:L1.1 & L1.2
**/
  UINT8                       PcdPcieRootPort7L1SubStates;

/** Offset 0x00D8 - PCH PCIe Root Port 8 L1 SubState
  L1 Substates settings for PCIe Root Port 8
  0:Disabled, 1:L1.1, 2:L1.2, 3:L1.1 & L1.2
**/
  UINT8                       PcdPcieRootPort8L1SubStates;

/** Offset 0x00D9 - PCH PCIe Root Port 9 L1 SubState
  L1 Substates settings for PCIe Root Port 9
  0:Disabled, 1:L1.1, 2:L1.2, 3:L1.1 & L1.2
**/
  UINT8                       PcdPcieRootPort9L1SubStates;

/** Offset 0x00DA - PCH PCIe Root Port 10 L1 SubState
  L1 Substates settings for PCIe Root Port 10
  0:Disabled, 1:L1.1, 2:L1.2, 3:L1.1 & L1.2
**/
  UINT8                       PcdPcieRootPort10L1SubStates;

/** Offset 0x00DB - PCH PCIe Root Port 11 L1 SubState
  L1 Substates settings for PCIe Root Port 11
  0:Disabled, 1:L1.1, 2:L1.2, 3:L1.1 & L1.2
**/
  UINT8                       PcdPcieRootPort11L1SubStates;

/** Offset 0x00DC - Tcc Cache Config File Base Address
  Tcc (Time Coordinated Computing) Cache Config File Base Address
**/
  UINT32                      PcdTccCacheCfgBase;

/** Offset 0x00E0 - Tcc Cache Config File Size
  Tcc (Time Coordinated Computing) Cache Config File Size
**/
  UINT32                      PcdTccCacheCfgSize;

/** Offset 0x00E4 - Tcc Stream Buffer Config File Base Address
  Tcc (Time Coordinated Computing) Stream Buffer Config File Base Address
**/
  UINT32                      PcdTccStreamCfgBase;

/** Offset 0x00E8 - Tcc Stream Buffer Config File Size
  Tcc (Time Coordinated Computing) Stream Buffer Config File Size
**/
  UINT32                      PcdTccStreamCfgSize;

/** Offset 0x00EC - Tcc CRL Binary File Base Address
  Tcc (Time Coordinated Computing) CRL Binary File Base Address
**/
  UINT32                      PcdTccCrlBinBase;

/** Offset 0x00F0 - Tcc CRL Binary File Size
  Tcc (Time Coordinated Computing) CRL Binary Config File Size
**/
  UINT32                      PcdTccCrlBinSize;

/** Offset 0x00F4
**/
  UINT32                      PcdEMMCDLLConfigPtr;

/** Offset 0x00F8
**/
  UINT32                      PcdSgxRegistrationPackageInfoPtr;

/** Offset 0x00FC
**/
  UINT32                      PcdSgxRegistrationConfigPtr;

/** Offset 0x0100
**/
  UINT32                      PcdSgxUefiFwKeyBlobsPtr;

/** Offset 0x0104
**/
  UINT32                      PcdSgxRegistrationStatusPtr;

/** Offset 0x0108
**/
  UINT32                      PcdSgxRegistrationResponsePtr;

/** Offset 0x010C
**/
  UINT32                      PcdSgxUefiFwRegistrationStatePtr;

/** Offset 0x0110
**/
  UINT8                       PcdSgxRegistrationSoftwareGuardStatus;

/** Offset 0x0111
**/
  UINT8                       PcdSgxLegacyRegistrationEpcBios;

/** Offset 0x0112
**/
  UINT8                       PcdSgxLegacyRegistrationEpcSw;

/** Offset 0x0113
**/
  UINT32                      PcdSecIpInterdepPrevHash;

/** Offset 0x0117
**/
  UINT32                      PcdSgxRegistrationServerRequestPtr;

/** Offset 0x011B - Rlink CG Enable
  Enable / Disable Rlink Clock Gating
  $EN_DIS
**/
  UINT8                       PcdPchRlinkClockGating;

/** Offset 0x011C - PCI Express Clock Gating
  Enable / Disable PCI Express Clock Gating
  $EN_DIS
**/
  UINT8                       PcdPcieClockGatingEnabled;

/** Offset 0x011D - IO-APIC 24-119 RTE
  Enable/Disable IO APIC entries 24-119
  $EN_DIS
**/
  UINT8                       PcdPchIoApic24119Entries;

/** Offset 0x011E
**/
  UINT8                       ReservedSiliconInitUpd[4];
} FSP_S_CONFIG;

/** Fsp S UPD Configuration
**/
typedef struct {

/** Offset 0x0000
**/
  FSP_UPD_HEADER              FspUpdHeader;

/** Offset 0x0020
**/
  FSP_S_CONFIG                FspsConfig;

/** Offset 0x0122
**/
  UINT8                       UnusedUpdSpace0;

/** Offset 0x0123
**/
  UINT16                      UpdTerminator;
} FSPS_UPD;

#pragma pack()

#endif