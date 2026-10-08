// roc 2007-03 005ef3d0  unit: seg_005e0000  size: 508 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005ef3d0
//
// 005ef3d0  64a100000000         mov eax, dword ptr fs:[0]
// 005ef3d6  6aff                 push -1
// 005ef3d8  68926f7500           push 0x756f92
// 005ef3dd  50                   push eax
// 005ef3de  64892500000000       mov dword ptr fs:[0], esp
// 005ef3e5  83ec44               sub esp, 0x44
// 005ef3e8  57                   push edi
// 005ef3e9  8bf9                 mov edi, ecx
// 005ef3eb  817f08feffff1f       cmp dword ptr [edi + 8], 0x1ffffffe
// 005ef3f2  7259                 jb 0x5ef44d
// 005ef3f4  68903f7800           push 0x783f90
// 005ef3f9  8d4c2408             lea ecx, [esp + 8]
// 005ef3fd  ff1578e77700         call dword ptr [0x77e778]
// 005ef403  8d4c2420             lea ecx, [esp + 0x20]
// 005ef407  c744245000000000     mov dword ptr [esp + 0x50], 0
// 005ef40f  ff1560e97700         call dword ptr [0x77e960]
// 005ef415  8d442404             lea eax, [esp + 4]
// 005ef419  50                   push eax
// 005ef41a  8d4c2430             lea ecx, [esp + 0x30]
// 005ef41e  c644245401           mov byte ptr [esp + 0x54], 1
// 005ef423  c7442424383e7800     mov dword ptr [esp + 0x24], 0x783e38
// 005ef42b  ff157ce77700         call dword ptr [0x77e77c]
// 005ef431  6870f78300           push 0x83f770
// 005ef436  8d4c2424             lea ecx, [esp + 0x24]
// 005ef43a  51                   push ecx
// 005ef43b  c644245800           mov byte ptr [esp + 0x58], 0
// 005ef440  c7442428443e7800     mov dword ptr [esp + 0x28], 0x783e44
// 005ef448  e8e1fb0200           call 0x61f02e
// 005ef44d  8b542464             mov edx, dword ptr [esp + 0x64]
// 005ef451  8b4704               mov eax, dword ptr [edi + 4]
// 005ef454  53                   push ebx
// 005ef455  55                   push ebp
// 005ef456  56                   push esi
// 005ef457  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 005ef45b  6a00                 push 0
// 005ef45d  52                   push edx
// 005ef45e  50                   push eax
// 005ef45f  56                   push esi
// 005ef460  50                   push eax
// 005ef461  e88ae3f7ff           call 0x56d7f0
// 005ef466  8be8                 mov ebp, eax
// 005ef468  8b4704               mov eax, dword ptr [edi + 4]
// 005ef46b  bb01000000           mov ebx, 1
// 005ef470  015f08               add dword ptr [edi + 8], ebx
// 005ef473  3bf0                 cmp esi, eax
// 005ef475  7510                 jne 0x5ef487
// 005ef477  896804               mov dword ptr [eax + 4], ebp
// 005ef47a  8b4704               mov eax, dword ptr [edi + 4]
// 005ef47d  8928                 mov dword ptr [eax], ebp
// 005ef47f  8b4f04               mov ecx, dword ptr [edi + 4]
// 005ef482  896908               mov dword ptr [ecx + 8], ebp
// 005ef485  eb22                 jmp 0x5ef4a9
// 005ef487  807c246800           cmp byte ptr [esp + 0x68], 0
// 005ef48c  740d                 je 0x5ef49b
// 005ef48e  892e                 mov dword ptr [esi], ebp
// 005ef490  8b4704               mov eax, dword ptr [edi + 4]
// 005ef493  3b30                 cmp esi, dword ptr [eax]
// 005ef495  7512                 jne 0x5ef4a9
// 005ef497  8928                 mov dword ptr [eax], ebp
// 005ef499  eb0e                 jmp 0x5ef4a9
// 005ef49b  896e08               mov dword ptr [esi + 8], ebp
// 005ef49e  8b4704               mov eax, dword ptr [edi + 4]
// 005ef4a1  3b7008               cmp esi, dword ptr [eax + 8]
// 005ef4a4  7503                 jne 0x5ef4a9
// 005ef4a6  896808               mov dword ptr [eax + 8], ebp
// 005ef4a9  8b5504               mov edx, dword ptr [ebp + 4]
// 005ef4ac  807a1400             cmp byte ptr [edx + 0x14], 0
// 005ef4b0  8d4504               lea eax, [ebp + 4]
// 005ef4b3  8bf5                 mov esi, ebp
// 005ef4b5  0f85ea000000         jne 0x5ef5a5
// 005ef4bb  eb03                 jmp 0x5ef4c0
// 005ef4bd  8d4900               lea ecx, [ecx]
// 005ef4c0  8b08                 mov ecx, dword ptr [eax]
// 005ef4c2  8b5104               mov edx, dword ptr [ecx + 4]
// 005ef4c5  3b0a                 cmp ecx, dword ptr [edx]
// 005ef4c7  7551                 jne 0x5ef51a
// 005ef4c9  8b5208               mov edx, dword ptr [edx + 8]
// 005ef4cc  807a1400             cmp byte ptr [edx + 0x14], 0
// 005ef4d0  7519                 jne 0x5ef4eb
// 005ef4d2  885914               mov byte ptr [ecx + 0x14], bl
// 005ef4d5  885a14               mov byte ptr [edx + 0x14], bl
// 005ef4d8  8b10                 mov edx, dword ptr [eax]
// 005ef4da  8b4a04               mov ecx, dword ptr [edx + 4]
// 005ef4dd  c6411400             mov byte ptr [ecx + 0x14], 0
// 005ef4e1  8b10                 mov edx, dword ptr [eax]
// 005ef4e3  8b7204               mov esi, dword ptr [edx + 4]
// 005ef4e6  e9aa000000           jmp 0x5ef595
// 005ef4eb  3b7108               cmp esi, dword ptr [ecx + 8]
// 005ef4ee  750a                 jne 0x5ef4fa
// 005ef4f0  8bf1                 mov esi, ecx
// 005ef4f2  56                   push esi
// 005ef4f3  8bcf                 mov ecx, edi
// 005ef4f5  e846d6faff           call 0x59cb40
// 005ef4fa  8b4604               mov eax, dword ptr [esi + 4]
// 005ef4fd  885814               mov byte ptr [eax + 0x14], bl
// 005ef500  8b4e04               mov ecx, dword ptr [esi + 4]
// 005ef503  8b5104               mov edx, dword ptr [ecx + 4]
// 005ef506  c6421400             mov byte ptr [edx + 0x14], 0
// 005ef50a  8b4604               mov eax, dword ptr [esi + 4]
// 005ef50d  8b4804               mov ecx, dword ptr [eax + 4]
// 005ef510  51                   push ecx
// 005ef511  8bcf                 mov ecx, edi
// 005ef513  e8d80cf9ff           call 0x5801f0
// 005ef518  eb7b                 jmp 0x5ef595
// 005ef51a  8b12                 mov edx, dword ptr [edx]
// 005ef51c  807a1400             cmp byte ptr [edx + 0x14], 0
// 005ef520  7516                 jne 0x5ef538
// 005ef522  885914               mov byte ptr [ecx + 0x14], bl
// 005ef525  885a14               mov byte ptr [edx + 0x14], bl
// 005ef528  8b10                 mov edx, dword ptr [eax]
// 005ef52a  8b4a04               mov ecx, dword ptr [edx + 4]
// 005ef52d  c6411400             mov byte ptr [ecx + 0x14], 0
// 005ef531  8b10                 mov edx, dword ptr [eax]
// 005ef533  8b7204               mov esi, dword ptr [edx + 4]
// 005ef536  eb5d                 jmp 0x5ef595
// 005ef538  3b31                 cmp esi, dword ptr [ecx]
// 005ef53a  750a                 jne 0x5ef546
// 005ef53c  8bf1                 mov esi, ecx
// 005ef53e  56                   push esi
// 005ef53f  8bcf                 mov ecx, edi
// 005ef541  e8aa0cf9ff           call 0x5801f0
// 005ef546  8b4604               mov eax, dword ptr [esi + 4]
// 005ef549  885814               mov byte ptr [eax + 0x14], bl
// 005ef54c  8b4e04               mov ecx, dword ptr [esi + 4]
// 005ef54f  8b5104               mov edx, dword ptr [ecx + 4]
// 005ef552  c6421400             mov byte ptr [edx + 0x14], 0
// 005ef556  8b4604               mov eax, dword ptr [esi + 4]
// 005ef559  8b4004               mov eax, dword ptr [eax + 4]
// 005ef55c  8b4808               mov ecx, dword ptr [eax + 8]
// 005ef55f  8b11                 mov edx, dword ptr [ecx]
// 005ef561  895008               mov dword ptr [eax + 8], edx
// 005ef564  8b11                 mov edx, dword ptr [ecx]
// 005ef566  807a1500             cmp byte ptr [edx + 0x15], 0
// 005ef56a  7503                 jne 0x5ef56f
// 005ef56c  894204               mov dword ptr [edx + 4], eax
// 005ef56f  8b5004               mov edx, dword ptr [eax + 4]
// 005ef572  895104               mov dword ptr [ecx + 4], edx
// 005ef575  8b5704               mov edx, dword ptr [edi + 4]
// 005ef578  3b4204               cmp eax, dword ptr [edx + 4]
// 005ef57b  7505                 jne 0x5ef582
// 005ef57d  894a04               mov dword ptr [edx + 4], ecx
// 005ef580  eb0e                 jmp 0x5ef590
// 005ef582  8b5004               mov edx, dword ptr [eax + 4]
// 005ef585  3b02                 cmp eax, dword ptr [edx]
// 005ef587  7504                 jne 0x5ef58d
// 005ef589  890a                 mov dword ptr [edx], ecx
// 005ef58b  eb03                 jmp 0x5ef590
// 005ef58d  894a08               mov dword ptr [edx + 8], ecx
// 005ef590  8901                 mov dword ptr [ecx], eax
// 005ef592  894804               mov dword ptr [eax + 4], ecx
// 005ef595  8b4e04               mov ecx, dword ptr [esi + 4]
// 005ef598  80791400             cmp byte ptr [ecx + 0x14], 0
// 005ef59c  8d4604               lea eax, [esi + 4]
// 005ef59f  0f841bffffff         je 0x5ef4c0
// 005ef5a5  8b5704               mov edx, dword ptr [edi + 4]
// 005ef5a8  8b4204               mov eax, dword ptr [edx + 4]
// 005ef5ab  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 005ef5af  885814               mov byte ptr [eax + 0x14], bl
// 005ef5b2  8b442464             mov eax, dword ptr [esp + 0x64]
// 005ef5b6  5e                   pop esi
// 005ef5b7  896804               mov dword ptr [eax + 4], ebp
// 005ef5ba  5d                   pop ebp
// 005ef5bb  8938                 mov dword ptr [eax], edi
// 005ef5bd  5b                   pop ebx
// 005ef5be  5f                   pop edi
// 005ef5bf  64890d00000000       mov dword ptr fs:[0], ecx
// 005ef5c6  83c450               add esp, 0x50
// 005ef5c9  c21000               ret 0x10
// library rbxgs/v8datamodel\Camera.cpp (function ?_Insert@?$_Tree@V?$_Tmap_traits@PBVName@RBX@@W4CameraType@Camera@2@U?$less@PBVName@RBX@@@std@@V?$allocator@U?$pair@QBVName@RBX@@W4CameraType@Camera@2@@std@@@6@$0A@@std@@@std@@IAE?AViterator@12@_NPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBVName@RBX@@W4CameraType@Camera@2@U?$less@PBVName@RBX@@@std@@V?$allocator@U?$pair@QBVName@RBX@@W4CameraType@Camera@2@@std@@@6@$0A@@std@@@2@ABU?$pair@QBVName@RBX@@W4CameraType@Camera@2@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
