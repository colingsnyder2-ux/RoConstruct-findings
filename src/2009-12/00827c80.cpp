// roc 2009-12 00827c80  unit: CXTPReportColumn  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00827c80
//
// 00827c80  51                   push ecx
// 00827c81  8b4958               mov ecx, dword ptr [ecx + 0x58]
// 00827c84  e837570400           call 0x86d3c0
// 00827c89  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?GetIndex@CXTPReportColumn@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
