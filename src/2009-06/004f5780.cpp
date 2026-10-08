// roc 2009-06 004f5780  unit: RBX::Network::ClientReplicator  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004f5780
//
// 004f5780  8b442408             mov eax, dword ptr [esp + 8]
// 004f5784  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004f5788  3b4104               cmp eax, dword ptr [ecx + 4]
// 004f578b  7d15                 jge 0x4f57a2
// 004f578d  8b848114010000       mov eax, dword ptr [ecx + eax*4 + 0x114]
// 004f5794  83780420             cmp dword ptr [eax + 4], 0x20
// 004f5798  7d08                 jge 0x4f57a2
// 004f579a  b801000000           mov eax, 1
// 004f579f  c20800               ret 8
// 004f57a2  33c0                 xor eax, eax
// 004f57a4  c20800               ret 8
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?CanRotateRight@?$BPlusTree@IPAUInternalPacket@@$0CA@@DataStructures@@IAE_NPAU?$Page@IPAUInternalPacket@@$0CA@@2@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
