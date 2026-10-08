// roc 2007-03 00567c50  unit: seg_00560000  size: 508 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00567c50
//
// 00567c50  64a100000000         mov eax, dword ptr fs:[0]
// 00567c56  6aff                 push -1
// 00567c58  68926f7500           push 0x756f92
// 00567c5d  50                   push eax
// 00567c5e  64892500000000       mov dword ptr fs:[0], esp
// 00567c65  83ec44               sub esp, 0x44
// 00567c68  57                   push edi
// 00567c69  8bf9                 mov edi, ecx
// 00567c6b  817f08feffff07       cmp dword ptr [edi + 8], 0x7fffffe
// 00567c72  7259                 jb 0x567ccd
// 00567c74  68903f7800           push 0x783f90
// 00567c79  8d4c2408             lea ecx, [esp + 8]
// 00567c7d  ff1578e77700         call dword ptr [0x77e778]
// 00567c83  8d4c2420             lea ecx, [esp + 0x20]
// 00567c87  c744245000000000     mov dword ptr [esp + 0x50], 0
// 00567c8f  ff1560e97700         call dword ptr [0x77e960]
// 00567c95  8d442404             lea eax, [esp + 4]
// 00567c99  50                   push eax
// 00567c9a  8d4c2430             lea ecx, [esp + 0x30]
// 00567c9e  c644245401           mov byte ptr [esp + 0x54], 1
// 00567ca3  c7442424383e7800     mov dword ptr [esp + 0x24], 0x783e38
// 00567cab  ff157ce77700         call dword ptr [0x77e77c]
// 00567cb1  6870f78300           push 0x83f770
// 00567cb6  8d4c2424             lea ecx, [esp + 0x24]
// 00567cba  51                   push ecx
// 00567cbb  c644245800           mov byte ptr [esp + 0x58], 0
// 00567cc0  c7442428443e7800     mov dword ptr [esp + 0x28], 0x783e44
// 00567cc8  e861730b00           call 0x61f02e
// 00567ccd  8b542464             mov edx, dword ptr [esp + 0x64]
// 00567cd1  8b4704               mov eax, dword ptr [edi + 4]
// 00567cd4  53                   push ebx
// 00567cd5  55                   push ebp
// 00567cd6  56                   push esi
// 00567cd7  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 00567cdb  6a00                 push 0
// 00567cdd  52                   push edx
// 00567cde  50                   push eax
// 00567cdf  56                   push esi
// 00567ce0  50                   push eax
// 00567ce1  e8fa050a00           call 0x6082e0
// 00567ce6  8be8                 mov ebp, eax
// 00567ce8  8b4704               mov eax, dword ptr [edi + 4]
// 00567ceb  bb01000000           mov ebx, 1
// 00567cf0  015f08               add dword ptr [edi + 8], ebx
// 00567cf3  3bf0                 cmp esi, eax
// 00567cf5  7510                 jne 0x567d07
// 00567cf7  896804               mov dword ptr [eax + 4], ebp
// 00567cfa  8b4704               mov eax, dword ptr [edi + 4]
// 00567cfd  8928                 mov dword ptr [eax], ebp
// 00567cff  8b4f04               mov ecx, dword ptr [edi + 4]
// 00567d02  896908               mov dword ptr [ecx + 8], ebp
// 00567d05  eb22                 jmp 0x567d29
// 00567d07  807c246800           cmp byte ptr [esp + 0x68], 0
// 00567d0c  740d                 je 0x567d1b
// 00567d0e  892e                 mov dword ptr [esi], ebp
// 00567d10  8b4704               mov eax, dword ptr [edi + 4]
// 00567d13  3b30                 cmp esi, dword ptr [eax]
// 00567d15  7512                 jne 0x567d29
// 00567d17  8928                 mov dword ptr [eax], ebp
// 00567d19  eb0e                 jmp 0x567d29
// 00567d1b  896e08               mov dword ptr [esi + 8], ebp
// 00567d1e  8b4704               mov eax, dword ptr [edi + 4]
// 00567d21  3b7008               cmp esi, dword ptr [eax + 8]
// 00567d24  7503                 jne 0x567d29
// 00567d26  896808               mov dword ptr [eax + 8], ebp
// 00567d29  8b5504               mov edx, dword ptr [ebp + 4]
// 00567d2c  807a2c00             cmp byte ptr [edx + 0x2c], 0
// 00567d30  8d4504               lea eax, [ebp + 4]
// 00567d33  8bf5                 mov esi, ebp
// 00567d35  0f85ea000000         jne 0x567e25
// 00567d3b  eb03                 jmp 0x567d40
// 00567d3d  8d4900               lea ecx, [ecx]
// 00567d40  8b08                 mov ecx, dword ptr [eax]
// 00567d42  8b5104               mov edx, dword ptr [ecx + 4]
// 00567d45  3b0a                 cmp ecx, dword ptr [edx]
// 00567d47  7551                 jne 0x567d9a
// 00567d49  8b5208               mov edx, dword ptr [edx + 8]
// 00567d4c  807a2c00             cmp byte ptr [edx + 0x2c], 0
// 00567d50  7519                 jne 0x567d6b
// 00567d52  88592c               mov byte ptr [ecx + 0x2c], bl
// 00567d55  885a2c               mov byte ptr [edx + 0x2c], bl
// 00567d58  8b10                 mov edx, dword ptr [eax]
// 00567d5a  8b4a04               mov ecx, dword ptr [edx + 4]
// 00567d5d  c6412c00             mov byte ptr [ecx + 0x2c], 0
// 00567d61  8b10                 mov edx, dword ptr [eax]
// 00567d63  8b7204               mov esi, dword ptr [edx + 4]
// 00567d66  e9aa000000           jmp 0x567e15
// 00567d6b  3b7108               cmp esi, dword ptr [ecx + 8]
// 00567d6e  750a                 jne 0x567d7a
// 00567d70  8bf1                 mov esi, ecx
// 00567d72  56                   push esi
// 00567d73  8bcf                 mov ecx, edi
// 00567d75  e816b0fdff           call 0x542d90
// 00567d7a  8b4604               mov eax, dword ptr [esi + 4]
// 00567d7d  88582c               mov byte ptr [eax + 0x2c], bl
// 00567d80  8b4e04               mov ecx, dword ptr [esi + 4]
// 00567d83  8b5104               mov edx, dword ptr [ecx + 4]
// 00567d86  c6422c00             mov byte ptr [edx + 0x2c], 0
// 00567d8a  8b4604               mov eax, dword ptr [esi + 4]
// 00567d8d  8b4804               mov ecx, dword ptr [eax + 4]
// 00567d90  51                   push ecx
// 00567d91  8bcf                 mov ecx, edi
// 00567d93  e8c8a50000           call 0x572360
// 00567d98  eb7b                 jmp 0x567e15
// 00567d9a  8b12                 mov edx, dword ptr [edx]
// 00567d9c  807a2c00             cmp byte ptr [edx + 0x2c], 0
// 00567da0  7516                 jne 0x567db8
// 00567da2  88592c               mov byte ptr [ecx + 0x2c], bl
// 00567da5  885a2c               mov byte ptr [edx + 0x2c], bl
// 00567da8  8b10                 mov edx, dword ptr [eax]
// 00567daa  8b4a04               mov ecx, dword ptr [edx + 4]
// 00567dad  c6412c00             mov byte ptr [ecx + 0x2c], 0
// 00567db1  8b10                 mov edx, dword ptr [eax]
// 00567db3  8b7204               mov esi, dword ptr [edx + 4]
// 00567db6  eb5d                 jmp 0x567e15
// 00567db8  3b31                 cmp esi, dword ptr [ecx]
// 00567dba  750a                 jne 0x567dc6
// 00567dbc  8bf1                 mov esi, ecx
// 00567dbe  56                   push esi
// 00567dbf  8bcf                 mov ecx, edi
// 00567dc1  e89aa50000           call 0x572360
// 00567dc6  8b4604               mov eax, dword ptr [esi + 4]
// 00567dc9  88582c               mov byte ptr [eax + 0x2c], bl
// 00567dcc  8b4e04               mov ecx, dword ptr [esi + 4]
// 00567dcf  8b5104               mov edx, dword ptr [ecx + 4]
// 00567dd2  c6422c00             mov byte ptr [edx + 0x2c], 0
// 00567dd6  8b4604               mov eax, dword ptr [esi + 4]
// 00567dd9  8b4004               mov eax, dword ptr [eax + 4]
// 00567ddc  8b4808               mov ecx, dword ptr [eax + 8]
// 00567ddf  8b11                 mov edx, dword ptr [ecx]
// 00567de1  895008               mov dword ptr [eax + 8], edx
// 00567de4  8b11                 mov edx, dword ptr [ecx]
// 00567de6  807a2d00             cmp byte ptr [edx + 0x2d], 0
// 00567dea  7503                 jne 0x567def
// 00567dec  894204               mov dword ptr [edx + 4], eax
// 00567def  8b5004               mov edx, dword ptr [eax + 4]
// 00567df2  895104               mov dword ptr [ecx + 4], edx
// 00567df5  8b5704               mov edx, dword ptr [edi + 4]
// 00567df8  3b4204               cmp eax, dword ptr [edx + 4]
// 00567dfb  7505                 jne 0x567e02
// 00567dfd  894a04               mov dword ptr [edx + 4], ecx
// 00567e00  eb0e                 jmp 0x567e10
// 00567e02  8b5004               mov edx, dword ptr [eax + 4]
// 00567e05  3b02                 cmp eax, dword ptr [edx]
// 00567e07  7504                 jne 0x567e0d
// 00567e09  890a                 mov dword ptr [edx], ecx
// 00567e0b  eb03                 jmp 0x567e10
// 00567e0d  894a08               mov dword ptr [edx + 8], ecx
// 00567e10  8901                 mov dword ptr [ecx], eax
// 00567e12  894804               mov dword ptr [eax + 4], ecx
// 00567e15  8b4e04               mov ecx, dword ptr [esi + 4]
// 00567e18  80792c00             cmp byte ptr [ecx + 0x2c], 0
// 00567e1c  8d4604               lea eax, [esi + 4]
// 00567e1f  0f841bffffff         je 0x567d40
// 00567e25  8b5704               mov edx, dword ptr [edi + 4]
// 00567e28  8b4204               mov eax, dword ptr [edx + 4]
// 00567e2b  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00567e2f  88582c               mov byte ptr [eax + 0x2c], bl
// 00567e32  8b442464             mov eax, dword ptr [esp + 0x64]
// 00567e36  5e                   pop esi
// 00567e37  896804               mov dword ptr [eax + 4], ebp
// 00567e3a  5d                   pop ebp
// 00567e3b  8938                 mov dword ptr [eax], edi
// 00567e3d  5b                   pop ebx
// 00567e3e  5f                   pop edi
// 00567e3f  64890d00000000       mov dword ptr fs:[0], ecx
// 00567e46  83c450               add esp, 0x50
// 00567e49  c21000               ret 0x10
// library rbxgs/v8datamodel\Camera.cpp (function ?_Insert@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CameraType@Camera@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CameraType@Camera@RBX@@@std@@@2@$0A@@std@@@std@@IAE?AViterator@12@_NPAU_Node@?$_Tree_nod@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CameraType@Camera@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CameraType@Camera@RBX@@@std@@@2@$0A@@std@@@2@ABU?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CameraType@Camera@RBX@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
