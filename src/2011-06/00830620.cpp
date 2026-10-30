// roc 2011-06 00830620  unit: CXTPReportControl  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00830620
//
// 00830620  e85be70200           call 0x85ed80
// 00830625  8b442404             mov eax, dword ptr [esp + 4]
// 00830629  6a00                 push 0
// 0083062b  6a08                 push 8
// 0083062d  68f047ac00           push 0xac47f0
// 00830632  50                   push eax
// 00830633  e898d60200           call 0x85dcd0
// 00830638  83c410               add esp, 0x10
// 0083063b  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?RegisterWindowClass@CXTPReportControl@@QAEHPAUHINSTANCE__@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
