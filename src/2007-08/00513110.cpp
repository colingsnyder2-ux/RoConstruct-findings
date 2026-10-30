// from server: 100% by auto
// roc 2007-08 00513110  unit: G3D::_internal::DialogTemplate  size: 301 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00513110
//
// 00513110  53                   push ebx
// 00513111  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00513115  55                   push ebp
// 00513116  8b6b18               mov ebp, dword ptr [ebx + 0x18]
// 00513119  56                   push esi
// 0051311a  8b7500               mov esi, dword ptr [ebp]
// 0051311d  57                   push edi
// 0051311e  8b7d04               mov edi, dword ptr [ebp + 4]
// 00513121  85ff                 test edi, edi
// 00513123  7517                 jne 0x51313c
// 00513125  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00513128  53                   push ebx
// 00513129  ffd0                 call eax
// 0051312b  83c404               add esp, 4
// 0051312e  84c0                 test al, al
// 00513130  0f84a7000000         je 0x5131dd
// 00513136  8b7500               mov esi, dword ptr [ebp]
// 00513139  8b7d04               mov edi, dword ptr [ebp + 4]
// 0051313c  0fb606               movzx eax, byte ptr [esi]
// 0051313f  83ef01               sub edi, 1
// 00513142  83c601               add esi, 1
// 00513145  3dff000000           cmp eax, 0xff
// 0051314a  7448                 je 0x513194
// 0051314c  8d642400             lea esp, [esp]
// 00513150  8b8394010000         mov eax, dword ptr [ebx + 0x194]
// 00513156  83401401             add dword ptr [eax + 0x14], 1
// 0051315a  85ff                 test edi, edi
// 0051315c  897500               mov dword ptr [ebp], esi
// 0051315f  897d04               mov dword ptr [ebp + 4], edi
// 00513162  7513                 jne 0x513177
// 00513164  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00513167  53                   push ebx
// 00513168  ffd1                 call ecx
// 0051316a  83c404               add esp, 4
// 0051316d  84c0                 test al, al
// 0051316f  746c                 je 0x5131dd
// 00513171  8b7500               mov esi, dword ptr [ebp]
// 00513174  8b7d04               mov edi, dword ptr [ebp + 4]
// 00513177  0fb606               movzx eax, byte ptr [esi]
// 0051317a  83ef01               sub edi, 1
// 0051317d  83c601               add esi, 1
// 00513180  3dff000000           cmp eax, 0xff
// 00513185  75c9                 jne 0x513150
// 00513187  eb0b                 jmp 0x513194
// 00513189  8da42400000000       lea esp, [esp]
// 00513190  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00513194  85ff                 test edi, edi
// 00513196  7513                 jne 0x5131ab
// 00513198  8b550c               mov edx, dword ptr [ebp + 0xc]
// 0051319b  53                   push ebx
// 0051319c  ffd2                 call edx
// 0051319e  83c404               add esp, 4
// 005131a1  84c0                 test al, al
// 005131a3  7438                 je 0x5131dd
// 005131a5  8b7500               mov esi, dword ptr [ebp]
// 005131a8  8b7d04               mov edi, dword ptr [ebp + 4]
// 005131ab  0fb61e               movzx ebx, byte ptr [esi]
// 005131ae  83ef01               sub edi, 1
// 005131b1  83c601               add esi, 1
// 005131b4  81fbff000000         cmp ebx, 0xff
// 005131ba  74d4                 je 0x513190
// 005131bc  85db                 test ebx, ebx
// 005131be  8b442414             mov eax, dword ptr [esp + 0x14]
// 005131c2  7520                 jne 0x5131e4
// 005131c4  8b8094010000         mov eax, dword ptr [eax + 0x194]
// 005131ca  83401402             add dword ptr [eax + 0x14], 2
// 005131ce  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 005131d2  897500               mov dword ptr [ebp], esi
// 005131d5  897d04               mov dword ptr [ebp + 4], edi
// 005131d8  e944ffffff           jmp 0x513121
// 005131dd  5f                   pop edi
// 005131de  5e                   pop esi
// 005131df  5d                   pop ebp
// 005131e0  32c0                 xor al, al
// 005131e2  5b                   pop ebx
// 005131e3  c3                   ret 
// 005131e4  8b8894010000         mov ecx, dword ptr [eax + 0x194]
// 005131ea  83791400             cmp dword ptr [ecx + 0x14], 0
// 005131ee  743a                 je 0x51322a
// 005131f0  8b10                 mov edx, dword ptr [eax]
// 005131f2  c7421474000000       mov dword ptr [edx + 0x14], 0x74
// 005131f9  8b8894010000         mov ecx, dword ptr [eax + 0x194]
// 005131ff  8b10                 mov edx, dword ptr [eax]
// 00513201  8b4914               mov ecx, dword ptr [ecx + 0x14]
// 00513204  894a18               mov dword ptr [edx + 0x18], ecx
// 00513207  8b10                 mov edx, dword ptr [eax]
// 00513209  895a1c               mov dword ptr [edx + 0x1c], ebx
// 0051320c  8b08                 mov ecx, dword ptr [eax]
// 0051320e  8b5104               mov edx, dword ptr [ecx + 4]
// 00513211  6aff                 push -1
// 00513213  50                   push eax
// 00513214  ffd2                 call edx
// 00513216  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0051321a  8b8894010000         mov ecx, dword ptr [eax + 0x194]
// 00513220  83c408               add esp, 8
// 00513223  c7411400000000       mov dword ptr [ecx + 0x14], 0
// 0051322a  89987c010000         mov dword ptr [eax + 0x17c], ebx
// 00513230  897d04               mov dword ptr [ebp + 4], edi
// 00513233  5f                   pop edi
// 00513234  897500               mov dword ptr [ebp], esi
// 00513237  5e                   pop esi
// 00513238  5d                   pop ebp
// 00513239  b001                 mov al, 1
// 0051323b  5b                   pop ebx
// 0051323c  c3                   ret 
// library jpeg-6b/jdmarker.c (function _next_marker)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
