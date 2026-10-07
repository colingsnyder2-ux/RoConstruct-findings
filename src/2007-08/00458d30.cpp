// roc 2007-08 00458d30  unit: CRobloxWnd  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00458d30
//
// 00458d30  56                   push esi
// 00458d31  8bf1                 mov esi, ecx
// 00458d33  e806751d00           call 0x63023e
// 00458d38  8bce                 mov ecx, esi
// 00458d3a  e8c1feffff           call 0x458c00
// 00458d3f  5e                   pop esi
// 00458d40  c20400               ret 4
// library xtp-11.2.2-vc8/Source\SyntaxEdit\XTPSyntaxEditColorSampleText.cpp (function ?OnEnable@CXTPSyntaxEditColorSampleText@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/SyntaxEdit/XTPSyntaxEditColorSampleText.cpp
