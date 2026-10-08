// roc 2012-06 009a8c10  unit: CXTPReportControl  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a8c10
//
// 009a8c10  e87be50200           call 0x9d7190
// 009a8c15  8b442404             mov eax, dword ptr [esp + 4]
// 009a8c19  6a00                 push 0
// 009a8c1b  6a08                 push 8
// 009a8c1d  68d0fec000           push 0xc0fed0
// 009a8c22  50                   push eax
// 009a8c23  e8b8d40200           call 0x9d60e0
// 009a8c28  83c410               add esp, 0x10
// 009a8c2b  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?RegisterWindowClass@CXTPReportControl@@QAEHPAUHINSTANCE__@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
