// roc 2008-06 00772bc0  unit: CXTPControlCustom  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00772bc0
//
// 00772bc0  56                   push esi
// 00772bc1  8bf1                 mov esi, ecx
// 00772bc3  c7869001000000000000 mov dword ptr [esi + 0x190], 0
// 00772bcd  e84effffff           call 0x772b20
// 00772bd2  8bce                 mov ecx, esi
// 00772bd4  5e                   pop esi
// 00772bd5  e9a683f3ff           jmp 0x6aaf80
// library xtp-11.2.2/Source\CommandBars\XTPControlCustom.cpp (function ?OnRemoved@CXTPControlCustom@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlCustom.cpp
