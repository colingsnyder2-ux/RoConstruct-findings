// roc 2008-06 004d0c30  unit: RBX::Network::PhysicsSender  size: 297 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d0c30
//
// 004d0c30  6aff                 push -1
// 004d0c32  68889a7c00           push 0x7c9a88
// 004d0c37  64a100000000         mov eax, dword ptr fs:[0]
// 004d0c3d  50                   push eax
// 004d0c3e  64892500000000       mov dword ptr fs:[0], esp
// 004d0c45  83ec14               sub esp, 0x14
// 004d0c48  53                   push ebx
// 004d0c49  55                   push ebp
// 004d0c4a  56                   push esi
// 004d0c4b  8bf1                 mov esi, ecx
// 004d0c4d  33c9                 xor ecx, ecx
// 004d0c4f  b810000000           mov eax, 0x10
// 004d0c54  8944241c             mov dword ptr [esp + 0x1c], eax
// 004d0c58  ba04000000           mov edx, 4
// 004d0c5d  f7e2                 mul edx
// 004d0c5f  0f90c1               seto cl
// 004d0c62  57                   push edi
// 004d0c63  89742410             mov dword ptr [esp + 0x10], esi
// 004d0c67  f7d9                 neg ecx
// 004d0c69  0bc8                 or ecx, eax
// 004d0c6b  51                   push ecx
// 004d0c6c  e8affc1c00           call 0x6a0920
// 004d0c71  89442418             mov dword ptr [esp + 0x18], eax
// 004d0c75  33c0                 xor eax, eax
// 004d0c77  83c404               add esp, 4
// 004d0c7a  89442418             mov dword ptr [esp + 0x18], eax
// 004d0c7e  8944241c             mov dword ptr [esp + 0x1c], eax
// 004d0c82  83c614               add esi, 0x14
// 004d0c85  56                   push esi
// 004d0c86  8d4c2418             lea ecx, [esp + 0x18]
// 004d0c8a  89442430             mov dword ptr [esp + 0x30], eax
// 004d0c8e  e84de1ffff           call 0x4cede0
// 004d0c93  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 004d0c97  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 004d0c9b  eb03                 jmp 0x4d0ca0
// 004d0c9d  8d4900               lea ecx, [ecx]
// 004d0ca0  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004d0ca4  3be8                 cmp ebp, eax
// 004d0ca6  7704                 ja 0x4d0cac
// 004d0ca8  2bc5                 sub eax, ebp
// 004d0caa  eb04                 jmp 0x4d0cb0
// 004d0cac  2bc5                 sub eax, ebp
// 004d0cae  03c3                 add eax, ebx
// 004d0cb0  85c0                 test eax, eax
// 004d0cb2  7479                 je 0x4d0d2d
// 004d0cb4  45                   inc ebp
// 004d0cb5  896c2418             mov dword ptr [esp + 0x18], ebp
// 004d0cb9  3beb                 cmp ebp, ebx
// 004d0cbb  7510                 jne 0x4d0ccd
// 004d0cbd  8b442414             mov eax, dword ptr [esp + 0x14]
// 004d0cc1  8b7498fc             mov esi, dword ptr [eax + ebx*4 - 4]
// 004d0cc5  33ed                 xor ebp, ebp
// 004d0cc7  896c2418             mov dword ptr [esp + 0x18], ebp
// 004d0ccb  eb16                 jmp 0x4d0ce3
// 004d0ccd  85ed                 test ebp, ebp
// 004d0ccf  750a                 jne 0x4d0cdb
// 004d0cd1  8b442414             mov eax, dword ptr [esp + 0x14]
// 004d0cd5  8b7498fc             mov esi, dword ptr [eax + ebx*4 - 4]
// 004d0cd9  eb08                 jmp 0x4d0ce3
// 004d0cdb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004d0cdf  8b74a9fc             mov esi, dword ptr [ecx + ebp*4 - 4]
// 004d0ce3  803e00               cmp byte ptr [esi], 0
// 004d0ce6  7536                 jne 0x4d0d1e
// 004d0ce8  8b5604               mov edx, dword ptr [esi + 4]
// 004d0ceb  42                   inc edx
// 004d0cec  33ff                 xor edi, edi
// 004d0cee  85d2                 test edx, edx
// 004d0cf0  7e2c                 jle 0x4d0d1e
// 004d0cf2  8dae10010000         lea ebp, [esi + 0x110]
// 004d0cf8  eb06                 jmp 0x4d0d00
// 004d0cfa  8d9b00000000         lea ebx, [ebx]
// 004d0d00  55                   push ebp
// 004d0d01  8d4c2418             lea ecx, [esp + 0x18]
// 004d0d05  e8d6e0ffff           call 0x4cede0
// 004d0d0a  8b4604               mov eax, dword ptr [esi + 4]
// 004d0d0d  47                   inc edi
// 004d0d0e  40                   inc eax
// 004d0d0f  83c504               add ebp, 4
// 004d0d12  3bf8                 cmp edi, eax
// 004d0d14  7cea                 jl 0x4d0d00
// 004d0d16  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 004d0d1a  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 004d0d1e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004d0d22  56                   push esi
// 004d0d23  e888eeffff           call 0x4cfbb0
// 004d0d28  e973ffffff           jmp 0x4d0ca0
// 004d0d2d  5f                   pop edi
// 004d0d2e  5e                   pop esi
// 004d0d2f  5d                   pop ebp
// 004d0d30  85db                 test ebx, ebx
// 004d0d32  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 004d0d3a  5b                   pop ebx
// 004d0d3b  760d                 jbe 0x4d0d4a
// 004d0d3d  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004d0d41  51                   push ecx
// 004d0d42  e833f91c00           call 0x6a067a
// 004d0d47  83c404               add esp, 4
// 004d0d4a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004d0d4e  64890d00000000       mov dword ptr fs:[0], ecx
// 004d0d55  83c420               add esp, 0x20
// 004d0d58  c3                   ret 
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?FreePages@?$BPlusTree@IPAUInternalPacket@@$0CA@@DataStructures@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
