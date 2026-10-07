// roc 2008-06 0045bf60  unit: CRobloxWnd  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045bf60
//
// 0045bf60  56                   push esi
// 0045bf61  8bf1                 mov esi, ecx
// 0045bf63  e8004d2400           call 0x6a0c68
// 0045bf68  8bce                 mov ecx, esi
// 0045bf6a  e841ffffff           call 0x45beb0
// 0045bf6f  5e                   pop esi
// 0045bf70  c20400               ret 4
// library xtp-11.2.2/Source\SyntaxEdit\XTPSyntaxEditColorSampleText.cpp (function ?OnEnable@CXTPSyntaxEditColorSampleText@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/SyntaxEdit/XTPSyntaxEditColorSampleText.cpp
