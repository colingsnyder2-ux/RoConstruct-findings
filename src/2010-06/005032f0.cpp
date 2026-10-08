// roc 2010-06 005032f0  unit: RBX::Network::ClientReplicator  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005032f0
//
// 005032f0  33c0                 xor eax, eax
// 005032f2  3b4120               cmp eax, dword ptr [ecx + 0x20]
// 005032f5  1bc0                 sbb eax, eax
// 005032f7  f7d8                 neg eax
// 005032f9  c3                   ret 
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?AreAcksWaiting@ReliabilityLayer@@QAE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
