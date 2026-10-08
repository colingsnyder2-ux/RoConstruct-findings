// roc 2007-08 004c9e00  unit: seg_004c0000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c9e00
//
// 004c9e00  56                   push esi
// 004c9e01  8bf1                 mov esi, ecx
// 004c9e03  e898ecffff           call 0x4c8aa0
// 004c9e08  807c240800           cmp byte ptr [esp + 8], 0
// 004c9e0d  7407                 je 0x4c9e16
// 004c9e0f  8bce                 mov ecx, esi
// 004c9e11  e83ac8ffff           call 0x4c6650
// 004c9e16  5e                   pop esi
// 004c9e17  c20400               ret 4
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?Reset@ReliabilityLayer@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
