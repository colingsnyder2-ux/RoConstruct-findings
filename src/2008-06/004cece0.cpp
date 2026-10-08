// roc 2008-06 004cece0  unit: RBX::Network::PhysicsSender  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004cece0
//
// 004cece0  8b8108050000         mov eax, dword ptr [ecx + 0x508]
// 004cece6  8b910c050000         mov edx, dword ptr [ecx + 0x50c]
// 004cecec  c3                   ret 
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?GetLastTimeBetweenPacketsIncrease@ReliabilityLayer@@QBE_JXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
