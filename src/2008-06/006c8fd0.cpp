// roc 2008-06 006c8fd0  unit: CXTPReportControl  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c8fd0
//
// 006c8fd0  e8fb0b0300           call 0x6f9bd0
// 006c8fd5  8b442404             mov eax, dword ptr [esp + 4]
// 006c8fd9  6a00                 push 0
// 006c8fdb  6a08                 push 8
// 006c8fdd  6874368500           push 0x853674
// 006c8fe2  50                   push eax
// 006c8fe3  e858fb0200           call 0x6f8b40
// 006c8fe8  83c410               add esp, 0x10
// 006c8feb  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?RegisterWindowClass@CXTPReportControl@@QAEHPAUHINSTANCE__@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
