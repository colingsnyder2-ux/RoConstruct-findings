// roc 2009-06 0074ced0  unit: CXTPPropertyGridItemConstraint  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0074ced0
//
// 0074ced0  8b4958               mov ecx, dword ptr [ecx + 0x58]
// 0074ced3  e8b8540400           call 0x792390
// 0074ced8  8b4024               mov eax, dword ptr [eax + 0x24]
// 0074cedb  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?GetControl@CXTPReportColumn@@QBEPAVCXTPReportControl@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
