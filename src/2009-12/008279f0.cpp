// roc 2009-12 008279f0  unit: CXTPReportControl  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008279f0
//
// 008279f0  83793800             cmp dword ptr [ecx + 0x38], 0
// 008279f4  7404                 je 0x8279fa
// 008279f6  8d4134               lea eax, [ecx + 0x34]
// 008279f9  c3                   ret 
// 008279fa  8b4958               mov ecx, dword ptr [ecx + 0x58]
// 008279fd  e8ae590400           call 0x86d3b0
// 00827a02  8b4024               mov eax, dword ptr [eax + 0x24]
// 00827a05  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 00827a0b  83c030               add eax, 0x30
// 00827a0e  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?GetFooterFont@CXTPReportColumn@@QAEPAVCFont@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
