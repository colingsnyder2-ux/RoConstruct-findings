// roc 2009-06 0074cec0  unit: CXTPPropertyGridItemConstraint  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0074cec0
//
// 0074cec0  51                   push ecx
// 0074cec1  8b4958               mov ecx, dword ptr [ecx + 0x58]
// 0074cec4  e8d7540400           call 0x7923a0
// 0074cec9  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?GetIndex@CXTPReportColumn@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
