// roc 2007-03 00580590  unit: seg_00580000  size: 508 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00580590
//
// 00580590  64a100000000         mov eax, dword ptr fs:[0]
// 00580596  6aff                 push -1
// 00580598  68926f7500           push 0x756f92
// 0058059d  50                   push eax
// 0058059e  64892500000000       mov dword ptr fs:[0], esp
// 005805a5  83ec44               sub esp, 0x44
// 005805a8  57                   push edi
// 005805a9  8bf9                 mov edi, ecx
// 005805ab  817f08feffff07       cmp dword ptr [edi + 8], 0x7fffffe
// 005805b2  7259                 jb 0x58060d
// 005805b4  68903f7800           push 0x783f90
// 005805b9  8d4c2408             lea ecx, [esp + 8]
// 005805bd  ff1578e77700         call dword ptr [0x77e778]
// 005805c3  8d4c2420             lea ecx, [esp + 0x20]
// 005805c7  c744245000000000     mov dword ptr [esp + 0x50], 0
// 005805cf  ff1560e97700         call dword ptr [0x77e960]
// 005805d5  8d442404             lea eax, [esp + 4]
// 005805d9  50                   push eax
// 005805da  8d4c2430             lea ecx, [esp + 0x30]
// 005805de  c644245401           mov byte ptr [esp + 0x54], 1
// 005805e3  c7442424383e7800     mov dword ptr [esp + 0x24], 0x783e38
// 005805eb  ff157ce77700         call dword ptr [0x77e77c]
// 005805f1  6870f78300           push 0x83f770
// 005805f6  8d4c2424             lea ecx, [esp + 0x24]
// 005805fa  51                   push ecx
// 005805fb  c644245800           mov byte ptr [esp + 0x58], 0
// 00580600  c7442428443e7800     mov dword ptr [esp + 0x28], 0x783e44
// 00580608  e821ea0900           call 0x61f02e
// 0058060d  8b542464             mov edx, dword ptr [esp + 0x64]
// 00580611  8b4704               mov eax, dword ptr [edi + 4]
// 00580614  53                   push ebx
// 00580615  55                   push ebp
// 00580616  56                   push esi
// 00580617  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 0058061b  6a00                 push 0
// 0058061d  52                   push edx
// 0058061e  50                   push eax
// 0058061f  56                   push esi
// 00580620  50                   push eax
// 00580621  e88afcffff           call 0x5802b0
// 00580626  8be8                 mov ebp, eax
// 00580628  8b4704               mov eax, dword ptr [edi + 4]
// 0058062b  bb01000000           mov ebx, 1
// 00580630  015f08               add dword ptr [edi + 8], ebx
// 00580633  3bf0                 cmp esi, eax
// 00580635  7510                 jne 0x580647
// 00580637  896804               mov dword ptr [eax + 4], ebp
// 0058063a  8b4704               mov eax, dword ptr [edi + 4]
// 0058063d  8928                 mov dword ptr [eax], ebp
// 0058063f  8b4f04               mov ecx, dword ptr [edi + 4]
// 00580642  896908               mov dword ptr [ecx + 8], ebp
// 00580645  eb22                 jmp 0x580669
// 00580647  807c246800           cmp byte ptr [esp + 0x68], 0
// 0058064c  740d                 je 0x58065b
// 0058064e  892e                 mov dword ptr [esi], ebp
// 00580650  8b4704               mov eax, dword ptr [edi + 4]
// 00580653  3b30                 cmp esi, dword ptr [eax]
// 00580655  7512                 jne 0x580669
// 00580657  8928                 mov dword ptr [eax], ebp
// 00580659  eb0e                 jmp 0x580669
// 0058065b  896e08               mov dword ptr [esi + 8], ebp
// 0058065e  8b4704               mov eax, dword ptr [edi + 4]
// 00580661  3b7008               cmp esi, dword ptr [eax + 8]
// 00580664  7503                 jne 0x580669
// 00580666  896808               mov dword ptr [eax + 8], ebp
// 00580669  8b5504               mov edx, dword ptr [ebp + 4]
// 0058066c  807a2c00             cmp byte ptr [edx + 0x2c], 0
// 00580670  8d4504               lea eax, [ebp + 4]
// 00580673  8bf5                 mov esi, ebp
// 00580675  0f85ea000000         jne 0x580765
// 0058067b  eb03                 jmp 0x580680
// 0058067d  8d4900               lea ecx, [ecx]
// 00580680  8b08                 mov ecx, dword ptr [eax]
// 00580682  8b5104               mov edx, dword ptr [ecx + 4]
// 00580685  3b0a                 cmp ecx, dword ptr [edx]
// 00580687  7551                 jne 0x5806da
// 00580689  8b5208               mov edx, dword ptr [edx + 8]
// 0058068c  807a2c00             cmp byte ptr [edx + 0x2c], 0
// 00580690  7519                 jne 0x5806ab
// 00580692  88592c               mov byte ptr [ecx + 0x2c], bl
// 00580695  885a2c               mov byte ptr [edx + 0x2c], bl
// 00580698  8b10                 mov edx, dword ptr [eax]
// 0058069a  8b4a04               mov ecx, dword ptr [edx + 4]
// 0058069d  c6412c00             mov byte ptr [ecx + 0x2c], 0
// 005806a1  8b10                 mov edx, dword ptr [eax]
// 005806a3  8b7204               mov esi, dword ptr [edx + 4]
// 005806a6  e9aa000000           jmp 0x580755
// 005806ab  3b7108               cmp esi, dword ptr [ecx + 8]
// 005806ae  750a                 jne 0x5806ba
// 005806b0  8bf1                 mov esi, ecx
// 005806b2  56                   push esi
// 005806b3  8bcf                 mov ecx, edi
// 005806b5  e8d626fcff           call 0x542d90
// 005806ba  8b4604               mov eax, dword ptr [esi + 4]
// 005806bd  88582c               mov byte ptr [eax + 0x2c], bl
// 005806c0  8b4e04               mov ecx, dword ptr [esi + 4]
// 005806c3  8b5104               mov edx, dword ptr [ecx + 4]
// 005806c6  c6422c00             mov byte ptr [edx + 0x2c], 0
// 005806ca  8b4604               mov eax, dword ptr [esi + 4]
// 005806cd  8b4804               mov ecx, dword ptr [eax + 4]
// 005806d0  51                   push ecx
// 005806d1  8bcf                 mov ecx, edi
// 005806d3  e8881cffff           call 0x572360
// 005806d8  eb7b                 jmp 0x580755
// 005806da  8b12                 mov edx, dword ptr [edx]
// 005806dc  807a2c00             cmp byte ptr [edx + 0x2c], 0
// 005806e0  7516                 jne 0x5806f8
// 005806e2  88592c               mov byte ptr [ecx + 0x2c], bl
// 005806e5  885a2c               mov byte ptr [edx + 0x2c], bl
// 005806e8  8b10                 mov edx, dword ptr [eax]
// 005806ea  8b4a04               mov ecx, dword ptr [edx + 4]
// 005806ed  c6412c00             mov byte ptr [ecx + 0x2c], 0
// 005806f1  8b10                 mov edx, dword ptr [eax]
// 005806f3  8b7204               mov esi, dword ptr [edx + 4]
// 005806f6  eb5d                 jmp 0x580755
// 005806f8  3b31                 cmp esi, dword ptr [ecx]
// 005806fa  750a                 jne 0x580706
// 005806fc  8bf1                 mov esi, ecx
// 005806fe  56                   push esi
// 005806ff  8bcf                 mov ecx, edi
// 00580701  e85a1cffff           call 0x572360
// 00580706  8b4604               mov eax, dword ptr [esi + 4]
// 00580709  88582c               mov byte ptr [eax + 0x2c], bl
// 0058070c  8b4e04               mov ecx, dword ptr [esi + 4]
// 0058070f  8b5104               mov edx, dword ptr [ecx + 4]
// 00580712  c6422c00             mov byte ptr [edx + 0x2c], 0
// 00580716  8b4604               mov eax, dword ptr [esi + 4]
// 00580719  8b4004               mov eax, dword ptr [eax + 4]
// 0058071c  8b4808               mov ecx, dword ptr [eax + 8]
// 0058071f  8b11                 mov edx, dword ptr [ecx]
// 00580721  895008               mov dword ptr [eax + 8], edx
// 00580724  8b11                 mov edx, dword ptr [ecx]
// 00580726  807a2d00             cmp byte ptr [edx + 0x2d], 0
// 0058072a  7503                 jne 0x58072f
// 0058072c  894204               mov dword ptr [edx + 4], eax
// 0058072f  8b5004               mov edx, dword ptr [eax + 4]
// 00580732  895104               mov dword ptr [ecx + 4], edx
// 00580735  8b5704               mov edx, dword ptr [edi + 4]
// 00580738  3b4204               cmp eax, dword ptr [edx + 4]
// 0058073b  7505                 jne 0x580742
// 0058073d  894a04               mov dword ptr [edx + 4], ecx
// 00580740  eb0e                 jmp 0x580750
// 00580742  8b5004               mov edx, dword ptr [eax + 4]
// 00580745  3b02                 cmp eax, dword ptr [edx]
// 00580747  7504                 jne 0x58074d
// 00580749  890a                 mov dword ptr [edx], ecx
// 0058074b  eb03                 jmp 0x580750
// 0058074d  894a08               mov dword ptr [edx + 8], ecx
// 00580750  8901                 mov dword ptr [ecx], eax
// 00580752  894804               mov dword ptr [eax + 4], ecx
// 00580755  8b4e04               mov ecx, dword ptr [esi + 4]
// 00580758  80792c00             cmp byte ptr [ecx + 0x2c], 0
// 0058075c  8d4604               lea eax, [esi + 4]
// 0058075f  0f841bffffff         je 0x580680
// 00580765  8b5704               mov edx, dword ptr [edi + 4]
// 00580768  8b4204               mov eax, dword ptr [edx + 4]
// 0058076b  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0058076f  88582c               mov byte ptr [eax + 0x2c], bl
// 00580772  8b442464             mov eax, dword ptr [esp + 0x64]
// 00580776  5e                   pop esi
// 00580777  896804               mov dword ptr [eax + 4], ebp
// 0058077a  5d                   pop ebp
// 0058077b  8938                 mov dword ptr [eax], edi
// 0058077d  5b                   pop ebx
// 0058077e  5f                   pop edi
// 0058077f  64890d00000000       mov dword ptr fs:[0], ecx
// 00580786  83c450               add esp, 0x50
// 00580789  c21000               ret 0x10
// library rbxgs/v8datamodel\Camera.cpp (function ?_Insert@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CameraType@Camera@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CameraType@Camera@RBX@@@std@@@2@$0A@@std@@@std@@IAE?AViterator@12@_NPAU_Node@?$_Tree_nod@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CameraType@Camera@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CameraType@Camera@RBX@@@std@@@2@$0A@@std@@@2@ABU?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CameraType@Camera@RBX@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
