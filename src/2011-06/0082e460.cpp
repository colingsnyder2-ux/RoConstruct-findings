// roc 2011-06 0082e460  unit: CRobloxReportView  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0082e460
//
// 0082e460  56                   push esi
// 0082e461  8bf1                 mov esi, ecx
// 0082e463  6aff                 push -1
// 0082e465  6a00                 push 0
// 0082e467  8d4e60               lea ecx, [esi + 0x60]
// 0082e46a  e8f9e21900           call 0x9cc768
// 0082e46f  8d4e58               lea ecx, [esi + 0x58]
// 0082e472  e8a5c1fdff           call 0x80a61c
// 0082e477  5e                   pop esi
// 0082e478  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportView.cpp (function ?OnEndPrinting@CXTPReportView@@MAEXPAVCDC@@PAUCPrintInfo@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportView.cpp
