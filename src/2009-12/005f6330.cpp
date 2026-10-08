// roc 2009-12 005f6330  unit: G3D::BinaryInput  size: 778 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f6330
//
// 005f6330  64a100000000         mov eax, dword ptr fs:[0]
// 005f6336  6aff                 push -1
// 005f6338  688bf69300           push 0x93f68b
// 005f633d  50                   push eax
// 005f633e  64892500000000       mov dword ptr fs:[0], esp
// 005f6345  81ece4000000         sub esp, 0xe4
// 005f634b  56                   push esi
// 005f634c  8bb424f8000000       mov esi, dword ptr [esp + 0xf8]
// 005f6353  6856fd9900           push 0x99fd56
// 005f6358  56                   push esi
// 005f6359  ff15acb69800         call dword ptr [0x98b6ac]
// 005f635f  83c408               add esp, 8
// 005f6362  84c0                 test al, al
// 005f6364  0f85ba020000         jne 0x5f6624
// 005f636a  55                   push ebp
// 005f636b  57                   push edi
// 005f636c  8d4c2434             lea ecx, [esp + 0x34]
// 005f6370  ff15e8b69800         call dword ptr [0x98b6e8]
// 005f6376  8b4614               mov eax, dword ptr [esi + 0x14]
// 005f6379  33ed                 xor ebp, ebp
// 005f637b  8d78ff               lea edi, [eax - 1]
// 005f637e  89ac24f8000000       mov dword ptr [esp + 0xf8], ebp
// 005f6385  3bf8                 cmp edi, eax
// 005f6387  7606                 jbe 0x5f638f
// 005f6389  ff1560b79800         call dword ptr [0x98b760]
// 005f638f  837e1810             cmp dword ptr [esi + 0x18], 0x10
// 005f6393  7205                 jb 0x5f639a
// 005f6395  8b4604               mov eax, dword ptr [esi + 4]
// 005f6398  eb03                 jmp 0x5f639d
// 005f639a  8d4604               lea eax, [esi + 4]
// 005f639d  8a0438               mov al, byte ptr [eax + edi]
// 005f63a0  8b3d80b69800         mov edi, dword ptr [0x98b680]
// 005f63a6  3c2f                 cmp al, 0x2f
// 005f63a8  743b                 je 0x5f63e5
// 005f63aa  3c5c                 cmp al, 0x5c
// 005f63ac  7437                 je 0x5f63e5
// 005f63ae  6898489b00           push 0x9b4898
// 005f63b3  8d442454             lea eax, [esp + 0x54]
// 005f63b7  56                   push esi
// 005f63b8  50                   push eax
// 005f63b9  ffd7                 call edi
// 005f63bb  83c40c               add esp, 0xc
// 005f63be  50                   push eax
// 005f63bf  8d4c2438             lea ecx, [esp + 0x38]
// 005f63c3  c68424fc00000001     mov byte ptr [esp + 0xfc], 1
// 005f63cb  ff159cb69800         call dword ptr [0x98b69c]
// 005f63d1  8d4c2450             lea ecx, [esp + 0x50]
// 005f63d5  c68424f800000000     mov byte ptr [esp + 0xf8], 0
// 005f63dd  ff15e4b69800         call dword ptr [0x98b6e4]
// 005f63e3  eb0b                 jmp 0x5f63f0
// 005f63e5  56                   push esi
// 005f63e6  8d4c2438             lea ecx, [esp + 0x38]
// 005f63ea  ff159cb69800         call dword ptr [0x98b69c]
// 005f63f0  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 005f63f4  53                   push ebx
// 005f63f5  49                   dec ecx
// 005f63f6  51                   push ecx
// 005f63f7  55                   push ebp
// 005f63f8  8d54245c             lea edx, [esp + 0x5c]
// 005f63fc  52                   push edx
// 005f63fd  8d4c2444             lea ecx, [esp + 0x44]
// 005f6401  ff15a8b69800         call dword ptr [0x98b6a8]
// 005f6407  50                   push eax
// 005f6408  c684240001000002     mov byte ptr [esp + 0x100], 2
// 005f6410  e83bf8ffff           call 0x5f5c50
// 005f6415  83c404               add esp, 4
// 005f6418  8d4c2454             lea ecx, [esp + 0x54]
// 005f641c  8ad8                 mov bl, al
// 005f641e  c68424fc00000000     mov byte ptr [esp + 0xfc], 0
// 005f6426  ff15e4b69800         call dword ptr [0x98b6e4]
// 005f642c  84db                 test bl, bl
// 005f642e  0f85d8010000         jne 0x5f660c
// 005f6434  8d8c2484000000       lea ecx, [esp + 0x84]
// 005f643b  ff15e8b69800         call dword ptr [0x98b6e8]
// 005f6441  8d8c24bc000000       lea ecx, [esp + 0xbc]
// 005f6448  c68424fc00000003     mov byte ptr [esp + 0xfc], 3
// 005f6450  ff15e8b69800         call dword ptr [0x98b6e8]
// 005f6456  8d8c24a0000000       lea ecx, [esp + 0xa0]
// 005f645d  c68424fc00000004     mov byte ptr [esp + 0xfc], 4
// 005f6465  ff15e8b69800         call dword ptr [0x98b6e8]
// 005f646b  896c2414             mov dword ptr [esp + 0x14], ebp
// 005f646f  896c2418             mov dword ptr [esp + 0x18], ebp
// 005f6473  896c2410             mov dword ptr [esp + 0x10], ebp
// 005f6477  8d8c24d8000000       lea ecx, [esp + 0xd8]
// 005f647e  c68424fc00000006     mov byte ptr [esp + 0xfc], 6
// 005f6486  ff15e8b69800         call dword ptr [0x98b6e8]
// 005f648c  8d8424a0000000       lea eax, [esp + 0xa0]
// 005f6493  50                   push eax
// 005f6494  8d8c24c0000000       lea ecx, [esp + 0xc0]
// 005f649b  51                   push ecx
// 005f649c  8d542418             lea edx, [esp + 0x18]
// 005f64a0  52                   push edx
// 005f64a1  8d842490000000       lea eax, [esp + 0x90]
// 005f64a8  50                   push eax
// 005f64a9  8d4c2448             lea ecx, [esp + 0x48]
// 005f64ad  51                   push ecx
// 005f64ae  c684241001000007     mov byte ptr [esp + 0x110], 7
// 005f64b6  e815f9ffff           call 0x5f5dd0
// 005f64bb  6884169b00           push 0x9b1684
// 005f64c0  8d94249c000000       lea edx, [esp + 0x9c]
// 005f64c7  52                   push edx
// 005f64c8  8d442438             lea eax, [esp + 0x38]
// 005f64cc  50                   push eax
// 005f64cd  ffd7                 call edi
// 005f64cf  83c420               add esp, 0x20
// 005f64d2  396c2414             cmp dword ptr [esp + 0x14], ebp
// 005f64d6  c68424fc00000008     mov byte ptr [esp + 0xfc], 8
// 005f64de  0f8eb1000000         jle 0x5f6595
// 005f64e4  8b3da4b59800         mov edi, dword ptr [0x98b5a4]
// 005f64ea  33f6                 xor esi, esi
// 005f64ec  8d642400             lea esp, [esp]
// 005f64f0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005f64f4  8d040e               lea eax, [esi + ecx]
// 005f64f7  50                   push eax
// 005f64f8  8d542458             lea edx, [esp + 0x58]
// 005f64fc  6898489b00           push 0x9b4898
// 005f6501  52                   push edx
// 005f6502  ffd7                 call edi
// 005f6504  83c40c               add esp, 0xc
// 005f6507  50                   push eax
// 005f6508  8d4c2420             lea ecx, [esp + 0x20]
// 005f650c  c684240001000009     mov byte ptr [esp + 0x100], 9
// 005f6514  ff15fcb69800         call dword ptr [0x98b6fc]
// 005f651a  8d4c2454             lea ecx, [esp + 0x54]
// 005f651e  c68424fc00000008     mov byte ptr [esp + 0xfc], 8
// 005f6526  ff15e4b69800         call dword ptr [0x98b6e4]
// 005f652c  8d44241c             lea eax, [esp + 0x1c]
// 005f6530  6856fd9900           push 0x99fd56
// 005f6535  50                   push eax
// 005f6536  ff15acb69800         call dword ptr [0x98b6ac]
// 005f653c  83c408               add esp, 8
// 005f653f  84c0                 test al, al
// 005f6541  7544                 jne 0x5f6587
// 005f6543  8b442420             mov eax, dword ptr [esp + 0x20]
// 005f6547  bb10000000           mov ebx, 0x10
// 005f654c  395c2434             cmp dword ptr [esp + 0x34], ebx
// 005f6550  7304                 jae 0x5f6556
// 005f6552  8d442420             lea eax, [esp + 0x20]
// 005f6556  8d4c2454             lea ecx, [esp + 0x54]
// 005f655a  51                   push ecx
// 005f655b  50                   push eax
// 005f655c  ff1548b89800         call dword ptr [0x98b848]
// 005f6562  83c408               add esp, 8
// 005f6565  83f8ff               cmp eax, -1
// 005f6568  0f95c0               setne al
// 005f656b  84c0                 test al, al
// 005f656d  7518                 jne 0x5f6587
// 005f656f  8b442420             mov eax, dword ptr [esp + 0x20]
// 005f6573  395c2434             cmp dword ptr [esp + 0x34], ebx
// 005f6577  7304                 jae 0x5f657d
// 005f6579  8d442420             lea eax, [esp + 0x20]
// 005f657d  50                   push eax
// 005f657e  ff15ccb89800         call dword ptr [0x98b8cc]
// 005f6584  83c404               add esp, 4
// 005f6587  45                   inc ebp
// 005f6588  83c61c               add esi, 0x1c
// 005f658b  3b6c2414             cmp ebp, dword ptr [esp + 0x14]
// 005f658f  0f8c5bffffff         jl 0x5f64f0
// 005f6595  8d4c241c             lea ecx, [esp + 0x1c]
// 005f6599  c68424fc00000007     mov byte ptr [esp + 0xfc], 7
// 005f65a1  ff15e4b69800         call dword ptr [0x98b6e4]
// 005f65a7  8d8c24d8000000       lea ecx, [esp + 0xd8]
// 005f65ae  c68424fc00000006     mov byte ptr [esp + 0xfc], 6
// 005f65b6  ff15e4b69800         call dword ptr [0x98b6e4]
// 005f65bc  8d4c2410             lea ecx, [esp + 0x10]
// 005f65c0  c68424fc00000005     mov byte ptr [esp + 0xfc], 5
// 005f65c8  e8f345ffff           call 0x5eabc0
// 005f65cd  8d8c24a0000000       lea ecx, [esp + 0xa0]
// 005f65d4  c68424fc00000004     mov byte ptr [esp + 0xfc], 4
// 005f65dc  ff15e4b69800         call dword ptr [0x98b6e4]
// 005f65e2  8d8c24bc000000       lea ecx, [esp + 0xbc]
// 005f65e9  c68424fc00000003     mov byte ptr [esp + 0xfc], 3
// 005f65f1  ff15e4b69800         call dword ptr [0x98b6e4]
// 005f65f7  8d8c2484000000       lea ecx, [esp + 0x84]
// 005f65fe  c68424fc00000000     mov byte ptr [esp + 0xfc], 0
// 005f6606  ff15e4b69800         call dword ptr [0x98b6e4]
// 005f660c  8d4c2438             lea ecx, [esp + 0x38]
// 005f6610  c78424fc000000ffffffff mov dword ptr [esp + 0xfc], 0xffffffff
// 005f661b  ff15e4b69800         call dword ptr [0x98b6e4]
// 005f6621  5b                   pop ebx
// 005f6622  5f                   pop edi
// 005f6623  5d                   pop ebp
// 005f6624  8b8c24e8000000       mov ecx, dword ptr [esp + 0xe8]
// 005f662b  5e                   pop esi
// 005f662c  64890d00000000       mov dword ptr fs:[0], ecx
// 005f6633  81c4f0000000         add esp, 0xf0
// 005f6639  c3                   ret 
// library g3d-6.09/G3Dcpp\fileutils.cpp (function ?createDirectory@G3D@@YAXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/fileutils.cpp
