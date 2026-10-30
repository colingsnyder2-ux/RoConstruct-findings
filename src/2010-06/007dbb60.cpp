// roc 2010-06 007dbb60  unit: CXTPReportControl  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007dbb60
//
// 007dbb60  33c0                 xor eax, eax
// 007dbb62  394140               cmp dword ptr [ecx + 0x40], eax
// 007dbb65  0f94c0               sete al
// 007dbb68  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?IsSortedDecreasing@CXTPReportColumn@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
