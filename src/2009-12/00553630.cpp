// roc 2009-12 00553630  unit: RBX::Network::ClientReplicator  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00553630
//
// 00553630  8b442408             mov eax, dword ptr [esp + 8]
// 00553634  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00553638  3b4104               cmp eax, dword ptr [ecx + 4]
// 0055363b  7d15                 jge 0x553652
// 0055363d  8b848114010000       mov eax, dword ptr [ecx + eax*4 + 0x114]
// 00553644  83780420             cmp dword ptr [eax + 4], 0x20
// 00553648  7d08                 jge 0x553652
// 0055364a  b801000000           mov eax, 1
// 0055364f  c20800               ret 8
// 00553652  33c0                 xor eax, eax
// 00553654  c20800               ret 8
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?CanRotateRight@?$BPlusTree@IPAUInternalPacket@@$0CA@@DataStructures@@IAE_NPAU?$Page@IPAUInternalPacket@@$0CA@@2@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
