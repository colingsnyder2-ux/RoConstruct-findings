// roc 2009-12 0086d4a0  unit: CXTCaption  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086d4a0
//
// 0086d4a0  53                   push ebx
// 0086d4a1  55                   push ebp
// 0086d4a2  56                   push esi
// 0086d4a3  57                   push edi
// 0086d4a4  8bf9                 mov edi, ecx
// 0086d4a6  8b4730               mov eax, dword ptr [edi + 0x30]
// 0086d4a9  33f6                 xor esi, esi
// 0086d4ab  85c0                 test eax, eax
// 0086d4ad  7e39                 jle 0x86d4e8
// 0086d4af  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0086d4b3  85f6                 test esi, esi
// 0086d4b5  7c11                 jl 0x86d4c8
// 0086d4b7  3bf0                 cmp esi, eax
// 0086d4b9  7d0d                 jge 0x86d4c8
// 0086d4bb  3b7730               cmp esi, dword ptr [edi + 0x30]
// 0086d4be  7d31                 jge 0x86d4f1
// 0086d4c0  8b472c               mov eax, dword ptr [edi + 0x2c]
// 0086d4c3  8b1cb0               mov ebx, dword ptr [eax + esi*4]
// 0086d4c6  eb02                 jmp 0x86d4ca
// 0086d4c8  33db                 xor ebx, ebx
// 0086d4ca  8bcd                 mov ecx, ebp
// 0086d4cc  ff1580de9800         call dword ptr [0x98de80]
// 0086d4d2  50                   push eax
// 0086d4d3  8d4b20               lea ecx, [ebx + 0x20]
// 0086d4d6  ff1584de9800         call dword ptr [0x98de84]
// 0086d4dc  85c0                 test eax, eax
// 0086d4de  7416                 je 0x86d4f6
// 0086d4e0  8b4730               mov eax, dword ptr [edi + 0x30]
// 0086d4e3  46                   inc esi
// 0086d4e4  3bf0                 cmp esi, eax
// 0086d4e6  7ccb                 jl 0x86d4b3
// 0086d4e8  5f                   pop edi
// 0086d4e9  5e                   pop esi
// 0086d4ea  5d                   pop ebp
// 0086d4eb  33c0                 xor eax, eax
// 0086d4ed  5b                   pop ebx
// 0086d4ee  c20400               ret 4
// 0086d4f1  e81666f8ff           call 0x7f3b0c
// 0086d4f6  5f                   pop edi
// 0086d4f7  5e                   pop esi
// 0086d4f8  5d                   pop ebp
// 0086d4f9  8bc3                 mov eax, ebx
// 0086d4fb  5b                   pop ebx
// 0086d4fc  c20400               ret 4
// copied from an identical function in another client (function ?Find@CXTPReportColumns@@QBEPAVCXTPReportColumn@@ABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\ReportControl\XTPReportColumns.cpp