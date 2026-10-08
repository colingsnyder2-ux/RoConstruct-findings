// roc 2009-06 007415d0  unit: CXTPReportControl  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007415d0
//
// 007415d0  e89b0f0300           call 0x772570
// 007415d5  8b442404             mov eax, dword ptr [esp + 4]
// 007415d9  6a00                 push 0
// 007415db  6a08                 push 8
// 007415dd  68c4468f00           push 0x8f46c4
// 007415e2  50                   push eax
// 007415e3  e8f8fe0200           call 0x7714e0
// 007415e8  83c410               add esp, 0x10
// 007415eb  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?RegisterWindowClass@CXTPReportControl@@QAEHPAUHINSTANCE__@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
