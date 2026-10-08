// roc 2007-03 004bc2d0  unit: seg_004b0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004bc2d0
//
// 004bc2d0  33c0                 xor eax, eax
// 004bc2d2  3b4120               cmp eax, dword ptr [ecx + 0x20]
// 004bc2d5  1bc0                 sbb eax, eax
// 004bc2d7  f7d8                 neg eax
// 004bc2d9  c3                   ret 
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?AreAcksWaiting@ReliabilityLayer@@QAE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
