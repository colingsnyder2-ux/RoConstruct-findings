// from server: 100% by auto
// roc 2010-06 00561fb0  unit: G3D::_internal::DialogTemplate  size: 285 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00561fb0
//
// 00561fb0  53                   push ebx
// 00561fb1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00561fb5  55                   push ebp
// 00561fb6  8b6b18               mov ebp, dword ptr [ebx + 0x18]
// 00561fb9  56                   push esi
// 00561fba  8b7500               mov esi, dword ptr [ebp]
// 00561fbd  57                   push edi
// 00561fbe  8b7d04               mov edi, dword ptr [ebp + 4]
// 00561fc1  85ff                 test edi, edi
// 00561fc3  7517                 jne 0x561fdc
// 00561fc5  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00561fc8  53                   push ebx
// 00561fc9  ffd0                 call eax
// 00561fcb  83c404               add esp, 4
// 00561fce  84c0                 test al, al
// 00561fd0  0f8497000000         je 0x56206d
// 00561fd6  8b7500               mov esi, dword ptr [ebp]
// 00561fd9  8b7d04               mov edi, dword ptr [ebp + 4]
// 00561fdc  0fb606               movzx eax, byte ptr [esi]
// 00561fdf  4f                   dec edi
// 00561fe0  46                   inc esi
// 00561fe1  3dff000000           cmp eax, 0xff
// 00561fe6  7440                 je 0x562028
// 00561fe8  eb06                 jmp 0x561ff0
// 00561fea  8d9b00000000         lea ebx, [ebx]
// 00561ff0  8b8394010000         mov eax, dword ptr [ebx + 0x194]
// 00561ff6  ff4014               inc dword ptr [eax + 0x14]
// 00561ff9  897500               mov dword ptr [ebp], esi
// 00561ffc  897d04               mov dword ptr [ebp + 4], edi
// 00561fff  85ff                 test edi, edi
// 00562001  7513                 jne 0x562016
// 00562003  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00562006  53                   push ebx
// 00562007  ffd1                 call ecx
// 00562009  83c404               add esp, 4
// 0056200c  84c0                 test al, al
// 0056200e  745d                 je 0x56206d
// 00562010  8b7500               mov esi, dword ptr [ebp]
// 00562013  8b7d04               mov edi, dword ptr [ebp + 4]
// 00562016  0fb606               movzx eax, byte ptr [esi]
// 00562019  4f                   dec edi
// 0056201a  46                   inc esi
// 0056201b  3dff000000           cmp eax, 0xff
// 00562020  75ce                 jne 0x561ff0
// 00562022  eb04                 jmp 0x562028
// 00562024  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00562028  85ff                 test edi, edi
// 0056202a  7513                 jne 0x56203f
// 0056202c  8b550c               mov edx, dword ptr [ebp + 0xc]
// 0056202f  53                   push ebx
// 00562030  ffd2                 call edx
// 00562032  83c404               add esp, 4
// 00562035  84c0                 test al, al
// 00562037  7434                 je 0x56206d
// 00562039  8b7500               mov esi, dword ptr [ebp]
// 0056203c  8b7d04               mov edi, dword ptr [ebp + 4]
// 0056203f  0fb61e               movzx ebx, byte ptr [esi]
// 00562042  4f                   dec edi
// 00562043  46                   inc esi
// 00562044  81fbff000000         cmp ebx, 0xff
// 0056204a  74d8                 je 0x562024
// 0056204c  8b442414             mov eax, dword ptr [esp + 0x14]
// 00562050  85db                 test ebx, ebx
// 00562052  7520                 jne 0x562074
// 00562054  8b8094010000         mov eax, dword ptr [eax + 0x194]
// 0056205a  83401402             add dword ptr [eax + 0x14], 2
// 0056205e  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00562062  897500               mov dword ptr [ebp], esi
// 00562065  897d04               mov dword ptr [ebp + 4], edi
// 00562068  e954ffffff           jmp 0x561fc1
// 0056206d  5f                   pop edi
// 0056206e  5e                   pop esi
// 0056206f  5d                   pop ebp
// 00562070  32c0                 xor al, al
// 00562072  5b                   pop ebx
// 00562073  c3                   ret 
// 00562074  8b8894010000         mov ecx, dword ptr [eax + 0x194]
// 0056207a  83791400             cmp dword ptr [ecx + 0x14], 0
// 0056207e  743a                 je 0x5620ba
// 00562080  8b10                 mov edx, dword ptr [eax]
// 00562082  c7421474000000       mov dword ptr [edx + 0x14], 0x74
// 00562089  8b8894010000         mov ecx, dword ptr [eax + 0x194]
// 0056208f  8b10                 mov edx, dword ptr [eax]
// 00562091  8b4914               mov ecx, dword ptr [ecx + 0x14]
// 00562094  894a18               mov dword ptr [edx + 0x18], ecx
// 00562097  8b10                 mov edx, dword ptr [eax]
// 00562099  895a1c               mov dword ptr [edx + 0x1c], ebx
// 0056209c  8b08                 mov ecx, dword ptr [eax]
// 0056209e  8b5104               mov edx, dword ptr [ecx + 4]
// 005620a1  6aff                 push -1
// 005620a3  50                   push eax
// 005620a4  ffd2                 call edx
// 005620a6  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005620aa  8b8894010000         mov ecx, dword ptr [eax + 0x194]
// 005620b0  83c408               add esp, 8
// 005620b3  c7411400000000       mov dword ptr [ecx + 0x14], 0
// 005620ba  89987c010000         mov dword ptr [eax + 0x17c], ebx
// 005620c0  897d04               mov dword ptr [ebp + 4], edi
// 005620c3  5f                   pop edi
// 005620c4  897500               mov dword ptr [ebp], esi
// 005620c7  5e                   pop esi
// 005620c8  5d                   pop ebp
// 005620c9  b001                 mov al, 1
// 005620cb  5b                   pop ebx
// 005620cc  c3                   ret 
// library jpeg-6b/jdmarker.c (function _next_marker)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
