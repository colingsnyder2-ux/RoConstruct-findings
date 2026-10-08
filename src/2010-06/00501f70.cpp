// roc 2010-06 00501f70  unit: RBX::Network::ClientReplicator  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00501f70
//
// 00501f70  8b442408             mov eax, dword ptr [esp + 8]
// 00501f74  85c0                 test eax, eax
// 00501f76  7e19                 jle 0x501f91
// 00501f78  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00501f7c  8b94810c010000       mov edx, dword ptr [ecx + eax*4 + 0x10c]
// 00501f83  837a0420             cmp dword ptr [edx + 4], 0x20
// 00501f87  7d08                 jge 0x501f91
// 00501f89  b801000000           mov eax, 1
// 00501f8e  c20800               ret 8
// 00501f91  33c0                 xor eax, eax
// 00501f93  c20800               ret 8
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?CanRotateLeft@?$BPlusTree@IPAUInternalPacket@@$0CA@@DataStructures@@IAE_NPAU?$Page@IPAUInternalPacket@@$0CA@@2@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
