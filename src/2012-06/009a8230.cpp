// roc 2012-06 009a8230  unit: CXTPReportView  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a8230
//
// 009a8230  33c0                 xor eax, eax
// 009a8232  394140               cmp dword ptr [ecx + 0x40], eax
// 009a8235  0f94c0               sete al
// 009a8238  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?IsSortedDecreasing@CXTPReportColumn@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
