// roc 2010-06 00501fa0  unit: RBX::Network::ClientReplicator  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00501fa0
//
// 00501fa0  8b442408             mov eax, dword ptr [esp + 8]
// 00501fa4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00501fa8  3b4104               cmp eax, dword ptr [ecx + 4]
// 00501fab  7d15                 jge 0x501fc2
// 00501fad  8b848114010000       mov eax, dword ptr [ecx + eax*4 + 0x114]
// 00501fb4  83780420             cmp dword ptr [eax + 4], 0x20
// 00501fb8  7d08                 jge 0x501fc2
// 00501fba  b801000000           mov eax, 1
// 00501fbf  c20800               ret 8
// 00501fc2  33c0                 xor eax, eax
// 00501fc4  c20800               ret 8
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?CanRotateRight@?$BPlusTree@IPAUInternalPacket@@$0CA@@DataStructures@@IAE_NPAU?$Page@IPAUInternalPacket@@$0CA@@2@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
