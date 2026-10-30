// roc 2009-12 00698ae0  unit: RBX::$$A6AXABVHeartbeat::?$signal::slot  size: 260 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00698ae0
//
// 00698ae0  6aff                 push -1
// 00698ae2  6828799400           push 0x947928
// 00698ae7  64a100000000         mov eax, dword ptr fs:[0]
// 00698aed  50                   push eax
// 00698aee  64892500000000       mov dword ptr fs:[0], esp
// 00698af5  83ec18               sub esp, 0x18
// 00698af8  53                   push ebx
// 00698af9  56                   push esi
// 00698afa  57                   push edi
// 00698afb  8bf1                 mov esi, ecx
// 00698afd  8b7e10               mov edi, dword ptr [esi + 0x10]
// 00698b00  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00698b03  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00698b07  8bc7                 mov eax, edi
// 00698b09  2bc1                 sub eax, ecx
// 00698b0b  c1f803               sar eax, 3
// 00698b0e  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 00698b16  3bd8                 cmp ebx, eax
// 00698b18  7628                 jbe 0x698b42
// 00698b1a  3bcf                 cmp ecx, edi
// 00698b1c  7606                 jbe 0x698b24
// 00698b1e  ff1560b79800         call dword ptr [0x98b760]
// 00698b24  8b5610               mov edx, dword ptr [esi + 0x10]
// 00698b27  2b560c               sub edx, dword ptr [esi + 0xc]
// 00698b2a  8b06                 mov eax, dword ptr [esi]
// 00698b2c  8d4c2438             lea ecx, [esp + 0x38]
// 00698b30  51                   push ecx
// 00698b31  c1fa03               sar edx, 3
// 00698b34  2bda                 sub ebx, edx
// 00698b36  53                   push ebx
// 00698b37  57                   push edi
// 00698b38  50                   push eax
// 00698b39  8bce                 mov ecx, esi
// 00698b3b  e880770b00           call 0x7502c0
// 00698b40  eb54                 jmp 0x698b96
// 00698b42  7352                 jae 0x698b96
// 00698b44  3bcf                 cmp ecx, edi
// 00698b46  7606                 jbe 0x698b4e
// 00698b48  ff1560b79800         call dword ptr [0x98b760]
// 00698b4e  8b06                 mov eax, dword ptr [esi]
// 00698b50  55                   push ebp
// 00698b51  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 00698b54  89442418             mov dword ptr [esp + 0x18], eax
// 00698b58  3b6e10               cmp ebp, dword ptr [esi + 0x10]
// 00698b5b  7606                 jbe 0x698b63
// 00698b5d  ff1560b79800         call dword ptr [0x98b760]
// 00698b63  8b0e                 mov ecx, dword ptr [esi]
// 00698b65  53                   push ebx
// 00698b66  8d542424             lea edx, [esp + 0x24]
// 00698b6a  894c2414             mov dword ptr [esp + 0x14], ecx
// 00698b6e  52                   push edx
// 00698b6f  8d4c2418             lea ecx, [esp + 0x18]
// 00698b73  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00698b77  e84452e2ff           call 0x4bddc0
// 00698b7c  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00698b80  8b5004               mov edx, dword ptr [eax + 4]
// 00698b83  8b00                 mov eax, dword ptr [eax]
// 00698b85  57                   push edi
// 00698b86  51                   push ecx
// 00698b87  52                   push edx
// 00698b88  50                   push eax
// 00698b89  8d4c2428             lea ecx, [esp + 0x28]
// 00698b8d  51                   push ecx
// 00698b8e  8bce                 mov ecx, esi
// 00698b90  e8ebbf0000           call 0x6a4b80
// 00698b95  5d                   pop ebp
// 00698b96  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 00698b9a  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 00698ba2  85f6                 test esi, esi
// 00698ba4  742a                 je 0x698bd0
// 00698ba6  8d5604               lea edx, [esi + 4]
// 00698ba9  83c8ff               or eax, 0xffffffff
// 00698bac  f00fc102             lock xadd dword ptr [edx], eax
// 00698bb0  751e                 jne 0x698bd0
// 00698bb2  8b16                 mov edx, dword ptr [esi]
// 00698bb4  8b4204               mov eax, dword ptr [edx + 4]
// 00698bb7  8bce                 mov ecx, esi
// 00698bb9  ffd0                 call eax
// 00698bbb  8d4e08               lea ecx, [esi + 8]
// 00698bbe  83caff               or edx, 0xffffffff
// 00698bc1  f00fc111             lock xadd dword ptr [ecx], edx
// 00698bc5  7509                 jne 0x698bd0
// 00698bc7  8b06                 mov eax, dword ptr [esi]
// 00698bc9  8b5008               mov edx, dword ptr [eax + 8]
// 00698bcc  8bce                 mov ecx, esi
// 00698bce  ffd2                 call edx
// 00698bd0  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00698bd4  5f                   pop edi
// 00698bd5  5e                   pop esi
// 00698bd6  5b                   pop ebx
// 00698bd7  64890d00000000       mov dword ptr fs:[0], ecx
// 00698bde  83c424               add esp, 0x24
// 00698be1  c20c00               ret 0xc
// copied from an identical function in another client (function ?resize@?$vector@V?$shared_ptr@UT@@@boost@@V?$allocator@V?$shared_ptr@UT@@@boost@@@std@@@std@@QAEXIV?$shared_ptr@UT@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll vector_sp.cpp