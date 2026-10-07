// roc 2008-06 006a6890  unit: CXTPEdit  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a6890
//
// 006a6890  56                   push esi
// 006a6891  8bf1                 mov esi, ecx
// 006a6893  e8d0a3ffff           call 0x6a0c68
// 006a6898  c7465401000000       mov dword ptr [esi + 0x54], 1
// 006a689f  5e                   pop esi
// 006a68a0  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ?OnImeStartComposition@CXTPEdit@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
