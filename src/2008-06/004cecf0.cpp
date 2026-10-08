// roc 2008-06 004cecf0  unit: RBX::Network::PhysicsSender  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004cecf0
//
// 004cecf0  8b81f8040000         mov eax, dword ptr [ecx + 0x4f8]
// 004cecf6  8b91fc040000         mov edx, dword ptr [ecx + 0x4fc]
// 004cecfc  c3                   ret 
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?GetAckPing@ReliabilityLayer@@QBE_JXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
