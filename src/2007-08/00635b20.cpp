// roc 2007-08 00635b20  unit: CXTPEdit  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00635b20
//
// 00635b20  56                   push esi
// 00635b21  8bf1                 mov esi, ecx
// 00635b23  e816a7ffff           call 0x63023e
// 00635b28  c7465400000000       mov dword ptr [esi + 0x54], 0
// 00635b2f  5e                   pop esi
// 00635b30  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControlComboBox.cpp (function ?OnImeEndComposition@CXTPEdit@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControlComboBox.cpp
