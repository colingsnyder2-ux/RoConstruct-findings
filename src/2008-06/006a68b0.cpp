// roc 2008-06 006a68b0  unit: CXTPEdit  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a68b0
//
// 006a68b0  56                   push esi
// 006a68b1  8bf1                 mov esi, ecx
// 006a68b3  e8b0a3ffff           call 0x6a0c68
// 006a68b8  c7465400000000       mov dword ptr [esi + 0x54], 0
// 006a68bf  5e                   pop esi
// 006a68c0  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ?OnImeEndComposition@CXTPEdit@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
