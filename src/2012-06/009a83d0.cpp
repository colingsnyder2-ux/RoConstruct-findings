// roc 2012-06 009a83d0  unit: CXTPReportColumn  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a83d0
//
// 009a83d0  8b4958               mov ecx, dword ptr [ecx + 0x58]
// 009a83d3  e828da0400           call 0x9f5e00
// 009a83d8  8b4024               mov eax, dword ptr [eax + 0x24]
// 009a83db  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?GetControl@CXTPReportColumn@@QBEPAVCXTPReportControl@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
