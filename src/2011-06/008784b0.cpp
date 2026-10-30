// roc 2011-06 008784b0  unit: CXTPPropertyGridView  size: 519 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008784b0
//
// 008784b0  6aff                 push -1
// 008784b2  68b87fa000           push 0xa07fb8
// 008784b7  64a100000000         mov eax, dword ptr fs:[0]
// 008784bd  50                   push eax
// 008784be  83ec5c               sub esp, 0x5c
// 008784c1  53                   push ebx
// 008784c2  55                   push ebp
// 008784c3  56                   push esi
// 008784c4  57                   push edi
// 008784c5  a12058c900           mov eax, dword ptr [0xc95820]
// 008784ca  33c4                 xor eax, esp
// 008784cc  50                   push eax
// 008784cd  8d442470             lea eax, [esp + 0x70]
// 008784d1  64a300000000         mov dword ptr fs:[0], eax
// 008784d7  8bf9                 mov edi, ecx
// 008784d9  8b4720               mov eax, dword ptr [edi + 0x20]
// 008784dc  8b2dc019a400         mov ebp, dword ptr [0xa419c0]
// 008784e2  33db                 xor ebx, ebx
// 008784e4  53                   push ebx
// 008784e5  53                   push ebx
// 008784e6  688b010000           push 0x18b
// 008784eb  50                   push eax
// 008784ec  ffd5                 call ebp
// 008784ee  85c0                 test eax, eax
// 008784f0  7514                 jne 0x878506
// 008784f2  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 008784f6  64890d00000000       mov dword ptr fs:[0], ecx
// 008784fd  59                   pop ecx
// 008784fe  5f                   pop edi
// 008784ff  5e                   pop esi
// 00878500  5d                   pop ebp
// 00878501  5b                   pop ebx
// 00878502  83c468               add esp, 0x68
// 00878505  c3                   ret 
// 00878506  8d4c2448             lea ecx, [esp + 0x48]
// 0087850a  e821feffff           call 0x878330
// 0087850f  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 00878512  53                   push ebx
// 00878513  53                   push ebx
// 00878514  6a0b                 push 0xb
// 00878516  51                   push ecx
// 00878517  899c2488000000       mov dword ptr [esp + 0x88], ebx
// 0087851e  ffd5                 call ebp
// 00878520  8b4720               mov eax, dword ptr [edi + 0x20]
// 00878523  8d542438             lea edx, [esp + 0x38]
// 00878527  52                   push edx
// 00878528  53                   push ebx
// 00878529  6898010000           push 0x198
// 0087852e  50                   push eax
// 0087852f  895c2448             mov dword ptr [esp + 0x48], ebx
// 00878533  895c244c             mov dword ptr [esp + 0x4c], ebx
// 00878537  895c2450             mov dword ptr [esp + 0x50], ebx
// 0087853b  895c2454             mov dword ptr [esp + 0x54], ebx
// 0087853f  ffd5                 call ebp
// 00878541  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 00878544  6a05                 push 5
// 00878546  51                   push ecx
// 00878547  ff15581ba400         call dword ptr [0xa41b58]
// 0087854d  8bf0                 mov esi, eax
// 0087854f  3bf3                 cmp esi, ebx
// 00878551  7462                 je 0x8785b5
// 00878553  6af0                 push -0x10
// 00878555  56                   push esi
// 00878556  ff15981ca400         call dword ptr [0xa41c98]
// 0087855c  a900000010           test eax, 0x10000000
// 00878561  7443                 je 0x8785a6
// 00878563  8d542418             lea edx, [esp + 0x18]
// 00878567  52                   push edx
// 00878568  56                   push esi
// 00878569  ff155c1ca400         call dword ptr [0xa41c5c]
// 0087856f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00878573  8b542420             mov edx, dword ptr [esp + 0x20]
// 00878577  8b442418             mov eax, dword ptr [esp + 0x18]
// 0087857b  894c2464             mov dword ptr [esp + 0x64], ecx
// 0087857f  8d4c245c             lea ecx, [esp + 0x5c]
// 00878583  89542468             mov dword ptr [esp + 0x68], edx
// 00878587  8b542450             mov edx, dword ptr [esp + 0x50]
// 0087858b  51                   push ecx
// 0087858c  89442464             mov dword ptr [esp + 0x64], eax
// 00878590  8b442428             mov eax, dword ptr [esp + 0x28]
// 00878594  52                   push edx
// 00878595  8d4c2450             lea ecx, [esp + 0x50]
// 00878599  89742464             mov dword ptr [esp + 0x64], esi
// 0087859d  89442474             mov dword ptr [esp + 0x74], eax
// 008785a1  e80adbffff           call 0x8760b0
// 008785a6  6a02                 push 2
// 008785a8  56                   push esi
// 008785a9  ff15581ba400         call dword ptr [0xa41b58]
// 008785af  8bf0                 mov esi, eax
// 008785b1  3bf3                 cmp esi, ebx
// 008785b3  759e                 jne 0x878553
// 008785b5  8bcf                 mov ecx, edi
// 008785b7  e87220f9ff           call 0x80a62e
// 008785bc  53                   push ebx
// 008785bd  6a01                 push 1
// 008785bf  8944241c             mov dword ptr [esp + 0x1c], eax
// 008785c3  8b4720               mov eax, dword ptr [edi + 0x20]
// 008785c6  6a0b                 push 0xb
// 008785c8  50                   push eax
// 008785c9  ffd5                 call ebp
// 008785cb  8b5720               mov edx, dword ptr [edi + 0x20]
// 008785ce  8d4c2428             lea ecx, [esp + 0x28]
// 008785d2  51                   push ecx
// 008785d3  53                   push ebx
// 008785d4  6898010000           push 0x198
// 008785d9  52                   push edx
// 008785da  895c2438             mov dword ptr [esp + 0x38], ebx
// 008785de  895c243c             mov dword ptr [esp + 0x3c], ebx
// 008785e2  895c2440             mov dword ptr [esp + 0x40], ebx
// 008785e6  895c2444             mov dword ptr [esp + 0x44], ebx
// 008785ea  ffd5                 call ebp
// 008785ec  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 008785f0  2b6c243c             sub ebp, dword ptr [esp + 0x3c]
// 008785f4  837c245000           cmp dword ptr [esp + 0x50], 0
// 008785f9  7e7b                 jle 0x878676
// 008785fb  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 008785ff  85db                 test ebx, ebx
// 00878601  0f8cab000000         jl 0x8786b2
// 00878607  3b5c2450             cmp ebx, dword ptr [esp + 0x50]
// 0087860b  0f8da1000000         jge 0x8786b2
// 00878611  8b4604               mov eax, dword ptr [esi + 4]
// 00878614  89442418             mov dword ptr [esp + 0x18], eax
// 00878618  8b4e08               mov ecx, dword ptr [esi + 8]
// 0087861b  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0087861f  8b560c               mov edx, dword ptr [esi + 0xc]
// 00878622  8d4c2418             lea ecx, [esp + 0x18]
// 00878626  89542420             mov dword ptr [esp + 0x20], edx
// 0087862a  8b4610               mov eax, dword ptr [esi + 0x10]
// 0087862d  51                   push ecx
// 0087862e  8bcf                 mov ecx, edi
// 00878630  89442428             mov dword ptr [esp + 0x28], eax
// 00878634  e8cd29f9ff           call 0x80b006
// 00878639  55                   push ebp
// 0087863a  6a00                 push 0
// 0087863c  8d542420             lea edx, [esp + 0x20]
// 00878640  52                   push edx
// 00878641  ff15601ca400         call dword ptr [0xa41c60]
// 00878647  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0087864b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0087864f  8b542420             mov edx, dword ptr [esp + 0x20]
// 00878653  6a14                 push 0x14
// 00878655  2bc8                 sub ecx, eax
// 00878657  51                   push ecx
// 00878658  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0087865c  2bd1                 sub edx, ecx
// 0087865e  52                   push edx
// 0087865f  50                   push eax
// 00878660  8b06                 mov eax, dword ptr [esi]
// 00878662  51                   push ecx
// 00878663  6a00                 push 0
// 00878665  50                   push eax
// 00878666  ff15d819a400         call dword ptr [0xa419d8]
// 0087866c  43                   inc ebx
// 0087866d  83c614               add esi, 0x14
// 00878670  3b5c2450             cmp ebx, dword ptr [esp + 0x50]
// 00878674  7c89                 jl 0x8785ff
// 00878676  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 00878679  6881050000           push 0x581
// 0087867e  6a00                 push 0
// 00878680  6a00                 push 0
// 00878682  51                   push ecx
// 00878683  ff15b41aa400         call dword ptr [0xa41ab4]
// 00878689  8d4c2448             lea ecx, [esp + 0x48]
// 0087868d  c7442478ffffffff     mov dword ptr [esp + 0x78], 0xffffffff
// 00878695  e8b6fcffff           call 0x878350
// 0087869a  8b442414             mov eax, dword ptr [esp + 0x14]
// 0087869e  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 008786a2  64890d00000000       mov dword ptr fs:[0], ecx
// 008786a9  59                   pop ecx
// 008786aa  5f                   pop edi
// 008786ab  5e                   pop esi
// 008786ac  5d                   pop ebp
// 008786ad  5b                   pop ebx
// 008786ae  83c468               add esp, 0x68
// 008786b1  c3                   ret 
// 008786b2  e8531cf9ff           call 0x80a30a
// copied from an identical function in another client (function ?OnScrollControl@CXTPPropertyGridView@@AAEJXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\PropertyGrid\XTPPropertyGridView.cpp