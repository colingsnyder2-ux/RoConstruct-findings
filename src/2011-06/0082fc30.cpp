// roc 2011-06 0082fc30  unit: CXTPReportView  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0082fc30
//
// 0082fc30  33c0                 xor eax, eax
// 0082fc32  394140               cmp dword ptr [ecx + 0x40], eax
// 0082fc35  0f94c0               sete al
// 0082fc38  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?IsSortedDecreasing@CXTPReportColumn@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
