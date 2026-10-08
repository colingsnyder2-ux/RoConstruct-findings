// roc 2007-03 00502ff0  unit: seg_00500000  size: 533 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00502ff0
//
// 00502ff0  6aff                 push -1
// 00502ff2  68fd0e7500           push 0x750efd
// 00502ff7  64a100000000         mov eax, dword ptr fs:[0]
// 00502ffd  50                   push eax
// 00502ffe  83ec74               sub esp, 0x74
// 00503001  53                   push ebx
// 00503002  55                   push ebp
// 00503003  56                   push esi
// 00503004  57                   push edi
// 00503005  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 0050300a  33c4                 xor eax, esp
// 0050300c  50                   push eax
// 0050300d  8d842488000000       lea eax, [esp + 0x88]
// 00503014  64a300000000         mov dword ptr fs:[0], eax
// 0050301a  8bf1                 mov esi, ecx
// 0050301c  89742414             mov dword ptr [esp + 0x14], esi
// 00503020  33ed                 xor ebp, ebp
// 00503022  896e04               mov dword ptr [esi + 4], ebp
// 00503025  896e08               mov dword ptr [esi + 8], ebp
// 00503028  896e0c               mov dword ptr [esi + 0xc], ebp
// 0050302b  896e10               mov dword ptr [esi + 0x10], ebp
// 0050302e  8d5e14               lea ebx, [esi + 0x14]
// 00503031  89ac2490000000       mov dword ptr [esp + 0x90], ebp
// 00503038  896b04               mov dword ptr [ebx + 4], ebp
// 0050303b  896b08               mov dword ptr [ebx + 8], ebp
// 0050303e  892b                 mov dword ptr [ebx], ebp
// 00503040  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 00503047  50                   push eax
// 00503048  8d4e2c               lea ecx, [esi + 0x2c]
// 0050304b  c684249400000001     mov byte ptr [esp + 0x94], 1
// 00503053  e8b8ebffff           call 0x501c10
// 00503058  8b4e50               mov ecx, dword ptr [esi + 0x50]
// 0050305b  8bbc249c000000       mov edi, dword ptr [esp + 0x9c]
// 00503062  83c101               add ecx, 1
// 00503065  396e48               cmp dword ptr [esi + 0x48], ebp
// 00503068  c684249000000002     mov byte ptr [esp + 0x90], 2
// 00503070  896e20               mov dword ptr [esi + 0x20], ebp
// 00503073  c7462801000000       mov dword ptr [esi + 0x28], 1
// 0050307a  894e24               mov dword ptr [esi + 0x24], ecx
// 0050307d  0f8539010000         jne 0x5031bc
// 00503083  837f140e             cmp dword ptr [edi + 0x14], 0xe
// 00503087  737f                 jae 0x503108
// 00503089  6840567900           push 0x795640
// 0050308e  8d4c2454             lea ecx, [esp + 0x54]
// 00503092  ff1578e77700         call dword ptr [0x77e778]
// 00503098  57                   push edi
// 00503099  50                   push eax
// 0050309a  8d54243c             lea edx, [esp + 0x3c]
// 0050309e  52                   push edx
// 0050309f  c684249c00000003     mov byte ptr [esp + 0x9c], 3
// 005030a7  ff152ce67700         call dword ptr [0x77e62c]
// 005030ad  6840567900           push 0x795640
// 005030b2  50                   push eax
// 005030b3  8d44242c             lea eax, [esp + 0x2c]
// 005030b7  50                   push eax
// 005030b8  c68424a800000004     mov byte ptr [esp + 0xa8], 4
// 005030c0  ff1504e77700         call dword ptr [0x77e704]
// 005030c6  83c418               add esp, 0x18
// 005030c9  50                   push eax
// 005030ca  8d4e34               lea ecx, [esi + 0x34]
// 005030cd  c684249400000005     mov byte ptr [esp + 0x94], 5
// 005030d5  ff154ce77700         call dword ptr [0x77e74c]
// 005030db  8d4c2418             lea ecx, [esp + 0x18]
// 005030df  c684249000000004     mov byte ptr [esp + 0x90], 4
// 005030e7  ff158ce77700         call dword ptr [0x77e78c]
// 005030ed  8d4c2434             lea ecx, [esp + 0x34]
// 005030f1  c684249000000003     mov byte ptr [esp + 0x90], 3
// 005030f9  ff158ce77700         call dword ptr [0x77e78c]
// 005030ff  8d4c2450             lea ecx, [esp + 0x50]
// 00503103  e9a6000000           jmp 0x5031ae
// 00503108  6a0a                 push 0xa
// 0050310a  55                   push ebp
// 0050310b  8d4c2474             lea ecx, [esp + 0x74]
// 0050310f  51                   push ecx
// 00503110  8bcf                 mov ecx, edi
// 00503112  ff15a8e67700         call dword ptr [0x77e6a8]
// 00503118  8be8                 mov ebp, eax
// 0050311a  6840567900           push 0x795640
// 0050311f  8d4c241c             lea ecx, [esp + 0x1c]
// 00503123  c684249400000006     mov byte ptr [esp + 0x94], 6
// 0050312b  ff1578e77700         call dword ptr [0x77e778]
// 00503131  55                   push ebp
// 00503132  50                   push eax
// 00503133  8d54243c             lea edx, [esp + 0x3c]
// 00503137  52                   push edx
// 00503138  c684249c00000007     mov byte ptr [esp + 0x9c], 7
// 00503140  ff152ce67700         call dword ptr [0x77e62c]
// 00503146  6838067a00           push 0x7a0638
// 0050314b  50                   push eax
// 0050314c  8d442464             lea eax, [esp + 0x64]
// 00503150  50                   push eax
// 00503151  c68424a800000008     mov byte ptr [esp + 0xa8], 8
// 00503159  ff1504e77700         call dword ptr [0x77e704]
// 0050315f  83c418               add esp, 0x18
// 00503162  50                   push eax
// 00503163  8d4e34               lea ecx, [esi + 0x34]
// 00503166  c684249400000009     mov byte ptr [esp + 0x94], 9
// 0050316e  ff154ce77700         call dword ptr [0x77e74c]
// 00503174  8d4c2450             lea ecx, [esp + 0x50]
// 00503178  c684249000000008     mov byte ptr [esp + 0x90], 8
// 00503180  ff158ce77700         call dword ptr [0x77e78c]
// 00503186  8d4c2434             lea ecx, [esp + 0x34]
// 0050318a  c684249000000007     mov byte ptr [esp + 0x90], 7
// 00503192  ff158ce77700         call dword ptr [0x77e78c]
// 00503198  8d4c2418             lea ecx, [esp + 0x18]
// 0050319c  c684249000000006     mov byte ptr [esp + 0x90], 6
// 005031a4  ff158ce77700         call dword ptr [0x77e78c]
// 005031aa  8d4c246c             lea ecx, [esp + 0x6c]
// 005031ae  c684249000000002     mov byte ptr [esp + 0x90], 2
// 005031b6  ff158ce77700         call dword ptr [0x77e78c]
// 005031bc  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 005031bf  6a01                 push 1
// 005031c1  51                   push ecx
// 005031c2  8bcb                 mov ecx, ebx
// 005031c4  e867acffff           call 0x4fde30
// 005031c9  837f1810             cmp dword ptr [edi + 0x18], 0x10
// 005031cd  8b4618               mov eax, dword ptr [esi + 0x18]
// 005031d0  7205                 jb 0x5031d7
// 005031d2  8b7f04               mov edi, dword ptr [edi + 4]
// 005031d5  eb03                 jmp 0x5031da
// 005031d7  83c704               add edi, 4
// 005031da  8b13                 mov edx, dword ptr [ebx]
// 005031dc  50                   push eax
// 005031dd  57                   push edi
// 005031de  52                   push edx
// 005031df  e8cc0effff           call 0x4f40b0
// 005031e4  83c40c               add esp, 0xc
// 005031e7  8bc6                 mov eax, esi
// 005031e9  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 005031f0  64890d00000000       mov dword ptr fs:[0], ecx
// 005031f7  59                   pop ecx
// 005031f8  5f                   pop edi
// 005031f9  5e                   pop esi
// 005031fa  5d                   pop ebp
// 005031fb  5b                   pop ebx
// 005031fc  81c480000000         add esp, 0x80
// 00503202  c20c00               ret 0xc
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ??0TextInput@G3D@@QAE@W4FS@01@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABVSettings@01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
