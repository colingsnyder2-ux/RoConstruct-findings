// roc 2012-06 009a83e0  unit: CXTPReportColumn  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a83e0
//
// 009a83e0  56                   push esi
// 009a83e1  8bf1                 mov esi, ecx
// 009a83e3  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 009a83e6  e815da0400           call 0x9f5e00
// 009a83eb  8bc8                 mov ecx, eax
// 009a83ed  e86ebe0000           call 0x9b4260
// 009a83f2  33c9                 xor ecx, ecx
// 009a83f4  3bc6                 cmp eax, esi
// 009a83f6  0f94c1               sete cl
// 009a83f9  5e                   pop esi
// 009a83fa  8bc1                 mov eax, ecx
// 009a83fc  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?IsHotTracking@CXTPReportColumn@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
