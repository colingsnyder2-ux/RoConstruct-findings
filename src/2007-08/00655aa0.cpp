// from server: 100% by auto
// roc 2007-08 00655aa0  unit: CXTPReportControl  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00655aa0
//
// 00655aa0  e89bc70200           call 0x682240
// 00655aa5  8b442404             mov eax, dword ptr [esp + 4]
// 00655aa9  6a00                 push 0
// 00655aab  6a08                 push 8
// 00655aad  6864817c00           push 0x7c8164
// 00655ab2  50                   push eax
// 00655ab3  e8e8b60200           call 0x6811a0
// 00655ab8  83c410               add esp, 0x10
// 00655abb  c20400               ret 4
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportControl.cpp (function ?RegisterWindowClass@CXTPReportControl@@QAEHPAUHINSTANCE__@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportControl.cpp
