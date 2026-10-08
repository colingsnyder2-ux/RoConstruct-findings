// roc 2007-03 00569640  unit: seg_00560000  size: 508 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00569640
//
// 00569640  64a100000000         mov eax, dword ptr fs:[0]
// 00569646  6aff                 push -1
// 00569648  68926f7500           push 0x756f92
// 0056964d  50                   push eax
// 0056964e  64892500000000       mov dword ptr fs:[0], esp
// 00569655  83ec44               sub esp, 0x44
// 00569658  57                   push edi
// 00569659  8bf9                 mov edi, ecx
// 0056965b  817f08feffff1f       cmp dword ptr [edi + 8], 0x1ffffffe
// 00569662  7259                 jb 0x5696bd
// 00569664  68903f7800           push 0x783f90
// 00569669  8d4c2408             lea ecx, [esp + 8]
// 0056966d  ff1578e77700         call dword ptr [0x77e778]
// 00569673  8d4c2420             lea ecx, [esp + 0x20]
// 00569677  c744245000000000     mov dword ptr [esp + 0x50], 0
// 0056967f  ff1560e97700         call dword ptr [0x77e960]
// 00569685  8d442404             lea eax, [esp + 4]
// 00569689  50                   push eax
// 0056968a  8d4c2430             lea ecx, [esp + 0x30]
// 0056968e  c644245401           mov byte ptr [esp + 0x54], 1
// 00569693  c7442424383e7800     mov dword ptr [esp + 0x24], 0x783e38
// 0056969b  ff157ce77700         call dword ptr [0x77e77c]
// 005696a1  6870f78300           push 0x83f770
// 005696a6  8d4c2424             lea ecx, [esp + 0x24]
// 005696aa  51                   push ecx
// 005696ab  c644245800           mov byte ptr [esp + 0x58], 0
// 005696b0  c7442428443e7800     mov dword ptr [esp + 0x28], 0x783e44
// 005696b8  e871590b00           call 0x61f02e
// 005696bd  8b542464             mov edx, dword ptr [esp + 0x64]
// 005696c1  8b4704               mov eax, dword ptr [edi + 4]
// 005696c4  53                   push ebx
// 005696c5  55                   push ebp
// 005696c6  56                   push esi
// 005696c7  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 005696cb  6a00                 push 0
// 005696cd  52                   push edx
// 005696ce  50                   push eax
// 005696cf  56                   push esi
// 005696d0  50                   push eax
// 005696d1  e8dafdffff           call 0x5694b0
// 005696d6  8be8                 mov ebp, eax
// 005696d8  8b4704               mov eax, dword ptr [edi + 4]
// 005696db  bb01000000           mov ebx, 1
// 005696e0  015f08               add dword ptr [edi + 8], ebx
// 005696e3  3bf0                 cmp esi, eax
// 005696e5  7510                 jne 0x5696f7
// 005696e7  896804               mov dword ptr [eax + 4], ebp
// 005696ea  8b4704               mov eax, dword ptr [edi + 4]
// 005696ed  8928                 mov dword ptr [eax], ebp
// 005696ef  8b4f04               mov ecx, dword ptr [edi + 4]
// 005696f2  896908               mov dword ptr [ecx + 8], ebp
// 005696f5  eb22                 jmp 0x569719
// 005696f7  807c246800           cmp byte ptr [esp + 0x68], 0
// 005696fc  740d                 je 0x56970b
// 005696fe  892e                 mov dword ptr [esi], ebp
// 00569700  8b4704               mov eax, dword ptr [edi + 4]
// 00569703  3b30                 cmp esi, dword ptr [eax]
// 00569705  7512                 jne 0x569719
// 00569707  8928                 mov dword ptr [eax], ebp
// 00569709  eb0e                 jmp 0x569719
// 0056970b  896e08               mov dword ptr [esi + 8], ebp
// 0056970e  8b4704               mov eax, dword ptr [edi + 4]
// 00569711  3b7008               cmp esi, dword ptr [eax + 8]
// 00569714  7503                 jne 0x569719
// 00569716  896808               mov dword ptr [eax + 8], ebp
// 00569719  8b5504               mov edx, dword ptr [ebp + 4]
// 0056971c  807a1400             cmp byte ptr [edx + 0x14], 0
// 00569720  8d4504               lea eax, [ebp + 4]
// 00569723  8bf5                 mov esi, ebp
// 00569725  0f85ea000000         jne 0x569815
// 0056972b  eb03                 jmp 0x569730
// 0056972d  8d4900               lea ecx, [ecx]
// 00569730  8b08                 mov ecx, dword ptr [eax]
// 00569732  8b5104               mov edx, dword ptr [ecx + 4]
// 00569735  3b0a                 cmp ecx, dword ptr [edx]
// 00569737  7551                 jne 0x56978a
// 00569739  8b5208               mov edx, dword ptr [edx + 8]
// 0056973c  807a1400             cmp byte ptr [edx + 0x14], 0
// 00569740  7519                 jne 0x56975b
// 00569742  885914               mov byte ptr [ecx + 0x14], bl
// 00569745  885a14               mov byte ptr [edx + 0x14], bl
// 00569748  8b10                 mov edx, dword ptr [eax]
// 0056974a  8b4a04               mov ecx, dword ptr [edx + 4]
// 0056974d  c6411400             mov byte ptr [ecx + 0x14], 0
// 00569751  8b10                 mov edx, dword ptr [eax]
// 00569753  8b7204               mov esi, dword ptr [edx + 4]
// 00569756  e9aa000000           jmp 0x569805
// 0056975b  3b7108               cmp esi, dword ptr [ecx + 8]
// 0056975e  750a                 jne 0x56976a
// 00569760  8bf1                 mov esi, ecx
// 00569762  56                   push esi
// 00569763  8bcf                 mov ecx, edi
// 00569765  e8d6330300           call 0x59cb40
// 0056976a  8b4604               mov eax, dword ptr [esi + 4]
// 0056976d  885814               mov byte ptr [eax + 0x14], bl
// 00569770  8b4e04               mov ecx, dword ptr [esi + 4]
// 00569773  8b5104               mov edx, dword ptr [ecx + 4]
// 00569776  c6421400             mov byte ptr [edx + 0x14], 0
// 0056977a  8b4604               mov eax, dword ptr [esi + 4]
// 0056977d  8b4804               mov ecx, dword ptr [eax + 4]
// 00569780  51                   push ecx
// 00569781  8bcf                 mov ecx, edi
// 00569783  e8686a0100           call 0x5801f0
// 00569788  eb7b                 jmp 0x569805
// 0056978a  8b12                 mov edx, dword ptr [edx]
// 0056978c  807a1400             cmp byte ptr [edx + 0x14], 0
// 00569790  7516                 jne 0x5697a8
// 00569792  885914               mov byte ptr [ecx + 0x14], bl
// 00569795  885a14               mov byte ptr [edx + 0x14], bl
// 00569798  8b10                 mov edx, dword ptr [eax]
// 0056979a  8b4a04               mov ecx, dword ptr [edx + 4]
// 0056979d  c6411400             mov byte ptr [ecx + 0x14], 0
// 005697a1  8b10                 mov edx, dword ptr [eax]
// 005697a3  8b7204               mov esi, dword ptr [edx + 4]
// 005697a6  eb5d                 jmp 0x569805
// 005697a8  3b31                 cmp esi, dword ptr [ecx]
// 005697aa  750a                 jne 0x5697b6
// 005697ac  8bf1                 mov esi, ecx
// 005697ae  56                   push esi
// 005697af  8bcf                 mov ecx, edi
// 005697b1  e83a6a0100           call 0x5801f0
// 005697b6  8b4604               mov eax, dword ptr [esi + 4]
// 005697b9  885814               mov byte ptr [eax + 0x14], bl
// 005697bc  8b4e04               mov ecx, dword ptr [esi + 4]
// 005697bf  8b5104               mov edx, dword ptr [ecx + 4]
// 005697c2  c6421400             mov byte ptr [edx + 0x14], 0
// 005697c6  8b4604               mov eax, dword ptr [esi + 4]
// 005697c9  8b4004               mov eax, dword ptr [eax + 4]
// 005697cc  8b4808               mov ecx, dword ptr [eax + 8]
// 005697cf  8b11                 mov edx, dword ptr [ecx]
// 005697d1  895008               mov dword ptr [eax + 8], edx
// 005697d4  8b11                 mov edx, dword ptr [ecx]
// 005697d6  807a1500             cmp byte ptr [edx + 0x15], 0
// 005697da  7503                 jne 0x5697df
// 005697dc  894204               mov dword ptr [edx + 4], eax
// 005697df  8b5004               mov edx, dword ptr [eax + 4]
// 005697e2  895104               mov dword ptr [ecx + 4], edx
// 005697e5  8b5704               mov edx, dword ptr [edi + 4]
// 005697e8  3b4204               cmp eax, dword ptr [edx + 4]
// 005697eb  7505                 jne 0x5697f2
// 005697ed  894a04               mov dword ptr [edx + 4], ecx
// 005697f0  eb0e                 jmp 0x569800
// 005697f2  8b5004               mov edx, dword ptr [eax + 4]
// 005697f5  3b02                 cmp eax, dword ptr [edx]
// 005697f7  7504                 jne 0x5697fd
// 005697f9  890a                 mov dword ptr [edx], ecx
// 005697fb  eb03                 jmp 0x569800
// 005697fd  894a08               mov dword ptr [edx + 8], ecx
// 00569800  8901                 mov dword ptr [ecx], eax
// 00569802  894804               mov dword ptr [eax + 4], ecx
// 00569805  8b4e04               mov ecx, dword ptr [esi + 4]
// 00569808  80791400             cmp byte ptr [ecx + 0x14], 0
// 0056980c  8d4604               lea eax, [esi + 4]
// 0056980f  0f841bffffff         je 0x569730
// 00569815  8b5704               mov edx, dword ptr [edi + 4]
// 00569818  8b4204               mov eax, dword ptr [edx + 4]
// 0056981b  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0056981f  885814               mov byte ptr [eax + 0x14], bl
// 00569822  8b442464             mov eax, dword ptr [esp + 0x64]
// 00569826  5e                   pop esi
// 00569827  896804               mov dword ptr [eax + 4], ebp
// 0056982a  5d                   pop ebp
// 0056982b  8938                 mov dword ptr [eax], edi
// 0056982d  5b                   pop ebx
// 0056982e  5f                   pop edi
// 0056982f  64890d00000000       mov dword ptr fs:[0], ecx
// 00569836  83c450               add esp, 0x50
// 00569839  c21000               ret 0x10
// library rbxgs/v8datamodel\Camera.cpp (function ?_Insert@?$_Tree@V?$_Tmap_traits@PBVName@RBX@@W4CameraType@Camera@2@U?$less@PBVName@RBX@@@std@@V?$allocator@U?$pair@QBVName@RBX@@W4CameraType@Camera@2@@std@@@6@$0A@@std@@@std@@IAE?AViterator@12@_NPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBVName@RBX@@W4CameraType@Camera@2@U?$less@PBVName@RBX@@@std@@V?$allocator@U?$pair@QBVName@RBX@@W4CameraType@Camera@2@@std@@@6@$0A@@std@@@2@ABU?$pair@QBVName@RBX@@W4CameraType@Camera@2@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
