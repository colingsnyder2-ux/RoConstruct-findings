// roc 2011-06 0082fdd0  unit: CXTPReportColumn  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0082fdd0
//
// 0082fdd0  51                   push ecx
// 0082fdd1  8b4958               mov ecx, dword ptr [ecx + 0x58]
// 0082fdd4  e887da0400           call 0x87d860
// 0082fdd9  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?GetIndex@CXTPReportColumn@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
