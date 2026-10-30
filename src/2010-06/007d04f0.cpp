// roc 2010-06 007d04f0  unit: CXTPReportControl  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007d04f0
//
// 007d04f0  e80b0e0300           call 0x801300
// 007d04f5  8b442404             mov eax, dword ptr [esp + 4]
// 007d04f9  6a00                 push 0
// 007d04fb  6a08                 push 8
// 007d04fd  68588ea500           push 0xa58e58
// 007d0502  50                   push eax
// 007d0503  e848fd0200           call 0x800250
// 007d0508  83c410               add esp, 0x10
// 007d050b  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?RegisterWindowClass@CXTPReportControl@@QAEHPAUHINSTANCE__@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
