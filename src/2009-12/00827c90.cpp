// roc 2009-12 00827c90  unit: CXTPReportColumn  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00827c90
//
// 00827c90  8b4958               mov ecx, dword ptr [ecx + 0x58]
// 00827c93  e818570400           call 0x86d3b0
// 00827c98  8b4024               mov eax, dword ptr [eax + 0x24]
// 00827c9b  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?GetControl@CXTPReportColumn@@QBEPAVCXTPReportControl@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
