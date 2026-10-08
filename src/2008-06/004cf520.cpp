// roc 2008-06 004cf520  unit: RBX::Network::PhysicsSender  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004cf520
//
// 004cf520  8b442408             mov eax, dword ptr [esp + 8]
// 004cf524  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004cf528  3b4104               cmp eax, dword ptr [ecx + 4]
// 004cf52b  7d15                 jge 0x4cf542
// 004cf52d  8b848114010000       mov eax, dword ptr [ecx + eax*4 + 0x114]
// 004cf534  83780420             cmp dword ptr [eax + 4], 0x20
// 004cf538  7d08                 jge 0x4cf542
// 004cf53a  b801000000           mov eax, 1
// 004cf53f  c20800               ret 8
// 004cf542  33c0                 xor eax, eax
// 004cf544  c20800               ret 8
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?CanRotateRight@?$BPlusTree@IPAUInternalPacket@@$0CA@@DataStructures@@IAE_NPAU?$Page@IPAUInternalPacket@@$0CA@@2@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
