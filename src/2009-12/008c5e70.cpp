// roc 2009-12 008c5e70  unit: CXTPControlCustom  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c5e70
//
// 008c5e70  56                   push esi
// 008c5e71  8bf1                 mov esi, ecx
// 008c5e73  c7869001000000000000 mov dword ptr [esi + 0x190], 0
// 008c5e7d  e84effffff           call 0x8c5dd0
// 008c5e82  8bce                 mov ecx, esi
// 008c5e84  5e                   pop esi
// 008c5e85  e9f6fdf2ff           jmp 0x7f5c80
// library xtp-11.2.2/Source\CommandBars\XTPControlCustom.cpp (function ?OnRemoved@CXTPControlCustom@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlCustom.cpp
