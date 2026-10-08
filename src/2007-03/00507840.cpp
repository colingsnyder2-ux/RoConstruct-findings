// roc 2007-03 00507840  unit: seg_00500000  size: 301 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00507840
//
// 00507840  53                   push ebx
// 00507841  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00507845  55                   push ebp
// 00507846  8b6b18               mov ebp, dword ptr [ebx + 0x18]
// 00507849  56                   push esi
// 0050784a  8b7500               mov esi, dword ptr [ebp]
// 0050784d  57                   push edi
// 0050784e  8b7d04               mov edi, dword ptr [ebp + 4]
// 00507851  85ff                 test edi, edi
// 00507853  7517                 jne 0x50786c
// 00507855  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00507858  53                   push ebx
// 00507859  ffd0                 call eax
// 0050785b  83c404               add esp, 4
// 0050785e  84c0                 test al, al
// 00507860  0f84a7000000         je 0x50790d
// 00507866  8b7500               mov esi, dword ptr [ebp]
// 00507869  8b7d04               mov edi, dword ptr [ebp + 4]
// 0050786c  0fb606               movzx eax, byte ptr [esi]
// 0050786f  83ef01               sub edi, 1
// 00507872  83c601               add esi, 1
// 00507875  3dff000000           cmp eax, 0xff
// 0050787a  7448                 je 0x5078c4
// 0050787c  8d642400             lea esp, [esp]
// 00507880  8b8394010000         mov eax, dword ptr [ebx + 0x194]
// 00507886  83401401             add dword ptr [eax + 0x14], 1
// 0050788a  85ff                 test edi, edi
// 0050788c  897500               mov dword ptr [ebp], esi
// 0050788f  897d04               mov dword ptr [ebp + 4], edi
// 00507892  7513                 jne 0x5078a7
// 00507894  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00507897  53                   push ebx
// 00507898  ffd1                 call ecx
// 0050789a  83c404               add esp, 4
// 0050789d  84c0                 test al, al
// 0050789f  746c                 je 0x50790d
// 005078a1  8b7500               mov esi, dword ptr [ebp]
// 005078a4  8b7d04               mov edi, dword ptr [ebp + 4]
// 005078a7  0fb606               movzx eax, byte ptr [esi]
// 005078aa  83ef01               sub edi, 1
// 005078ad  83c601               add esi, 1
// 005078b0  3dff000000           cmp eax, 0xff
// 005078b5  75c9                 jne 0x507880
// 005078b7  eb0b                 jmp 0x5078c4
// 005078b9  8da42400000000       lea esp, [esp]
// 005078c0  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 005078c4  85ff                 test edi, edi
// 005078c6  7513                 jne 0x5078db
// 005078c8  8b550c               mov edx, dword ptr [ebp + 0xc]
// 005078cb  53                   push ebx
// 005078cc  ffd2                 call edx
// 005078ce  83c404               add esp, 4
// 005078d1  84c0                 test al, al
// 005078d3  7438                 je 0x50790d
// 005078d5  8b7500               mov esi, dword ptr [ebp]
// 005078d8  8b7d04               mov edi, dword ptr [ebp + 4]
// 005078db  0fb61e               movzx ebx, byte ptr [esi]
// 005078de  83ef01               sub edi, 1
// 005078e1  83c601               add esi, 1
// 005078e4  81fbff000000         cmp ebx, 0xff
// 005078ea  74d4                 je 0x5078c0
// 005078ec  85db                 test ebx, ebx
// 005078ee  8b442414             mov eax, dword ptr [esp + 0x14]
// 005078f2  7520                 jne 0x507914
// 005078f4  8b8094010000         mov eax, dword ptr [eax + 0x194]
// 005078fa  83401402             add dword ptr [eax + 0x14], 2
// 005078fe  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00507902  897500               mov dword ptr [ebp], esi
// 00507905  897d04               mov dword ptr [ebp + 4], edi
// 00507908  e944ffffff           jmp 0x507851
// 0050790d  5f                   pop edi
// 0050790e  5e                   pop esi
// 0050790f  5d                   pop ebp
// 00507910  32c0                 xor al, al
// 00507912  5b                   pop ebx
// 00507913  c3                   ret 
// 00507914  8b8894010000         mov ecx, dword ptr [eax + 0x194]
// 0050791a  83791400             cmp dword ptr [ecx + 0x14], 0
// 0050791e  743a                 je 0x50795a
// 00507920  8b10                 mov edx, dword ptr [eax]
// 00507922  c7421474000000       mov dword ptr [edx + 0x14], 0x74
// 00507929  8b8894010000         mov ecx, dword ptr [eax + 0x194]
// 0050792f  8b10                 mov edx, dword ptr [eax]
// 00507931  8b4914               mov ecx, dword ptr [ecx + 0x14]
// 00507934  894a18               mov dword ptr [edx + 0x18], ecx
// 00507937  8b10                 mov edx, dword ptr [eax]
// 00507939  895a1c               mov dword ptr [edx + 0x1c], ebx
// 0050793c  8b08                 mov ecx, dword ptr [eax]
// 0050793e  8b5104               mov edx, dword ptr [ecx + 4]
// 00507941  6aff                 push -1
// 00507943  50                   push eax
// 00507944  ffd2                 call edx
// 00507946  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0050794a  8b8894010000         mov ecx, dword ptr [eax + 0x194]
// 00507950  83c408               add esp, 8
// 00507953  c7411400000000       mov dword ptr [ecx + 0x14], 0
// 0050795a  89987c010000         mov dword ptr [eax + 0x17c], ebx
// 00507960  897d04               mov dword ptr [ebp + 4], edi
// 00507963  5f                   pop edi
// 00507964  897500               mov dword ptr [ebp], esi
// 00507967  5e                   pop esi
// 00507968  5d                   pop ebp
// 00507969  b001                 mov al, 1
// 0050796b  5b                   pop ebx
// 0050796c  c3                   ret 
// library jpeg-6b/jdmarker.c (function _next_marker)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
