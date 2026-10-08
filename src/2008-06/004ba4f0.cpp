// roc 2008-06 004ba4f0  unit: RBX::Network::IdSerializer  size: 348 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ba4f0
//
// 004ba4f0  64a100000000         mov eax, dword ptr fs:[0]
// 004ba4f6  6aff                 push -1
// 004ba4f8  681b937c00           push 0x7c931b
// 004ba4fd  50                   push eax
// 004ba4fe  64892500000000       mov dword ptr fs:[0], esp
// 004ba505  81ec20010000         sub esp, 0x120
// 004ba50b  56                   push esi
// 004ba50c  8bf1                 mov esi, ecx
// 004ba50e  807e1400             cmp byte ptr [esi + 0x14], 0
// 004ba512  7410                 je 0x4ba524
// 004ba514  8b4610               mov eax, dword ptr [esi + 0x10]
// 004ba517  8b8c2440010000       mov ecx, dword ptr [esp + 0x140]
// 004ba51e  3bc8                 cmp ecx, eax
// 004ba520  7c02                 jl 0x4ba524
// 004ba522  7435                 je 0x4ba559
// 004ba524  6840a24b00           push 0x4ba240
// 004ba529  8d44240b             lea eax, [esp + 0xb]
// 004ba52d  50                   push eax
// 004ba52e  8d8c2448010000       lea ecx, [esp + 0x148]
// 004ba535  51                   push ecx
// 004ba536  8bce                 mov ecx, esi
// 004ba538  e833550100           call 0x4cfa70
// 004ba53d  807c240700           cmp byte ptr [esp + 7], 0
// 004ba542  0f84ec000000         je 0x4ba634
// 004ba548  8b942440010000       mov edx, dword ptr [esp + 0x140]
// 004ba54f  89460c               mov dword ptr [esi + 0xc], eax
// 004ba552  895610               mov dword ptr [esi + 0x10], edx
// 004ba555  c6461401             mov byte ptr [esi + 0x14], 1
// 004ba559  55                   push ebp
// 004ba55a  8d842444010000       lea eax, [esp + 0x144]
// 004ba561  50                   push eax
// 004ba562  8bce                 mov ecx, esi
// 004ba564  e847feffff           call 0x4ba3b0
// 004ba569  8bb42438010000       mov esi, dword ptr [esp + 0x138]
// 004ba570  8b28                 mov ebp, dword ptr [eax]
// 004ba572  85f6                 test esi, esi
// 004ba574  751e                 jne 0x4ba594
// 004ba576  6a01                 push 1
// 004ba578  6a20                 push 0x20
// 004ba57a  8d4c2414             lea ecx, [esp + 0x14]
// 004ba57e  51                   push ecx
// 004ba57f  8b8c244c010000       mov ecx, dword ptr [esp + 0x14c]
// 004ba586  89742418             mov dword ptr [esp + 0x18], esi
// 004ba58a  e801b2feff           call 0x4a5790
// 004ba58f  e99f000000           jmp 0x4ba633
// 004ba594  57                   push edi
// 004ba595  8d4c2418             lea ecx, [esp + 0x18]
// 004ba599  e8f2aafeff           call 0x4a5090
// 004ba59e  8bbc2440010000       mov edi, dword ptr [esp + 0x140]
// 004ba5a5  c784243401000000000000 mov dword ptr [esp + 0x134], 0
// 004ba5b0  85ff                 test edi, edi
// 004ba5b2  7e1e                 jle 0x4ba5d2
// 004ba5b4  8bc6                 mov eax, esi
// 004ba5b6  8d5001               lea edx, [eax + 1]
// 004ba5b9  8da42400000000       lea esp, [esp]
// 004ba5c0  8a08                 mov cl, byte ptr [eax]
// 004ba5c2  40                   inc eax
// 004ba5c3  84c9                 test cl, cl
// 004ba5c5  75f9                 jne 0x4ba5c0
// 004ba5c7  2bc2                 sub eax, edx
// 004ba5c9  3bc7                 cmp eax, edi
// 004ba5cb  7c05                 jl 0x4ba5d2
// 004ba5cd  8d47ff               lea eax, [edi - 1]
// 004ba5d0  eb0e                 jmp 0x4ba5e0
// 004ba5d2  8bc6                 mov eax, esi
// 004ba5d4  8d5001               lea edx, [eax + 1]
// 004ba5d7  8a08                 mov cl, byte ptr [eax]
// 004ba5d9  40                   inc eax
// 004ba5da  84c9                 test cl, cl
// 004ba5dc  75f9                 jne 0x4ba5d7
// 004ba5de  2bc2                 sub eax, edx
// 004ba5e0  8d542418             lea edx, [esp + 0x18]
// 004ba5e4  52                   push edx
// 004ba5e5  50                   push eax
// 004ba5e6  56                   push esi
// 004ba5e7  8bcd                 mov ecx, ebp
// 004ba5e9  e8523b0100           call 0x4ce140
// 004ba5ee  8b442418             mov eax, dword ptr [esp + 0x18]
// 004ba5f2  8bbc2444010000       mov edi, dword ptr [esp + 0x144]
// 004ba5f9  6a01                 push 1
// 004ba5fb  8bf0                 mov esi, eax
// 004ba5fd  89442418             mov dword ptr [esp + 0x18], eax
// 004ba601  6a20                 push 0x20
// 004ba603  8d44241c             lea eax, [esp + 0x1c]
// 004ba607  50                   push eax
// 004ba608  8bcf                 mov ecx, edi
// 004ba60a  e881b1feff           call 0x4a5790
// 004ba60f  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004ba613  6a01                 push 1
// 004ba615  56                   push esi
// 004ba616  51                   push ecx
// 004ba617  8bcf                 mov ecx, edi
// 004ba619  e8e2affeff           call 0x4a5600
// 004ba61e  8d4c2418             lea ecx, [esp + 0x18]
// 004ba622  c7842434010000ffffffff mov dword ptr [esp + 0x134], 0xffffffff
// 004ba62d  e86eabfeff           call 0x4a51a0
// 004ba632  5f                   pop edi
// 004ba633  5d                   pop ebp
// 004ba634  8b8c2424010000       mov ecx, dword ptr [esp + 0x124]
// 004ba63b  5e                   pop esi
// 004ba63c  64890d00000000       mov dword ptr fs:[0], ecx
// 004ba643  81c42c010000         add esp, 0x12c
// 004ba649  c21000               ret 0x10
// library rbxgs-raknet/StringCompressor.cpp (function ?EncodeString@StringCompressor@@QAEXPBDHPAVBitStream@RakNet@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet StringCompressor.cpp
