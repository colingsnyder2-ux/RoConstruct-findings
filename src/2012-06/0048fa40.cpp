// from server: 100% by auto
// roc 2012-06 0048fa40  unit: CRobloxReportPaneView  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0048fa40
//
// 0048fa40  56                   push esi
// 0048fa41  8bf1                 mov esi, ecx
// 0048fa43  e8c8fdffff           call 0x48f810
// 0048fa48  8bce                 mov ecx, esi
// 0048fa4a  e88f2c4f00           call 0x9826de
// 0048fa4f  5e                   pop esi
// 0048fa50  c20400               ret 4
// library xtp-15.2.1/Source\SyntaxEdit\XTPSyntaxEditColorSampleText.cpp (function ?OnEnable@CXTPSyntaxEditColorSampleText@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/SyntaxEdit/XTPSyntaxEditColorSampleText.cpp
