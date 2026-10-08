// roc 2008-06 004cecd0  unit: RBX::Network::PhysicsSender  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004cecd0
//
// 004cecd0  8b8110050000         mov eax, dword ptr [ecx + 0x510]
// 004cecd6  8b9114050000         mov edx, dword ptr [ecx + 0x514]
// 004cecdc  c3                   ret 
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?GetLastTimeBetweenPacketsDecrease@ReliabilityLayer@@QBE_JXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
