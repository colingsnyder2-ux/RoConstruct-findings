// roc 2007-03 006404f0  unit: seg_00640000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006404f0
//
// 006404f0  56                   push esi
// 006404f1  8bf1                 mov esi, ecx
// 006404f3  6aff                 push -1
// 006404f5  6a00                 push 0
// 006404f7  8d4e60               lea ecx, [esi + 0x60]
// 006404fa  e801a70f00           call 0x73ac00
// 006404ff  8d4e58               lea ecx, [esi + 0x58]
// 00640502  e8b3e1fdff           call 0x61e6ba
// 00640507  5e                   pop esi
// 00640508  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportView.cpp (function ?OnEndPrinting@CXTPReportView@@MAEXPAVCDC@@PAUCPrintInfo@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportView.cpp
