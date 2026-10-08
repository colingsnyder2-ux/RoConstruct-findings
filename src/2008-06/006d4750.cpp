// from server: 100% by auto
// roc 2008-06 006d4750  unit: CXTPReportColumn  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d4750
//
// 006d4750  8b4958               mov ecx, dword ptr [ecx + 0x58]
// 006d4753  e898b10700           call 0x74f8f0
// 006d4758  8b4024               mov eax, dword ptr [eax + 0x24]
// 006d475b  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?GetControl@CXTPReportColumn@@QBEPAVCXTPReportControl@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
