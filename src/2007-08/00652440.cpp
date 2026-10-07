// roc 2007-08 00652440  unit: CRobloxReportView  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00652440
//
// 00652440  56                   push esi
// 00652441  8bf1                 mov esi, ecx
// 00652443  6aff                 push -1
// 00652445  6a00                 push 0
// 00652447  8d4e60               lea ecx, [esi + 0x60]
// 0065244a  e86b600e00           call 0x7384ba
// 0065244f  8d4e58               lea ecx, [esi + 0x58]
// 00652452  e8d5ddfdff           call 0x63022c
// 00652457  5e                   pop esi
// 00652458  c20800               ret 8
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportView.cpp (function ?OnEndPrinting@CXTPReportView@@MAEXPAVCDC@@PAUCPrintInfo@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportView.cpp
