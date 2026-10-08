// roc 2009-06 007eb2e0  unit: CXTPControlCustom  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007eb2e0
//
// 007eb2e0  56                   push esi
// 007eb2e1  8bf1                 mov esi, ecx
// 007eb2e3  c7869001000000000000 mov dword ptr [esi + 0x190], 0
// 007eb2ed  e84effffff           call 0x7eb240
// 007eb2f2  8bce                 mov ecx, esi
// 007eb2f4  5e                   pop esi
// 007eb2f5  e96643f3ff           jmp 0x71f660
// library xtp-11.2.2/Source\CommandBars\XTPControlCustom.cpp (function ?OnRemoved@CXTPControlCustom@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlCustom.cpp
