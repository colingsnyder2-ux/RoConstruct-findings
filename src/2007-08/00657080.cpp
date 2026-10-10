// from server: 100% by tester
// roc 2008-06 006cbba0  unit: VCXTPReportRow::V?$CXTPSmartPtrInternalT::?$CArray  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006cbba0
//
// 006cbba0  53                   push ebx
// 006cbba1  56                   push esi
// 006cbba2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006cbba6  57                   push edi
// 006cbba7  682c3a8500           push 0x853a2c
// 006cbbac  689cca8400           push 0x84ca9c
// 006cbbb1  8bce                 mov ecx, esi
// 006cbbb3  ff15803a8000         call dword ptr [0x803a80]
// 006cbbb9  68243a8500           push 0x853a24
// 006cbbbe  68203a8500           push 0x853a20
// 006cbbc3  8bce                 mov ecx, esi
// 006cbbc5  ff15803a8000         call dword ptr [0x803a80]
// 006cbbcb  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 006cbbcf  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 006cbbd3  57                   push edi
// 006cbbd4  53                   push ebx
// 006cbbd5  56                   push esi
// 006cbbd6  e8c5d2ffff           call 0x6c8ea0
// 006cbbdb  57                   push edi
// 006cbbdc  53                   push ebx
// 006cbbdd  56                   push esi
// 006cbbde  e85dd3ffff           call 0x6c8f40
// 006cbbe3  83c418               add esp, 0x18
// 006cbbe6  5f                   pop edi
// 006cbbe7  5e                   pop esi
// 006cbbe8  5b                   pop ebx
// 006cbbe9  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportControl.cpp (function ?_ProcessDateTimeSpecs@CXTPReportControlLocale@@CAXAAV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@PBU_SYSTEMTIME@@K@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportControl.cpp
