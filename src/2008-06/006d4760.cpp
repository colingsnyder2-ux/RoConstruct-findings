// roc 2008-06 006d4760  unit: CXTPReportColumn  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d4760
//
// 006d4760  56                   push esi
// 006d4761  8bf1                 mov esi, ecx
// 006d4763  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 006d4766  e885b10700           call 0x74f8f0
// 006d476b  8bc8                 mov ecx, eax
// 006d476d  e8ae060000           call 0x6d4e20
// 006d4772  33c9                 xor ecx, ecx
// 006d4774  3bc6                 cmp eax, esi
// 006d4776  0f94c1               sete cl
// 006d4779  5e                   pop esi
// 006d477a  8bc1                 mov eax, ecx
// 006d477c  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?IsHotTracking@CXTPReportColumn@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
