// roc 2007-03 0056aaf0  unit: seg_00560000  size: 508 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0056aaf0
//
// 0056aaf0  64a100000000         mov eax, dword ptr fs:[0]
// 0056aaf6  6aff                 push -1
// 0056aaf8  68926f7500           push 0x756f92
// 0056aafd  50                   push eax
// 0056aafe  64892500000000       mov dword ptr fs:[0], esp
// 0056ab05  83ec44               sub esp, 0x44
// 0056ab08  57                   push edi
// 0056ab09  8bf9                 mov edi, ecx
// 0056ab0b  817f08feffff07       cmp dword ptr [edi + 8], 0x7fffffe
// 0056ab12  7259                 jb 0x56ab6d
// 0056ab14  68903f7800           push 0x783f90
// 0056ab19  8d4c2408             lea ecx, [esp + 8]
// 0056ab1d  ff1578e77700         call dword ptr [0x77e778]
// 0056ab23  8d4c2420             lea ecx, [esp + 0x20]
// 0056ab27  c744245000000000     mov dword ptr [esp + 0x50], 0
// 0056ab2f  ff1560e97700         call dword ptr [0x77e960]
// 0056ab35  8d442404             lea eax, [esp + 4]
// 0056ab39  50                   push eax
// 0056ab3a  8d4c2430             lea ecx, [esp + 0x30]
// 0056ab3e  c644245401           mov byte ptr [esp + 0x54], 1
// 0056ab43  c7442424383e7800     mov dword ptr [esp + 0x24], 0x783e38
// 0056ab4b  ff157ce77700         call dword ptr [0x77e77c]
// 0056ab51  6870f78300           push 0x83f770
// 0056ab56  8d4c2424             lea ecx, [esp + 0x24]
// 0056ab5a  51                   push ecx
// 0056ab5b  c644245800           mov byte ptr [esp + 0x58], 0
// 0056ab60  c7442428443e7800     mov dword ptr [esp + 0x28], 0x783e44
// 0056ab68  e8c1440b00           call 0x61f02e
// 0056ab6d  8b542464             mov edx, dword ptr [esp + 0x64]
// 0056ab71  8b4704               mov eax, dword ptr [edi + 4]
// 0056ab74  53                   push ebx
// 0056ab75  55                   push ebp
// 0056ab76  56                   push esi
// 0056ab77  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 0056ab7b  6a00                 push 0
// 0056ab7d  52                   push edx
// 0056ab7e  50                   push eax
// 0056ab7f  56                   push esi
// 0056ab80  50                   push eax
// 0056ab81  e8cafeffff           call 0x56aa50
// 0056ab86  8be8                 mov ebp, eax
// 0056ab88  8b4704               mov eax, dword ptr [edi + 4]
// 0056ab8b  bb01000000           mov ebx, 1
// 0056ab90  015f08               add dword ptr [edi + 8], ebx
// 0056ab93  3bf0                 cmp esi, eax
// 0056ab95  7510                 jne 0x56aba7
// 0056ab97  896804               mov dword ptr [eax + 4], ebp
// 0056ab9a  8b4704               mov eax, dword ptr [edi + 4]
// 0056ab9d  8928                 mov dword ptr [eax], ebp
// 0056ab9f  8b4f04               mov ecx, dword ptr [edi + 4]
// 0056aba2  896908               mov dword ptr [ecx + 8], ebp
// 0056aba5  eb22                 jmp 0x56abc9
// 0056aba7  807c246800           cmp byte ptr [esp + 0x68], 0
// 0056abac  740d                 je 0x56abbb
// 0056abae  892e                 mov dword ptr [esi], ebp
// 0056abb0  8b4704               mov eax, dword ptr [edi + 4]
// 0056abb3  3b30                 cmp esi, dword ptr [eax]
// 0056abb5  7512                 jne 0x56abc9
// 0056abb7  8928                 mov dword ptr [eax], ebp
// 0056abb9  eb0e                 jmp 0x56abc9
// 0056abbb  896e08               mov dword ptr [esi + 8], ebp
// 0056abbe  8b4704               mov eax, dword ptr [edi + 4]
// 0056abc1  3b7008               cmp esi, dword ptr [eax + 8]
// 0056abc4  7503                 jne 0x56abc9
// 0056abc6  896808               mov dword ptr [eax + 8], ebp
// 0056abc9  8b5504               mov edx, dword ptr [ebp + 4]
// 0056abcc  807a2c00             cmp byte ptr [edx + 0x2c], 0
// 0056abd0  8d4504               lea eax, [ebp + 4]
// 0056abd3  8bf5                 mov esi, ebp
// 0056abd5  0f85ea000000         jne 0x56acc5
// 0056abdb  eb03                 jmp 0x56abe0
// 0056abdd  8d4900               lea ecx, [ecx]
// 0056abe0  8b08                 mov ecx, dword ptr [eax]
// 0056abe2  8b5104               mov edx, dword ptr [ecx + 4]
// 0056abe5  3b0a                 cmp ecx, dword ptr [edx]
// 0056abe7  7551                 jne 0x56ac3a
// 0056abe9  8b5208               mov edx, dword ptr [edx + 8]
// 0056abec  807a2c00             cmp byte ptr [edx + 0x2c], 0
// 0056abf0  7519                 jne 0x56ac0b
// 0056abf2  88592c               mov byte ptr [ecx + 0x2c], bl
// 0056abf5  885a2c               mov byte ptr [edx + 0x2c], bl
// 0056abf8  8b10                 mov edx, dword ptr [eax]
// 0056abfa  8b4a04               mov ecx, dword ptr [edx + 4]
// 0056abfd  c6412c00             mov byte ptr [ecx + 0x2c], 0
// 0056ac01  8b10                 mov edx, dword ptr [eax]
// 0056ac03  8b7204               mov esi, dword ptr [edx + 4]
// 0056ac06  e9aa000000           jmp 0x56acb5
// 0056ac0b  3b7108               cmp esi, dword ptr [ecx + 8]
// 0056ac0e  750a                 jne 0x56ac1a
// 0056ac10  8bf1                 mov esi, ecx
// 0056ac12  56                   push esi
// 0056ac13  8bcf                 mov ecx, edi
// 0056ac15  e87681fdff           call 0x542d90
// 0056ac1a  8b4604               mov eax, dword ptr [esi + 4]
// 0056ac1d  88582c               mov byte ptr [eax + 0x2c], bl
// 0056ac20  8b4e04               mov ecx, dword ptr [esi + 4]
// 0056ac23  8b5104               mov edx, dword ptr [ecx + 4]
// 0056ac26  c6422c00             mov byte ptr [edx + 0x2c], 0
// 0056ac2a  8b4604               mov eax, dword ptr [esi + 4]
// 0056ac2d  8b4804               mov ecx, dword ptr [eax + 4]
// 0056ac30  51                   push ecx
// 0056ac31  8bcf                 mov ecx, edi
// 0056ac33  e828770000           call 0x572360
// 0056ac38  eb7b                 jmp 0x56acb5
// 0056ac3a  8b12                 mov edx, dword ptr [edx]
// 0056ac3c  807a2c00             cmp byte ptr [edx + 0x2c], 0
// 0056ac40  7516                 jne 0x56ac58
// 0056ac42  88592c               mov byte ptr [ecx + 0x2c], bl
// 0056ac45  885a2c               mov byte ptr [edx + 0x2c], bl
// 0056ac48  8b10                 mov edx, dword ptr [eax]
// 0056ac4a  8b4a04               mov ecx, dword ptr [edx + 4]
// 0056ac4d  c6412c00             mov byte ptr [ecx + 0x2c], 0
// 0056ac51  8b10                 mov edx, dword ptr [eax]
// 0056ac53  8b7204               mov esi, dword ptr [edx + 4]
// 0056ac56  eb5d                 jmp 0x56acb5
// 0056ac58  3b31                 cmp esi, dword ptr [ecx]
// 0056ac5a  750a                 jne 0x56ac66
// 0056ac5c  8bf1                 mov esi, ecx
// 0056ac5e  56                   push esi
// 0056ac5f  8bcf                 mov ecx, edi
// 0056ac61  e8fa760000           call 0x572360
// 0056ac66  8b4604               mov eax, dword ptr [esi + 4]
// 0056ac69  88582c               mov byte ptr [eax + 0x2c], bl
// 0056ac6c  8b4e04               mov ecx, dword ptr [esi + 4]
// 0056ac6f  8b5104               mov edx, dword ptr [ecx + 4]
// 0056ac72  c6422c00             mov byte ptr [edx + 0x2c], 0
// 0056ac76  8b4604               mov eax, dword ptr [esi + 4]
// 0056ac79  8b4004               mov eax, dword ptr [eax + 4]
// 0056ac7c  8b4808               mov ecx, dword ptr [eax + 8]
// 0056ac7f  8b11                 mov edx, dword ptr [ecx]
// 0056ac81  895008               mov dword ptr [eax + 8], edx
// 0056ac84  8b11                 mov edx, dword ptr [ecx]
// 0056ac86  807a2d00             cmp byte ptr [edx + 0x2d], 0
// 0056ac8a  7503                 jne 0x56ac8f
// 0056ac8c  894204               mov dword ptr [edx + 4], eax
// 0056ac8f  8b5004               mov edx, dword ptr [eax + 4]
// 0056ac92  895104               mov dword ptr [ecx + 4], edx
// 0056ac95  8b5704               mov edx, dword ptr [edi + 4]
// 0056ac98  3b4204               cmp eax, dword ptr [edx + 4]
// 0056ac9b  7505                 jne 0x56aca2
// 0056ac9d  894a04               mov dword ptr [edx + 4], ecx
// 0056aca0  eb0e                 jmp 0x56acb0
// 0056aca2  8b5004               mov edx, dword ptr [eax + 4]
// 0056aca5  3b02                 cmp eax, dword ptr [edx]
// 0056aca7  7504                 jne 0x56acad
// 0056aca9  890a                 mov dword ptr [edx], ecx
// 0056acab  eb03                 jmp 0x56acb0
// 0056acad  894a08               mov dword ptr [edx + 8], ecx
// 0056acb0  8901                 mov dword ptr [ecx], eax
// 0056acb2  894804               mov dword ptr [eax + 4], ecx
// 0056acb5  8b4e04               mov ecx, dword ptr [esi + 4]
// 0056acb8  80792c00             cmp byte ptr [ecx + 0x2c], 0
// 0056acbc  8d4604               lea eax, [esi + 4]
// 0056acbf  0f841bffffff         je 0x56abe0
// 0056acc5  8b5704               mov edx, dword ptr [edi + 4]
// 0056acc8  8b4204               mov eax, dword ptr [edx + 4]
// 0056accb  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0056accf  88582c               mov byte ptr [eax + 0x2c], bl
// 0056acd2  8b442464             mov eax, dword ptr [esp + 0x64]
// 0056acd6  5e                   pop esi
// 0056acd7  896804               mov dword ptr [eax + 4], ebp
// 0056acda  5d                   pop ebp
// 0056acdb  8938                 mov dword ptr [eax], edi
// 0056acdd  5b                   pop ebx
// 0056acde  5f                   pop edi
// 0056acdf  64890d00000000       mov dword ptr fs:[0], ecx
// 0056ace6  83c450               add esp, 0x50
// 0056ace9  c21000               ret 0x10
// library rbxgs/v8datamodel\Camera.cpp (function ?_Insert@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CameraType@Camera@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CameraType@Camera@RBX@@@std@@@2@$0A@@std@@@std@@IAE?AViterator@12@_NPAU_Node@?$_Tree_nod@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CameraType@Camera@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CameraType@Camera@RBX@@@std@@@2@$0A@@std@@@2@ABU?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CameraType@Camera@RBX@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
