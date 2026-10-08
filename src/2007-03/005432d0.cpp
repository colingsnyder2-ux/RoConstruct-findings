// roc 2007-03 005432d0  unit: seg_00540000  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005432d0
//
// 005432d0  83ec0c               sub esp, 0xc
// 005432d3  53                   push ebx
// 005432d4  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 005432d8  55                   push ebp
// 005432d9  56                   push esi
// 005432da  8be9                 mov ebp, ecx
// 005432dc  57                   push edi
// 005432dd  8b7d04               mov edi, dword ptr [ebp + 4]
// 005432e0  8b7704               mov esi, dword ptr [edi + 4]
// 005432e3  807e2d00             cmp byte ptr [esi + 0x2d], 0
// 005432e7  b001                 mov al, 1
// 005432e9  88442410             mov byte ptr [esp + 0x10], al
// 005432ed  7526                 jne 0x543315
// 005432ef  90                   nop 
// 005432f0  8d460c               lea eax, [esi + 0xc]
// 005432f3  50                   push eax
// 005432f4  53                   push ebx
// 005432f5  8bfe                 mov edi, esi
// 005432f7  ff15e0e67700         call dword ptr [0x77e6e0]
// 005432fd  83c408               add esp, 8
// 00543300  84c0                 test al, al
// 00543302  88442410             mov byte ptr [esp + 0x10], al
// 00543306  7404                 je 0x54330c
// 00543308  8b36                 mov esi, dword ptr [esi]
// 0054330a  eb03                 jmp 0x54330f
// 0054330c  8b7608               mov esi, dword ptr [esi + 8]
// 0054330f  807e2d00             cmp byte ptr [esi + 0x2d], 0
// 00543313  74db                 je 0x5432f0
// 00543315  84c0                 test al, al
// 00543317  8bf7                 mov esi, edi
// 00543319  89742418             mov dword ptr [esp + 0x18], esi
// 0054331d  896c2414             mov dword ptr [esp + 0x14], ebp
// 00543321  7442                 je 0x543365
// 00543323  8b4d04               mov ecx, dword ptr [ebp + 4]
// 00543326  3b39                 cmp edi, dword ptr [ecx]
// 00543328  752e                 jne 0x543358
// 0054332a  53                   push ebx
// 0054332b  57                   push edi
// 0054332c  6a01                 push 1
// 0054332e  8d542420             lea edx, [esp + 0x20]
// 00543332  52                   push edx
// 00543333  8bcd                 mov ecx, ebp
// 00543335  e816490200           call 0x567c50
// 0054333a  5f                   pop edi
// 0054333b  8bc8                 mov ecx, eax
// 0054333d  8b11                 mov edx, dword ptr [ecx]
// 0054333f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00543343  8b4904               mov ecx, dword ptr [ecx + 4]
// 00543346  5e                   pop esi
// 00543347  5d                   pop ebp
// 00543348  894804               mov dword ptr [eax + 4], ecx
// 0054334b  c6400801             mov byte ptr [eax + 8], 1
// 0054334f  8910                 mov dword ptr [eax], edx
// 00543351  5b                   pop ebx
// 00543352  83c40c               add esp, 0xc
// 00543355  c20800               ret 8
// 00543358  8d4c2414             lea ecx, [esp + 0x14]
// 0054335c  e89f4d0b00           call 0x5f8100
// 00543361  8b742418             mov esi, dword ptr [esp + 0x18]
// 00543365  8d560c               lea edx, [esi + 0xc]
// 00543368  53                   push ebx
// 00543369  52                   push edx
// 0054336a  ff15e0e67700         call dword ptr [0x77e6e0]
// 00543370  83c408               add esp, 8
// 00543373  84c0                 test al, al
// 00543375  7431                 je 0x5433a8
// 00543377  8b442410             mov eax, dword ptr [esp + 0x10]
// 0054337b  53                   push ebx
// 0054337c  57                   push edi
// 0054337d  50                   push eax
// 0054337e  8d4c2420             lea ecx, [esp + 0x20]
// 00543382  51                   push ecx
// 00543383  8bcd                 mov ecx, ebp
// 00543385  e8c6480200           call 0x567c50
// 0054338a  5f                   pop edi
// 0054338b  8bc8                 mov ecx, eax
// 0054338d  8b11                 mov edx, dword ptr [ecx]
// 0054338f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00543393  8b4904               mov ecx, dword ptr [ecx + 4]
// 00543396  5e                   pop esi
// 00543397  5d                   pop ebp
// 00543398  894804               mov dword ptr [eax + 4], ecx
// 0054339b  c6400801             mov byte ptr [eax + 8], 1
// 0054339f  8910                 mov dword ptr [eax], edx
// 005433a1  5b                   pop ebx
// 005433a2  83c40c               add esp, 0xc
// 005433a5  c20800               ret 8
// 005433a8  8b442420             mov eax, dword ptr [esp + 0x20]
// 005433ac  8b542414             mov edx, dword ptr [esp + 0x14]
// 005433b0  5f                   pop edi
// 005433b1  897004               mov dword ptr [eax + 4], esi
// 005433b4  5e                   pop esi
// 005433b5  5d                   pop ebp
// 005433b6  c6400800             mov byte ptr [eax + 8], 0
// 005433ba  8910                 mov dword ptr [eax], edx
// 005433bc  5b                   pop ebx
// 005433bd  83c40c               add esp, 0xc
// 005433c0  c20800               ret 8
// library rbxgs/v8datamodel\Camera.cpp (function ?insert@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CameraType@Camera@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CameraType@Camera@RBX@@@std@@@2@$0A@@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CameraType@Camera@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CameraType@Camera@RBX@@@std@@@2@$0A@@std@@@std@@_N@2@ABU?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CameraType@Camera@RBX@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
