// roc 2009-12 0084f390  unit: PAVCXTPPropertyGridVerb::?$CArray  size: 692 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084f390
//
// 0084f390  6aff                 push -1
// 0084f392  6860d79500           push 0x95d760
// 0084f397  64a100000000         mov eax, dword ptr fs:[0]
// 0084f39d  50                   push eax
// 0084f39e  83ec48               sub esp, 0x48
// 0084f3a1  a10052b600           mov eax, dword ptr [0xb65200]
// 0084f3a6  33c4                 xor eax, esp
// 0084f3a8  89442444             mov dword ptr [esp + 0x44], eax
// 0084f3ac  53                   push ebx
// 0084f3ad  55                   push ebp
// 0084f3ae  56                   push esi
// 0084f3af  57                   push edi
// 0084f3b0  a10052b600           mov eax, dword ptr [0xb65200]
// 0084f3b5  33c4                 xor eax, esp
// 0084f3b7  50                   push eax
// 0084f3b8  8d44245c             lea eax, [esp + 0x5c]
// 0084f3bc  64a300000000         mov dword ptr fs:[0], eax
// 0084f3c2  8bf1                 mov esi, ecx
// 0084f3c4  89742418             mov dword ptr [esp + 0x18], esi
// 0084f3c8  e87b4dfaff           call 0x7f4148
// 0084f3cd  33db                 xor ebx, ebx
// 0084f3cf  bf01000000           mov edi, 1
// 0084f3d4  8d4e70               lea ecx, [esi + 0x70]
// 0084f3d7  895c2464             mov dword ptr [esp + 0x64], ebx
// 0084f3db  c70644be9f00         mov dword ptr [esi], 0x9fbe44
// 0084f3e1  c746543a000000       mov dword ptr [esi + 0x54], 0x3a
// 0084f3e8  897e60               mov dword ptr [esi + 0x60], edi
// 0084f3eb  895e6c               mov dword ptr [esi + 0x6c], ebx
// 0084f3ee  e83de5ffff           call 0x84d930
// 0084f3f3  53                   push ebx
// 0084f3f4  8bce                 mov ecx, esi
// 0084f3f6  c644246801           mov byte ptr [esp + 0x68], 1
// 0084f3fb  89be5c010000         mov dword ptr [esi + 0x15c], edi
// 0084f401  e85ae5ffff           call 0x84d960
// 0084f406  899e4c010000         mov dword ptr [esi + 0x14c], ebx
// 0084f40c  e88ff40100           call 0x86e8a0
// 0084f411  8b10                 mov edx, dword ptr [eax]
// 0084f413  8bc8                 mov ecx, eax
// 0084f415  8b4218               mov eax, dword ptr [edx + 0x18]
// 0084f418  68f3260000           push 0x26f3
// 0084f41d  ffd0                 call eax
// 0084f41f  89862c010000         mov dword ptr [esi + 0x12c], eax
// 0084f425  e8f446faff           call 0x7f3b1e
// 0084f42a  68897f0000           push 0x7f89
// 0084f42f  53                   push ebx
// 0084f430  ff1548ca9800         call dword ptr [0x98ca48]
// 0084f436  898630010000         mov dword ptr [esi + 0x130], eax
// 0084f43c  3bc3                 cmp eax, ebx
// 0084f43e  7519                 jne 0x84f459
// 0084f440  e85bf40100           call 0x86e8a0
// 0084f445  8b10                 mov edx, dword ptr [eax]
// 0084f447  8bc8                 mov ecx, eax
// 0084f449  8b4218               mov eax, dword ptr [edx + 0x18]
// 0084f44c  68f5260000           push 0x26f5
// 0084f451  ffd0                 call eax
// 0084f453  898630010000         mov dword ptr [esi + 0x130], eax
// 0084f459  6a78                 push 0x78
// 0084f45b  e80044faff           call 0x7f3860
// 0084f460  83c404               add esp, 4
// 0084f463  89442414             mov dword ptr [esp + 0x14], eax
// 0084f467  c644246402           mov byte ptr [esp + 0x64], 2
// 0084f46c  3bc3                 cmp eax, ebx
// 0084f46e  740a                 je 0x84f47a
// 0084f470  56                   push esi
// 0084f471  8bc8                 mov ecx, eax
// 0084f473  e878a60700           call 0x8c9af0
// 0084f478  eb02                 jmp 0x84f47c
// 0084f47a  33c0                 xor eax, eax
// 0084f47c  898644010000         mov dword ptr [esi + 0x144], eax
// 0084f482  8b10                 mov edx, dword ptr [eax]
// 0084f484  8bc8                 mov ecx, eax
// 0084f486  8b4234               mov eax, dword ptr [edx + 0x34]
// 0084f489  c644246401           mov byte ptr [esp + 0x64], 1
// 0084f48e  ffd0                 call eax
// 0084f490  6a38                 push 0x38
// 0084f492  899e40010000         mov dword ptr [esi + 0x140], ebx
// 0084f498  e8c343faff           call 0x7f3860
// 0084f49d  83c404               add esp, 4
// 0084f4a0  89442414             mov dword ptr [esp + 0x14], eax
// 0084f4a4  c644246403           mov byte ptr [esp + 0x64], 3
// 0084f4a9  3bc3                 cmp eax, ebx
// 0084f4ab  7409                 je 0x84f4b6
// 0084f4ad  8bc8                 mov ecx, eax
// 0084f4af  e8fcfdffff           call 0x84f2b0
// 0084f4b4  eb02                 jmp 0x84f4b8
// 0084f4b6  33c0                 xor eax, eax
// 0084f4b8  53                   push ebx
// 0084f4b9  8d4c2420             lea ecx, [esp + 0x20]
// 0084f4bd  51                   push ecx
// 0084f4be  6a3c                 push 0x3c
// 0084f4c0  898638010000         mov dword ptr [esi + 0x138], eax
// 0084f4c6  897034               mov dword ptr [eax + 0x34], esi
// 0084f4c9  6a1f                 push 0x1f
// 0084f4cb  c644247401           mov byte ptr [esp + 0x74], 1
// 0084f4d0  c7465819000000       mov dword ptr [esi + 0x58], 0x19
// 0084f4d7  c78648010000ffffffff mov dword ptr [esi + 0x148], 0xffffffff
// 0084f4e1  899e80010000         mov dword ptr [esi + 0x180], ebx
// 0084f4e7  899e3c010000         mov dword ptr [esi + 0x13c], ebx
// 0084f4ed  897e64               mov dword ptr [esi + 0x64], edi
// 0084f4f0  899e34010000         mov dword ptr [esi + 0x134], ebx
// 0084f4f6  899e58010000         mov dword ptr [esi + 0x158], ebx
// 0084f4fc  c7868401000002000000 mov dword ptr [esi + 0x184], 2
// 0084f506  899e68010000         mov dword ptr [esi + 0x168], ebx
// 0084f50c  ff1500cc9800         call dword ptr [0x98cc00]
// 0084f512  8b9644010000         mov edx, dword ptr [esi + 0x144]
// 0084f518  8b2d28b19800         mov ebp, dword ptr [0x98b128]
// 0084f51e  8d44241c             lea eax, [esp + 0x1c]
// 0084f522  c744242c90010000     mov dword ptr [esp + 0x2c], 0x190
// 0084f52a  885c2430             mov byte ptr [esp + 0x30], bl
// 0084f52e  8b7a74               mov edi, dword ptr [edx + 0x74]
// 0084f531  50                   push eax
// 0084f532  ffd5                 call ebp
// 0084f534  50                   push eax
// 0084f535  8d4f20               lea ecx, [edi + 0x20]
// 0084f538  e8ed48faff           call 0x7f3e2a
// 0084f53d  8b8e44010000         mov ecx, dword ptr [esi + 0x144]
// 0084f543  8d54241c             lea edx, [esp + 0x1c]
// 0084f547  c744242cbc020000     mov dword ptr [esp + 0x2c], 0x2bc
// 0084f54f  8b7974               mov edi, dword ptr [ecx + 0x74]
// 0084f552  52                   push edx
// 0084f553  ffd5                 call ebp
// 0084f555  50                   push eax
// 0084f556  8d4f28               lea ecx, [edi + 0x28]
// 0084f559  e8cc48faff           call 0x7f3e2a
// 0084f55e  6a7c                 push 0x7c
// 0084f560  899e50010000         mov dword ptr [esi + 0x150], ebx
// 0084f566  e8f542faff           call 0x7f3860
// 0084f56b  83c404               add esp, 4
// 0084f56e  89442414             mov dword ptr [esp + 0x14], eax
// 0084f572  c644246404           mov byte ptr [esp + 0x64], 4
// 0084f577  3bc3                 cmp eax, ebx
// 0084f579  7409                 je 0x84f584
// 0084f57b  8bc8                 mov ecx, eax
// 0084f57d  e89ed2fbff           call 0x80c820
// 0084f582  eb02                 jmp 0x84f586
// 0084f584  33c0                 xor eax, eax
// 0084f586  68bc000000           push 0xbc
// 0084f58b  c644246801           mov byte ptr [esp + 0x68], 1
// 0084f590  898654010000         mov dword ptr [esi + 0x154], eax
// 0084f596  e8c542faff           call 0x7f3860
// 0084f59b  83c404               add esp, 4
// 0084f59e  89442414             mov dword ptr [esp + 0x14], eax
// 0084f5a2  c644246405           mov byte ptr [esp + 0x64], 5
// 0084f5a7  3bc3                 cmp eax, ebx
// 0084f5a9  7409                 je 0x84f5b4
// 0084f5ab  8bc8                 mov ecx, eax
// 0084f5ad  e8be830700           call 0x8c7970
// 0084f5b2  eb02                 jmp 0x84f5b6
// 0084f5b4  33c0                 xor eax, eax
// 0084f5b6  6a58                 push 0x58
// 0084f5b8  c644246801           mov byte ptr [esp + 0x68], 1
// 0084f5bd  898660010000         mov dword ptr [esi + 0x160], eax
// 0084f5c3  e89842faff           call 0x7f3860
// 0084f5c8  83c404               add esp, 4
// 0084f5cb  89442414             mov dword ptr [esp + 0x14], eax
// 0084f5cf  c644246406           mov byte ptr [esp + 0x64], 6
// 0084f5d4  3bc3                 cmp eax, ebx
// 0084f5d6  7409                 je 0x84f5e1
// 0084f5d8  8bc8                 mov ecx, eax
// 0084f5da  e841e10700           call 0x8cd720
// 0084f5df  eb02                 jmp 0x84f5e3
// 0084f5e1  33c0                 xor eax, eax
// 0084f5e3  68a8000000           push 0xa8
// 0084f5e8  c644246801           mov byte ptr [esp + 0x68], 1
// 0084f5ed  898664010000         mov dword ptr [esi + 0x164], eax
// 0084f5f3  c7466801000000       mov dword ptr [esi + 0x68], 1
// 0084f5fa  e86142faff           call 0x7f3860
// 0084f5ff  83c404               add esp, 4
// 0084f602  89442414             mov dword ptr [esp + 0x14], eax
// 0084f606  c644246407           mov byte ptr [esp + 0x64], 7
// 0084f60b  3bc3                 cmp eax, ebx
// 0084f60d  7409                 je 0x84f618
// 0084f60f  8bc8                 mov ecx, eax
// 0084f611  e8da230100           call 0x8619f0
// 0084f616  eb02                 jmp 0x84f61a
// 0084f618  33c0                 xor eax, eax
// 0084f61a  89866c010000         mov dword ptr [esi + 0x16c], eax
// 0084f620  895e5c               mov dword ptr [esi + 0x5c], ebx
// 0084f623  8bc6                 mov eax, esi
// 0084f625  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0084f629  64890d00000000       mov dword ptr fs:[0], ecx
// 0084f630  59                   pop ecx
// 0084f631  5f                   pop edi
// 0084f632  5e                   pop esi
// 0084f633  5d                   pop ebp
// 0084f634  5b                   pop ebx
// 0084f635  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0084f639  33cc                 xor ecx, esp
// 0084f63b  e85a5dfaff           call 0x7f539a
// 0084f640  83c454               add esp, 0x54
// 0084f643  c3                   ret 
// copied from an identical function in another client (function ??0CXTPPropertyGrid@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\PropertyGrid\XTPPropertyGrid.cpp