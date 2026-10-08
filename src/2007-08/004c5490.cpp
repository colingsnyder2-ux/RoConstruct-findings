// roc 2007-08 004c5490  unit: RakPeer  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c5490
//
// 004c5490  8b442408             mov eax, dword ptr [esp + 8]
// 004c5494  85c0                 test eax, eax
// 004c5496  7e19                 jle 0x4c54b1
// 004c5498  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004c549c  8b94810c010000       mov edx, dword ptr [ecx + eax*4 + 0x10c]
// 004c54a3  837a0420             cmp dword ptr [edx + 4], 0x20
// 004c54a7  7d08                 jge 0x4c54b1
// 004c54a9  b801000000           mov eax, 1
// 004c54ae  c20800               ret 8
// 004c54b1  33c0                 xor eax, eax
// 004c54b3  c20800               ret 8
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?CanRotateLeft@?$BPlusTree@IPAUInternalPacket@@$0CA@@DataStructures@@IAE_NPAU?$Page@IPAUInternalPacket@@$0CA@@2@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
