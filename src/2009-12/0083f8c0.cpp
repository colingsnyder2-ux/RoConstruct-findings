// roc 2009-12 0083f8c0  unit: CXTPCustomizeSheet  size: 659 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083f8c0
//
// 0083f8c0  6aff                 push -1
// 0083f8c2  68d8cb9500           push 0x95cbd8
// 0083f8c7  64a100000000         mov eax, dword ptr fs:[0]
// 0083f8cd  50                   push eax
// 0083f8ce  83ec2c               sub esp, 0x2c
// 0083f8d1  53                   push ebx
// 0083f8d2  55                   push ebp
// 0083f8d3  56                   push esi
// 0083f8d4  57                   push edi
// 0083f8d5  a10052b600           mov eax, dword ptr [0xb65200]
// 0083f8da  33c4                 xor eax, esp
// 0083f8dc  50                   push eax
// 0083f8dd  8d442440             lea eax, [esp + 0x40]
// 0083f8e1  64a300000000         mov dword ptr fs:[0], eax
// 0083f8e7  8bf1                 mov esi, ecx
// 0083f8e9  33db                 xor ebx, ebx
// 0083f8eb  391d30b6b900         cmp dword ptr [0xb9b630], ebx
// 0083f8f1  7417                 je 0x83f90a
// 0083f8f3  8d4302               lea eax, [ebx + 2]
// 0083f8f6  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0083f8fa  64890d00000000       mov dword ptr fs:[0], ecx
// 0083f901  59                   pop ecx
// 0083f902  5f                   pop edi
// 0083f903  5e                   pop esi
// 0083f904  5d                   pop ebp
// 0083f905  5b                   pop ebx
// 0083f906  83c438               add esp, 0x38
// 0083f909  c3                   ret 
// 0083f90a  8b8eb8000000         mov ecx, dword ptr [esi + 0xb8]
// 0083f910  6a01                 push 1
// 0083f912  e8d970fdff           call 0x8169f0
// 0083f917  8b86b8000000         mov eax, dword ptr [esi + 0xb8]
// 0083f91d  8b404c               mov eax, dword ptr [eax + 0x4c]
// 0083f920  bd10000000           mov ebp, 0x10
// 0083f925  55                   push ebp
// 0083f926  897014               mov dword ptr [eax + 0x14], esi
// 0083f929  e8226f0e00           call 0x926850
// 0083f92e  8b16                 mov edx, dword ptr [esi]
// 0083f930  8b8250010000         mov eax, dword ptr [edx + 0x150]
// 0083f936  8bce                 mov ecx, esi
// 0083f938  ffd0                 call eax
// 0083f93a  e8df41fbff           call 0x7f3b1e
// 0083f93f  8b4004               mov eax, dword ptr [eax + 4]
// 0083f942  89442418             mov dword ptr [esp + 0x18], eax
// 0083f946  3bc3                 cmp eax, ebx
// 0083f948  7408                 je 0x83f952
// 0083f94a  53                   push ebx
// 0083f94b  8bc8                 mov ecx, eax
// 0083f94d  e8da6e0e00           call 0x92682c
// 0083f952  8b86b4000000         mov eax, dword ptr [esi + 0xb4]
// 0083f958  3bc3                 cmp eax, ebx
// 0083f95a  7508                 jne 0x83f964
// 0083f95c  33c0                 xor eax, eax
// 0083f95e  89442414             mov dword ptr [esp + 0x14], eax
// 0083f962  eb09                 jmp 0x83f96d
// 0083f964  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0083f967  894c2414             mov dword ptr [esp + 0x14], ecx
// 0083f96b  8bc1                 mov eax, ecx
// 0083f96d  8d7e54               lea edi, [esi + 0x54]
// 0083f970  8d54241c             lea edx, [esp + 0x1c]
// 0083f974  894708               mov dword ptr [edi + 8], eax
// 0083f977  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0083f97b  c7442420d0e68300     mov dword ptr [esp + 0x20], 0x83e6d0
// 0083f983  89742424             mov dword ptr [esp + 0x24], esi
// 0083f987  895c2428             mov dword ptr [esp + 0x28], ebx
// 0083f98b  c744242c90e88300     mov dword ptr [esp + 0x2c], 0x83e890
// 0083f993  89742430             mov dword ptr [esp + 0x30], esi
// 0083f997  895c2434             mov dword ptr [esp + 0x34], ebx
// 0083f99b  c744243820e98300     mov dword ptr [esp + 0x38], 0x83e920
// 0083f9a3  8974243c             mov dword ptr [esp + 0x3c], esi
// 0083f9a7  891530b6b900         mov dword ptr [0xb9b630], edx
// 0083f9ad  895c2448             mov dword ptr [esp + 0x48], ebx
// 0083f9b1  3bc3                 cmp eax, ebx
// 0083f9b3  7407                 je 0x83f9bc
// 0083f9b5  8bca                 mov ecx, edx
// 0083f9b7  e8c4ecffff           call 0x83e680
// 0083f9bc  ff1528cc9800         call dword ptr [0x98cc28]
// 0083f9c2  3bc3                 cmp eax, ebx
// 0083f9c4  740b                 je 0x83f9d1
// 0083f9c6  53                   push ebx
// 0083f9c7  53                   push ebx
// 0083f9c8  6a1f                 push 0x1f
// 0083f9ca  50                   push eax
// 0083f9cb  ff15c4cb9800         call dword ptr [0x98cbc4]
// 0083f9d1  096e3c               or dword ptr [esi + 0x3c], ebp
// 0083f9d4  56                   push esi
// 0083f9d5  895e44               mov dword ptr [esi + 0x44], ebx
// 0083f9d8  e86d6e0e00           call 0x92684a
// 0083f9dd  814f0400040000       or dword ptr [edi + 4], 0x400
// 0083f9e4  096e3c               or dword ptr [esi + 0x3c], ebp
// 0083f9e7  57                   push edi
// 0083f9e8  ff1568b09800         call dword ptr [0x98b068]
// 0083f9ee  816704fffbffff       and dword ptr [edi + 4], 0xfffffbff
// 0083f9f5  8be8                 mov ebp, eax
// 0083f9f7  e8486e0e00           call 0x926844
// 0083f9fc  3beb                 cmp ebp, ebx
// 0083f9fe  7405                 je 0x83fa05
// 0083fa00  83fdff               cmp ebp, -1
// 0083fa03  7504                 jne 0x83fa09
// 0083fa05  83663cef             and dword ptr [esi + 0x3c], 0xffffffef
// 0083fa09  8b8eb8000000         mov ecx, dword ptr [esi + 0xb8]
// 0083fa0f  e88c49fdff           call 0x8143a0
// 0083fa14  85c0                 test eax, eax
// 0083fa16  743c                 je 0x83fa54
// 0083fa18  6a20                 push 0x20
// 0083fa1a  6800005000           push 0x500000
// 0083fa1f  53                   push ebx
// 0083fa20  8bce                 mov ecx, esi
// 0083fa22  e8d943fbff           call 0x7f3e00
// 0083fa27  6820300000           push 0x3020
// 0083fa2c  8bce                 mov ecx, esi
// 0083fa2e  e8fd4cfbff           call 0x7f4730
// 0083fa33  8bf8                 mov edi, eax
// 0083fa35  3bfb                 cmp edi, ebx
// 0083fa37  741b                 je 0x83fa54
// 0083fa39  53                   push ebx
// 0083fa3a  6800004000           push 0x400000
// 0083fa3f  53                   push ebx
// 0083fa40  8bcf                 mov ecx, edi
// 0083fa42  e8b943fbff           call 0x7f3e00
// 0083fa47  8b4720               mov eax, dword ptr [edi + 0x20]
// 0083fa4a  6a01                 push 1
// 0083fa4c  53                   push ebx
// 0083fa4d  50                   push eax
// 0083fa4e  ff15e8cb9800         call dword ptr [0x98cbe8]
// 0083fa54  8b16                 mov edx, dword ptr [esi]
// 0083fa56  8b8290000000         mov eax, dword ptr [edx + 0x90]
// 0083fa5c  8b6e44               mov ebp, dword ptr [esi + 0x44]
// 0083fa5f  8bce                 mov ecx, esi
// 0083fa61  ffd0                 call eax
// 0083fa63  85c0                 test eax, eax
// 0083fa65  7422                 je 0x83fa89
// 0083fa67  8bce                 mov ecx, esi
// 0083fa69  bf04000000           mov edi, 4
// 0083fa6e  e8ff690e00           call 0x926472
// 0083fa73  a900010000           test eax, 0x100
// 0083fa78  7405                 je 0x83fa7f
// 0083fa7a  bf05000000           mov edi, 5
// 0083fa7f  57                   push edi
// 0083fa80  8bce                 mov ecx, esi
// 0083fa82  e8b76d0e00           call 0x92683e
// 0083fa87  8be8                 mov ebp, eax
// 0083fa89  395e20               cmp dword ptr [esi + 0x20], ebx
// 0083fa8c  7411                 je 0x83fa9f
// 0083fa8e  6897000000           push 0x97
// 0083fa93  53                   push ebx
// 0083fa94  53                   push ebx
// 0083fa95  53                   push ebx
// 0083fa96  53                   push ebx
// 0083fa97  53                   push ebx
// 0083fa98  8bce                 mov ecx, esi
// 0083fa9a  e88d41fbff           call 0x7f3c2c
// 0083fa9f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0083faa3  8b3dccca9800         mov edi, dword ptr [0x98cacc]
// 0083faa9  3bc3                 cmp eax, ebx
// 0083faab  7407                 je 0x83fab4
// 0083faad  50                   push eax
// 0083faae  ffd7                 call edi
// 0083fab0  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0083fab4  8b442428             mov eax, dword ptr [esp + 0x28]
// 0083fab8  3bc3                 cmp eax, ebx
// 0083faba  7407                 je 0x83fac3
// 0083fabc  50                   push eax
// 0083fabd  ffd7                 call edi
// 0083fabf  895c2428             mov dword ptr [esp + 0x28], ebx
// 0083fac3  8b442434             mov eax, dword ptr [esp + 0x34]
// 0083fac7  3bc3                 cmp eax, ebx
// 0083fac9  7407                 je 0x83fad2
// 0083facb  50                   push eax
// 0083facc  ffd7                 call edi
// 0083face  895c2434             mov dword ptr [esp + 0x34], ebx
// 0083fad2  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0083fad6  32db                 xor bl, bl
// 0083fad8  85ff                 test edi, edi
// 0083fada  740d                 je 0x83fae9
// 0083fadc  ff1550cb9800         call dword ptr [0x98cb50]
// 0083fae2  3b4620               cmp eax, dword ptr [esi + 0x20]
// 0083fae5  7502                 jne 0x83fae9
// 0083fae7  b301                 mov bl, 1
// 0083fae9  8b16                 mov edx, dword ptr [esi]
// 0083faeb  8b4268               mov eax, dword ptr [edx + 0x68]
// 0083faee  8bce                 mov ecx, esi
// 0083faf0  ffd0                 call eax
// 0083faf2  84db                 test bl, bl
// 0083faf4  7407                 je 0x83fafd
// 0083faf6  57                   push edi
// 0083faf7  ff1534ca9800         call dword ptr [0x98ca34]
// 0083fafd  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0083fb01  85c9                 test ecx, ecx
// 0083fb03  7407                 je 0x83fb0c
// 0083fb05  6a01                 push 1
// 0083fb07  e8206d0e00           call 0x92682c
// 0083fb0c  8b8eb8000000         mov ecx, dword ptr [esi + 0xb8]
// 0083fb12  6a00                 push 0
// 0083fb14  e8d76efdff           call 0x8169f0
// 0083fb19  8b8eb8000000         mov ecx, dword ptr [esi + 0xb8]
// 0083fb1f  8b514c               mov edx, dword ptr [ecx + 0x4c]
// 0083fb22  c7421400000000       mov dword ptr [edx + 0x14], 0
// 0083fb29  8b8eb8000000         mov ecx, dword ptr [esi + 0xb8]
// 0083fb2f  e8ac63fdff           call 0x815ee0
// 0083fb34  8d4c241c             lea ecx, [esp + 0x1c]
// 0083fb38  e8d3eaffff           call 0x83e610
// 0083fb3d  8bc5                 mov eax, ebp
// 0083fb3f  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0083fb43  64890d00000000       mov dword ptr fs:[0], ecx
// 0083fb4a  59                   pop ecx
// 0083fb4b  5f                   pop edi
// 0083fb4c  5e                   pop esi
// 0083fb4d  5d                   pop ebp
// 0083fb4e  5b                   pop ebx
// 0083fb4f  83c438               add esp, 0x38
// 0083fb52  c3                   ret 
// copied from an identical function in another client (function ?DoModal@CXTPCustomizeSheet@@UAEHXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCustomizeSheet.cpp