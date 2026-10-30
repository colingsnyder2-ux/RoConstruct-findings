// roc 2009-06 0074cd10  unit: CXTPReportControl  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0074cd10
//
// 0074cd10  33c0                 xor eax, eax
// 0074cd12  394140               cmp dword ptr [ecx + 0x40], eax
// 0074cd15  0f94c0               sete al
// 0074cd18  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?IsSortedDecreasing@CXTPReportColumn@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
