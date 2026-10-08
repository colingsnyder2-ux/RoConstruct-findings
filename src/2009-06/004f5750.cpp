// roc 2009-06 004f5750  unit: RBX::Network::ClientReplicator  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004f5750
//
// 004f5750  8b442408             mov eax, dword ptr [esp + 8]
// 004f5754  85c0                 test eax, eax
// 004f5756  7e19                 jle 0x4f5771
// 004f5758  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004f575c  8b94810c010000       mov edx, dword ptr [ecx + eax*4 + 0x10c]
// 004f5763  837a0420             cmp dword ptr [edx + 4], 0x20
// 004f5767  7d08                 jge 0x4f5771
// 004f5769  b801000000           mov eax, 1
// 004f576e  c20800               ret 8
// 004f5771  33c0                 xor eax, eax
// 004f5773  c20800               ret 8
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?CanRotateLeft@?$BPlusTree@IPAUInternalPacket@@$0CA@@DataStructures@@IAE_NPAU?$Page@IPAUInternalPacket@@$0CA@@2@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
