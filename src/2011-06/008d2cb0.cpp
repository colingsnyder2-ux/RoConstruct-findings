// roc 2011-06 008d2cb0  unit: CXTPControlCustom  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d2cb0
//
// 008d2cb0  56                   push esi
// 008d2cb1  8bf1                 mov esi, ecx
// 008d2cb3  c7869001000000000000 mov dword ptr [esi + 0x190], 0
// 008d2cbd  e84effffff           call 0x8d2c10
// 008d2cc2  8bce                 mov ecx, esi
// 008d2cc4  5e                   pop esi
// 008d2cc5  e9e697f3ff           jmp 0x80c4b0
// library xtp-11.2.2/Source\CommandBars\XTPControlCustom.cpp (function ?OnRemoved@CXTPControlCustom@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlCustom.cpp
