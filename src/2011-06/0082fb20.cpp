// roc 2011-06 0082fb20  unit: CXTPReportView  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0082fb20
//
// 0082fb20  83793800             cmp dword ptr [ecx + 0x38], 0
// 0082fb24  7404                 je 0x82fb2a
// 0082fb26  8d4134               lea eax, [ecx + 0x34]
// 0082fb29  c3                   ret 
// 0082fb2a  8b4958               mov ecx, dword ptr [ecx + 0x58]
// 0082fb2d  e81edd0400           call 0x87d850
// 0082fb32  8b4024               mov eax, dword ptr [eax + 0x24]
// 0082fb35  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 0082fb3b  83c030               add eax, 0x30
// 0082fb3e  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?GetFooterFont@CXTPReportColumn@@QAEPAVCFont@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
