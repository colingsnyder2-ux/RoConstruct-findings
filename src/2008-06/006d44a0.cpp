// roc 2008-06 006d44a0  unit: CXTPReportControl  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d44a0
//
// 006d44a0  83793800             cmp dword ptr [ecx + 0x38], 0
// 006d44a4  7404                 je 0x6d44aa
// 006d44a6  8d4134               lea eax, [ecx + 0x34]
// 006d44a9  c3                   ret 
// 006d44aa  8b4958               mov ecx, dword ptr [ecx + 0x58]
// 006d44ad  e83eb40700           call 0x74f8f0
// 006d44b2  8b4024               mov eax, dword ptr [eax + 0x24]
// 006d44b5  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 006d44bb  83c030               add eax, 0x30
// 006d44be  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?GetFooterFont@CXTPReportColumn@@QAEPAVCFont@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
