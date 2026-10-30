// roc 2012-06 009a8120  unit: CXTPReportView  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a8120
//
// 009a8120  83793800             cmp dword ptr [ecx + 0x38], 0
// 009a8124  7404                 je 0x9a812a
// 009a8126  8d4134               lea eax, [ecx + 0x34]
// 009a8129  c3                   ret 
// 009a812a  8b4958               mov ecx, dword ptr [ecx + 0x58]
// 009a812d  e8cedc0400           call 0x9f5e00
// 009a8132  8b4024               mov eax, dword ptr [eax + 0x24]
// 009a8135  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 009a813b  83c030               add eax, 0x30
// 009a813e  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?GetFooterFont@CXTPReportColumn@@QAEPAVCFont@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
