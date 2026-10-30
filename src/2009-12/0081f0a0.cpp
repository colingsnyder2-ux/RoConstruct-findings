// roc 2009-12 0081f0a0  unit: VCXTPReportRow::V?$CXTPSmartPtrInternalT::?$CArray  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081f0a0
//
// 0081f0a0  6aff                 push -1
// 0081f0a2  68a98e9500           push 0x958ea9
// 0081f0a7  64a100000000         mov eax, dword ptr fs:[0]
// 0081f0ad  50                   push eax
// 0081f0ae  51                   push ecx
// 0081f0af  53                   push ebx
// 0081f0b0  56                   push esi
// 0081f0b1  57                   push edi
// 0081f0b2  a10052b600           mov eax, dword ptr [0xb65200]
// 0081f0b7  33c4                 xor eax, esp
// 0081f0b9  50                   push eax
// 0081f0ba  8d442414             lea eax, [esp + 0x14]
// 0081f0be  64a300000000         mov dword ptr fs:[0], eax
// 0081f0c4  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0081f0c8  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0081f0cc  be8861b600           mov esi, 0xb66188
// 0081f0d1  8b06                 mov eax, dword ptr [esi]
// 0081f0d3  6a00                 push 0
// 0081f0d5  50                   push eax
// 0081f0d6  8bcf                 mov ecx, edi
// 0081f0d8  ff1500d89800         call dword ptr [0x98d800]
// 0081f0de  85c0                 test eax, eax
// 0081f0e0  7c3f                 jl 0x81f121
// 0081f0e2  8b06                 mov eax, dword ptr [esi]
// 0081f0e4  50                   push eax
// 0081f0e5  8d4c2414             lea ecx, [esp + 0x14]
// 0081f0e9  51                   push ecx
// 0081f0ea  8bcb                 mov ecx, ebx
// 0081f0ec  e89ffdffff           call 0x81ee90
// 0081f0f1  8d4c2410             lea ecx, [esp + 0x10]
// 0081f0f5  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0081f0fd  ff1580de9800         call dword ptr [0x98de80]
// 0081f103  8b0e                 mov ecx, dword ptr [esi]
// 0081f105  50                   push eax
// 0081f106  51                   push ecx
// 0081f107  8bcf                 mov ecx, edi
// 0081f109  ff1518d89800         call dword ptr [0x98d818]
// 0081f10f  8d4c2410             lea ecx, [esp + 0x10]
// 0081f113  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0081f11b  ff15c0de9800         call dword ptr [0x98dec0]
// 0081f121  83c604               add esi, 4
// 0081f124  81feb061b600         cmp esi, 0xb661b0
// 0081f12a  7ca5                 jl 0x81f0d1
// 0081f12c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0081f130  64890d00000000       mov dword ptr fs:[0], ecx
// 0081f137  59                   pop ecx
// 0081f138  5f                   pop edi
// 0081f139  5e                   pop esi
// 0081f13a  5b                   pop ebx
// 0081f13b  83c410               add esp, 0x10
// 0081f13e  c3                   ret 
// copied from an identical function in another client (function ?_ProcessOtherSpecs@CXTPReportControlLocale@@CAXAAV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@ABVCOleDateTime@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportControl.cpp