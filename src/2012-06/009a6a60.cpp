// roc 2012-06 009a6a60  unit: CRobloxReportView  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a6a60
//
// 009a6a60  56                   push esi
// 009a6a61  8bf1                 mov esi, ecx
// 009a6a63  6aff                 push -1
// 009a6a65  6a00                 push 0
// 009a6a67  8d4e60               lea ecx, [esi + 0x60]
// 009a6a6a  e8b32c0f00           call 0xa99722
// 009a6a6f  8d4e58               lea ecx, [esi + 0x58]
// 009a6a72  e855bcfdff           call 0x9826cc
// 009a6a77  5e                   pop esi
// 009a6a78  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportView.cpp (function ?OnEndPrinting@CXTPReportView@@MAEXPAVCDC@@PAUCPrintInfo@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportView.cpp
