// roc 2012-06 009a83c0  unit: CXTPReportColumn  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a83c0
//
// 009a83c0  51                   push ecx
// 009a83c1  8b4958               mov ecx, dword ptr [ecx + 0x58]
// 009a83c4  e847da0400           call 0x9f5e10
// 009a83c9  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?GetIndex@CXTPReportColumn@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
