// roc 2007-03 0056a0d0  unit: seg_00560000  size: 446 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0056a0d0
//
// 0056a0d0  83ec0c               sub esp, 0xc
// 0056a0d3  56                   push esi
// 0056a0d4  8bf1                 mov esi, ecx
// 0056a0d6  837e0800             cmp dword ptr [esi + 8], 0
// 0056a0da  57                   push edi
// 0056a0db  7521                 jne 0x56a0fe
// 0056a0dd  8b442424             mov eax, dword ptr [esp + 0x24]
// 0056a0e1  8b4e04               mov ecx, dword ptr [esi + 4]
// 0056a0e4  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0056a0e8  50                   push eax
// 0056a0e9  51                   push ecx
// 0056a0ea  6a01                 push 1
// 0056a0ec  57                   push edi
// 0056a0ed  8bce                 mov ecx, esi
// 0056a0ef  e84cf5ffff           call 0x569640
// 0056a0f4  8bc7                 mov eax, edi
// 0056a0f6  5f                   pop edi
// 0056a0f7  5e                   pop esi
// 0056a0f8  83c40c               add esp, 0xc
// 0056a0fb  c21000               ret 0x10
// 0056a0fe  8b5604               mov edx, dword ptr [esi + 4]
// 0056a101  8b3a                 mov edi, dword ptr [edx]
// 0056a103  55                   push ebp
// 0056a104  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0056a108  85ed                 test ebp, ebp
// 0056a10a  7404                 je 0x56a110
// 0056a10c  3bee                 cmp ebp, esi
// 0056a10e  7406                 je 0x56a116
// 0056a110  ff1544e97700         call dword ptr [0x77e944]
// 0056a116  53                   push ebx
// 0056a117  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0056a11b  3bdf                 cmp ebx, edi
// 0056a11d  752b                 jne 0x56a14a
// 0056a11f  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 0056a123  8b07                 mov eax, dword ptr [edi]
// 0056a125  3b430c               cmp eax, dword ptr [ebx + 0xc]
// 0056a128  0f8339010000         jae 0x56a267
// 0056a12e  57                   push edi
// 0056a12f  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0056a133  53                   push ebx
// 0056a134  6a01                 push 1
// 0056a136  57                   push edi
// 0056a137  8bce                 mov ecx, esi
// 0056a139  e802f5ffff           call 0x569640
// 0056a13e  5b                   pop ebx
// 0056a13f  5d                   pop ebp
// 0056a140  8bc7                 mov eax, edi
// 0056a142  5f                   pop edi
// 0056a143  5e                   pop esi
// 0056a144  83c40c               add esp, 0xc
// 0056a147  c21000               ret 0x10
// 0056a14a  85ed                 test ebp, ebp
// 0056a14c  8b7e04               mov edi, dword ptr [esi + 4]
// 0056a14f  7404                 je 0x56a155
// 0056a151  3bee                 cmp ebp, esi
// 0056a153  7406                 je 0x56a15b
// 0056a155  ff1544e97700         call dword ptr [0x77e944]
// 0056a15b  3bdf                 cmp ebx, edi
// 0056a15d  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 0056a161  752d                 jne 0x56a190
// 0056a163  8b4e04               mov ecx, dword ptr [esi + 4]
// 0056a166  8b4108               mov eax, dword ptr [ecx + 8]
// 0056a169  8b500c               mov edx, dword ptr [eax + 0xc]
// 0056a16c  3b17                 cmp edx, dword ptr [edi]
// 0056a16e  0f83f3000000         jae 0x56a267
// 0056a174  57                   push edi
// 0056a175  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0056a179  50                   push eax
// 0056a17a  6a00                 push 0
// 0056a17c  57                   push edi
// 0056a17d  8bce                 mov ecx, esi
// 0056a17f  e8bcf4ffff           call 0x569640
// 0056a184  5b                   pop ebx
// 0056a185  5d                   pop ebp
// 0056a186  8bc7                 mov eax, edi
// 0056a188  5f                   pop edi
// 0056a189  5e                   pop esi
// 0056a18a  83c40c               add esp, 0xc
// 0056a18d  c21000               ret 0x10
// 0056a190  8b07                 mov eax, dword ptr [edi]
// 0056a192  39430c               cmp dword ptr [ebx + 0xc], eax
// 0056a195  765b                 jbe 0x56a1f2
// 0056a197  8d4c2424             lea ecx, [esp + 0x24]
// 0056a19b  896c2424             mov dword ptr [esp + 0x24], ebp
// 0056a19f  895c2428             mov dword ptr [esp + 0x28], ebx
// 0056a1a3  e8d859fcff           call 0x52fb80
// 0056a1a8  8b07                 mov eax, dword ptr [edi]
// 0056a1aa  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0056a1ae  39410c               cmp dword ptr [ecx + 0xc], eax
// 0056a1b1  733c                 jae 0x56a1ef
// 0056a1b3  8b4108               mov eax, dword ptr [ecx + 8]
// 0056a1b6  80781500             cmp byte ptr [eax + 0x15], 0
// 0056a1ba  57                   push edi
// 0056a1bb  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0056a1bf  7417                 je 0x56a1d8
// 0056a1c1  51                   push ecx
// 0056a1c2  6a00                 push 0
// 0056a1c4  57                   push edi
// 0056a1c5  8bce                 mov ecx, esi
// 0056a1c7  e874f4ffff           call 0x569640
// 0056a1cc  5b                   pop ebx
// 0056a1cd  5d                   pop ebp
// 0056a1ce  8bc7                 mov eax, edi
// 0056a1d0  5f                   pop edi
// 0056a1d1  5e                   pop esi
// 0056a1d2  83c40c               add esp, 0xc
// 0056a1d5  c21000               ret 0x10
// 0056a1d8  53                   push ebx
// 0056a1d9  6a01                 push 1
// 0056a1db  57                   push edi
// 0056a1dc  8bce                 mov ecx, esi
// 0056a1de  e85df4ffff           call 0x569640
// 0056a1e3  5b                   pop ebx
// 0056a1e4  5d                   pop ebp
// 0056a1e5  8bc7                 mov eax, edi
// 0056a1e7  5f                   pop edi
// 0056a1e8  5e                   pop esi
// 0056a1e9  83c40c               add esp, 0xc
// 0056a1ec  c21000               ret 0x10
// 0056a1ef  39430c               cmp dword ptr [ebx + 0xc], eax
// 0056a1f2  7373                 jae 0x56a267
// 0056a1f4  8b4e04               mov ecx, dword ptr [esi + 4]
// 0056a1f7  894c2414             mov dword ptr [esp + 0x14], ecx
// 0056a1fb  8d4c2424             lea ecx, [esp + 0x24]
// 0056a1ff  896c2424             mov dword ptr [esp + 0x24], ebp
// 0056a203  895c2428             mov dword ptr [esp + 0x28], ebx
// 0056a207  89742410             mov dword ptr [esp + 0x10], esi
// 0056a20b  e8c0bb0400           call 0x5b5dd0
// 0056a210  8d542410             lea edx, [esp + 0x10]
// 0056a214  52                   push edx
// 0056a215  8d4c2428             lea ecx, [esp + 0x28]
// 0056a219  e8421aeeff           call 0x44bc60
// 0056a21e  84c0                 test al, al
// 0056a220  8b442428             mov eax, dword ptr [esp + 0x28]
// 0056a224  7507                 jne 0x56a22d
// 0056a226  8b0f                 mov ecx, dword ptr [edi]
// 0056a228  3b480c               cmp ecx, dword ptr [eax + 0xc]
// 0056a22b  733a                 jae 0x56a267
// 0056a22d  8b5308               mov edx, dword ptr [ebx + 8]
// 0056a230  807a1500             cmp byte ptr [edx + 0x15], 0
// 0056a234  57                   push edi
// 0056a235  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0056a239  8bce                 mov ecx, esi
// 0056a23b  7415                 je 0x56a252
// 0056a23d  53                   push ebx
// 0056a23e  6a00                 push 0
// 0056a240  57                   push edi
// 0056a241  e8faf3ffff           call 0x569640
// 0056a246  5b                   pop ebx
// 0056a247  5d                   pop ebp
// 0056a248  8bc7                 mov eax, edi
// 0056a24a  5f                   pop edi
// 0056a24b  5e                   pop esi
// 0056a24c  83c40c               add esp, 0xc
// 0056a24f  c21000               ret 0x10
// 0056a252  50                   push eax
// 0056a253  6a01                 push 1
// 0056a255  57                   push edi
// 0056a256  e8e5f3ffff           call 0x569640
// 0056a25b  5b                   pop ebx
// 0056a25c  5d                   pop ebp
// 0056a25d  8bc7                 mov eax, edi
// 0056a25f  5f                   pop edi
// 0056a260  5e                   pop esi
// 0056a261  83c40c               add esp, 0xc
// 0056a264  c21000               ret 0x10
// 0056a267  57                   push edi
// 0056a268  8d442414             lea eax, [esp + 0x14]
// 0056a26c  50                   push eax
// 0056a26d  8bce                 mov ecx, esi
// 0056a26f  e8fcf6ffff           call 0x569970
// 0056a274  8b10                 mov edx, dword ptr [eax]
// 0056a276  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0056a27a  5b                   pop ebx
// 0056a27b  5d                   pop ebp
// 0056a27c  8911                 mov dword ptr [ecx], edx
// 0056a27e  8b4004               mov eax, dword ptr [eax + 4]
// 0056a281  5f                   pop edi
// 0056a282  894104               mov dword ptr [ecx + 4], eax
// 0056a285  8bc1                 mov eax, ecx
// 0056a287  5e                   pop esi
// 0056a288  83c40c               add esp, 0xc
// 0056a28b  c21000               ret 0x10
// library rbxgs/v8datamodel\Camera.cpp (function ?insert@?$_Tree@V?$_Tmap_traits@PBVName@RBX@@W4CameraType@Camera@2@U?$less@PBVName@RBX@@@std@@V?$allocator@U?$pair@QBVName@RBX@@W4CameraType@Camera@2@@std@@@6@$0A@@std@@@std@@QAE?AViterator@12@V312@ABU?$pair@QBVName@RBX@@W4CameraType@Camera@2@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
