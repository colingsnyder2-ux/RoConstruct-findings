// roc 2008-06 004d12e0  unit: RBX::Network::PhysicsSender  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d12e0
//
// 004d12e0  53                   push ebx
// 004d12e1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 004d12e5  56                   push esi
// 004d12e6  8bf1                 mov esi, ecx
// 004d12e8  8a4b14               mov cl, byte ptr [ebx + 0x14]
// 004d12eb  80f920               cmp cl, 0x20
// 004d12ee  0f8385000000         jae 0x4d1379
// 004d12f4  0fb6c1               movzx eax, cl
// 004d12f7  57                   push edi
// 004d12f8  8b7e04               mov edi, dword ptr [esi + 4]
// 004d12fb  3bc7                 cmp eax, edi
// 004d12fd  7324                 jae 0x4d1323
// 004d12ff  8b16                 mov edx, dword ptr [esi]
// 004d1301  833c8200             cmp dword ptr [edx + eax*4], 0
// 004d1305  741c                 je 0x4d1323
// 004d1307  8b0482               mov eax, dword ptr [edx + eax*4]
// 004d130a  833800               cmp dword ptr [eax], 0
// 004d130d  7504                 jne 0x4d1313
// 004d130f  8bc8                 mov ecx, eax
// 004d1311  eb4e                 jmp 0x4d1361
// 004d1313  0fb6c1               movzx eax, cl
// 004d1316  3bc7                 cmp eax, edi
// 004d1318  7204                 jb 0x4d131e
// 004d131a  33c9                 xor ecx, ecx
// 004d131c  eb43                 jmp 0x4d1361
// 004d131e  8b0c82               mov ecx, dword ptr [edx + eax*4]
// 004d1321  eb3e                 jmp 0x4d1361
// 004d1323  6a0c                 push 0xc
// 004d1325  e8f6f51c00           call 0x6a0920
// 004d132a  83c404               add esp, 4
// 004d132d  85c0                 test eax, eax
// 004d132f  7416                 je 0x4d1347
// 004d1331  c7400400000000       mov dword ptr [eax + 4], 0
// 004d1338  c7400800000000       mov dword ptr [eax + 8], 0
// 004d133f  c70000000000         mov dword ptr [eax], 0
// 004d1345  eb02                 jmp 0x4d1349
// 004d1347  33c0                 xor eax, eax
// 004d1349  0fb64b14             movzx ecx, byte ptr [ebx + 0x14]
// 004d134d  51                   push ecx
// 004d134e  6a00                 push 0
// 004d1350  50                   push eax
// 004d1351  8bce                 mov ecx, esi
// 004d1353  e8a8d9ffff           call 0x4ced00
// 004d1358  0fb65314             movzx edx, byte ptr [ebx + 0x14]
// 004d135c  8b06                 mov eax, dword ptr [esi]
// 004d135e  8b0c90               mov ecx, dword ptr [eax + edx*4]
// 004d1361  8b4104               mov eax, dword ptr [ecx + 4]
// 004d1364  5f                   pop edi
// 004d1365  85c0                 test eax, eax
// 004d1367  7406                 je 0x4d136f
// 004d1369  8b5004               mov edx, dword ptr [eax + 4]
// 004d136c  895108               mov dword ptr [ecx + 8], edx
// 004d136f  8d44240c             lea eax, [esp + 0xc]
// 004d1373  50                   push eax
// 004d1374  e857cbffff           call 0x4cded0
// 004d1379  5e                   pop esi
// 004d137a  5b                   pop ebx
// 004d137b  c20400               ret 4
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?AddToOrderingList@ReliabilityLayer@@AAEXPAUInternalPacket@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
