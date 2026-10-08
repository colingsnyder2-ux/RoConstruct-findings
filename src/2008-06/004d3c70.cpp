// roc 2008-06 004d3c70  unit: seg_004d0000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d3c70
//
// 004d3c70  56                   push esi
// 004d3c71  8bf1                 mov esi, ecx
// 004d3c73  e808ebffff           call 0x4d2780
// 004d3c78  807c240800           cmp byte ptr [esp + 8], 0
// 004d3c7d  7407                 je 0x4d3c86
// 004d3c7f  8bce                 mov ecx, esi
// 004d3c81  e88aadffff           call 0x4cea10
// 004d3c86  5e                   pop esi
// 004d3c87  c20400               ret 4
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?Reset@ReliabilityLayer@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
