// roc 2010-06 00506e10  unit: seg_00500000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00506e10
//
// 00506e10  56                   push esi
// 00506e11  8bf1                 mov esi, ecx
// 00506e13  e8d8e7ffff           call 0x5055f0
// 00506e18  807c240800           cmp byte ptr [esp + 8], 0
// 00506e1d  7407                 je 0x506e26
// 00506e1f  8bce                 mov ecx, esi
// 00506e21  e8eaaaffff           call 0x501910
// 00506e26  5e                   pop esi
// 00506e27  c20400               ret 4
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?Reset@ReliabilityLayer@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
