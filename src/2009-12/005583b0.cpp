// roc 2009-12 005583b0  unit: seg_00550000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005583b0
//
// 005583b0  56                   push esi
// 005583b1  8bf1                 mov esi, ecx
// 005583b3  e8d8e7ffff           call 0x556b90
// 005583b8  807c240800           cmp byte ptr [esp + 8], 0
// 005583bd  7407                 je 0x5583c6
// 005583bf  8bce                 mov ecx, esi
// 005583c1  e84aacffff           call 0x553010
// 005583c6  5e                   pop esi
// 005583c7  c20400               ret 4
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?Reset@ReliabilityLayer@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
