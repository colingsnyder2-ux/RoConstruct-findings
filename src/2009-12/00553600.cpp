// roc 2009-12 00553600  unit: RBX::Network::ClientReplicator  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00553600
//
// 00553600  8b442408             mov eax, dword ptr [esp + 8]
// 00553604  85c0                 test eax, eax
// 00553606  7e19                 jle 0x553621
// 00553608  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0055360c  8b94810c010000       mov edx, dword ptr [ecx + eax*4 + 0x10c]
// 00553613  837a0420             cmp dword ptr [edx + 4], 0x20
// 00553617  7d08                 jge 0x553621
// 00553619  b801000000           mov eax, 1
// 0055361e  c20800               ret 8
// 00553621  33c0                 xor eax, eax
// 00553623  c20800               ret 8
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?CanRotateLeft@?$BPlusTree@IPAUInternalPacket@@$0CA@@DataStructures@@IAE_NPAU?$Page@IPAUInternalPacket@@$0CA@@2@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
