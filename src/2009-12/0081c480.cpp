// roc 2009-12 0081c480  unit: CXTPReportControl  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081c480
//
// 0081c480  e81b0e0300           call 0x84d2a0
// 0081c485  8b442404             mov eax, dword ptr [esp + 4]
// 0081c489  6a00                 push 0
// 0081c48b  6a08                 push 8
// 0081c48d  68684b9f00           push 0x9f4b68
// 0081c492  50                   push eax
// 0081c493  e878fd0200           call 0x84c210
// 0081c498  83c410               add esp, 0x10
// 0081c49b  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?RegisterWindowClass@CXTPReportControl@@QAEHPAUHINSTANCE__@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
