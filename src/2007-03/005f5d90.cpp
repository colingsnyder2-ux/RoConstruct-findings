// roc 2007-03 005f5d90  unit: seg_005f0000  size: 508 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005f5d90
//
// 005f5d90  64a100000000         mov eax, dword ptr fs:[0]
// 005f5d96  6aff                 push -1
// 005f5d98  68926f7500           push 0x756f92
// 005f5d9d  50                   push eax
// 005f5d9e  64892500000000       mov dword ptr fs:[0], esp
// 005f5da5  83ec44               sub esp, 0x44
// 005f5da8  57                   push edi
// 005f5da9  8bf9                 mov edi, ecx
// 005f5dab  817f08feffff0f       cmp dword ptr [edi + 8], 0xffffffe
// 005f5db2  7259                 jb 0x5f5e0d
// 005f5db4  68903f7800           push 0x783f90
// 005f5db9  8d4c2408             lea ecx, [esp + 8]
// 005f5dbd  ff1578e77700         call dword ptr [0x77e778]
// 005f5dc3  8d4c2420             lea ecx, [esp + 0x20]
// 005f5dc7  c744245000000000     mov dword ptr [esp + 0x50], 0
// 005f5dcf  ff1560e97700         call dword ptr [0x77e960]
// 005f5dd5  8d442404             lea eax, [esp + 4]
// 005f5dd9  50                   push eax
// 005f5dda  8d4c2430             lea ecx, [esp + 0x30]
// 005f5dde  c644245401           mov byte ptr [esp + 0x54], 1
// 005f5de3  c7442424383e7800     mov dword ptr [esp + 0x24], 0x783e38
// 005f5deb  ff157ce77700         call dword ptr [0x77e77c]
// 005f5df1  6870f78300           push 0x83f770
// 005f5df6  8d4c2424             lea ecx, [esp + 0x24]
// 005f5dfa  51                   push ecx
// 005f5dfb  c644245800           mov byte ptr [esp + 0x58], 0
// 005f5e00  c7442428443e7800     mov dword ptr [esp + 0x28], 0x783e44
// 005f5e08  e821920200           call 0x61f02e
// 005f5e0d  8b542464             mov edx, dword ptr [esp + 0x64]
// 005f5e11  8b4704               mov eax, dword ptr [edi + 4]
// 005f5e14  53                   push ebx
// 005f5e15  55                   push ebp
// 005f5e16  56                   push esi
// 005f5e17  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 005f5e1b  6a00                 push 0
// 005f5e1d  52                   push edx
// 005f5e1e  50                   push eax
// 005f5e1f  56                   push esi
// 005f5e20  50                   push eax
// 005f5e21  e8dafeffff           call 0x5f5d00
// 005f5e26  8be8                 mov ebp, eax
// 005f5e28  8b4704               mov eax, dword ptr [edi + 4]
// 005f5e2b  bb01000000           mov ebx, 1
// 005f5e30  015f08               add dword ptr [edi + 8], ebx
// 005f5e33  3bf0                 cmp esi, eax
// 005f5e35  7510                 jne 0x5f5e47
// 005f5e37  896804               mov dword ptr [eax + 4], ebp
// 005f5e3a  8b4704               mov eax, dword ptr [edi + 4]
// 005f5e3d  8928                 mov dword ptr [eax], ebp
// 005f5e3f  8b4f04               mov ecx, dword ptr [edi + 4]
// 005f5e42  896908               mov dword ptr [ecx + 8], ebp
// 005f5e45  eb22                 jmp 0x5f5e69
// 005f5e47  807c246800           cmp byte ptr [esp + 0x68], 0
// 005f5e4c  740d                 je 0x5f5e5b
// 005f5e4e  892e                 mov dword ptr [esi], ebp
// 005f5e50  8b4704               mov eax, dword ptr [edi + 4]
// 005f5e53  3b30                 cmp esi, dword ptr [eax]
// 005f5e55  7512                 jne 0x5f5e69
// 005f5e57  8928                 mov dword ptr [eax], ebp
// 005f5e59  eb0e                 jmp 0x5f5e69
// 005f5e5b  896e08               mov dword ptr [esi + 8], ebp
// 005f5e5e  8b4704               mov eax, dword ptr [edi + 4]
// 005f5e61  3b7008               cmp esi, dword ptr [eax + 8]
// 005f5e64  7503                 jne 0x5f5e69
// 005f5e66  896808               mov dword ptr [eax + 8], ebp
// 005f5e69  8b5504               mov edx, dword ptr [ebp + 4]
// 005f5e6c  807a1c00             cmp byte ptr [edx + 0x1c], 0
// 005f5e70  8d4504               lea eax, [ebp + 4]
// 005f5e73  8bf5                 mov esi, ebp
// 005f5e75  0f85ea000000         jne 0x5f5f65
// 005f5e7b  eb03                 jmp 0x5f5e80
// 005f5e7d  8d4900               lea ecx, [ecx]
// 005f5e80  8b08                 mov ecx, dword ptr [eax]
// 005f5e82  8b5104               mov edx, dword ptr [ecx + 4]
// 005f5e85  3b0a                 cmp ecx, dword ptr [edx]
// 005f5e87  7551                 jne 0x5f5eda
// 005f5e89  8b5208               mov edx, dword ptr [edx + 8]
// 005f5e8c  807a1c00             cmp byte ptr [edx + 0x1c], 0
// 005f5e90  7519                 jne 0x5f5eab
// 005f5e92  88591c               mov byte ptr [ecx + 0x1c], bl
// 005f5e95  885a1c               mov byte ptr [edx + 0x1c], bl
// 005f5e98  8b10                 mov edx, dword ptr [eax]
// 005f5e9a  8b4a04               mov ecx, dword ptr [edx + 4]
// 005f5e9d  c6411c00             mov byte ptr [ecx + 0x1c], 0
// 005f5ea1  8b10                 mov edx, dword ptr [eax]
// 005f5ea3  8b7204               mov esi, dword ptr [edx + 4]
// 005f5ea6  e9aa000000           jmp 0x5f5f55
// 005f5eab  3b7108               cmp esi, dword ptr [ecx + 8]
// 005f5eae  750a                 jne 0x5f5eba
// 005f5eb0  8bf1                 mov esi, ecx
// 005f5eb2  56                   push esi
// 005f5eb3  8bcf                 mov ecx, edi
// 005f5eb5  e816d1eeff           call 0x4e2fd0
// 005f5eba  8b4604               mov eax, dword ptr [esi + 4]
// 005f5ebd  88581c               mov byte ptr [eax + 0x1c], bl
// 005f5ec0  8b4e04               mov ecx, dword ptr [esi + 4]
// 005f5ec3  8b5104               mov edx, dword ptr [ecx + 4]
// 005f5ec6  c6421c00             mov byte ptr [edx + 0x1c], 0
// 005f5eca  8b4604               mov eax, dword ptr [esi + 4]
// 005f5ecd  8b4804               mov ecx, dword ptr [eax + 4]
// 005f5ed0  51                   push ecx
// 005f5ed1  8bcf                 mov ecx, edi
// 005f5ed3  e898cdeeff           call 0x4e2c70
// 005f5ed8  eb7b                 jmp 0x5f5f55
// 005f5eda  8b12                 mov edx, dword ptr [edx]
// 005f5edc  807a1c00             cmp byte ptr [edx + 0x1c], 0
// 005f5ee0  7516                 jne 0x5f5ef8
// 005f5ee2  88591c               mov byte ptr [ecx + 0x1c], bl
// 005f5ee5  885a1c               mov byte ptr [edx + 0x1c], bl
// 005f5ee8  8b10                 mov edx, dword ptr [eax]
// 005f5eea  8b4a04               mov ecx, dword ptr [edx + 4]
// 005f5eed  c6411c00             mov byte ptr [ecx + 0x1c], 0
// 005f5ef1  8b10                 mov edx, dword ptr [eax]
// 005f5ef3  8b7204               mov esi, dword ptr [edx + 4]
// 005f5ef6  eb5d                 jmp 0x5f5f55
// 005f5ef8  3b31                 cmp esi, dword ptr [ecx]
// 005f5efa  750a                 jne 0x5f5f06
// 005f5efc  8bf1                 mov esi, ecx
// 005f5efe  56                   push esi
// 005f5eff  8bcf                 mov ecx, edi
// 005f5f01  e86acdeeff           call 0x4e2c70
// 005f5f06  8b4604               mov eax, dword ptr [esi + 4]
// 005f5f09  88581c               mov byte ptr [eax + 0x1c], bl
// 005f5f0c  8b4e04               mov ecx, dword ptr [esi + 4]
// 005f5f0f  8b5104               mov edx, dword ptr [ecx + 4]
// 005f5f12  c6421c00             mov byte ptr [edx + 0x1c], 0
// 005f5f16  8b4604               mov eax, dword ptr [esi + 4]
// 005f5f19  8b4004               mov eax, dword ptr [eax + 4]
// 005f5f1c  8b4808               mov ecx, dword ptr [eax + 8]
// 005f5f1f  8b11                 mov edx, dword ptr [ecx]
// 005f5f21  895008               mov dword ptr [eax + 8], edx
// 005f5f24  8b11                 mov edx, dword ptr [ecx]
// 005f5f26  807a1d00             cmp byte ptr [edx + 0x1d], 0
// 005f5f2a  7503                 jne 0x5f5f2f
// 005f5f2c  894204               mov dword ptr [edx + 4], eax
// 005f5f2f  8b5004               mov edx, dword ptr [eax + 4]
// 005f5f32  895104               mov dword ptr [ecx + 4], edx
// 005f5f35  8b5704               mov edx, dword ptr [edi + 4]
// 005f5f38  3b4204               cmp eax, dword ptr [edx + 4]
// 005f5f3b  7505                 jne 0x5f5f42
// 005f5f3d  894a04               mov dword ptr [edx + 4], ecx
// 005f5f40  eb0e                 jmp 0x5f5f50
// 005f5f42  8b5004               mov edx, dword ptr [eax + 4]
// 005f5f45  3b02                 cmp eax, dword ptr [edx]
// 005f5f47  7504                 jne 0x5f5f4d
// 005f5f49  890a                 mov dword ptr [edx], ecx
// 005f5f4b  eb03                 jmp 0x5f5f50
// 005f5f4d  894a08               mov dword ptr [edx + 8], ecx
// 005f5f50  8901                 mov dword ptr [ecx], eax
// 005f5f52  894804               mov dword ptr [eax + 4], ecx
// 005f5f55  8b4e04               mov ecx, dword ptr [esi + 4]
// 005f5f58  80791c00             cmp byte ptr [ecx + 0x1c], 0
// 005f5f5c  8d4604               lea eax, [esi + 4]
// 005f5f5f  0f841bffffff         je 0x5f5e80
// 005f5f65  8b5704               mov edx, dword ptr [edi + 4]
// 005f5f68  8b4204               mov eax, dword ptr [edx + 4]
// 005f5f6b  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 005f5f6f  88581c               mov byte ptr [eax + 0x1c], bl
// 005f5f72  8b442464             mov eax, dword ptr [esp + 0x64]
// 005f5f76  5e                   pop esi
// 005f5f77  896804               mov dword ptr [eax + 4], ebp
// 005f5f7a  5d                   pop ebp
// 005f5f7b  8938                 mov dword ptr [eax], edi
// 005f5f7d  5b                   pop ebx
// 005f5f7e  5f                   pop edi
// 005f5f7f  64890d00000000       mov dword ptr fs:[0], ecx
// 005f5f86  83c450               add esp, 0x50
// 005f5f89  c21000               ret 0x10
// library rbxgs/v8world\Block.cpp (function ?_Insert@?$_Tree@V?$_Tmap_traits@VVector3@G3D@@PAVBlockTemplate@RBX@@UmyLess@4@V?$allocator@U?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@std@@@std@@$0A@@std@@@std@@IAE?AViterator@12@_NPAU_Node@?$_Tree_nod@V?$_Tmap_traits@VVector3@G3D@@PAVBlockTemplate@RBX@@UmyLess@4@V?$allocator@U?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@std@@@std@@$0A@@std@@@2@ABU?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Block.cpp
