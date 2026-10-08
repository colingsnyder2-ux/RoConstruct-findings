// roc 2007-03 0055f4d0  unit: seg_00550000  size: 508 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0055f4d0
//
// 0055f4d0  64a100000000         mov eax, dword ptr fs:[0]
// 0055f4d6  6aff                 push -1
// 0055f4d8  68926f7500           push 0x756f92
// 0055f4dd  50                   push eax
// 0055f4de  64892500000000       mov dword ptr fs:[0], esp
// 0055f4e5  83ec44               sub esp, 0x44
// 0055f4e8  57                   push edi
// 0055f4e9  8bf9                 mov edi, ecx
// 0055f4eb  817f08feffff1f       cmp dword ptr [edi + 8], 0x1ffffffe
// 0055f4f2  7259                 jb 0x55f54d
// 0055f4f4  68903f7800           push 0x783f90
// 0055f4f9  8d4c2408             lea ecx, [esp + 8]
// 0055f4fd  ff1578e77700         call dword ptr [0x77e778]
// 0055f503  8d4c2420             lea ecx, [esp + 0x20]
// 0055f507  c744245000000000     mov dword ptr [esp + 0x50], 0
// 0055f50f  ff1560e97700         call dword ptr [0x77e960]
// 0055f515  8d442404             lea eax, [esp + 4]
// 0055f519  50                   push eax
// 0055f51a  8d4c2430             lea ecx, [esp + 0x30]
// 0055f51e  c644245401           mov byte ptr [esp + 0x54], 1
// 0055f523  c7442424383e7800     mov dword ptr [esp + 0x24], 0x783e38
// 0055f52b  ff157ce77700         call dword ptr [0x77e77c]
// 0055f531  6870f78300           push 0x83f770
// 0055f536  8d4c2424             lea ecx, [esp + 0x24]
// 0055f53a  51                   push ecx
// 0055f53b  c644245800           mov byte ptr [esp + 0x58], 0
// 0055f540  c7442428443e7800     mov dword ptr [esp + 0x28], 0x783e44
// 0055f548  e8e1fa0b00           call 0x61f02e
// 0055f54d  8b542464             mov edx, dword ptr [esp + 0x64]
// 0055f551  8b4704               mov eax, dword ptr [edi + 4]
// 0055f554  53                   push ebx
// 0055f555  55                   push ebp
// 0055f556  56                   push esi
// 0055f557  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 0055f55b  6a00                 push 0
// 0055f55d  52                   push edx
// 0055f55e  50                   push eax
// 0055f55f  56                   push esi
// 0055f560  50                   push eax
// 0055f561  e84afeffff           call 0x55f3b0
// 0055f566  8be8                 mov ebp, eax
// 0055f568  8b4704               mov eax, dword ptr [edi + 4]
// 0055f56b  bb01000000           mov ebx, 1
// 0055f570  015f08               add dword ptr [edi + 8], ebx
// 0055f573  3bf0                 cmp esi, eax
// 0055f575  7510                 jne 0x55f587
// 0055f577  896804               mov dword ptr [eax + 4], ebp
// 0055f57a  8b4704               mov eax, dword ptr [edi + 4]
// 0055f57d  8928                 mov dword ptr [eax], ebp
// 0055f57f  8b4f04               mov ecx, dword ptr [edi + 4]
// 0055f582  896908               mov dword ptr [ecx + 8], ebp
// 0055f585  eb22                 jmp 0x55f5a9
// 0055f587  807c246800           cmp byte ptr [esp + 0x68], 0
// 0055f58c  740d                 je 0x55f59b
// 0055f58e  892e                 mov dword ptr [esi], ebp
// 0055f590  8b4704               mov eax, dword ptr [edi + 4]
// 0055f593  3b30                 cmp esi, dword ptr [eax]
// 0055f595  7512                 jne 0x55f5a9
// 0055f597  8928                 mov dword ptr [eax], ebp
// 0055f599  eb0e                 jmp 0x55f5a9
// 0055f59b  896e08               mov dword ptr [esi + 8], ebp
// 0055f59e  8b4704               mov eax, dword ptr [edi + 4]
// 0055f5a1  3b7008               cmp esi, dword ptr [eax + 8]
// 0055f5a4  7503                 jne 0x55f5a9
// 0055f5a6  896808               mov dword ptr [eax + 8], ebp
// 0055f5a9  8b5504               mov edx, dword ptr [ebp + 4]
// 0055f5ac  807a1400             cmp byte ptr [edx + 0x14], 0
// 0055f5b0  8d4504               lea eax, [ebp + 4]
// 0055f5b3  8bf5                 mov esi, ebp
// 0055f5b5  0f85ea000000         jne 0x55f6a5
// 0055f5bb  eb03                 jmp 0x55f5c0
// 0055f5bd  8d4900               lea ecx, [ecx]
// 0055f5c0  8b08                 mov ecx, dword ptr [eax]
// 0055f5c2  8b5104               mov edx, dword ptr [ecx + 4]
// 0055f5c5  3b0a                 cmp ecx, dword ptr [edx]
// 0055f5c7  7551                 jne 0x55f61a
// 0055f5c9  8b5208               mov edx, dword ptr [edx + 8]
// 0055f5cc  807a1400             cmp byte ptr [edx + 0x14], 0
// 0055f5d0  7519                 jne 0x55f5eb
// 0055f5d2  885914               mov byte ptr [ecx + 0x14], bl
// 0055f5d5  885a14               mov byte ptr [edx + 0x14], bl
// 0055f5d8  8b10                 mov edx, dword ptr [eax]
// 0055f5da  8b4a04               mov ecx, dword ptr [edx + 4]
// 0055f5dd  c6411400             mov byte ptr [ecx + 0x14], 0
// 0055f5e1  8b10                 mov edx, dword ptr [eax]
// 0055f5e3  8b7204               mov esi, dword ptr [edx + 4]
// 0055f5e6  e9aa000000           jmp 0x55f695
// 0055f5eb  3b7108               cmp esi, dword ptr [ecx + 8]
// 0055f5ee  750a                 jne 0x55f5fa
// 0055f5f0  8bf1                 mov esi, ecx
// 0055f5f2  56                   push esi
// 0055f5f3  8bcf                 mov ecx, edi
// 0055f5f5  e846d50300           call 0x59cb40
// 0055f5fa  8b4604               mov eax, dword ptr [esi + 4]
// 0055f5fd  885814               mov byte ptr [eax + 0x14], bl
// 0055f600  8b4e04               mov ecx, dword ptr [esi + 4]
// 0055f603  8b5104               mov edx, dword ptr [ecx + 4]
// 0055f606  c6421400             mov byte ptr [edx + 0x14], 0
// 0055f60a  8b4604               mov eax, dword ptr [esi + 4]
// 0055f60d  8b4804               mov ecx, dword ptr [eax + 4]
// 0055f610  51                   push ecx
// 0055f611  8bcf                 mov ecx, edi
// 0055f613  e8d80b0200           call 0x5801f0
// 0055f618  eb7b                 jmp 0x55f695
// 0055f61a  8b12                 mov edx, dword ptr [edx]
// 0055f61c  807a1400             cmp byte ptr [edx + 0x14], 0
// 0055f620  7516                 jne 0x55f638
// 0055f622  885914               mov byte ptr [ecx + 0x14], bl
// 0055f625  885a14               mov byte ptr [edx + 0x14], bl
// 0055f628  8b10                 mov edx, dword ptr [eax]
// 0055f62a  8b4a04               mov ecx, dword ptr [edx + 4]
// 0055f62d  c6411400             mov byte ptr [ecx + 0x14], 0
// 0055f631  8b10                 mov edx, dword ptr [eax]
// 0055f633  8b7204               mov esi, dword ptr [edx + 4]
// 0055f636  eb5d                 jmp 0x55f695
// 0055f638  3b31                 cmp esi, dword ptr [ecx]
// 0055f63a  750a                 jne 0x55f646
// 0055f63c  8bf1                 mov esi, ecx
// 0055f63e  56                   push esi
// 0055f63f  8bcf                 mov ecx, edi
// 0055f641  e8aa0b0200           call 0x5801f0
// 0055f646  8b4604               mov eax, dword ptr [esi + 4]
// 0055f649  885814               mov byte ptr [eax + 0x14], bl
// 0055f64c  8b4e04               mov ecx, dword ptr [esi + 4]
// 0055f64f  8b5104               mov edx, dword ptr [ecx + 4]
// 0055f652  c6421400             mov byte ptr [edx + 0x14], 0
// 0055f656  8b4604               mov eax, dword ptr [esi + 4]
// 0055f659  8b4004               mov eax, dword ptr [eax + 4]
// 0055f65c  8b4808               mov ecx, dword ptr [eax + 8]
// 0055f65f  8b11                 mov edx, dword ptr [ecx]
// 0055f661  895008               mov dword ptr [eax + 8], edx
// 0055f664  8b11                 mov edx, dword ptr [ecx]
// 0055f666  807a1500             cmp byte ptr [edx + 0x15], 0
// 0055f66a  7503                 jne 0x55f66f
// 0055f66c  894204               mov dword ptr [edx + 4], eax
// 0055f66f  8b5004               mov edx, dword ptr [eax + 4]
// 0055f672  895104               mov dword ptr [ecx + 4], edx
// 0055f675  8b5704               mov edx, dword ptr [edi + 4]
// 0055f678  3b4204               cmp eax, dword ptr [edx + 4]
// 0055f67b  7505                 jne 0x55f682
// 0055f67d  894a04               mov dword ptr [edx + 4], ecx
// 0055f680  eb0e                 jmp 0x55f690
// 0055f682  8b5004               mov edx, dword ptr [eax + 4]
// 0055f685  3b02                 cmp eax, dword ptr [edx]
// 0055f687  7504                 jne 0x55f68d
// 0055f689  890a                 mov dword ptr [edx], ecx
// 0055f68b  eb03                 jmp 0x55f690
// 0055f68d  894a08               mov dword ptr [edx + 8], ecx
// 0055f690  8901                 mov dword ptr [ecx], eax
// 0055f692  894804               mov dword ptr [eax + 4], ecx
// 0055f695  8b4e04               mov ecx, dword ptr [esi + 4]
// 0055f698  80791400             cmp byte ptr [ecx + 0x14], 0
// 0055f69c  8d4604               lea eax, [esi + 4]
// 0055f69f  0f841bffffff         je 0x55f5c0
// 0055f6a5  8b5704               mov edx, dword ptr [edi + 4]
// 0055f6a8  8b4204               mov eax, dword ptr [edx + 4]
// 0055f6ab  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0055f6af  885814               mov byte ptr [eax + 0x14], bl
// 0055f6b2  8b442464             mov eax, dword ptr [esp + 0x64]
// 0055f6b6  5e                   pop esi
// 0055f6b7  896804               mov dword ptr [eax + 4], ebp
// 0055f6ba  5d                   pop ebp
// 0055f6bb  8938                 mov dword ptr [eax], edi
// 0055f6bd  5b                   pop ebx
// 0055f6be  5f                   pop edi
// 0055f6bf  64890d00000000       mov dword ptr fs:[0], ecx
// 0055f6c6  83c450               add esp, 0x50
// 0055f6c9  c21000               ret 0x10
// library rbxgs/v8datamodel\Camera.cpp (function ?_Insert@?$_Tree@V?$_Tmap_traits@PBVName@RBX@@W4CameraType@Camera@2@U?$less@PBVName@RBX@@@std@@V?$allocator@U?$pair@QBVName@RBX@@W4CameraType@Camera@2@@std@@@6@$0A@@std@@@std@@IAE?AViterator@12@_NPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBVName@RBX@@W4CameraType@Camera@2@U?$less@PBVName@RBX@@@std@@V?$allocator@U?$pair@QBVName@RBX@@W4CameraType@Camera@2@@std@@@6@$0A@@std@@@2@ABU?$pair@QBVName@RBX@@W4CameraType@Camera@2@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
