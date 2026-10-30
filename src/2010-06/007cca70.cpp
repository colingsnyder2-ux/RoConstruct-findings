// roc 2010-06 007cca70  unit: CRobloxReportView  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007cca70
//
// 007cca70  56                   push esi
// 007cca71  8bf1                 mov esi, ecx
// 007cca73  6aff                 push -1
// 007cca75  6a00                 push 0
// 007cca77  8d4e60               lea ecx, [esi + 0x60]
// 007cca7a  e8cd041b00           call 0x97cf4c
// 007cca7f  8d4e58               lea ecx, [esi + 0x58]
// 007cca82  e8d7b4fdff           call 0x7a7f5e
// 007cca87  5e                   pop esi
// 007cca88  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportView.cpp (function ?OnEndPrinting@CXTPReportView@@MAEXPAVCDC@@PAUCPrintInfo@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportView.cpp
