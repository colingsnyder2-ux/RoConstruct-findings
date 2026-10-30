// roc 2009-12 00818990  unit: CRobloxReportView  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00818990
//
// 00818990  56                   push esi
// 00818991  8bf1                 mov esi, ecx
// 00818993  6aff                 push -1
// 00818995  6a00                 push 0
// 00818997  8d4e60               lea ecx, [esi + 0x60]
// 0081899a  e871dc1000           call 0x926610
// 0081899f  8d4e58               lea ecx, [esi + 0x58]
// 008189a2  e877b4fdff           call 0x7f3e1e
// 008189a7  5e                   pop esi
// 008189a8  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportView.cpp (function ?OnEndPrinting@CXTPReportView@@MAEXPAVCDC@@PAUCPrintInfo@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportView.cpp
