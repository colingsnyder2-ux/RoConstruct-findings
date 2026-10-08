// roc 2007-08 004c54c0  unit: RakPeer  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c54c0
//
// 004c54c0  8b442408             mov eax, dword ptr [esp + 8]
// 004c54c4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004c54c8  3b4104               cmp eax, dword ptr [ecx + 4]
// 004c54cb  7d15                 jge 0x4c54e2
// 004c54cd  8b848114010000       mov eax, dword ptr [ecx + eax*4 + 0x114]
// 004c54d4  83780420             cmp dword ptr [eax + 4], 0x20
// 004c54d8  7d08                 jge 0x4c54e2
// 004c54da  b801000000           mov eax, 1
// 004c54df  c20800               ret 8
// 004c54e2  33c0                 xor eax, eax
// 004c54e4  c20800               ret 8
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?CanRotateRight@?$BPlusTree@IPAUInternalPacket@@$0CA@@DataStructures@@IAE_NPAU?$Page@IPAUInternalPacket@@$0CA@@2@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
