// from server: 100% by auto
// roc 2012-06 0098e490  unit: CXTPEdit  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0098e490
//
// 0098e490  56                   push esi
// 0098e491  8bf1                 mov esi, ecx
// 0098e493  e84642ffff           call 0x9826de
// 0098e498  c7465400000000       mov dword ptr [esi + 0x54], 0
// 0098e49f  5e                   pop esi
// 0098e4a0  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPControlEdit.cpp (function ?OnImeEndComposition@CXTPCommandBarEditCtrl@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlEdit.cpp
