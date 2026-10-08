// roc 2007-03 004bec30  unit: seg_004b0000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004bec30
//
// 004bec30  56                   push esi
// 004bec31  8bf1                 mov esi, ecx
// 004bec33  e8b8eaffff           call 0x4bd6f0
// 004bec38  807c240800           cmp byte ptr [esp + 8], 0
// 004bec3d  7407                 je 0x4bec46
// 004bec3f  8bce                 mov ecx, esi
// 004bec41  e8aad4ffff           call 0x4bc0f0
// 004bec46  5e                   pop esi
// 004bec47  c20400               ret 4
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?Reset@ReliabilityLayer@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
