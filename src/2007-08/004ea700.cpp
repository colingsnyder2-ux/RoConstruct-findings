// roc 2007-08 004ea700  unit: SphereBuilder  size: 785 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ea700
//
// 004ea700  6aff                 push -1
// 004ea702  6886d07400           push 0x74d086
// 004ea707  64a100000000         mov eax, dword ptr fs:[0]
// 004ea70d  50                   push eax
// 004ea70e  64892500000000       mov dword ptr fs:[0], esp
// 004ea715  83ec70               sub esp, 0x70
// 004ea718  53                   push ebx
// 004ea719  55                   push ebp
// 004ea71a  56                   push esi
// 004ea71b  8bf1                 mov esi, ecx
// 004ea71d  57                   push edi
// 004ea71e  8974241c             mov dword ptr [esp + 0x1c], esi
// 004ea722  e859ba0000           call 0x4f6180
// 004ea727  33db                 xor ebx, ebx
// 004ea729  6a1c                 push 0x1c
// 004ea72b  899c248c000000       mov dword ptr [esp + 0x8c], ebx
// 004ea732  c7063cf47900         mov dword ptr [esi], 0x79f43c
// 004ea738  e8b9571400           call 0x62fef6
// 004ea73d  83c404               add esp, 4
// 004ea740  3bc3                 cmp eax, ebx
// 004ea742  7424                 je 0x4ea768
// 004ea744  c70084797900         mov dword ptr [eax], 0x797984
// 004ea74a  895804               mov dword ptr [eax + 4], ebx
// 004ea74d  895808               mov dword ptr [eax + 8], ebx
// 004ea750  c70004f37900         mov dword ptr [eax], 0x79f304
// 004ea756  895810               mov dword ptr [eax + 0x10], ebx
// 004ea759  895814               mov dword ptr [eax + 0x14], ebx
// 004ea75c  89580c               mov dword ptr [eax + 0xc], ebx
// 004ea75f  c7401805000000       mov dword ptr [eax + 0x18], 5
// 004ea766  eb02                 jmp 0x4ea76a
// 004ea768  33c0                 xor eax, eax
// 004ea76a  33ff                 xor edi, edi
// 004ea76c  3bc3                 cmp eax, ebx
// 004ea76e  897c2418             mov dword ptr [esp + 0x18], edi
// 004ea772  7410                 je 0x4ea784
// 004ea774  8bf8                 mov edi, eax
// 004ea776  83c004               add eax, 4
// 004ea779  50                   push eax
// 004ea77a  897c241c             mov dword ptr [esp + 0x1c], edi
// 004ea77e  ff15ecd27700         call dword ptr [0x77d2ec]
// 004ea784  8d442418             lea eax, [esp + 0x18]
// 004ea788  83c60c               add esi, 0xc
// 004ea78b  50                   push eax
// 004ea78c  8bce                 mov ecx, esi
// 004ea78e  c684248c00000003     mov byte ptr [esp + 0x8c], 3
// 004ea796  e8b52affff           call 0x4dd250
// 004ea79b  3bfb                 cmp edi, ebx
// 004ea79d  889c2488000000       mov byte ptr [esp + 0x88], bl
// 004ea7a4  741f                 je 0x4ea7c5
// 004ea7a6  8d4704               lea eax, [edi + 4]
// 004ea7a9  50                   push eax
// 004ea7aa  ff15e8d27700         call dword ptr [0x77d2e8]
// 004ea7b0  85c0                 test eax, eax
// 004ea7b2  7511                 jne 0x4ea7c5
// 004ea7b4  8bcf                 mov ecx, edi
// 004ea7b6  e815d6f6ff           call 0x457dd0
// 004ea7bb  8b17                 mov edx, dword ptr [edi]
// 004ea7bd  8b02                 mov eax, dword ptr [edx]
// 004ea7bf  6a01                 push 1
// 004ea7c1  8bcf                 mov ecx, edi
// 004ea7c3  ffd0                 call eax
// 004ea7c5  8b4e04               mov ecx, dword ptr [esi + 4]
// 004ea7c8  8b16                 mov edx, dword ptr [esi]
// 004ea7ca  8bb42490000000       mov esi, dword ptr [esp + 0x90]
// 004ea7d1  d906                 fld dword ptr [esi]
// 004ea7d3  8bac2494000000       mov ebp, dword ptr [esp + 0x94]
// 004ea7da  d95c2420             fstp dword ptr [esp + 0x20]
// 004ea7de  55                   push ebp
// 004ea7df  d94604               fld dword ptr [esi + 4]
// 004ea7e2  83ec0c               sub esp, 0xc
// 004ea7e5  d95c2434             fstp dword ptr [esp + 0x34]
// 004ea7e9  8bc4                 mov eax, esp
// 004ea7eb  d94608               fld dword ptr [esi + 8]
// 004ea7ee  8d4c8afc             lea ecx, [edx + ecx*4 - 4]
// 004ea7f2  d95c2438             fstp dword ptr [esp + 0x38]
// 004ea7f6  89a424a0000000       mov dword ptr [esp + 0xa0], esp
// 004ea7fd  d9442430             fld dword ptr [esp + 0x30]
// 004ea801  51                   push ecx
// 004ea802  d918                 fstp dword ptr [eax]
// 004ea804  8d4c2470             lea ecx, [esp + 0x70]
// 004ea808  d9442438             fld dword ptr [esp + 0x38]
// 004ea80c  d95804               fstp dword ptr [eax + 4]
// 004ea80f  d944243c             fld dword ptr [esp + 0x3c]
// 004ea813  d95808               fstp dword ptr [eax + 8]
// 004ea816  e8e5440000           call 0x4eed00
// 004ea81b  c744245c1cf47900     mov dword ptr [esp + 0x5c], 0x79f41c
// 004ea823  c744247c06000000     mov dword ptr [esp + 0x7c], 6
// 004ea82b  53                   push ebx
// 004ea82c  8d4c2460             lea ecx, [esp + 0x60]
// 004ea830  c684248c00000004     mov byte ptr [esp + 0x8c], 4
// 004ea838  e873440000           call 0x4eecb0
// 004ea83d  8b442470             mov eax, dword ptr [esp + 0x70]
// 004ea841  3bc3                 cmp eax, ebx
// 004ea843  889c2488000000       mov byte ptr [esp + 0x88], bl
// 004ea84a  7427                 je 0x4ea873
// 004ea84c  83c004               add eax, 4
// 004ea84f  50                   push eax
// 004ea850  ff15e8d27700         call dword ptr [0x77d2e8]
// 004ea856  85c0                 test eax, eax
// 004ea858  7519                 jne 0x4ea873
// 004ea85a  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 004ea85e  e86dd5f6ff           call 0x457dd0
// 004ea863  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 004ea867  3bcb                 cmp ecx, ebx
// 004ea869  7408                 je 0x4ea873
// 004ea86b  8b01                 mov eax, dword ptr [ecx]
// 004ea86d  8b10                 mov edx, dword ptr [eax]
// 004ea86f  6a01                 push 1
// 004ea871  ffd2                 call edx
// 004ea873  381dd4ba8b00         cmp byte ptr [0x8bbad4], bl
// 004ea879  0f8476010000         je 0x4ea9f5
// 004ea87f  d90578d07900         fld dword ptr [0x79d078]
// 004ea885  d816                 fcom dword ptr [esi]
// 004ea887  dfe0                 fnstsw ax
// 004ea889  f6c441               test ah, 0x41
// 004ea88c  751b                 jne 0x4ea8a9
// 004ea88e  d85604               fcom dword ptr [esi + 4]
// 004ea891  dfe0                 fnstsw ax
// 004ea893  f6c441               test ah, 0x41
// 004ea896  7511                 jne 0x4ea8a9
// 004ea898  d85e08               fcomp dword ptr [esi + 8]
// 004ea89b  dfe0                 fnstsw ax
// 004ea89d  f6c441               test ah, 0x41
// 004ea8a0  7509                 jne 0x4ea8ab
// 004ea8a2  bf03000000           mov edi, 3
// 004ea8a7  eb07                 jmp 0x4ea8b0
// 004ea8a9  ddd8                 fstp st(0)
// 004ea8ab  bf04000000           mov edi, 4
// 004ea8b0  6a1c                 push 0x1c
// 004ea8b2  e83f561400           call 0x62fef6
// 004ea8b7  83c404               add esp, 4
// 004ea8ba  89842490000000       mov dword ptr [esp + 0x90], eax
// 004ea8c1  3bc3                 cmp eax, ebx
// 004ea8c3  c684248800000005     mov byte ptr [esp + 0x88], 5
// 004ea8cb  740b                 je 0x4ea8d8
// 004ea8cd  6a02                 push 2
// 004ea8cf  8bc8                 mov ecx, eax
// 004ea8d1  e80a30ffff           call 0x4dd8e0
// 004ea8d6  eb02                 jmp 0x4ea8da
// 004ea8d8  33c0                 xor eax, eax
// 004ea8da  3bc3                 cmp eax, ebx
// 004ea8dc  895c2414             mov dword ptr [esp + 0x14], ebx
// 004ea8e0  740e                 je 0x4ea8f0
// 004ea8e2  89442414             mov dword ptr [esp + 0x14], eax
// 004ea8e6  83c004               add eax, 4
// 004ea8e9  50                   push eax
// 004ea8ea  ff15ecd27700         call dword ptr [0x77d2ec]
// 004ea8f0  d906                 fld dword ptr [esi]
// 004ea8f2  d95c242c             fstp dword ptr [esp + 0x2c]
// 004ea8f6  55                   push ebp
// 004ea8f7  d94604               fld dword ptr [esi + 4]
// 004ea8fa  83ec0c               sub esp, 0xc
// 004ea8fd  d95c2440             fstp dword ptr [esp + 0x40]
// 004ea901  8bc4                 mov eax, esp
// 004ea903  d94608               fld dword ptr [esi + 8]
// 004ea906  89a424a0000000       mov dword ptr [esp + 0xa0], esp
// 004ea90d  d95c2444             fstp dword ptr [esp + 0x44]
// 004ea911  8d4c2448             lea ecx, [esp + 0x48]
// 004ea915  d944243c             fld dword ptr [esp + 0x3c]
// 004ea919  c684249800000006     mov byte ptr [esp + 0x98], 6
// 004ea921  d918                 fstp dword ptr [eax]
// 004ea923  d9442440             fld dword ptr [esp + 0x40]
// 004ea927  d95804               fstp dword ptr [eax + 4]
// 004ea92a  d9442444             fld dword ptr [esp + 0x44]
// 004ea92e  d95808               fstp dword ptr [eax + 8]
// 004ea931  8d442424             lea eax, [esp + 0x24]
// 004ea935  50                   push eax
// 004ea936  e8c5430000           call 0x4eed00
// 004ea93b  c74424381cf47900     mov dword ptr [esp + 0x38], 0x79f41c
// 004ea943  897c2458             mov dword ptr [esp + 0x58], edi
// 004ea947  6a02                 push 2
// 004ea949  8d4c243c             lea ecx, [esp + 0x3c]
// 004ea94d  c684248c00000007     mov byte ptr [esp + 0x8c], 7
// 004ea955  e856430000           call 0x4eecb0
// 004ea95a  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 004ea95e  8d4c2414             lea ecx, [esp + 0x14]
// 004ea962  51                   push ecx
// 004ea963  8bce                 mov ecx, esi
// 004ea965  e886c60000           call 0x4f6ff0
// 004ea96a  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 004ea96e  3bc3                 cmp eax, ebx
// 004ea970  c684248800000006     mov byte ptr [esp + 0x88], 6
// 004ea978  742b                 je 0x4ea9a5
// 004ea97a  83c004               add eax, 4
// 004ea97d  50                   push eax
// 004ea97e  ff15e8d27700         call dword ptr [0x77d2e8]
// 004ea984  85c0                 test eax, eax
// 004ea986  7519                 jne 0x4ea9a1
// 004ea988  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 004ea98c  e83fd4f6ff           call 0x457dd0
// 004ea991  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 004ea995  3bcb                 cmp ecx, ebx
// 004ea997  7408                 je 0x4ea9a1
// 004ea999  8b11                 mov edx, dword ptr [ecx]
// 004ea99b  8b02                 mov eax, dword ptr [edx]
// 004ea99d  6a01                 push 1
// 004ea99f  ffd0                 call eax
// 004ea9a1  895c244c             mov dword ptr [esp + 0x4c], ebx
// 004ea9a5  8b442414             mov eax, dword ptr [esp + 0x14]
// 004ea9a9  3bc3                 cmp eax, ebx
// 004ea9ab  889c2488000000       mov byte ptr [esp + 0x88], bl
// 004ea9b2  7427                 je 0x4ea9db
// 004ea9b4  83c004               add eax, 4
// 004ea9b7  50                   push eax
// 004ea9b8  ff15e8d27700         call dword ptr [0x77d2e8]
// 004ea9be  85c0                 test eax, eax
// 004ea9c0  7519                 jne 0x4ea9db
// 004ea9c2  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004ea9c6  e805d4f6ff           call 0x457dd0
// 004ea9cb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004ea9cf  3bcb                 cmp ecx, ebx
// 004ea9d1  7408                 je 0x4ea9db
// 004ea9d3  8b11                 mov edx, dword ptr [ecx]
// 004ea9d5  8b02                 mov eax, dword ptr [edx]
// 004ea9d7  6a01                 push 1
// 004ea9d9  ffd0                 call eax
// 004ea9db  8bc6                 mov eax, esi
// 004ea9dd  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 004ea9e4  64890d00000000       mov dword ptr fs:[0], ecx
// 004ea9eb  5f                   pop edi
// 004ea9ec  5e                   pop esi
// 004ea9ed  5d                   pop ebp
// 004ea9ee  5b                   pop ebx
// 004ea9ef  83c47c               add esp, 0x7c
// 004ea9f2  c20800               ret 8
// 004ea9f5  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 004ea9fc  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004eaa00  5f                   pop edi
// 004eaa01  5e                   pop esi
// 004eaa02  5d                   pop ebp
// 004eaa03  64890d00000000       mov dword ptr fs:[0], ecx
// 004eaa0a  5b                   pop ebx
// 004eaa0b  83c47c               add esp, 0x7c
// 004eaa0e  c20800               ret 8
// library rbxgs-view/SphereMesh.cpp (function ??0SphereMesh@View@RBX@@AAE@ABVVector3@G3D@@VRenderSurfaceTypes@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view SphereMesh.cpp
