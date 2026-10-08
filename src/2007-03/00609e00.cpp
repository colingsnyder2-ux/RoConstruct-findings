// roc 2007-03 00609e00  unit: seg_00600000  size: 508 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00609e00
//
// 00609e00  64a100000000         mov eax, dword ptr fs:[0]
// 00609e06  6aff                 push -1
// 00609e08  68926f7500           push 0x756f92
// 00609e0d  50                   push eax
// 00609e0e  64892500000000       mov dword ptr fs:[0], esp
// 00609e15  83ec44               sub esp, 0x44
// 00609e18  57                   push edi
// 00609e19  8bf9                 mov edi, ecx
// 00609e1b  817f08feffff0f       cmp dword ptr [edi + 8], 0xffffffe
// 00609e22  7259                 jb 0x609e7d
// 00609e24  68903f7800           push 0x783f90
// 00609e29  8d4c2408             lea ecx, [esp + 8]
// 00609e2d  ff1578e77700         call dword ptr [0x77e778]
// 00609e33  8d4c2420             lea ecx, [esp + 0x20]
// 00609e37  c744245000000000     mov dword ptr [esp + 0x50], 0
// 00609e3f  ff1560e97700         call dword ptr [0x77e960]
// 00609e45  8d442404             lea eax, [esp + 4]
// 00609e49  50                   push eax
// 00609e4a  8d4c2430             lea ecx, [esp + 0x30]
// 00609e4e  c644245401           mov byte ptr [esp + 0x54], 1
// 00609e53  c7442424383e7800     mov dword ptr [esp + 0x24], 0x783e38
// 00609e5b  ff157ce77700         call dword ptr [0x77e77c]
// 00609e61  6870f78300           push 0x83f770
// 00609e66  8d4c2424             lea ecx, [esp + 0x24]
// 00609e6a  51                   push ecx
// 00609e6b  c644245800           mov byte ptr [esp + 0x58], 0
// 00609e70  c7442428443e7800     mov dword ptr [esp + 0x28], 0x783e44
// 00609e78  e8b1510100           call 0x61f02e
// 00609e7d  8b542464             mov edx, dword ptr [esp + 0x64]
// 00609e81  8b4704               mov eax, dword ptr [edi + 4]
// 00609e84  53                   push ebx
// 00609e85  55                   push ebp
// 00609e86  56                   push esi
// 00609e87  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 00609e8b  6a00                 push 0
// 00609e8d  52                   push edx
// 00609e8e  50                   push eax
// 00609e8f  56                   push esi
// 00609e90  50                   push eax
// 00609e91  e89af8ffff           call 0x609730
// 00609e96  8be8                 mov ebp, eax
// 00609e98  8b4704               mov eax, dword ptr [edi + 4]
// 00609e9b  bb01000000           mov ebx, 1
// 00609ea0  015f08               add dword ptr [edi + 8], ebx
// 00609ea3  3bf0                 cmp esi, eax
// 00609ea5  7510                 jne 0x609eb7
// 00609ea7  896804               mov dword ptr [eax + 4], ebp
// 00609eaa  8b4704               mov eax, dword ptr [edi + 4]
// 00609ead  8928                 mov dword ptr [eax], ebp
// 00609eaf  8b4f04               mov ecx, dword ptr [edi + 4]
// 00609eb2  896908               mov dword ptr [ecx + 8], ebp
// 00609eb5  eb22                 jmp 0x609ed9
// 00609eb7  807c246800           cmp byte ptr [esp + 0x68], 0
// 00609ebc  740d                 je 0x609ecb
// 00609ebe  892e                 mov dword ptr [esi], ebp
// 00609ec0  8b4704               mov eax, dword ptr [edi + 4]
// 00609ec3  3b30                 cmp esi, dword ptr [eax]
// 00609ec5  7512                 jne 0x609ed9
// 00609ec7  8928                 mov dword ptr [eax], ebp
// 00609ec9  eb0e                 jmp 0x609ed9
// 00609ecb  896e08               mov dword ptr [esi + 8], ebp
// 00609ece  8b4704               mov eax, dword ptr [edi + 4]
// 00609ed1  3b7008               cmp esi, dword ptr [eax + 8]
// 00609ed4  7503                 jne 0x609ed9
// 00609ed6  896808               mov dword ptr [eax + 8], ebp
// 00609ed9  8b5504               mov edx, dword ptr [ebp + 4]
// 00609edc  807a1c00             cmp byte ptr [edx + 0x1c], 0
// 00609ee0  8d4504               lea eax, [ebp + 4]
// 00609ee3  8bf5                 mov esi, ebp
// 00609ee5  0f85ea000000         jne 0x609fd5
// 00609eeb  eb03                 jmp 0x609ef0
// 00609eed  8d4900               lea ecx, [ecx]
// 00609ef0  8b08                 mov ecx, dword ptr [eax]
// 00609ef2  8b5104               mov edx, dword ptr [ecx + 4]
// 00609ef5  3b0a                 cmp ecx, dword ptr [edx]
// 00609ef7  7551                 jne 0x609f4a
// 00609ef9  8b5208               mov edx, dword ptr [edx + 8]
// 00609efc  807a1c00             cmp byte ptr [edx + 0x1c], 0
// 00609f00  7519                 jne 0x609f1b
// 00609f02  88591c               mov byte ptr [ecx + 0x1c], bl
// 00609f05  885a1c               mov byte ptr [edx + 0x1c], bl
// 00609f08  8b10                 mov edx, dword ptr [eax]
// 00609f0a  8b4a04               mov ecx, dword ptr [edx + 4]
// 00609f0d  c6411c00             mov byte ptr [ecx + 0x1c], 0
// 00609f11  8b10                 mov edx, dword ptr [eax]
// 00609f13  8b7204               mov esi, dword ptr [edx + 4]
// 00609f16  e9aa000000           jmp 0x609fc5
// 00609f1b  3b7108               cmp esi, dword ptr [ecx + 8]
// 00609f1e  750a                 jne 0x609f2a
// 00609f20  8bf1                 mov esi, ecx
// 00609f22  56                   push esi
// 00609f23  8bcf                 mov ecx, edi
// 00609f25  e8a690edff           call 0x4e2fd0
// 00609f2a  8b4604               mov eax, dword ptr [esi + 4]
// 00609f2d  88581c               mov byte ptr [eax + 0x1c], bl
// 00609f30  8b4e04               mov ecx, dword ptr [esi + 4]
// 00609f33  8b5104               mov edx, dword ptr [ecx + 4]
// 00609f36  c6421c00             mov byte ptr [edx + 0x1c], 0
// 00609f3a  8b4604               mov eax, dword ptr [esi + 4]
// 00609f3d  8b4804               mov ecx, dword ptr [eax + 4]
// 00609f40  51                   push ecx
// 00609f41  8bcf                 mov ecx, edi
// 00609f43  e8288dedff           call 0x4e2c70
// 00609f48  eb7b                 jmp 0x609fc5
// 00609f4a  8b12                 mov edx, dword ptr [edx]
// 00609f4c  807a1c00             cmp byte ptr [edx + 0x1c], 0
// 00609f50  7516                 jne 0x609f68
// 00609f52  88591c               mov byte ptr [ecx + 0x1c], bl
// 00609f55  885a1c               mov byte ptr [edx + 0x1c], bl
// 00609f58  8b10                 mov edx, dword ptr [eax]
// 00609f5a  8b4a04               mov ecx, dword ptr [edx + 4]
// 00609f5d  c6411c00             mov byte ptr [ecx + 0x1c], 0
// 00609f61  8b10                 mov edx, dword ptr [eax]
// 00609f63  8b7204               mov esi, dword ptr [edx + 4]
// 00609f66  eb5d                 jmp 0x609fc5
// 00609f68  3b31                 cmp esi, dword ptr [ecx]
// 00609f6a  750a                 jne 0x609f76
// 00609f6c  8bf1                 mov esi, ecx
// 00609f6e  56                   push esi
// 00609f6f  8bcf                 mov ecx, edi
// 00609f71  e8fa8cedff           call 0x4e2c70
// 00609f76  8b4604               mov eax, dword ptr [esi + 4]
// 00609f79  88581c               mov byte ptr [eax + 0x1c], bl
// 00609f7c  8b4e04               mov ecx, dword ptr [esi + 4]
// 00609f7f  8b5104               mov edx, dword ptr [ecx + 4]
// 00609f82  c6421c00             mov byte ptr [edx + 0x1c], 0
// 00609f86  8b4604               mov eax, dword ptr [esi + 4]
// 00609f89  8b4004               mov eax, dword ptr [eax + 4]
// 00609f8c  8b4808               mov ecx, dword ptr [eax + 8]
// 00609f8f  8b11                 mov edx, dword ptr [ecx]
// 00609f91  895008               mov dword ptr [eax + 8], edx
// 00609f94  8b11                 mov edx, dword ptr [ecx]
// 00609f96  807a1d00             cmp byte ptr [edx + 0x1d], 0
// 00609f9a  7503                 jne 0x609f9f
// 00609f9c  894204               mov dword ptr [edx + 4], eax
// 00609f9f  8b5004               mov edx, dword ptr [eax + 4]
// 00609fa2  895104               mov dword ptr [ecx + 4], edx
// 00609fa5  8b5704               mov edx, dword ptr [edi + 4]
// 00609fa8  3b4204               cmp eax, dword ptr [edx + 4]
// 00609fab  7505                 jne 0x609fb2
// 00609fad  894a04               mov dword ptr [edx + 4], ecx
// 00609fb0  eb0e                 jmp 0x609fc0
// 00609fb2  8b5004               mov edx, dword ptr [eax + 4]
// 00609fb5  3b02                 cmp eax, dword ptr [edx]
// 00609fb7  7504                 jne 0x609fbd
// 00609fb9  890a                 mov dword ptr [edx], ecx
// 00609fbb  eb03                 jmp 0x609fc0
// 00609fbd  894a08               mov dword ptr [edx + 8], ecx
// 00609fc0  8901                 mov dword ptr [ecx], eax
// 00609fc2  894804               mov dword ptr [eax + 4], ecx
// 00609fc5  8b4e04               mov ecx, dword ptr [esi + 4]
// 00609fc8  80791c00             cmp byte ptr [ecx + 0x1c], 0
// 00609fcc  8d4604               lea eax, [esi + 4]
// 00609fcf  0f841bffffff         je 0x609ef0
// 00609fd5  8b5704               mov edx, dword ptr [edi + 4]
// 00609fd8  8b4204               mov eax, dword ptr [edx + 4]
// 00609fdb  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00609fdf  88581c               mov byte ptr [eax + 0x1c], bl
// 00609fe2  8b442464             mov eax, dword ptr [esp + 0x64]
// 00609fe6  5e                   pop esi
// 00609fe7  896804               mov dword ptr [eax + 4], ebp
// 00609fea  5d                   pop ebp
// 00609feb  8938                 mov dword ptr [eax], edi
// 00609fed  5b                   pop ebx
// 00609fee  5f                   pop edi
// 00609fef  64890d00000000       mov dword ptr fs:[0], ecx
// 00609ff6  83c450               add esp, 0x50
// 00609ff9  c21000               ret 0x10
// library rbxgs/v8world\Block.cpp (function ?_Insert@?$_Tree@V?$_Tmap_traits@VVector3@G3D@@PAVBlockTemplate@RBX@@UmyLess@4@V?$allocator@U?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@std@@@std@@$0A@@std@@@std@@IAE?AViterator@12@_NPAU_Node@?$_Tree_nod@V?$_Tmap_traits@VVector3@G3D@@PAVBlockTemplate@RBX@@UmyLess@4@V?$allocator@U?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@std@@@std@@$0A@@std@@@2@ABU?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Block.cpp
