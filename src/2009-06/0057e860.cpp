// roc 2009-06 0057e860  unit: G3D::_internal::DialogTemplate  size: 285 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0057e860
//
// 0057e860  53                   push ebx
// 0057e861  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0057e865  55                   push ebp
// 0057e866  8b6b18               mov ebp, dword ptr [ebx + 0x18]
// 0057e869  56                   push esi
// 0057e86a  8b7500               mov esi, dword ptr [ebp]
// 0057e86d  57                   push edi
// 0057e86e  8b7d04               mov edi, dword ptr [ebp + 4]
// 0057e871  85ff                 test edi, edi
// 0057e873  7517                 jne 0x57e88c
// 0057e875  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0057e878  53                   push ebx
// 0057e879  ffd0                 call eax
// 0057e87b  83c404               add esp, 4
// 0057e87e  84c0                 test al, al
// 0057e880  0f8497000000         je 0x57e91d
// 0057e886  8b7500               mov esi, dword ptr [ebp]
// 0057e889  8b7d04               mov edi, dword ptr [ebp + 4]
// 0057e88c  0fb606               movzx eax, byte ptr [esi]
// 0057e88f  4f                   dec edi
// 0057e890  46                   inc esi
// 0057e891  3dff000000           cmp eax, 0xff
// 0057e896  7440                 je 0x57e8d8
// 0057e898  eb06                 jmp 0x57e8a0
// 0057e89a  8d9b00000000         lea ebx, [ebx]
// 0057e8a0  8b8394010000         mov eax, dword ptr [ebx + 0x194]
// 0057e8a6  ff4014               inc dword ptr [eax + 0x14]
// 0057e8a9  897500               mov dword ptr [ebp], esi
// 0057e8ac  897d04               mov dword ptr [ebp + 4], edi
// 0057e8af  85ff                 test edi, edi
// 0057e8b1  7513                 jne 0x57e8c6
// 0057e8b3  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0057e8b6  53                   push ebx
// 0057e8b7  ffd1                 call ecx
// 0057e8b9  83c404               add esp, 4
// 0057e8bc  84c0                 test al, al
// 0057e8be  745d                 je 0x57e91d
// 0057e8c0  8b7500               mov esi, dword ptr [ebp]
// 0057e8c3  8b7d04               mov edi, dword ptr [ebp + 4]
// 0057e8c6  0fb606               movzx eax, byte ptr [esi]
// 0057e8c9  4f                   dec edi
// 0057e8ca  46                   inc esi
// 0057e8cb  3dff000000           cmp eax, 0xff
// 0057e8d0  75ce                 jne 0x57e8a0
// 0057e8d2  eb04                 jmp 0x57e8d8
// 0057e8d4  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0057e8d8  85ff                 test edi, edi
// 0057e8da  7513                 jne 0x57e8ef
// 0057e8dc  8b550c               mov edx, dword ptr [ebp + 0xc]
// 0057e8df  53                   push ebx
// 0057e8e0  ffd2                 call edx
// 0057e8e2  83c404               add esp, 4
// 0057e8e5  84c0                 test al, al
// 0057e8e7  7434                 je 0x57e91d
// 0057e8e9  8b7500               mov esi, dword ptr [ebp]
// 0057e8ec  8b7d04               mov edi, dword ptr [ebp + 4]
// 0057e8ef  0fb61e               movzx ebx, byte ptr [esi]
// 0057e8f2  4f                   dec edi
// 0057e8f3  46                   inc esi
// 0057e8f4  81fbff000000         cmp ebx, 0xff
// 0057e8fa  74d8                 je 0x57e8d4
// 0057e8fc  8b442414             mov eax, dword ptr [esp + 0x14]
// 0057e900  85db                 test ebx, ebx
// 0057e902  7520                 jne 0x57e924
// 0057e904  8b8094010000         mov eax, dword ptr [eax + 0x194]
// 0057e90a  83401402             add dword ptr [eax + 0x14], 2
// 0057e90e  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0057e912  897500               mov dword ptr [ebp], esi
// 0057e915  897d04               mov dword ptr [ebp + 4], edi
// 0057e918  e954ffffff           jmp 0x57e871
// 0057e91d  5f                   pop edi
// 0057e91e  5e                   pop esi
// 0057e91f  5d                   pop ebp
// 0057e920  32c0                 xor al, al
// 0057e922  5b                   pop ebx
// 0057e923  c3                   ret 
// 0057e924  8b8894010000         mov ecx, dword ptr [eax + 0x194]
// 0057e92a  83791400             cmp dword ptr [ecx + 0x14], 0
// 0057e92e  743a                 je 0x57e96a
// 0057e930  8b10                 mov edx, dword ptr [eax]
// 0057e932  c7421474000000       mov dword ptr [edx + 0x14], 0x74
// 0057e939  8b8894010000         mov ecx, dword ptr [eax + 0x194]
// 0057e93f  8b10                 mov edx, dword ptr [eax]
// 0057e941  8b4914               mov ecx, dword ptr [ecx + 0x14]
// 0057e944  894a18               mov dword ptr [edx + 0x18], ecx
// 0057e947  8b10                 mov edx, dword ptr [eax]
// 0057e949  895a1c               mov dword ptr [edx + 0x1c], ebx
// 0057e94c  8b08                 mov ecx, dword ptr [eax]
// 0057e94e  8b5104               mov edx, dword ptr [ecx + 4]
// 0057e951  6aff                 push -1
// 0057e953  50                   push eax
// 0057e954  ffd2                 call edx
// 0057e956  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0057e95a  8b8894010000         mov ecx, dword ptr [eax + 0x194]
// 0057e960  83c408               add esp, 8
// 0057e963  c7411400000000       mov dword ptr [ecx + 0x14], 0
// 0057e96a  89987c010000         mov dword ptr [eax + 0x17c], ebx
// 0057e970  897d04               mov dword ptr [ebp + 4], edi
// 0057e973  5f                   pop edi
// 0057e974  897500               mov dword ptr [ebp], esi
// 0057e977  5e                   pop esi
// 0057e978  5d                   pop ebp
// 0057e979  b001                 mov al, 1
// 0057e97b  5b                   pop ebx
// 0057e97c  c3                   ret 
// library jpeg-6b/jdmarker.c (function _next_marker)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
