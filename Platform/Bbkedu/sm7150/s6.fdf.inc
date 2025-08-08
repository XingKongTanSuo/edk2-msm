// per-device BSP DXEs
  FILE DRIVER = 9A8EE4A0-4867-3D70-C887-7B9145730E0A {
    SECTION DXE_DEPEX = Platform/bbk_drivers/ClockDxe/ClockDxe.depex
    SECTION PE32 = Platform/bbk_drivers/ClockDxe/ClockDxe.efi
    SECTION UI = "ClockDxe"
  }
  FILE DRIVER = C758E71B-8139-ADFE-4113-4F2DEC11FB8A {
    SECTION DXE_DEPEX = Platform/bbk_drivers/DALSYSDxe/DALSYSDxe.depex
    SECTION PE32 = Platform/bbk_drivers/DALSYSDxe/DALSYSDxe.efi
    SECTION UI = "DALSys"
  }
  FILE DRIVER = 8ADED9DD-8FED-B75A-0209-CBC4C44945B4 {
	SECTION DXE_DEPEX = Platform/bbk_drivers/HWIODxe/HWIODxe.depex
	SECTION PE32 = Platform/bbk_drivers/HWIODxe/HWIODxe.efi
	SECTION UI = "HWIODxeDriver"
  }
  FILE DRIVER = D3EB3EDA-74EF-C4B1-7AE9-1F62541DE5C7 {
    SECTION DXE_DEPEX = Platform/bbk_drivers/PlatformInfoDxe/PlatformInfoDxe.depex
    SECTION PE32 = Platform/bbk_drivers/PlatformInfoDxe/PlatformInfoDxe.efi
    SECTION UI = "PlatformInfoDxeDriver"
  }
  FILE DRIVER = 217B9214-E215-255D-DB5E-EF9396797CDB {
    SECTION DXE_DEPEX = Platform/bbk_drivers/PmicDxe/PmicDxeLa.depex
    SECTION PE32 = Platform/bbk_drivers/PmicDxe/PmicDxeLa.efi
    SECTION UI = "PmicDxe"
  }
  FILE DRIVER = 531A2DDE-9463-1355-69E8-A7484B609AEA {
    SECTION DXE_DEPEX = Platform/bbk_drivers/SmemDxe/SmemDxe.depex
    SECTION PE32 = Platform/bbk_drivers/SmemDxe/SmemDxe.efi
    SECTION UI = "SmemDxe"
  }

//FILE FREEFORM = 25462CDA-221F-47DF-AC1D-259CFAA4E326 {
  //SECTION RAW = Platform/Bbkedu/sm7150/FdtBlob_compat/s6.dtb
//}
// ACPI Tables
FILE FREEFORM = 7E374E25-8E01-4FEE-87F2-390C23C606CD {
 	Common Tables
	SECTION RAW = Silicon/Qualcomm/sm7150/AcpiTables/BuiltIn/bgrt.acpi
 	SECTION RAW = Silicon/Qualcomm/sm7150/AcpiTables/BuiltIn/Csrt.acpi
 	SECTION RAW = Silicon/Qualcomm/sm7150/AcpiTables/BuiltIn/dbg2.acpi
	SECTION RAW = Silicon/Qualcomm/sm7150/AcpiTables/BuiltIn/Facp.acpi
	SECTION RAW = Silicon/Qualcomm/sm7150/AcpiTables/BuiltIn/Facs.acpi
	SECTION RAW = Silicon/Qualcomm/sm7150/AcpiTables/BuiltIn/Gtdt.acpi
 	SECTION RAW = Silicon/Qualcomm/sm7150/AcpiTables/BuiltIn/IORT.acpi
	SECTION RAW = Silicon/Qualcomm/sm7150/AcpiTables/BuiltIn/Madt.acpi
	SECTION RAW = Silicon/Qualcomm/sm7150/AcpiTables/BuiltIn/Mcfg.acpi
	SECTION RAW = Silicon/Qualcomm/sm7150/AcpiTables/BuiltIn/Pptt.acpi
 	SECTION RAW = Silicon/Qualcomm/sm7150/AcpiTables/BuiltIn/spcr.acpi
	SECTION RAW = Silicon/Qualcomm/sm7150/AcpiTables/BuiltIn/TPM2.acpi
	SECTION UI = "AcpiTables"
}