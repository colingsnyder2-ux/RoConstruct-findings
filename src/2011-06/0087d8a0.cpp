// roc 2011-06 0087d8a0  unit: CXTPWinThemeWrapper  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0087d8a0
//
// 0087d8a0  53                   push ebx
// 0087d8a1  55                   push ebp
// 0087d8a2  56                   push esi
// 0087d8a3  57                   push edi
// 0087d8a4  8bf9                 mov edi, ecx
// 0087d8a6  8b5f30               mov ebx, dword ptr [edi + 0x30]
// 0087d8a9  33ed                 xor ebp, ebp
// 0087d8ab  33f6                 xor esi, esi
// 0087d8ad  85db                 test ebx, ebx
// 0087d8af  7e22                 jle 0x87d8d3
// 0087d8b1  85f6                 test esi, esi
// 0087d8b3  7c19                 jl 0x87d8ce
// 0087d8b5  3b7730               cmp esi, dword ptr [edi + 0x30]
// 0087d8b8  7d14                 jge 0x87d8ce
// 0087d8ba  8b472c               mov eax, dword ptr [edi + 0x2c]
// 0087d8bd  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 0087d8c0  85c9                 test ecx, ecx
// 0087d8c2  740a                 je 0x87d8ce
// 0087d8c4  e8a723fbff           call 0x82fc70
// 0087d8c9  85c0                 test eax, eax
// 0087d8cb  7401                 je 0x87d8ce
// 0087d8cd  45                   inc ebp
// 0087d8ce  46                   inc esi
// 0087d8cf  3bf3                 cmp esi, ebx
// 0087d8d1  7cde                 jl 0x87d8b1
// 0087d8d3  5f                   pop edi
// 0087d8d4  5e                   pop esi
// 0087d8d5  8bc5                 mov eax, ebp
// 0087d8d7  5d                   pop ebp
// 0087d8d8  5b                   pop ebx
// 0087d8d9  c3                   ret 
// library xtp-15.2.1/Source\ReportControl\XTPReportColumns.cpp (function ?GetVisibleColumnsCount@CXTPReportColumns@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportColumns.cpp
