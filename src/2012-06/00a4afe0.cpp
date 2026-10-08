// roc 2012-06 00a4afe0  unit: CXTPControlCustom  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4afe0
//
// 00a4afe0  56                   push esi
// 00a4afe1  8bf1                 mov esi, ecx
// 00a4afe3  c7869001000000000000 mov dword ptr [esi + 0x190], 0
// 00a4afed  e84effffff           call 0xa4af40
// 00a4aff2  8bce                 mov ecx, esi
// 00a4aff4  5e                   pop esi
// 00a4aff5  e94697f3ff           jmp 0x984740
// library xtp-11.2.2/Source\CommandBars\XTPControlCustom.cpp (function ?OnRemoved@CXTPControlCustom@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlCustom.cpp
