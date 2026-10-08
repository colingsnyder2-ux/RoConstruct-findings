// roc 2009-06 004fa600  unit: seg_004f0000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004fa600
//
// 004fa600  56                   push esi
// 004fa601  8bf1                 mov esi, ecx
// 004fa603  e8d8e7ffff           call 0x4f8de0
// 004fa608  807c240800           cmp byte ptr [esp + 8], 0
// 004fa60d  7407                 je 0x4fa616
// 004fa60f  8bce                 mov ecx, esi
// 004fa611  e8baaaffff           call 0x4f50d0
// 004fa616  5e                   pop esi
// 004fa617  c20400               ret 4
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?Reset@ReliabilityLayer@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
