// roc 2009-06 0073da70  unit: CRobloxReportView  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0073da70
//
// 0073da70  56                   push esi
// 0073da71  8bf1                 mov esi, ecx
// 0073da73  6aff                 push -1
// 0073da75  6a00                 push 0
// 0073da77  8d4e60               lea ecx, [esi + 0x60]
// 0073da7a  e825e61000           call 0x84c0a4
// 0073da7f  8d4e58               lea ecx, [esi + 0x58]
// 0073da82  e86fb5fdff           call 0x718ff6
// 0073da87  5e                   pop esi
// 0073da88  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportView.cpp (function ?OnEndPrinting@CXTPReportView@@MAEXPAVCDC@@PAUCPrintInfo@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportView.cpp
