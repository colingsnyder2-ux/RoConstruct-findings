// roc 2007-03 00469780  unit: seg_00460000  size: 518 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00469780
//
// 00469780  83ec0c               sub esp, 0xc
// 00469783  56                   push esi
// 00469784  8bf1                 mov esi, ecx
// 00469786  837e0800             cmp dword ptr [esi + 8], 0
// 0046978a  57                   push edi
// 0046978b  7521                 jne 0x4697ae
// 0046978d  8b442424             mov eax, dword ptr [esp + 0x24]
// 00469791  8b4e04               mov ecx, dword ptr [esi + 4]
// 00469794  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00469798  50                   push eax
// 00469799  51                   push ecx
// 0046979a  6a01                 push 1
// 0046979c  57                   push edi
// 0046979d  8bce                 mov ecx, esi
// 0046979f  e8acb6fdff           call 0x444e50
// 004697a4  8bc7                 mov eax, edi
// 004697a6  5f                   pop edi
// 004697a7  5e                   pop esi
// 004697a8  83c40c               add esp, 0xc
// 004697ab  c21000               ret 0x10
// 004697ae  8b5604               mov edx, dword ptr [esi + 4]
// 004697b1  8b3a                 mov edi, dword ptr [edx]
// 004697b3  55                   push ebp
// 004697b4  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 004697b8  85ed                 test ebp, ebp
// 004697ba  7404                 je 0x4697c0
// 004697bc  3bee                 cmp ebp, esi
// 004697be  7406                 je 0x4697c6
// 004697c0  ff1544e97700         call dword ptr [0x77e944]
// 004697c6  53                   push ebx
// 004697c7  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 004697cb  3bdf                 cmp ebx, edi
// 004697cd  7536                 jne 0x469805
// 004697cf  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 004697d3  8d430c               lea eax, [ebx + 0xc]
// 004697d6  50                   push eax
// 004697d7  57                   push edi
// 004697d8  ff15e0e67700         call dword ptr [0x77e6e0]
// 004697de  83c408               add esp, 8
// 004697e1  84c0                 test al, al
// 004697e3  0f8476010000         je 0x46995f
// 004697e9  57                   push edi
// 004697ea  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 004697ee  53                   push ebx
// 004697ef  6a01                 push 1
// 004697f1  57                   push edi
// 004697f2  8bce                 mov ecx, esi
// 004697f4  e857b6fdff           call 0x444e50
// 004697f9  5b                   pop ebx
// 004697fa  5d                   pop ebp
// 004697fb  8bc7                 mov eax, edi
// 004697fd  5f                   pop edi
// 004697fe  5e                   pop esi
// 004697ff  83c40c               add esp, 0xc
// 00469802  c21000               ret 0x10
// 00469805  85ed                 test ebp, ebp
// 00469807  8b7e04               mov edi, dword ptr [esi + 4]
// 0046980a  7404                 je 0x469810
// 0046980c  3bee                 cmp ebp, esi
// 0046980e  7406                 je 0x469816
// 00469810  ff1544e97700         call dword ptr [0x77e944]
// 00469816  3bdf                 cmp ebx, edi
// 00469818  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 0046981c  753e                 jne 0x46985c
// 0046981e  8b4e04               mov ecx, dword ptr [esi + 4]
// 00469821  8b4108               mov eax, dword ptr [ecx + 8]
// 00469824  83c00c               add eax, 0xc
// 00469827  57                   push edi
// 00469828  50                   push eax
// 00469829  ff15e0e67700         call dword ptr [0x77e6e0]
// 0046982f  83c408               add esp, 8
// 00469832  84c0                 test al, al
// 00469834  0f8425010000         je 0x46995f
// 0046983a  8b5604               mov edx, dword ptr [esi + 4]
// 0046983d  8b4208               mov eax, dword ptr [edx + 8]
// 00469840  57                   push edi
// 00469841  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00469845  50                   push eax
// 00469846  6a00                 push 0
// 00469848  57                   push edi
// 00469849  8bce                 mov ecx, esi
// 0046984b  e800b6fdff           call 0x444e50
// 00469850  5b                   pop ebx
// 00469851  5d                   pop ebp
// 00469852  8bc7                 mov eax, edi
// 00469854  5f                   pop edi
// 00469855  5e                   pop esi
// 00469856  83c40c               add esp, 0xc
// 00469859  c21000               ret 0x10
// 0046985c  8d430c               lea eax, [ebx + 0xc]
// 0046985f  50                   push eax
// 00469860  57                   push edi
// 00469861  ff15e0e67700         call dword ptr [0x77e6e0]
// 00469867  83c408               add esp, 8
// 0046986a  84c0                 test al, al
// 0046986c  7463                 je 0x4698d1
// 0046986e  8d4c2424             lea ecx, [esp + 0x24]
// 00469872  896c2424             mov dword ptr [esp + 0x24], ebp
// 00469876  895c2428             mov dword ptr [esp + 0x28], ebx
// 0046987a  e881e81800           call 0x5f8100
// 0046987f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00469883  83c10c               add ecx, 0xc
// 00469886  57                   push edi
// 00469887  51                   push ecx
// 00469888  8bce                 mov ecx, esi
// 0046988a  e821acfdff           call 0x4444b0
// 0046988f  84c0                 test al, al
// 00469891  743e                 je 0x4698d1
// 00469893  8b442428             mov eax, dword ptr [esp + 0x28]
// 00469897  8b5008               mov edx, dword ptr [eax + 8]
// 0046989a  807a2d00             cmp byte ptr [edx + 0x2d], 0
// 0046989e  57                   push edi
// 0046989f  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 004698a3  8bce                 mov ecx, esi
// 004698a5  7415                 je 0x4698bc
// 004698a7  50                   push eax
// 004698a8  6a00                 push 0
// 004698aa  57                   push edi
// 004698ab  e8a0b5fdff           call 0x444e50
// 004698b0  5b                   pop ebx
// 004698b1  5d                   pop ebp
// 004698b2  8bc7                 mov eax, edi
// 004698b4  5f                   pop edi
// 004698b5  5e                   pop esi
// 004698b6  83c40c               add esp, 0xc
// 004698b9  c21000               ret 0x10
// 004698bc  53                   push ebx
// 004698bd  6a01                 push 1
// 004698bf  57                   push edi
// 004698c0  e88bb5fdff           call 0x444e50
// 004698c5  5b                   pop ebx
// 004698c6  5d                   pop ebp
// 004698c7  8bc7                 mov eax, edi
// 004698c9  5f                   pop edi
// 004698ca  5e                   pop esi
// 004698cb  83c40c               add esp, 0xc
// 004698ce  c21000               ret 0x10
// 004698d1  8d430c               lea eax, [ebx + 0xc]
// 004698d4  57                   push edi
// 004698d5  50                   push eax
// 004698d6  ff15e0e67700         call dword ptr [0x77e6e0]
// 004698dc  83c408               add esp, 8
// 004698df  84c0                 test al, al
// 004698e1  747c                 je 0x46995f
// 004698e3  8b4604               mov eax, dword ptr [esi + 4]
// 004698e6  8d4c2424             lea ecx, [esp + 0x24]
// 004698ea  896c2424             mov dword ptr [esp + 0x24], ebp
// 004698ee  895c2428             mov dword ptr [esp + 0x28], ebx
// 004698f2  89442414             mov dword ptr [esp + 0x14], eax
// 004698f6  89742410             mov dword ptr [esp + 0x10], esi
// 004698fa  e8713d0c00           call 0x52d670
// 004698ff  8d4c2410             lea ecx, [esp + 0x10]
// 00469903  51                   push ecx
// 00469904  8d4c2428             lea ecx, [esp + 0x28]
// 00469908  e85323feff           call 0x44bc60
// 0046990d  84c0                 test al, al
// 0046990f  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00469913  7510                 jne 0x469925
// 00469915  8d550c               lea edx, [ebp + 0xc]
// 00469918  52                   push edx
// 00469919  57                   push edi
// 0046991a  8bce                 mov ecx, esi
// 0046991c  e88fabfdff           call 0x4444b0
// 00469921  84c0                 test al, al
// 00469923  743a                 je 0x46995f
// 00469925  8b4308               mov eax, dword ptr [ebx + 8]
// 00469928  80782d00             cmp byte ptr [eax + 0x2d], 0
// 0046992c  57                   push edi
// 0046992d  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00469931  8bce                 mov ecx, esi
// 00469933  7415                 je 0x46994a
// 00469935  53                   push ebx
// 00469936  6a00                 push 0
// 00469938  57                   push edi
// 00469939  e812b5fdff           call 0x444e50
// 0046993e  5b                   pop ebx
// 0046993f  5d                   pop ebp
// 00469940  8bc7                 mov eax, edi
// 00469942  5f                   pop edi
// 00469943  5e                   pop esi
// 00469944  83c40c               add esp, 0xc
// 00469947  c21000               ret 0x10
// 0046994a  55                   push ebp
// 0046994b  6a01                 push 1
// 0046994d  57                   push edi
// 0046994e  e8fdb4fdff           call 0x444e50
// 00469953  5b                   pop ebx
// 00469954  5d                   pop ebp
// 00469955  8bc7                 mov eax, edi
// 00469957  5f                   pop edi
// 00469958  5e                   pop esi
// 00469959  83c40c               add esp, 0xc
// 0046995c  c21000               ret 0x10
// 0046995f  57                   push edi
// 00469960  8d4c2414             lea ecx, [esp + 0x14]
// 00469964  51                   push ecx
// 00469965  8bce                 mov ecx, esi
// 00469967  e854b7fdff           call 0x4450c0
// 0046996c  8b10                 mov edx, dword ptr [eax]
// 0046996e  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00469972  5b                   pop ebx
// 00469973  5d                   pop ebp
// 00469974  8911                 mov dword ptr [ecx], edx
// 00469976  8b4004               mov eax, dword ptr [eax + 4]
// 00469979  5f                   pop edi
// 0046997a  894104               mov dword ptr [ecx + 4], eax
// 0046997d  8bc1                 mov eax, ecx
// 0046997f  5e                   pop esi
// 00469980  83c40c               add esp, 0xc
// 00469983  c21000               ret 0x10
// library rbxgs/v8datamodel\Camera.cpp (function ?insert@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CameraType@Camera@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CameraType@Camera@RBX@@@std@@@2@$0A@@std@@@std@@QAE?AViterator@12@V312@ABU?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CameraType@Camera@RBX@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
