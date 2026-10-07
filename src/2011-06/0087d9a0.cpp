// roc 2011-06 0087d9a0  unit: CXTPWinThemeWrapper  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0087d9a0
//
// 0087d9a0  53                   push ebx
// 0087d9a1  55                   push ebp
// 0087d9a2  56                   push esi
// 0087d9a3  57                   push edi
// 0087d9a4  8bf9                 mov edi, ecx
// 0087d9a6  8b4730               mov eax, dword ptr [edi + 0x30]
// 0087d9a9  33f6                 xor esi, esi
// 0087d9ab  85c0                 test eax, eax
// 0087d9ad  7e33                 jle 0x87d9e2
// 0087d9af  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0087d9b3  85f6                 test esi, esi
// 0087d9b5  7c11                 jl 0x87d9c8
// 0087d9b7  3bf0                 cmp esi, eax
// 0087d9b9  7d0d                 jge 0x87d9c8
// 0087d9bb  3b7730               cmp esi, dword ptr [edi + 0x30]
// 0087d9be  7d2b                 jge 0x87d9eb
// 0087d9c0  8b472c               mov eax, dword ptr [edi + 0x2c]
// 0087d9c3  8b1cb0               mov ebx, dword ptr [eax + esi*4]
// 0087d9c6  eb02                 jmp 0x87d9ca
// 0087d9c8  33db                 xor ebx, ebx
// 0087d9ca  8bcb                 mov ecx, ebx
// 0087d9cc  e89f22fbff           call 0x82fc70
// 0087d9d1  85c0                 test eax, eax
// 0087d9d3  7405                 je 0x87d9da
// 0087d9d5  85ed                 test ebp, ebp
// 0087d9d7  7417                 je 0x87d9f0
// 0087d9d9  4d                   dec ebp
// 0087d9da  8b4730               mov eax, dword ptr [edi + 0x30]
// 0087d9dd  46                   inc esi
// 0087d9de  3bf0                 cmp esi, eax
// 0087d9e0  7cd1                 jl 0x87d9b3
// 0087d9e2  5f                   pop edi
// 0087d9e3  5e                   pop esi
// 0087d9e4  5d                   pop ebp
// 0087d9e5  33c0                 xor eax, eax
// 0087d9e7  5b                   pop ebx
// 0087d9e8  c20400               ret 4
// 0087d9eb  e81ac9f8ff           call 0x80a30a
// 0087d9f0  5f                   pop edi
// 0087d9f1  5e                   pop esi
// 0087d9f2  5d                   pop ebp
// 0087d9f3  8bc3                 mov eax, ebx
// 0087d9f5  5b                   pop ebx
// 0087d9f6  c20400               ret 4
// library xtp-15.2.1/Source\ReportControl\XTPReportColumns.cpp (function ?GetVisibleAt@CXTPReportColumns@@QBEPAVCXTPReportColumn@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportColumns.cpp
