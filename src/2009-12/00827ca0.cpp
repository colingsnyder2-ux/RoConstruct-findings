// roc 2009-12 00827ca0  unit: CXTPReportColumn  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00827ca0
//
// 00827ca0  56                   push esi
// 00827ca1  8bf1                 mov esi, ecx
// 00827ca3  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 00827ca6  e805570400           call 0x86d3b0
// 00827cab  8bc8                 mov ecx, eax
// 00827cad  e89e060000           call 0x828350
// 00827cb2  33c9                 xor ecx, ecx
// 00827cb4  3bc6                 cmp eax, esi
// 00827cb6  0f94c1               sete cl
// 00827cb9  5e                   pop esi
// 00827cba  8bc1                 mov eax, ecx
// 00827cbc  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?IsHotTracking@CXTPReportColumn@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
