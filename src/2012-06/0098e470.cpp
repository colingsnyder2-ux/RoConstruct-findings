// roc 2012-06 0098e470  unit: CXTPEdit  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0098e470
//
// 0098e470  56                   push esi
// 0098e471  8bf1                 mov esi, ecx
// 0098e473  e86642ffff           call 0x9826de
// 0098e478  c7465401000000       mov dword ptr [esi + 0x54], 1
// 0098e47f  5e                   pop esi
// 0098e480  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPControlEdit.cpp (function ?OnImeStartComposition@CXTPCommandBarEditCtrl@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlEdit.cpp
