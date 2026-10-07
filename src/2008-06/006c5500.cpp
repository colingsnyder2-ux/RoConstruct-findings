// roc 2008-06 006c5500  unit: CRobloxReportView  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c5500
//
// 006c5500  56                   push esi
// 006c5501  8bf1                 mov esi, ecx
// 006c5503  6aff                 push -1
// 006c5505  6a00                 push 0
// 006c5507  8d4e60               lea ecx, [esi + 0x60]
// 006c550a  e8876c0f00           call 0x7bc196
// 006c550f  8d4e58               lea ecx, [esi + 0x58]
// 006c5512  e83fb7fdff           call 0x6a0c56
// 006c5517  5e                   pop esi
// 006c5518  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportView.cpp (function ?OnEndPrinting@CXTPReportView@@MAEXPAVCDC@@PAUCPrintInfo@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportView.cpp
