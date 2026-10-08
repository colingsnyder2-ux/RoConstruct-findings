// roc 2008-06 004d0620  unit: RBX::Network::PhysicsSender  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d0620
//
// 004d0620  33c0                 xor eax, eax
// 004d0622  3b4120               cmp eax, dword ptr [ecx + 0x20]
// 004d0625  1bc0                 sbb eax, eax
// 004d0627  f7d8                 neg eax
// 004d0629  c3                   ret 
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?AreAcksWaiting@ReliabilityLayer@@QAE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
