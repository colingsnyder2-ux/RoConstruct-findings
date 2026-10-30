// roc 2009-12 008ae060  unit: CXTPDockingPaneKeyboardHook  size: 869 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ae060
//
// 008ae060  6aff                 push -1
// 008ae062  68302d9600           push 0x962d30
// 008ae067  64a100000000         mov eax, dword ptr fs:[0]
// 008ae06d  50                   push eax
// 008ae06e  83ec20               sub esp, 0x20
// 008ae071  53                   push ebx
// 008ae072  55                   push ebp
// 008ae073  56                   push esi
// 008ae074  57                   push edi
// 008ae075  a10052b600           mov eax, dword ptr [0xb65200]
// 008ae07a  33c4                 xor eax, esp
// 008ae07c  50                   push eax
// 008ae07d  8d442434             lea eax, [esp + 0x34]
// 008ae081  64a300000000         mov dword ptr fs:[0], eax
// 008ae087  68b0888300           push 0x8388b0
// 008ae08c  b920bbb900           mov ecx, 0xb9bb20
// 008ae091  e8a6830700           call 0x92643c
// 008ae096  8bf0                 mov esi, eax
// 008ae098  33c0                 xor eax, eax
// 008ae09a  33db                 xor ebx, ebx
// 008ae09c  3bf3                 cmp esi, ebx
// 008ae09e  0f95c0               setne al
// 008ae0a1  3bc3                 cmp eax, ebx
// 008ae0a3  7505                 jne 0x8ae0aa
// 008ae0a5  e8625af4ff           call 0x7f3b0c
// 008ae0aa  8b442444             mov eax, dword ptr [esp + 0x44]
// 008ae0ae  3bc3                 cmp eax, ebx
// 008ae0b0  7414                 je 0x8ae0c6
// 008ae0b2  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008ae0b6  8b542448             mov edx, dword ptr [esp + 0x48]
// 008ae0ba  51                   push ecx
// 008ae0bb  52                   push edx
// 008ae0bc  50                   push eax
// 008ae0bd  8b4604               mov eax, dword ptr [esi + 4]
// 008ae0c0  50                   push eax
// 008ae0c1  e9e3020000           jmp 0x8ae3a9
// 008ae0c6  8b6c244c             mov ebp, dword ptr [esp + 0x4c]
// 008ae0ca  c1ed10               shr ebp, 0x10
// 008ae0cd  f7c500800000         test ebp, 0x8000
// 008ae0d3  0f85c1020000         jne 0x8ae39a
// 008ae0d9  837c244809           cmp dword ptr [esp + 0x48], 9
// 008ae0de  0f85be000000         jne 0x8ae1a2
// 008ae0e4  6a11                 push 0x11
// 008ae0e6  ff1530cc9800         call dword ptr [0x98cc30]
// 008ae0ec  6685c0               test ax, ax
// 008ae0ef  0f8dad000000         jge 0x8ae1a2
// 008ae0f5  f7c500200000         test ebp, 0x2000
// 008ae0fb  0f85a1000000         jne 0x8ae1a2
// 008ae101  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 008ae104  51                   push ecx
// 008ae105  8d4c2418             lea ecx, [esp + 0x18]
// 008ae109  e8225af4ff           call 0x7f3b30
// 008ae10e  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 008ae111  895c243c             mov dword ptr [esp + 0x3c], ebx
// 008ae115  3bcb                 cmp ecx, ebx
// 008ae117  7424                 je 0x8ae13d
// 008ae119  53                   push ebx
// 008ae11a  53                   push ebx
// 008ae11b  6a09                 push 9
// 008ae11d  e87efaffff           call 0x8adba0
// 008ae122  8d4c2414             lea ecx, [esp + 0x14]
// 008ae126  c744243cffffffff     mov dword ptr [esp + 0x3c], 0xffffffff
// 008ae12e  e86d4bb5ff           call 0x402ca0
// 008ae133  b801000000           mov eax, 1
// 008ae138  e972020000           jmp 0x8ae3af
// 008ae13d  8bce                 mov ecx, esi
// 008ae13f  e88cfeffff           call 0x8adfd0
// 008ae144  8bf8                 mov edi, eax
// 008ae146  3bfb                 cmp edi, ebx
// 008ae148  7447                 je 0x8ae191
// 008ae14a  f6871001000008       test byte ptr [edi + 0x110], 8
// 008ae151  743e                 je 0x8ae191
// 008ae153  8b8f34010000         mov ecx, dword ptr [edi + 0x134]
// 008ae159  e80461f4ff           call 0x7f4262
// 008ae15e  894628               mov dword ptr [esi + 0x28], eax
// 008ae161  89b8f8000000         mov dword ptr [eax + 0xf8], edi
// 008ae167  8b5628               mov edx, dword ptr [esi + 0x28]
// 008ae16a  899a50010000         mov dword ptr [edx + 0x150], ebx
// 008ae170  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 008ae173  e898f0ffff           call 0x8ad210
// 008ae178  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 008ae17b  8bf8                 mov edi, eax
// 008ae17d  3bcb                 cmp ecx, ebx
// 008ae17f  7409                 je 0x8ae18a
// 008ae181  8b01                 mov eax, dword ptr [ecx]
// 008ae183  8b5004               mov edx, dword ptr [eax + 4]
// 008ae186  6a01                 push 1
// 008ae188  ffd2                 call edx
// 008ae18a  895e28               mov dword ptr [esi + 0x28], ebx
// 008ae18d  3bfb                 cmp edi, ebx
// 008ae18f  7591                 jne 0x8ae122
// 008ae191  8d4c2414             lea ecx, [esp + 0x14]
// 008ae195  c744243cffffffff     mov dword ptr [esp + 0x3c], 0xffffffff
// 008ae19d  e8fe4ab5ff           call 0x402ca0
// 008ae1a2  81e500200000         and ebp, 0x2000
// 008ae1a8  0f84a9000000         je 0x8ae257
// 008ae1ae  837c244876           cmp dword ptr [esp + 0x48], 0x76
// 008ae1b3  0f859e000000         jne 0x8ae257
// 008ae1b9  6a11                 push 0x11
// 008ae1bb  ff1530cc9800         call dword ptr [0x98cc30]
// 008ae1c1  6685c0               test ax, ax
// 008ae1c4  0f8c8d000000         jl 0x8ae257
// 008ae1ca  8b4624               mov eax, dword ptr [esi + 0x24]
// 008ae1cd  50                   push eax
// 008ae1ce  8d4c2418             lea ecx, [esp + 0x18]
// 008ae1d2  e85959f4ff           call 0x7f3b30
// 008ae1d7  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 008ae1da  c744243c01000000     mov dword ptr [esp + 0x3c], 1
// 008ae1e2  3bcb                 cmp ecx, ebx
// 008ae1e4  0f852fffffff         jne 0x8ae119
// 008ae1ea  8bce                 mov ecx, esi
// 008ae1ec  e8dffdffff           call 0x8adfd0
// 008ae1f1  8bf8                 mov edi, eax
// 008ae1f3  3bfb                 cmp edi, ebx
// 008ae1f5  744f                 je 0x8ae246
// 008ae1f7  f6871001000004       test byte ptr [edi + 0x110], 4
// 008ae1fe  7446                 je 0x8ae246
// 008ae200  8b8f34010000         mov ecx, dword ptr [edi + 0x134]
// 008ae206  e85760f4ff           call 0x7f4262
// 008ae20b  894628               mov dword ptr [esi + 0x28], eax
// 008ae20e  89b8f8000000         mov dword ptr [eax + 0xf8], edi
// 008ae214  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 008ae217  c7815001000001000000 mov dword ptr [ecx + 0x150], 1
// 008ae221  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 008ae224  e8e7efffff           call 0x8ad210
// 008ae229  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 008ae22c  8bf8                 mov edi, eax
// 008ae22e  3bcb                 cmp ecx, ebx
// 008ae230  7409                 je 0x8ae23b
// 008ae232  8b11                 mov edx, dword ptr [ecx]
// 008ae234  8b4204               mov eax, dword ptr [edx + 4]
// 008ae237  6a01                 push 1
// 008ae239  ffd0                 call eax
// 008ae23b  895e28               mov dword ptr [esi + 0x28], ebx
// 008ae23e  3bfb                 cmp edi, ebx
// 008ae240  0f85dcfeffff         jne 0x8ae122
// 008ae246  8d4c2414             lea ecx, [esp + 0x14]
// 008ae24a  c744243cffffffff     mov dword ptr [esp + 0x3c], 0xffffffff
// 008ae252  e8494ab5ff           call 0x402ca0
// 008ae257  663beb               cmp bp, bx
// 008ae25a  0f843a010000         je 0x8ae39a
// 008ae260  837c244875           cmp dword ptr [esp + 0x48], 0x75
// 008ae265  757b                 jne 0x8ae2e2
// 008ae267  6a11                 push 0x11
// 008ae269  ff1530cc9800         call dword ptr [0x98cc30]
// 008ae26f  6685c0               test ax, ax
// 008ae272  7c6e                 jl 0x8ae2e2
// 008ae274  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 008ae277  51                   push ecx
// 008ae278  8d4c2418             lea ecx, [esp + 0x18]
// 008ae27c  e8af58f4ff           call 0x7f3b30
// 008ae281  8bce                 mov ecx, esi
// 008ae283  c744243c02000000     mov dword ptr [esp + 0x3c], 2
// 008ae28b  e840fdffff           call 0x8adfd0
// 008ae290  8bf8                 mov edi, eax
// 008ae292  3bfb                 cmp edi, ebx
// 008ae294  743b                 je 0x8ae2d1
// 008ae296  f6871001000002       test byte ptr [edi + 0x110], 2
// 008ae29d  7432                 je 0x8ae2d1
// 008ae29f  6a10                 push 0x10
// 008ae2a1  ff1530cc9800         call dword ptr [0x98cc30]
// 008ae2a7  33d2                 xor edx, edx
// 008ae2a9  6685c0               test ax, ax
// 008ae2ac  0f9cc2               setl dl
// 008ae2af  53                   push ebx
// 008ae2b0  4a                   dec edx
// 008ae2b1  83e2f0               and edx, 0xfffffff0
// 008ae2b4  81c250f00000         add edx, 0xf050
// 008ae2ba  8bc2                 mov eax, edx
// 008ae2bc  50                   push eax
// 008ae2bd  8b4720               mov eax, dword ptr [edi + 0x20]
// 008ae2c0  6812010000           push 0x112
// 008ae2c5  50                   push eax
// 008ae2c6  ff15b8cb9800         call dword ptr [0x98cbb8]
// 008ae2cc  e951feffff           jmp 0x8ae122
// 008ae2d1  8d4c2414             lea ecx, [esp + 0x14]
// 008ae2d5  c744243cffffffff     mov dword ptr [esp + 0x3c], 0xffffffff
// 008ae2dd  e8be49b5ff           call 0x402ca0
// 008ae2e2  663beb               cmp bp, bx
// 008ae2e5  0f84af000000         je 0x8ae39a
// 008ae2eb  8b442448             mov eax, dword ptr [esp + 0x48]
// 008ae2ef  3dbd000000           cmp eax, 0xbd
// 008ae2f4  7409                 je 0x8ae2ff
// 008ae2f6  83f86d               cmp eax, 0x6d
// 008ae2f9  0f859b000000         jne 0x8ae39a
// 008ae2ff  8b3d30cc9800         mov edi, dword ptr [0x98cc30]
// 008ae305  6a11                 push 0x11
// 008ae307  ffd7                 call edi
// 008ae309  6685c0               test ax, ax
// 008ae30c  0f8c88000000         jl 0x8ae39a
// 008ae312  6a10                 push 0x10
// 008ae314  ffd7                 call edi
// 008ae316  6685c0               test ax, ax
// 008ae319  7c7f                 jl 0x8ae39a
// 008ae31b  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 008ae31e  51                   push ecx
// 008ae31f  8d4c2428             lea ecx, [esp + 0x28]
// 008ae323  e80858f4ff           call 0x7f3b30
// 008ae328  8bce                 mov ecx, esi
// 008ae32a  c744243c03000000     mov dword ptr [esp + 0x3c], 3
// 008ae332  e899fcffff           call 0x8adfd0
// 008ae337  8bf8                 mov edi, eax
// 008ae339  3bfb                 cmp edi, ebx
// 008ae33b  744c                 je 0x8ae389
// 008ae33d  f6871001000001       test byte ptr [edi + 0x110], 1
// 008ae344  7443                 je 0x8ae389
// 008ae346  8bafd8000000         mov ebp, dword ptr [edi + 0xd8]
// 008ae34c  3beb                 cmp ebp, ebx
// 008ae34e  7439                 je 0x8ae389
// 008ae350  8bcd                 mov ecx, ebp
// 008ae352  e8a9e6faff           call 0x85ca00
// 008ae357  85c0                 test eax, eax
// 008ae359  7525                 jne 0x8ae380
// 008ae35b  8b5520               mov edx, dword ptr [ebp + 0x20]
// 008ae35e  8b421c               mov eax, dword ptr [edx + 0x1c]
// 008ae361  8d4d20               lea ecx, [ebp + 0x20]
// 008ae364  ffd0                 call eax
// 008ae366  85c0                 test eax, eax
// 008ae368  7516                 jne 0x8ae380
// 008ae36a  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 008ae36d  6a2d                 push 0x2d
// 008ae36f  6800f10000           push 0xf100
// 008ae374  6812010000           push 0x112
// 008ae379  51                   push ecx
// 008ae37a  ff15b8cb9800         call dword ptr [0x98cbb8]
// 008ae380  8d4c2424             lea ecx, [esp + 0x24]
// 008ae384  e99dfdffff           jmp 0x8ae126
// 008ae389  8d4c2424             lea ecx, [esp + 0x24]
// 008ae38d  c744243cffffffff     mov dword ptr [esp + 0x3c], 0xffffffff
// 008ae395  e80649b5ff           call 0x402ca0
// 008ae39a  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 008ae39e  8b442448             mov eax, dword ptr [esp + 0x48]
// 008ae3a2  8b4e04               mov ecx, dword ptr [esi + 4]
// 008ae3a5  52                   push edx
// 008ae3a6  50                   push eax
// 008ae3a7  53                   push ebx
// 008ae3a8  51                   push ecx
// 008ae3a9  ff15c4ca9800         call dword ptr [0x98cac4]
// 008ae3af  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008ae3b3  64890d00000000       mov dword ptr fs:[0], ecx
// 008ae3ba  59                   pop ecx
// 008ae3bb  5f                   pop edi
// 008ae3bc  5e                   pop esi
// 008ae3bd  5d                   pop ebp
// 008ae3be  5b                   pop ebx
// 008ae3bf  83c42c               add esp, 0x2c
// 008ae3c2  c20c00               ret 0xc
// copied from an identical function in another client (function ?KeyboardProc@CXTPDockingPaneKeyboardHook@@KGJHIJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneKeyboardHook.cpp