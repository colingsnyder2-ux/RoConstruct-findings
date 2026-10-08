// roc 2007-03 005310e0  unit: seg_00530000  size: 446 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005310e0
//
// 005310e0  83ec0c               sub esp, 0xc
// 005310e3  56                   push esi
// 005310e4  8bf1                 mov esi, ecx
// 005310e6  837e0800             cmp dword ptr [esi + 8], 0
// 005310ea  57                   push edi
// 005310eb  7521                 jne 0x53110e
// 005310ed  8b442424             mov eax, dword ptr [esp + 0x24]
// 005310f1  8b4e04               mov ecx, dword ptr [esi + 4]
// 005310f4  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 005310f8  50                   push eax
// 005310f9  51                   push ecx
// 005310fa  6a01                 push 1
// 005310fc  57                   push edi
// 005310fd  8bce                 mov ecx, esi
// 005310ff  e8cce20b00           call 0x5ef3d0
// 00531104  8bc7                 mov eax, edi
// 00531106  5f                   pop edi
// 00531107  5e                   pop esi
// 00531108  83c40c               add esp, 0xc
// 0053110b  c21000               ret 0x10
// 0053110e  8b5604               mov edx, dword ptr [esi + 4]
// 00531111  8b3a                 mov edi, dword ptr [edx]
// 00531113  55                   push ebp
// 00531114  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00531118  85ed                 test ebp, ebp
// 0053111a  7404                 je 0x531120
// 0053111c  3bee                 cmp ebp, esi
// 0053111e  7406                 je 0x531126
// 00531120  ff1544e97700         call dword ptr [0x77e944]
// 00531126  53                   push ebx
// 00531127  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0053112b  3bdf                 cmp ebx, edi
// 0053112d  752b                 jne 0x53115a
// 0053112f  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00531133  8b07                 mov eax, dword ptr [edi]
// 00531135  3b430c               cmp eax, dword ptr [ebx + 0xc]
// 00531138  0f8339010000         jae 0x531277
// 0053113e  57                   push edi
// 0053113f  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00531143  53                   push ebx
// 00531144  6a01                 push 1
// 00531146  57                   push edi
// 00531147  8bce                 mov ecx, esi
// 00531149  e882e20b00           call 0x5ef3d0
// 0053114e  5b                   pop ebx
// 0053114f  5d                   pop ebp
// 00531150  8bc7                 mov eax, edi
// 00531152  5f                   pop edi
// 00531153  5e                   pop esi
// 00531154  83c40c               add esp, 0xc
// 00531157  c21000               ret 0x10
// 0053115a  85ed                 test ebp, ebp
// 0053115c  8b7e04               mov edi, dword ptr [esi + 4]
// 0053115f  7404                 je 0x531165
// 00531161  3bee                 cmp ebp, esi
// 00531163  7406                 je 0x53116b
// 00531165  ff1544e97700         call dword ptr [0x77e944]
// 0053116b  3bdf                 cmp ebx, edi
// 0053116d  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00531171  752d                 jne 0x5311a0
// 00531173  8b4e04               mov ecx, dword ptr [esi + 4]
// 00531176  8b4108               mov eax, dword ptr [ecx + 8]
// 00531179  8b500c               mov edx, dword ptr [eax + 0xc]
// 0053117c  3b17                 cmp edx, dword ptr [edi]
// 0053117e  0f83f3000000         jae 0x531277
// 00531184  57                   push edi
// 00531185  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00531189  50                   push eax
// 0053118a  6a00                 push 0
// 0053118c  57                   push edi
// 0053118d  8bce                 mov ecx, esi
// 0053118f  e83ce20b00           call 0x5ef3d0
// 00531194  5b                   pop ebx
// 00531195  5d                   pop ebp
// 00531196  8bc7                 mov eax, edi
// 00531198  5f                   pop edi
// 00531199  5e                   pop esi
// 0053119a  83c40c               add esp, 0xc
// 0053119d  c21000               ret 0x10
// 005311a0  8b07                 mov eax, dword ptr [edi]
// 005311a2  39430c               cmp dword ptr [ebx + 0xc], eax
// 005311a5  765b                 jbe 0x531202
// 005311a7  8d4c2424             lea ecx, [esp + 0x24]
// 005311ab  896c2424             mov dword ptr [esp + 0x24], ebp
// 005311af  895c2428             mov dword ptr [esp + 0x28], ebx
// 005311b3  e8c8e9ffff           call 0x52fb80
// 005311b8  8b07                 mov eax, dword ptr [edi]
// 005311ba  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005311be  39410c               cmp dword ptr [ecx + 0xc], eax
// 005311c1  733c                 jae 0x5311ff
// 005311c3  8b4108               mov eax, dword ptr [ecx + 8]
// 005311c6  80781500             cmp byte ptr [eax + 0x15], 0
// 005311ca  57                   push edi
// 005311cb  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 005311cf  7417                 je 0x5311e8
// 005311d1  51                   push ecx
// 005311d2  6a00                 push 0
// 005311d4  57                   push edi
// 005311d5  8bce                 mov ecx, esi
// 005311d7  e8f4e10b00           call 0x5ef3d0
// 005311dc  5b                   pop ebx
// 005311dd  5d                   pop ebp
// 005311de  8bc7                 mov eax, edi
// 005311e0  5f                   pop edi
// 005311e1  5e                   pop esi
// 005311e2  83c40c               add esp, 0xc
// 005311e5  c21000               ret 0x10
// 005311e8  53                   push ebx
// 005311e9  6a01                 push 1
// 005311eb  57                   push edi
// 005311ec  8bce                 mov ecx, esi
// 005311ee  e8dde10b00           call 0x5ef3d0
// 005311f3  5b                   pop ebx
// 005311f4  5d                   pop ebp
// 005311f5  8bc7                 mov eax, edi
// 005311f7  5f                   pop edi
// 005311f8  5e                   pop esi
// 005311f9  83c40c               add esp, 0xc
// 005311fc  c21000               ret 0x10
// 005311ff  39430c               cmp dword ptr [ebx + 0xc], eax
// 00531202  7373                 jae 0x531277
// 00531204  8b4e04               mov ecx, dword ptr [esi + 4]
// 00531207  894c2414             mov dword ptr [esp + 0x14], ecx
// 0053120b  8d4c2424             lea ecx, [esp + 0x24]
// 0053120f  896c2424             mov dword ptr [esp + 0x24], ebp
// 00531213  895c2428             mov dword ptr [esp + 0x28], ebx
// 00531217  89742410             mov dword ptr [esp + 0x10], esi
// 0053121b  e8b04b0800           call 0x5b5dd0
// 00531220  8d542410             lea edx, [esp + 0x10]
// 00531224  52                   push edx
// 00531225  8d4c2428             lea ecx, [esp + 0x28]
// 00531229  e832aaf1ff           call 0x44bc60
// 0053122e  84c0                 test al, al
// 00531230  8b442428             mov eax, dword ptr [esp + 0x28]
// 00531234  7507                 jne 0x53123d
// 00531236  8b0f                 mov ecx, dword ptr [edi]
// 00531238  3b480c               cmp ecx, dword ptr [eax + 0xc]
// 0053123b  733a                 jae 0x531277
// 0053123d  8b5308               mov edx, dword ptr [ebx + 8]
// 00531240  807a1500             cmp byte ptr [edx + 0x15], 0
// 00531244  57                   push edi
// 00531245  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00531249  8bce                 mov ecx, esi
// 0053124b  7415                 je 0x531262
// 0053124d  53                   push ebx
// 0053124e  6a00                 push 0
// 00531250  57                   push edi
// 00531251  e87ae10b00           call 0x5ef3d0
// 00531256  5b                   pop ebx
// 00531257  5d                   pop ebp
// 00531258  8bc7                 mov eax, edi
// 0053125a  5f                   pop edi
// 0053125b  5e                   pop esi
// 0053125c  83c40c               add esp, 0xc
// 0053125f  c21000               ret 0x10
// 00531262  50                   push eax
// 00531263  6a01                 push 1
// 00531265  57                   push edi
// 00531266  e865e10b00           call 0x5ef3d0
// 0053126b  5b                   pop ebx
// 0053126c  5d                   pop ebp
// 0053126d  8bc7                 mov eax, edi
// 0053126f  5f                   pop edi
// 00531270  5e                   pop esi
// 00531271  83c40c               add esp, 0xc
// 00531274  c21000               ret 0x10
// 00531277  57                   push edi
// 00531278  8d442414             lea eax, [esp + 0x14]
// 0053127c  50                   push eax
// 0053127d  8bce                 mov ecx, esi
// 0053127f  e87c710400           call 0x578400
// 00531284  8b10                 mov edx, dword ptr [eax]
// 00531286  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0053128a  5b                   pop ebx
// 0053128b  5d                   pop ebp
// 0053128c  8911                 mov dword ptr [ecx], edx
// 0053128e  8b4004               mov eax, dword ptr [eax + 4]
// 00531291  5f                   pop edi
// 00531292  894104               mov dword ptr [ecx + 4], eax
// 00531295  8bc1                 mov eax, ecx
// 00531297  5e                   pop esi
// 00531298  83c40c               add esp, 0xc
// 0053129b  c21000               ret 0x10
// library rbxgs/v8datamodel\Camera.cpp (function ?insert@?$_Tree@V?$_Tmap_traits@PBVName@RBX@@W4CameraType@Camera@2@U?$less@PBVName@RBX@@@std@@V?$allocator@U?$pair@QBVName@RBX@@W4CameraType@Camera@2@@std@@@6@$0A@@std@@@std@@QAE?AViterator@12@V312@ABU?$pair@QBVName@RBX@@W4CameraType@Camera@2@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
