// roc 2007-08 004c7640  unit: RakPeer  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c7640
//
// 004c7640  33c0                 xor eax, eax
// 004c7642  3b4120               cmp eax, dword ptr [ecx + 0x20]
// 004c7645  1bc0                 sbb eax, eax
// 004c7647  f7d8                 neg eax
// 004c7649  c3                   ret 
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?AreAcksWaiting@ReliabilityLayer@@QAE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
