// from server: 100% by auto
// roc 2008-06 006d4740  unit: CXTPReportColumn  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d4740
//
// 006d4740  51                   push ecx
// 006d4741  8b4958               mov ecx, dword ptr [ecx + 0x58]
// 006d4744  e8b7b10700           call 0x74f900
// 006d4749  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?GetIndex@CXTPReportColumn@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
