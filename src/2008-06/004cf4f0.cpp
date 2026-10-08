// roc 2008-06 004cf4f0  unit: RBX::Network::PhysicsSender  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004cf4f0
//
// 004cf4f0  8b442408             mov eax, dword ptr [esp + 8]
// 004cf4f4  85c0                 test eax, eax
// 004cf4f6  7e19                 jle 0x4cf511
// 004cf4f8  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004cf4fc  8b94810c010000       mov edx, dword ptr [ecx + eax*4 + 0x10c]
// 004cf503  837a0420             cmp dword ptr [edx + 4], 0x20
// 004cf507  7d08                 jge 0x4cf511
// 004cf509  b801000000           mov eax, 1
// 004cf50e  c20800               ret 8
// 004cf511  33c0                 xor eax, eax
// 004cf513  c20800               ret 8
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?CanRotateLeft@?$BPlusTree@IPAUInternalPacket@@$0CA@@DataStructures@@IAE_NPAU?$Page@IPAUInternalPacket@@$0CA@@2@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
