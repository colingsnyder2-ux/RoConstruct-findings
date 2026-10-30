// roc 2011-06 008ef5f0  unit: CXTColorSelectorCtrl  size: 1620 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008ef5f0
//
// 008ef5f0  6aff                 push -1
// 008ef5f2  689de8a000           push 0xa0e89d
// 008ef5f7  64a100000000         mov eax, dword ptr fs:[0]
// 008ef5fd  50                   push eax
// 008ef5fe  83ec38               sub esp, 0x38
// 008ef601  53                   push ebx
// 008ef602  55                   push ebp
// 008ef603  56                   push esi
// 008ef604  57                   push edi
// 008ef605  a12058c900           mov eax, dword ptr [0xc95820]
// 008ef60a  33c4                 xor eax, esp
// 008ef60c  50                   push eax
// 008ef60d  8d44244c             lea eax, [esp + 0x4c]
// 008ef611  64a300000000         mov dword ptr fs:[0], eax
// 008ef617  8bf1                 mov esi, ecx
// 008ef619  e810b0f1ff           call 0x80a62e
// 008ef61e  83f8ff               cmp eax, -1
// 008ef621  7507                 jne 0x8ef62a
// 008ef623  0bc0                 or eax, eax
// 008ef625  e904060000           jmp 0x8efc2e
// 008ef62a  8b86b8000000         mov eax, dword ptr [esi + 0xb8]
// 008ef630  8b9044010000         mov edx, dword ptr [eax + 0x144]
// 008ef636  8d8eb8000000         lea ecx, [esi + 0xb8]
// 008ef63c  6a00                 push 0
// 008ef63e  56                   push esi
// 008ef63f  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 008ef647  c644241f00           mov byte ptr [esp + 0x1f], 0
// 008ef64c  ffd2                 call edx
// 008ef64e  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 008ef654  6a00                 push 0
// 008ef656  6a01                 push 1
// 008ef658  6801040000           push 0x401
// 008ef65d  50                   push eax
// 008ef65e  ff15c019a400         call dword ptr [0xa419c0]
// 008ef664  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008ef668  8b4114               mov eax, dword ptr [ecx + 0x14]
// 008ef66b  2b869c000000         sub eax, dword ptr [esi + 0x9c]
// 008ef671  8bbe94000000         mov edi, dword ptr [esi + 0x94]
// 008ef677  8b9e98000000         mov ebx, dword ptr [esi + 0x98]
// 008ef67d  8d4c241c             lea ecx, [esp + 0x1c]
// 008ef681  897c2428             mov dword ptr [esp + 0x28], edi
// 008ef685  89442438             mov dword ptr [esp + 0x38], eax
// 008ef689  ff15b42da400         call dword ptr [0xa42db4]
// 008ef68f  8d4c2420             lea ecx, [esp + 0x20]
// 008ef693  c744245400000000     mov dword ptr [esp + 0x54], 0
// 008ef69b  ff15b42da400         call dword ptr [0xa42db4]
// 008ef6a1  8b86a4000000         mov eax, dword ptr [esi + 0xa4]
// 008ef6a7  c644245401           mov byte ptr [esp + 0x54], 1
// 008ef6ac  a810                 test al, 0x10
// 008ef6ae  0f855c010000         jne 0x8ef810
// 008ef6b4  2401                 and al, 1
// 008ef6b6  0fb6e8               movzx ebp, al
// 008ef6b9  f7dd                 neg ebp
// 008ef6bb  1bed                 sbb ebp, ebp
// 008ef6bd  81c5dc260000         add ebp, 0x26dc
// 008ef6c3  896c2434             mov dword ptr [esp + 0x34], ebp
// 008ef6c7  e87408f9ff           call 0x87ff40
// 008ef6cc  8b10                 mov edx, dword ptr [eax]
// 008ef6ce  8b5208               mov edx, dword ptr [edx + 8]
// 008ef6d1  55                   push ebp
// 008ef6d2  8d4c2420             lea ecx, [esp + 0x20]
// 008ef6d6  51                   push ecx
// 008ef6d7  8bc8                 mov ecx, eax
// 008ef6d9  ffd2                 call edx
// 008ef6db  6a00                 push 0
// 008ef6dd  6a0a                 push 0xa
// 008ef6df  8d4c2424             lea ecx, [esp + 0x24]
// 008ef6e3  ff154c27a400         call dword ptr [0xa4274c]
// 008ef6e9  8bf8                 mov edi, eax
// 008ef6eb  85ff                 test edi, edi
// 008ef6ed  7e3f                 jle 0x8ef72e
// 008ef6ef  8d4701               lea eax, [edi + 1]
// 008ef6f2  50                   push eax
// 008ef6f3  8d4c2460             lea ecx, [esp + 0x60]
// 008ef6f7  51                   push ecx
// 008ef6f8  8d4c2424             lea ecx, [esp + 0x24]
// 008ef6fc  ff154827a400         call dword ptr [0xa42748]
// 008ef702  50                   push eax
// 008ef703  8d4c2424             lea ecx, [esp + 0x24]
// 008ef707  c644245802           mov byte ptr [esp + 0x58], 2
// 008ef70c  ff156425a400         call dword ptr [0xa42564]
// 008ef712  8d4c245c             lea ecx, [esp + 0x5c]
// 008ef716  c644245401           mov byte ptr [esp + 0x54], 1
// 008ef71b  ff15082ea400         call dword ptr [0xa42e08]
// 008ef721  57                   push edi
// 008ef722  8d4c2420             lea ecx, [esp + 0x20]
// 008ef726  ff15e423a400         call dword ptr [0xa423e4]
// 008ef72c  eb0f                 jmp 0x8ef73d
// 008ef72e  8d54241c             lea edx, [esp + 0x1c]
// 008ef732  52                   push edx
// 008ef733  8d4c2424             lea ecx, [esp + 0x24]
// 008ef737  ff156425a400         call dword ptr [0xa42564]
// 008ef73d  6824010000           push 0x124
// 008ef742  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 008ef74a  e80fa9f1ff           call 0x80a05e
// 008ef74f  83c404               add esp, 4
// 008ef752  8d4c241c             lea ecx, [esp + 0x1c]
// 008ef756  8bf8                 mov edi, eax
// 008ef758  ff15c82da400         call dword ptr [0xa42dc8]
// 008ef75e  50                   push eax
// 008ef75f  8d4720               lea eax, [edi + 0x20]
// 008ef762  6800010000           push 0x100
// 008ef767  50                   push eax
// 008ef768  ff15dc09a400         call dword ptr [0xa409dc]
// 008ef76e  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008ef772  8b542444             mov edx, dword ptr [esp + 0x44]
// 008ef776  892f                 mov dword ptr [edi], ebp
// 008ef778  894f0c               mov dword ptr [edi + 0xc], ecx
// 008ef77b  8d6f0c               lea ebp, [edi + 0xc]
// 008ef77e  895d04               mov dword ptr [ebp + 4], ebx
// 008ef781  895508               mov dword ptr [ebp + 8], edx
// 008ef784  8d4317               lea eax, [ebx + 0x17]
// 008ef787  89450c               mov dword ptr [ebp + 0xc], eax
// 008ef78a  c7470400000000       mov dword ptr [edi + 4], 0
// 008ef791  c6470800             mov byte ptr [edi + 8], 0
// 008ef795  8b86a4000000         mov eax, dword ptr [esi + 0xa4]
// 008ef79b  89471c               mov dword ptr [edi + 0x1c], eax
// 008ef79e  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 008ef7a4  83c40c               add esp, 0xc
// 008ef7a7  898f20010000         mov dword ptr [edi + 0x120], ecx
// 008ef7ad  57                   push edi
// 008ef7ae  8d8e3c010000         lea ecx, [esi + 0x13c]
// 008ef7b4  e8b70d0000           call 0x8f0570
// 008ef7b9  8b542434             mov edx, dword ptr [esp + 0x34]
// 008ef7bd  52                   push edx
// 008ef7be  55                   push ebp
// 008ef7bf  8d4c2428             lea ecx, [esp + 0x28]
// 008ef7c3  ff15c82da400         call dword ptr [0xa42dc8]
// 008ef7c9  50                   push eax
// 008ef7ca  56                   push esi
// 008ef7cb  8d8eb8000000         lea ecx, [esi + 0xb8]
// 008ef7d1  e888d60d00           call 0x9cce5e
// 008ef7d6  f686a400000001       test byte ptr [esi + 0xa4], 1
// 008ef7dd  750e                 jne 0x8ef7ed
// 008ef7df  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 008ef7e5  3b86b4000000         cmp eax, dword ptr [esi + 0xb4]
// 008ef7eb  eb11                 jmp 0x8ef7fe
// 008ef7ed  8b86b4000000         mov eax, dword ptr [esi + 0xb4]
// 008ef7f3  3986b0000000         cmp dword ptr [esi + 0xb0], eax
// 008ef7f9  750e                 jne 0x8ef809
// 008ef7fb  83f8ff               cmp eax, -1
// 008ef7fe  7509                 jne 0x8ef809
// 008ef800  c6470801             mov byte ptr [edi + 8], 1
// 008ef804  c644241701           mov byte ptr [esp + 0x17], 1
// 008ef809  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 008ef80d  83c31b               add ebx, 0x1b
// 008ef810  8b86a4000000         mov eax, dword ptr [esi + 0xa4]
// 008ef816  83e002               and eax, 2
// 008ef819  741a                 je 0x8ef835
// 008ef81b  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 008ef821  85c9                 test ecx, ecx
// 008ef823  7406                 je 0x8ef82b
// 008ef825  894c2430             mov dword ptr [esp + 0x30], ecx
// 008ef829  eb12                 jmp 0x8ef83d
// 008ef82b  c744243030aac900     mov dword ptr [esp + 0x30], 0xc9aa30
// 008ef833  eb08                 jmp 0x8ef83d
// 008ef835  c7442430b0a9c900     mov dword ptr [esp + 0x30], 0xc9a9b0
// 008ef83d  85c0                 test eax, eax
// 008ef83f  741f                 je 0x8ef860
// 008ef841  83be5c01000000       cmp dword ptr [esi + 0x15c], 0
// 008ef848  740c                 je 0x8ef856
// 008ef84a  8b8e60010000         mov ecx, dword ptr [esi + 0x160]
// 008ef850  894c242c             mov dword ptr [esp + 0x2c], ecx
// 008ef854  eb12                 jmp 0x8ef868
// 008ef856  c744242c28000000     mov dword ptr [esp + 0x2c], 0x28
// 008ef85e  eb08                 jmp 0x8ef868
// 008ef860  c744242c10000000     mov dword ptr [esp + 0x2c], 0x10
// 008ef868  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 008ef86b  f7d8                 neg eax
// 008ef86d  1bc0                 sbb eax, eax
// 008ef86f  83e0ea               and eax, 0xffffffea
// 008ef872  83c016               add eax, 0x16
// 008ef875  03d8                 add ebx, eax
// 008ef877  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 008ef87d  03cf                 add ecx, edi
// 008ef87f  894c2444             mov dword ptr [esp + 0x44], ecx
// 008ef883  33c9                 xor ecx, ecx
// 008ef885  03c3                 add eax, ebx
// 008ef887  394c242c             cmp dword ptr [esp + 0x2c], ecx
// 008ef88b  895c2424             mov dword ptr [esp + 0x24], ebx
// 008ef88f  897c243c             mov dword ptr [esp + 0x3c], edi
// 008ef893  895c2440             mov dword ptr [esp + 0x40], ebx
// 008ef897  89442448             mov dword ptr [esp + 0x48], eax
// 008ef89b  894c245c             mov dword ptr [esp + 0x5c], ecx
// 008ef89f  0f8e1f010000         jle 0x8ef9c4
// 008ef8a5  eb04                 jmp 0x8ef8ab
// 008ef8a7  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008ef8ab  85c9                 test ecx, ecx
// 008ef8ad  7e2b                 jle 0x8ef8da
// 008ef8af  8bc1                 mov eax, ecx
// 008ef8b1  99                   cdq 
// 008ef8b2  f77e6c               idiv dword ptr [esi + 0x6c]
// 008ef8b5  85d2                 test edx, edx
// 008ef8b7  7521                 jne 0x8ef8da
// 008ef8b9  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 008ef8bf  03d8                 add ebx, eax
// 008ef8c1  8d1418               lea edx, [eax + ebx]
// 008ef8c4  03c7                 add eax, edi
// 008ef8c6  895c2424             mov dword ptr [esp + 0x24], ebx
// 008ef8ca  897c243c             mov dword ptr [esp + 0x3c], edi
// 008ef8ce  895c2440             mov dword ptr [esp + 0x40], ebx
// 008ef8d2  89442444             mov dword ptr [esp + 0x44], eax
// 008ef8d6  89542448             mov dword ptr [esp + 0x48], edx
// 008ef8da  8b442430             mov eax, dword ptr [esp + 0x30]
// 008ef8de  8b14c8               mov edx, dword ptr [eax + ecx*8]
// 008ef8e1  ff442418             inc dword ptr [esp + 0x18]
// 008ef8e5  8b5cc804             mov ebx, dword ptr [eax + ecx*8 + 4]
// 008ef8e9  6824010000           push 0x124
// 008ef8ee  89542438             mov dword ptr [esp + 0x38], edx
// 008ef8f2  e867a7f1ff           call 0x80a05e
// 008ef8f7  8bf8                 mov edi, eax
// 008ef8f9  c6472000             mov byte ptr [edi + 0x20], 0
// 008ef8fd  891f                 mov dword ptr [edi], ebx
// 008ef8ff  8b442440             mov eax, dword ptr [esp + 0x40]
// 008ef903  89470c               mov dword ptr [edi + 0xc], eax
// 008ef906  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008ef90a  8d6f0c               lea ebp, [edi + 0xc]
// 008ef90d  894d04               mov dword ptr [ebp + 4], ecx
// 008ef910  8b542448             mov edx, dword ptr [esp + 0x48]
// 008ef914  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008ef918  895508               mov dword ptr [ebp + 8], edx
// 008ef91b  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 008ef91f  8b542438             mov edx, dword ptr [esp + 0x38]
// 008ef923  83c404               add esp, 4
// 008ef926  894f04               mov dword ptr [edi + 4], ecx
// 008ef929  57                   push edi
// 008ef92a  8d8e3c010000         lea ecx, [esi + 0x13c]
// 008ef930  89450c               mov dword ptr [ebp + 0xc], eax
// 008ef933  c6470800             mov byte ptr [edi + 8], 0
// 008ef937  c7471c08000000       mov dword ptr [edi + 0x1c], 8
// 008ef93e  899720010000         mov dword ptr [edi + 0x120], edx
// 008ef944  e8270c0000           call 0x8f0570
// 008ef949  e8f205f9ff           call 0x87ff40
// 008ef94e  8b10                 mov edx, dword ptr [eax]
// 008ef950  8b5208               mov edx, dword ptr [edx + 8]
// 008ef953  53                   push ebx
// 008ef954  8d4c2424             lea ecx, [esp + 0x24]
// 008ef958  51                   push ecx
// 008ef959  8bc8                 mov ecx, eax
// 008ef95b  ffd2                 call edx
// 008ef95d  53                   push ebx
// 008ef95e  55                   push ebp
// 008ef95f  8d4c2428             lea ecx, [esp + 0x28]
// 008ef963  ff15c82da400         call dword ptr [0xa42dc8]
// 008ef969  50                   push eax
// 008ef96a  56                   push esi
// 008ef96b  8d8eb8000000         lea ecx, [esi + 0xb8]
// 008ef971  e8e8d40d00           call 0x9cce5e
// 008ef976  8b442434             mov eax, dword ptr [esp + 0x34]
// 008ef97a  3986b0000000         cmp dword ptr [esi + 0xb0], eax
// 008ef980  7516                 jne 0x8ef998
// 008ef982  807c241700           cmp byte ptr [esp + 0x17], 0
// 008ef987  750f                 jne 0x8ef998
// 008ef989  8b4f04               mov ecx, dword ptr [edi + 4]
// 008ef98c  c6470801             mov byte ptr [edi + 8], 1
// 008ef990  c644241701           mov byte ptr [esp + 0x17], 1
// 008ef995  894e70               mov dword ptr [esi + 0x70], ecx
// 008ef998  8b467c               mov eax, dword ptr [esi + 0x7c]
// 008ef99b  6a00                 push 0
// 008ef99d  50                   push eax
// 008ef99e  8d542444             lea edx, [esp + 0x44]
// 008ef9a2  52                   push edx
// 008ef9a3  ff15601ca400         call dword ptr [0xa41c60]
// 008ef9a9  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 008ef9ad  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 008ef9b1  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 008ef9b5  40                   inc eax
// 008ef9b6  3b44242c             cmp eax, dword ptr [esp + 0x2c]
// 008ef9ba  8944245c             mov dword ptr [esp + 0x5c], eax
// 008ef9be  0f8ce3feffff         jl 0x8ef8a7
// 008ef9c4  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 008ef9ca  03d8                 add ebx, eax
// 008ef9cc  8d0c18               lea ecx, [eax + ebx]
// 008ef9cf  03c7                 add eax, edi
// 008ef9d1  f686a400000004       test byte ptr [esi + 0xa4], 4
// 008ef9d8  897c243c             mov dword ptr [esp + 0x3c], edi
// 008ef9dc  895c2440             mov dword ptr [esp + 0x40], ebx
// 008ef9e0  89442444             mov dword ptr [esp + 0x44], eax
// 008ef9e4  894c2448             mov dword ptr [esp + 0x48], ecx
// 008ef9e8  0f8423020000         je 0x8efc11
// 008ef9ee  833d9492d10000       cmp dword ptr [0xd19294], 0
// 008ef9f5  0f8e35010000         jle 0x8efb30
// 008ef9fb  6a04                 push 4
// 008ef9fd  6a00                 push 0
// 008ef9ff  8d442444             lea eax, [esp + 0x44]
// 008efa03  50                   push eax
// 008efa04  ff15601ca400         call dword ptr [0xa41c60]
// 008efa0a  33c0                 xor eax, eax
// 008efa0c  8944245c             mov dword ptr [esp + 0x5c], eax
// 008efa10  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 008efa13  8b159492d100         mov edx, dword ptr [0xd19294]
// 008efa19  3bd1                 cmp edx, ecx
// 008efa1b  7d02                 jge 0x8efa1f
// 008efa1d  8bca                 mov ecx, edx
// 008efa1f  3bc1                 cmp eax, ecx
// 008efa21  0f8df7000000         jge 0x8efb1e
// 008efa27  ff442418             inc dword ptr [esp + 0x18]
// 008efa2b  85c0                 test eax, eax
// 008efa2d  0f8ce6000000         jl 0x8efb19
// 008efa33  3bc2                 cmp eax, edx
// 008efa35  0f8dde000000         jge 0x8efb19
// 008efa3b  8b0d9092d100         mov ecx, dword ptr [0xd19290]
// 008efa41  8b1481               mov edx, dword ptr [ecx + eax*4]
// 008efa44  6824010000           push 0x124
// 008efa49  89542434             mov dword ptr [esp + 0x34], edx
// 008efa4d  e80ca6f1ff           call 0x80a05e
// 008efa52  8bf8                 mov edi, eax
// 008efa54  c6472000             mov byte ptr [edi + 0x20], 0
// 008efa58  c70700000000         mov dword ptr [edi], 0
// 008efa5e  8b442440             mov eax, dword ptr [esp + 0x40]
// 008efa62  89470c               mov dword ptr [edi + 0xc], eax
// 008efa65  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008efa69  8d6f0c               lea ebp, [edi + 0xc]
// 008efa6c  894d04               mov dword ptr [ebp + 4], ecx
// 008efa6f  8b542448             mov edx, dword ptr [esp + 0x48]
// 008efa73  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008efa77  895508               mov dword ptr [ebp + 8], edx
// 008efa7a  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 008efa7e  8b542434             mov edx, dword ptr [esp + 0x34]
// 008efa82  83c404               add esp, 4
// 008efa85  894f04               mov dword ptr [edi + 4], ecx
// 008efa88  57                   push edi
// 008efa89  8d8e3c010000         lea ecx, [esi + 0x13c]
// 008efa8f  89450c               mov dword ptr [ebp + 0xc], eax
// 008efa92  c6470800             mov byte ptr [edi + 8], 0
// 008efa96  c7471c08000000       mov dword ptr [edi + 0x1c], 8
// 008efa9d  899720010000         mov dword ptr [edi + 0x120], edx
// 008efaa3  e8c80a0000           call 0x8f0570
// 008efaa8  8b442430             mov eax, dword ptr [esp + 0x30]
// 008efaac  50                   push eax
// 008efaad  8d4c2430             lea ecx, [esp + 0x30]
// 008efab1  51                   push ecx
// 008efab2  e8c90df8ff           call 0x870880
// 008efab7  83c408               add esp, 8
// 008efaba  6a01                 push 1
// 008efabc  55                   push ebp
// 008efabd  8bc8                 mov ecx, eax
// 008efabf  c644245c03           mov byte ptr [esp + 0x5c], 3
// 008efac4  ff15c82da400         call dword ptr [0xa42dc8]
// 008efaca  50                   push eax
// 008efacb  56                   push esi
// 008efacc  8d8eb8000000         lea ecx, [esi + 0xb8]
// 008efad2  e887d30d00           call 0x9cce5e
// 008efad7  8d4c242c             lea ecx, [esp + 0x2c]
// 008efadb  c644245401           mov byte ptr [esp + 0x54], 1
// 008efae0  ff15082ea400         call dword ptr [0xa42e08]
// 008efae6  8b542430             mov edx, dword ptr [esp + 0x30]
// 008efaea  3996b0000000         cmp dword ptr [esi + 0xb0], edx
// 008efaf0  7509                 jne 0x8efafb
// 008efaf2  c644241701           mov byte ptr [esp + 0x17], 1
// 008efaf7  c6470801             mov byte ptr [edi + 8], 1
// 008efafb  8b467c               mov eax, dword ptr [esi + 0x7c]
// 008efafe  6a00                 push 0
// 008efb00  50                   push eax
// 008efb01  8d4c2444             lea ecx, [esp + 0x44]
// 008efb05  51                   push ecx
// 008efb06  ff15601ca400         call dword ptr [0xa41c60]
// 008efb0c  ff44245c             inc dword ptr [esp + 0x5c]
// 008efb10  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 008efb14  e9f7feffff           jmp 0x8efa10
// 008efb19  e8eca7f1ff           call 0x80a30a
// 008efb1e  8b542448             mov edx, dword ptr [esp + 0x48]
// 008efb22  2b542440             sub edx, dword ptr [esp + 0x40]
// 008efb26  8d441304             lea eax, [ebx + edx + 4]
// 008efb2a  89442424             mov dword ptr [esp + 0x24], eax
// 008efb2e  8bd8                 mov ebx, eax
// 008efb30  83c304               add ebx, 4
// 008efb33  e80804f9ff           call 0x87ff40
// 008efb38  8b10                 mov edx, dword ptr [eax]
// 008efb3a  8b5208               mov edx, dword ptr [edx + 8]
// 008efb3d  68dd260000           push 0x26dd
// 008efb42  8d4c2420             lea ecx, [esp + 0x20]
// 008efb46  51                   push ecx
// 008efb47  8bc8                 mov ecx, eax
// 008efb49  ffd2                 call edx
// 008efb4b  ff442418             inc dword ptr [esp + 0x18]
// 008efb4f  6824010000           push 0x124
// 008efb54  e805a5f1ff           call 0x80a05e
// 008efb59  83c404               add esp, 4
// 008efb5c  8d4c241c             lea ecx, [esp + 0x1c]
// 008efb60  8bf8                 mov edi, eax
// 008efb62  ff15c82da400         call dword ptr [0xa42dc8]
// 008efb68  50                   push eax
// 008efb69  8d4720               lea eax, [edi + 0x20]
// 008efb6c  6800010000           push 0x100
// 008efb71  50                   push eax
// 008efb72  ff15dc09a400         call dword ptr [0xa409dc]
// 008efb78  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008efb7c  8b542444             mov edx, dword ptr [esp + 0x44]
// 008efb80  8d6f0c               lea ebp, [edi + 0xc]
// 008efb83  894d00               mov dword ptr [ebp], ecx
// 008efb86  895d04               mov dword ptr [ebp + 4], ebx
// 008efb89  895508               mov dword ptr [ebp + 8], edx
// 008efb8c  8d4317               lea eax, [ebx + 0x17]
// 008efb8f  89450c               mov dword ptr [ebp + 0xc], eax
// 008efb92  8b442424             mov eax, dword ptr [esp + 0x24]
// 008efb96  c707dd260000         mov dword ptr [edi], 0x26dd
// 008efb9c  894704               mov dword ptr [edi + 4], eax
// 008efb9f  c6470800             mov byte ptr [edi + 8], 0
// 008efba3  c7471c04000000       mov dword ptr [edi + 0x1c], 4
// 008efbaa  8b8eb0000000         mov ecx, dword ptr [esi + 0xb0]
// 008efbb0  83c40c               add esp, 0xc
// 008efbb3  8d54241c             lea edx, [esp + 0x1c]
// 008efbb7  898f20010000         mov dword ptr [edi + 0x120], ecx
// 008efbbd  52                   push edx
// 008efbbe  8d4c2438             lea ecx, [esp + 0x38]
// 008efbc2  ff15e42da400         call dword ptr [0xa42de4]
// 008efbc8  57                   push edi
// 008efbc9  8d8e3c010000         lea ecx, [esi + 0x13c]
// 008efbcf  c644245804           mov byte ptr [esp + 0x58], 4
// 008efbd4  e897090000           call 0x8f0570
// 008efbd9  6a01                 push 1
// 008efbdb  55                   push ebp
// 008efbdc  8d4c243c             lea ecx, [esp + 0x3c]
// 008efbe0  ff15c82da400         call dword ptr [0xa42dc8]
// 008efbe6  50                   push eax
// 008efbe7  56                   push esi
// 008efbe8  8d8eb8000000         lea ecx, [esi + 0xb8]
// 008efbee  e86bd20d00           call 0x9cce5e
// 008efbf3  83beb0000000ff       cmp dword ptr [esi + 0xb0], -1
// 008efbfa  740b                 je 0x8efc07
// 008efbfc  807c241700           cmp byte ptr [esp + 0x17], 0
// 008efc01  7504                 jne 0x8efc07
// 008efc03  c6470801             mov byte ptr [edi + 8], 1
// 008efc07  8d4c2434             lea ecx, [esp + 0x34]
// 008efc0b  ff15082ea400         call dword ptr [0xa42e08]
// 008efc11  8d4c2420             lea ecx, [esp + 0x20]
// 008efc15  c74670ffffffff       mov dword ptr [esi + 0x70], 0xffffffff
// 008efc1c  ff15082ea400         call dword ptr [0xa42e08]
// 008efc22  8d4c241c             lea ecx, [esp + 0x1c]
// 008efc26  ff15082ea400         call dword ptr [0xa42e08]
// 008efc2c  33c0                 xor eax, eax
// 008efc2e  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008efc32  64890d00000000       mov dword ptr fs:[0], ecx
// 008efc39  59                   pop ecx
// 008efc3a  5f                   pop edi
// 008efc3b  5e                   pop esi
// 008efc3c  5d                   pop ebp
// 008efc3d  5b                   pop ebx
// 008efc3e  83c444               add esp, 0x44
// 008efc41  c20400               ret 4
// copied from an identical function in another client (function ?OnCreate@CXTColorSelectorCtrl@@IAEHPAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorSelectorCtrl.cpp