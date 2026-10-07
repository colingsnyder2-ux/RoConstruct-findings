// roc 2008-06 006d45a0  unit: CXTPReportControl  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d45a0
//
// 006d45a0  33c0                 xor eax, eax
// 006d45a2  394140               cmp dword ptr [ecx + 0x40], eax
// 006d45a5  0f94c0               sete al
// 006d45a8  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?IsSortedDecreasing@CXTPReportColumn@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
