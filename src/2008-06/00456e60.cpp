// from server: 100% by auto
// roc 2008-06 00456e60  unit: CRobloxReportView::CStatsItemRecord::CValueItem  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00456e60
//
// 00456e60  56                   push esi
// 00456e61  8bf1                 mov esi, ecx
// 00456e63  e8c8fdffff           call 0x456c30
// 00456e68  8bce                 mov ecx, esi
// 00456e6a  e8f99d2400           call 0x6a0c68
// 00456e6f  5e                   pop esi
// 00456e70  c20400               ret 4
// library xtp-11.2.2/Source\SyntaxEdit\XTPSyntaxEditColorSampleText.cpp (function ?OnEnable@CXTPSyntaxEditColorSampleText@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/SyntaxEdit/XTPSyntaxEditColorSampleText.cpp
