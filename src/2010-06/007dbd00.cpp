// roc 2010-06 007dbd00  unit: CXTPReportColumn  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007dbd00
//
// 007dbd00  51                   push ecx
// 007dbd01  8b4958               mov ecx, dword ptr [ecx + 0x58]
// 007dbd04  e847440400           call 0x820150
// 007dbd09  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?GetIndex@CXTPReportColumn@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
