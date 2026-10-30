// roc 2009-12 0086a390  unit: CXTPPropertyGridToolTip  size: 604 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086a390
//
// 0086a390  6aff                 push -1
// 0086a392  68d0f49500           push 0x95f4d0
// 0086a397  64a100000000         mov eax, dword ptr fs:[0]
// 0086a39d  50                   push eax
// 0086a39e  83ec38               sub esp, 0x38
// 0086a3a1  53                   push ebx
// 0086a3a2  55                   push ebp
// 0086a3a3  56                   push esi
// 0086a3a4  57                   push edi
// 0086a3a5  a10052b600           mov eax, dword ptr [0xb65200]
// 0086a3aa  33c4                 xor eax, esp
// 0086a3ac  50                   push eax
// 0086a3ad  8d44244c             lea eax, [esp + 0x4c]
// 0086a3b1  64a300000000         mov dword ptr fs:[0], eax
// 0086a3b7  8bf1                 mov esi, ecx
// 0086a3b9  83be4801000000       cmp dword ptr [esi + 0x148], 0
// 0086a3c0  7e0f                 jle 0x86a3d1
// 0086a3c2  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 0086a3c6  8986dc000000         mov dword ptr [esi + 0xdc], eax
// 0086a3cc  e905020000           jmp 0x86a5d6
// 0086a3d1  8b5c245c             mov ebx, dword ptr [esp + 0x5c]
// 0086a3d5  8b7c2460             mov edi, dword ptr [esp + 0x60]
// 0086a3d9  3b9edc000000         cmp ebx, dword ptr [esi + 0xdc]
// 0086a3df  7508                 jne 0x86a3e9
// 0086a3e1  85ff                 test edi, edi
// 0086a3e3  0f84ed010000         je 0x86a5d6
// 0086a3e9  8b4620               mov eax, dword ptr [esi + 0x20]
// 0086a3ec  85c0                 test eax, eax
// 0086a3ee  0f84e2010000         je 0x86a5d6
// 0086a3f4  837c246400           cmp dword ptr [esp + 0x64], 0
// 0086a3f9  8b2dc4cb9800         mov ebp, dword ptr [0x98cbc4]
// 0086a3ff  7409                 je 0x86a40a
// 0086a401  6a00                 push 0
// 0086a403  6a00                 push 0
// 0086a405  6a0b                 push 0xb
// 0086a407  50                   push eax
// 0086a408  ffd5                 call ebp
// 0086a40a  85ff                 test edi, edi
// 0086a40c  741d                 je 0x86a42b
// 0086a40e  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0086a411  6a00                 push 0
// 0086a413  6a00                 push 0
// 0086a415  688e010000           push 0x18e
// 0086a41a  51                   push ecx
// 0086a41b  ffd5                 call ebp
// 0086a41d  50                   push eax
// 0086a41e  8bce                 mov ecx, esi
// 0086a420  e8dbe5ffff           call 0x868a00
// 0086a425  89442460             mov dword ptr [esp + 0x60], eax
// 0086a429  eb08                 jmp 0x86a433
// 0086a42b  c744246000000000     mov dword ptr [esp + 0x60], 0
// 0086a433  8bce                 mov ecx, esi
// 0086a435  e806e9ffff           call 0x868d40
// 0086a43a  8bce                 mov ecx, esi
// 0086a43c  89442414             mov dword ptr [esp + 0x14], eax
// 0086a440  e8bbe0ffff           call 0x868500
// 0086a445  85db                 test ebx, ebx
// 0086a447  7552                 jne 0x86a49b
// 0086a449  8b96e4000000         mov edx, dword ptr [esi + 0xe4]
// 0086a44f  33ff                 xor edi, edi
// 0086a451  397a28               cmp dword ptr [edx + 0x28], edi
// 0086a454  0f8e09010000         jle 0x86a563
// 0086a45a  8d9b00000000         lea ebx, [ebx]
// 0086a460  8b8ee4000000         mov ecx, dword ptr [esi + 0xe4]
// 0086a466  57                   push edi
// 0086a467  e8b4b7ffff           call 0x865c20
// 0086a46c  6a00                 push 0
// 0086a46e  6a00                 push 0
// 0086a470  8bd8                 mov ebx, eax
// 0086a472  8b4620               mov eax, dword ptr [esi + 0x20]
// 0086a475  688b010000           push 0x18b
// 0086a47a  50                   push eax
// 0086a47b  ffd5                 call ebp
// 0086a47d  50                   push eax
// 0086a47e  53                   push ebx
// 0086a47f  8bce                 mov ecx, esi
// 0086a481  e82ae3ffff           call 0x8687b0
// 0086a486  8b8ee4000000         mov ecx, dword ptr [esi + 0xe4]
// 0086a48c  47                   inc edi
// 0086a48d  3b7928               cmp edi, dword ptr [ecx + 0x28]
// 0086a490  7cce                 jl 0x86a460
// 0086a492  8b5c245c             mov ebx, dword ptr [esp + 0x5c]
// 0086a496  e9c8000000           jmp 0x86a563
// 0086a49b  83fb01               cmp ebx, 1
// 0086a49e  7409                 je 0x86a4a9
// 0086a4a0  83fb02               cmp ebx, 2
// 0086a4a3  0f85ba000000         jne 0x86a563
// 0086a4a9  8d4c2418             lea ecx, [esp + 0x18]
// 0086a4ad  e89ebeffff           call 0x866350
// 0086a4b2  8b96e4000000         mov edx, dword ptr [esi + 0xe4]
// 0086a4b8  33ff                 xor edi, edi
// 0086a4ba  397a28               cmp dword ptr [edx + 0x28], edi
// 0086a4bd  897c2454             mov dword ptr [esp + 0x54], edi
// 0086a4c1  7e39                 jle 0x86a4fc
// 0086a4c3  8b8ee4000000         mov ecx, dword ptr [esi + 0xe4]
// 0086a4c9  57                   push edi
// 0086a4ca  e851b7ffff           call 0x865c20
// 0086a4cf  8bd8                 mov ebx, eax
// 0086a4d1  8bcb                 mov ecx, ebx
// 0086a4d3  e808a4ffff           call 0x8648e0
// 0086a4d8  85c0                 test eax, eax
// 0086a4da  7510                 jne 0x86a4ec
// 0086a4dc  8b83c0000000         mov eax, dword ptr [ebx + 0xc0]
// 0086a4e2  50                   push eax
// 0086a4e3  8d4c241c             lea ecx, [esp + 0x1c]
// 0086a4e7  e884bfffff           call 0x866470
// 0086a4ec  8b8ee4000000         mov ecx, dword ptr [esi + 0xe4]
// 0086a4f2  47                   inc edi
// 0086a4f3  3b7928               cmp edi, dword ptr [ecx + 0x28]
// 0086a4f6  7ccb                 jl 0x86a4c3
// 0086a4f8  8b5c245c             mov ebx, dword ptr [esp + 0x5c]
// 0086a4fc  83fb02               cmp ebx, 2
// 0086a4ff  7409                 je 0x86a50a
// 0086a501  8d4c2418             lea ecx, [esp + 0x18]
// 0086a505  e836b7ffff           call 0x865c40
// 0086a50a  33ff                 xor edi, edi
// 0086a50c  397c2440             cmp dword ptr [esp + 0x40], edi
// 0086a510  7e2f                 jle 0x86a541
// 0086a512  57                   push edi
// 0086a513  8d4c241c             lea ecx, [esp + 0x1c]
// 0086a517  e804b7ffff           call 0x865c20
// 0086a51c  8b5620               mov edx, dword ptr [esi + 0x20]
// 0086a51f  6a00                 push 0
// 0086a521  6a00                 push 0
// 0086a523  688b010000           push 0x18b
// 0086a528  52                   push edx
// 0086a529  8bd8                 mov ebx, eax
// 0086a52b  ffd5                 call ebp
// 0086a52d  50                   push eax
// 0086a52e  53                   push ebx
// 0086a52f  8bce                 mov ecx, esi
// 0086a531  e87ae2ffff           call 0x8687b0
// 0086a536  47                   inc edi
// 0086a537  3b7c2440             cmp edi, dword ptr [esp + 0x40]
// 0086a53b  7cd5                 jl 0x86a512
// 0086a53d  8b5c245c             mov ebx, dword ptr [esp + 0x5c]
// 0086a541  8d4c2438             lea ecx, [esp + 0x38]
// 0086a545  c744245401000000     mov dword ptr [esp + 0x54], 1
// 0086a54d  e82eb9ffff           call 0x865e80
// 0086a552  8d4c2418             lea ecx, [esp + 0x18]
// 0086a556  c7442454ffffffff     mov dword ptr [esp + 0x54], 0xffffffff
// 0086a55e  e87f9ef8ff           call 0x7f43e2
// 0086a563  8bce                 mov ecx, esi
// 0086a565  e886e3ffff           call 0x8688f0
// 0086a56a  8b442460             mov eax, dword ptr [esp + 0x60]
// 0086a56e  85c0                 test eax, eax
// 0086a570  741d                 je 0x86a58f
// 0086a572  83b89400000000       cmp dword ptr [eax + 0x94], 0
// 0086a579  7414                 je 0x86a58f
// 0086a57b  8b8080000000         mov eax, dword ptr [eax + 0x80]
// 0086a581  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0086a584  6a00                 push 0
// 0086a586  50                   push eax
// 0086a587  6897010000           push 0x197
// 0086a58c  51                   push ecx
// 0086a58d  ffd5                 call ebp
// 0086a58f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0086a593  85c9                 test ecx, ecx
// 0086a595  7405                 je 0x86a59c
// 0086a597  e8b4aaffff           call 0x865050
// 0086a59c  8bce                 mov ecx, esi
// 0086a59e  e8edecffff           call 0x869290
// 0086a5a3  837c246400           cmp dword ptr [esp + 0x64], 0
// 0086a5a8  740c                 je 0x86a5b6
// 0086a5aa  8b5620               mov edx, dword ptr [esi + 0x20]
// 0086a5ad  6a00                 push 0
// 0086a5af  6a01                 push 1
// 0086a5b1  6a0b                 push 0xb
// 0086a5b3  52                   push edx
// 0086a5b4  ffd5                 call ebp
// 0086a5b6  3b9edc000000         cmp ebx, dword ptr [esi + 0xdc]
// 0086a5bc  7418                 je 0x86a5d6
// 0086a5be  899edc000000         mov dword ptr [esi + 0xdc], ebx
// 0086a5c4  8bb6b0000000         mov esi, dword ptr [esi + 0xb0]
// 0086a5ca  8b06                 mov eax, dword ptr [esi]
// 0086a5cc  8b9064010000         mov edx, dword ptr [eax + 0x164]
// 0086a5d2  8bce                 mov ecx, esi
// 0086a5d4  ffd2                 call edx
// 0086a5d6  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0086a5da  64890d00000000       mov dword ptr fs:[0], ecx
// 0086a5e1  59                   pop ecx
// 0086a5e2  5f                   pop edi
// 0086a5e3  5e                   pop esi
// 0086a5e4  5d                   pop ebp
// 0086a5e5  5b                   pop ebx
// 0086a5e6  83c444               add esp, 0x44
// 0086a5e9  c20c00               ret 0xc
// copied from an identical function in another client (function ?SetPropertySort@CXTPPropertyGridView@@AAEXW4XTPPropertyGridSortOrder@@HH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\PropertyGrid\XTPPropertyGridView.cpp