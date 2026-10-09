// roc 2009-12 00827af0  unit: CXTPReportControl  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00827af0
//
// 00827af0  33c0                 xor eax, eax
// 00827af2  394140               cmp dword ptr [ecx + 0x40], eax
// 00827af5  0f94c0               sete al
// 00827af8  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?IsSortedDecreasing@CXTPReportColumn@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
