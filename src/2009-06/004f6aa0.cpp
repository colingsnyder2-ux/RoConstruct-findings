// roc 2009-06 004f6aa0  unit: RBX::Network::ClientReplicator  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004f6aa0
//
// 004f6aa0  33c0                 xor eax, eax
// 004f6aa2  3b4120               cmp eax, dword ptr [ecx + 0x20]
// 004f6aa5  1bc0                 sbb eax, eax
// 004f6aa7  f7d8                 neg eax
// 004f6aa9  c3                   ret 
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?AreAcksWaiting@ReliabilityLayer@@QAE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
