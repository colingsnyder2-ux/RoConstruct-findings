// roc 2009-06 0074cc00  unit: CXTPReportControl  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0074cc00
//
// 0074cc00  83793800             cmp dword ptr [ecx + 0x38], 0
// 0074cc04  7404                 je 0x74cc0a
// 0074cc06  8d4134               lea eax, [ecx + 0x34]
// 0074cc09  c3                   ret 
// 0074cc0a  8b4958               mov ecx, dword ptr [ecx + 0x58]
// 0074cc0d  e87e570400           call 0x792390
// 0074cc12  8b4024               mov eax, dword ptr [eax + 0x24]
// 0074cc15  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 0074cc1b  83c030               add eax, 0x30
// 0074cc1e  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?GetFooterFont@CXTPReportColumn@@QAEPAVCFont@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
