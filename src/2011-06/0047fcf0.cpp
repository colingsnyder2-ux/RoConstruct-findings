// from server: 100% by auto
// roc 2011-06 0047fcf0  unit: CRobloxView  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0047fcf0
//
// 0047fcf0  56                   push esi
// 0047fcf1  8bf1                 mov esi, ecx
// 0047fcf3  e878fdffff           call 0x47fa70
// 0047fcf8  8bce                 mov ecx, esi
// 0047fcfa  e82fa93800           call 0x80a62e
// 0047fcff  5e                   pop esi
// 0047fd00  c20400               ret 4
// library xtp-15.2.1/Source\SyntaxEdit\XTPSyntaxEditColorSampleText.cpp (function ?OnEnable@CXTPSyntaxEditColorSampleText@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/SyntaxEdit/XTPSyntaxEditColorSampleText.cpp
