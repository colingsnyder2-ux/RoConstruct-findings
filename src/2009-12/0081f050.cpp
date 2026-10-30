// roc 2009-12 0081f050  unit: VCXTPReportRow::V?$CXTPSmartPtrInternalT::?$CArray  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081f050
//
// 0081f050  53                   push ebx
// 0081f051  56                   push esi
// 0081f052  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0081f056  57                   push edi
// 0081f057  68244f9f00           push 0x9f4f24
// 0081f05c  68d4f39e00           push 0x9ef3d4
// 0081f061  8bce                 mov ecx, esi
// 0081f063  ff1518d89800         call dword ptr [0x98d818]
// 0081f069  681c4f9f00           push 0x9f4f1c
// 0081f06e  68184f9f00           push 0x9f4f18
// 0081f073  8bce                 mov ecx, esi
// 0081f075  ff1518d89800         call dword ptr [0x98d818]
// 0081f07b  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0081f07f  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0081f083  57                   push edi
// 0081f084  53                   push ebx
// 0081f085  56                   push esi
// 0081f086  e8c5d2ffff           call 0x81c350
// 0081f08b  57                   push edi
// 0081f08c  53                   push ebx
// 0081f08d  56                   push esi
// 0081f08e  e85dd3ffff           call 0x81c3f0
// 0081f093  83c418               add esp, 0x18
// 0081f096  5f                   pop edi
// 0081f097  5e                   pop esi
// 0081f098  5b                   pop ebx
// 0081f099  c3                   ret 
// copied from an identical function in another client (function ?_ProcessDateTimeSpecs@CXTPReportControlLocale@@CAXAAV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@PBU_SYSTEMTIME@@K@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportControl.cpp