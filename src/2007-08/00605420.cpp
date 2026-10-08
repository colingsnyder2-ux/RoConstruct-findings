// roc 2007-08 00605420  unit: RBX::SleepStage  size: 300 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00605420
//
// 00605420  83ec0c               sub esp, 0xc
// 00605423  53                   push ebx
// 00605424  8bd9                 mov ebx, ecx
// 00605426  8b4b04               mov ecx, dword ptr [ebx + 4]
// 00605429  8b4104               mov eax, dword ptr [ecx + 4]
// 0060542c  80781900             cmp byte ptr [eax + 0x19], 0
// 00605430  55                   push ebp
// 00605431  56                   push esi
// 00605432  8be9                 mov ebp, ecx
// 00605434  b101                 mov cl, 1
// 00605436  57                   push edi
// 00605437  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0060543b  884c2410             mov byte ptr [esp + 0x10], cl
// 0060543f  751a                 jne 0x60545b
// 00605441  8b37                 mov esi, dword ptr [edi]
// 00605443  8b480c               mov ecx, dword ptr [eax + 0xc]
// 00605446  3bf1                 cmp esi, ecx
// 00605448  8be8                 mov ebp, eax
// 0060544a  7556                 jne 0x6054a2
// 0060544c  32c9                 xor cl, cl
// 0060544e  884c2410             mov byte ptr [esp + 0x10], cl
// 00605452  8b4008               mov eax, dword ptr [eax + 8]
// 00605455  80781900             cmp byte ptr [eax + 0x19], 0
// 00605459  74e8                 je 0x605443
// 0060545b  84c9                 test cl, cl
// 0060545d  8bf5                 mov esi, ebp
// 0060545f  89742418             mov dword ptr [esp + 0x18], esi
// 00605463  895c2414             mov dword ptr [esp + 0x14], ebx
// 00605467  0f8483000000         je 0x6054f0
// 0060546d  8b5304               mov edx, dword ptr [ebx + 4]
// 00605470  3b2a                 cmp ebp, dword ptr [edx]
// 00605472  756f                 jne 0x6054e3
// 00605474  57                   push edi
// 00605475  55                   push ebp
// 00605476  6a01                 push 1
// 00605478  8d442420             lea eax, [esp + 0x20]
// 0060547c  50                   push eax
// 0060547d  8bcb                 mov ecx, ebx
// 0060547f  e8dcf9ffff           call 0x604e60
// 00605484  5f                   pop edi
// 00605485  8bc8                 mov ecx, eax
// 00605487  8b11                 mov edx, dword ptr [ecx]
// 00605489  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0060548d  8b4904               mov ecx, dword ptr [ecx + 4]
// 00605490  5e                   pop esi
// 00605491  5d                   pop ebp
// 00605492  894804               mov dword ptr [eax + 4], ecx
// 00605495  c6400801             mov byte ptr [eax + 8], 1
// 00605499  8910                 mov dword ptr [eax], edx
// 0060549b  5b                   pop ebx
// 0060549c  83c40c               add esp, 0xc
// 0060549f  c20800               ret 8
// 006054a2  8a5704               mov dl, byte ptr [edi + 4]
// 006054a5  3a5010               cmp dl, byte ptr [eax + 0x10]
// 006054a8  750f                 jne 0x6054b9
// 006054aa  8b5708               mov edx, dword ptr [edi + 8]
// 006054ad  3b5014               cmp edx, dword ptr [eax + 0x14]
// 006054b0  7507                 jne 0x6054b9
// 006054b2  3bf1                 cmp esi, ecx
// 006054b4  0f92c1               setb cl
// 006054b7  eb17                 jmp 0x6054d0
// 006054b9  8a4810               mov cl, byte ptr [eax + 0x10]
// 006054bc  384f04               cmp byte ptr [edi + 4], cl
// 006054bf  7405                 je 0x6054c6
// 006054c1  0fb6c9               movzx ecx, cl
// 006054c4  eb0a                 jmp 0x6054d0
// 006054c6  8b4f08               mov ecx, dword ptr [edi + 8]
// 006054c9  3b4814               cmp ecx, dword ptr [eax + 0x14]
// 006054cc  1bc9                 sbb ecx, ecx
// 006054ce  f7d9                 neg ecx
// 006054d0  84c9                 test cl, cl
// 006054d2  884c2410             mov byte ptr [esp + 0x10], cl
// 006054d6  0f8476ffffff         je 0x605452
// 006054dc  8b00                 mov eax, dword ptr [eax]
// 006054de  e972ffffff           jmp 0x605455
// 006054e3  8d4c2414             lea ecx, [esp + 0x14]
// 006054e7  e84427f8ff           call 0x587c30
// 006054ec  8b742418             mov esi, dword ptr [esp + 0x18]
// 006054f0  57                   push edi
// 006054f1  8d560c               lea edx, [esi + 0xc]
// 006054f4  52                   push edx
// 006054f5  8bcb                 mov ecx, ebx
// 006054f7  e8d4f3ffff           call 0x6048d0
// 006054fc  84c0                 test al, al
// 006054fe  7431                 je 0x605531
// 00605500  8b442410             mov eax, dword ptr [esp + 0x10]
// 00605504  57                   push edi
// 00605505  55                   push ebp
// 00605506  50                   push eax
// 00605507  8d4c2420             lea ecx, [esp + 0x20]
// 0060550b  51                   push ecx
// 0060550c  8bcb                 mov ecx, ebx
// 0060550e  e84df9ffff           call 0x604e60
// 00605513  5f                   pop edi
// 00605514  8bc8                 mov ecx, eax
// 00605516  8b11                 mov edx, dword ptr [ecx]
// 00605518  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0060551c  8b4904               mov ecx, dword ptr [ecx + 4]
// 0060551f  5e                   pop esi
// 00605520  5d                   pop ebp
// 00605521  894804               mov dword ptr [eax + 4], ecx
// 00605524  c6400801             mov byte ptr [eax + 8], 1
// 00605528  8910                 mov dword ptr [eax], edx
// 0060552a  5b                   pop ebx
// 0060552b  83c40c               add esp, 0xc
// 0060552e  c20800               ret 8
// 00605531  8b442420             mov eax, dword ptr [esp + 0x20]
// 00605535  8b542414             mov edx, dword ptr [esp + 0x14]
// 00605539  5f                   pop edi
// 0060553a  897004               mov dword ptr [eax + 4], esi
// 0060553d  5e                   pop esi
// 0060553e  5d                   pop ebp
// 0060553f  c6400800             mov byte ptr [eax + 8], 0
// 00605543  8910                 mov dword ptr [eax], edx
// 00605545  5b                   pop ebx
// 00605546  83c40c               add esp, 0xc
// 00605549  c20800               ret 8
// library rbxgs/v8world\ClumpStage.cpp (function ?insert@?$_Tree@V?$_Tset_traits@VRigidEntry@RBX@@VRigidSortCriterion@2@V?$allocator@VRigidEntry@RBX@@@std@@$0A@@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tset_traits@VRigidEntry@RBX@@VRigidSortCriterion@2@V?$allocator@VRigidEntry@RBX@@@std@@$0A@@std@@@std@@_N@2@ABVRigidEntry@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/ClumpStage.cpp
