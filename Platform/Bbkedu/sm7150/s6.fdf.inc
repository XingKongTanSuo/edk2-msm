// per-device BSP DXEs
  FILE DRIVER = 4DB5DEA6-5302-4D1A-8A82-677A683B0D29 {
    SECTION DXE_DEPEX = Platform/bbk_drivers/ClockDxe/ClockDxe.depex
    SECTION PE32 = Platform/bbk_drivers/ClockDxe/ClockDxe.efi
    SECTION UI = "ClockDxe"
  }
  FILE DRIVER = 8E9BD160-B184-11DF-94E2-0800200C9A66 {
    SECTION DXE_DEPEX = Platform\bbk_drivers\DALSYSDxe\DALSYSDxe.depex
    SECTION PE32 = Platform\bbk_drivers\DALSYSDxe\DALSYSDxe.efi
    SECTION UI = "DALSys"
  }
  FILE DRIVER = AF9763A2-033B-4109-8E17-56A98D380C92 {
	SECTION DXE_DEPEX = Platform/bbk_drivers/HWIODxe/HWIODxe.depex
	SECTION PE32 = Platform/bbk_drivers/HWIODxe/HWIODxe.efi
	SECTION UI = "HWIODxeDriver"
  }
  FILE DRIVER = B105211B-BBBD-4ADD-A3B0-D1CF4A52154C {
    SECTION DXE_DEPEX = Platform/bbk_drivers/PlatformInfoDxe/PlatformInfoDxe.depex
    SECTION PE32 = Platform/bbk_drivers/PlatformInfoDxe/PlatformInfoDxe.efi
    SECTION UI = "PlatformInfoDxeDriver"
  }
  FILE DRIVER = 5776232E-082D-4B75-9A0E-FE1D13F7A5D9 {
    SECTION DXE_DEPEX = Platform/bbk_drivers/PmicDxe/PmicDxeLa.depex
    SECTION PE32 = Platform/bbk_drivers/PmicDxe/PmicDxeLa.efi
    SECTION UI = "PmicDxe"
  }
  FILE DRIVER = F541D663-4A48-40AA-AABF-FF158CCAE34C {
    SECTION DXE_DEPEX = Platform/bbk_drivers/SmemDxe/SmemDxe.depex
    SECTION PE32 = Platform/bbk_drivers/SmemDxe/SmemDxe.efi
    SECTION UI = "SmemDxe"
  }

//FILE FREEFORM = 25462CDA-221F-47DF-AC1D-259CFAA4E326 {
  //SECTION RAW = Platform/Bbkedu/sm7150/FdtBlob_compat/s6.dtb
//}











