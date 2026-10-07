// roc 2008-06 0074fa40  unit: CXTPReportHyperlinks  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0074fa40
//
// 0074fa40  53                   push ebx
// 0074fa41  55                   push ebp
// 0074fa42  56                   push esi
// 0074fa43  57                   push edi
// 0074fa44  8bf9                 mov edi, ecx
// 0074fa46  8b4730               mov eax, dword ptr [edi + 0x30]
// 0074fa49  33f6                 xor esi, esi
// 0074fa4b  85c0                 test eax, eax
// 0074fa4d  7e33                 jle 0x74fa82
// 0074fa4f  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0074fa53  85f6                 test esi, esi
// 0074fa55  7c11                 jl 0x74fa68
// 0074fa57  3bf0                 cmp esi, eax
// 0074fa59  7d0d                 jge 0x74fa68
// 0074fa5b  3b7730               cmp esi, dword ptr [edi + 0x30]
// 0074fa5e  7d2b                 jge 0x74fa8b
// 0074fa60  8b472c               mov eax, dword ptr [edi + 0x2c]
// 0074fa63  8b1cb0               mov ebx, dword ptr [eax + esi*4]
// 0074fa66  eb02                 jmp 0x74fa6a
// 0074fa68  33db                 xor ebx, ebx
// 0074fa6a  8bcb                 mov ecx, ebx
// 0074fa6c  e86f4bf8ff           call 0x6d45e0
// 0074fa71  85c0                 test eax, eax
// 0074fa73  7405                 je 0x74fa7a
// 0074fa75  85ed                 test ebp, ebp
// 0074fa77  7417                 je 0x74fa90
// 0074fa79  4d                   dec ebp
// 0074fa7a  8b4730               mov eax, dword ptr [edi + 0x30]
// 0074fa7d  46                   inc esi
// 0074fa7e  3bf0                 cmp esi, eax
// 0074fa80  7cd1                 jl 0x74fa53
// 0074fa82  5f                   pop edi
// 0074fa83  5e                   pop esi
// 0074fa84  5d                   pop ebp
// 0074fa85  33c0                 xor eax, eax
// 0074fa87  5b                   pop ebx
// 0074fa88  c20400               ret 4
// 0074fa8b  e8b40ef5ff           call 0x6a0944
// 0074fa90  5f                   pop edi
// 0074fa91  5e                   pop esi
// 0074fa92  5d                   pop ebp
// 0074fa93  8bc3                 mov eax, ebx
// 0074fa95  5b                   pop ebx
// 0074fa96  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportColumns.cpp (function ?GetVisibleAt@CXTPReportColumns@@QBEPAVCXTPReportColumn@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumns.cpp
