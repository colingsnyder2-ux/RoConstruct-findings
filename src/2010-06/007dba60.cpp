// roc 2010-06 007dba60  unit: CXTPReportControl  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007dba60
//
// 007dba60  83793800             cmp dword ptr [ecx + 0x38], 0
// 007dba64  7404                 je 0x7dba6a
// 007dba66  8d4134               lea eax, [ecx + 0x34]
// 007dba69  c3                   ret 
// 007dba6a  8b4958               mov ecx, dword ptr [ecx + 0x58]
// 007dba6d  e8ce460400           call 0x820140
// 007dba72  8b4024               mov eax, dword ptr [eax + 0x24]
// 007dba75  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 007dba7b  83c030               add eax, 0x30
// 007dba7e  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?GetFooterFont@CXTPReportColumn@@QAEPAVCFont@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
