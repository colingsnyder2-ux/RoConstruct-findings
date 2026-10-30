// roc 2009-12 00600640  unit: G3D::_internal::DialogTemplate  size: 285 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00600640
//
// 00600640  53                   push ebx
// 00600641  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00600645  55                   push ebp
// 00600646  8b6b18               mov ebp, dword ptr [ebx + 0x18]
// 00600649  56                   push esi
// 0060064a  8b7500               mov esi, dword ptr [ebp]
// 0060064d  57                   push edi
// 0060064e  8b7d04               mov edi, dword ptr [ebp + 4]
// 00600651  85ff                 test edi, edi
// 00600653  7517                 jne 0x60066c
// 00600655  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00600658  53                   push ebx
// 00600659  ffd0                 call eax
// 0060065b  83c404               add esp, 4
// 0060065e  84c0                 test al, al
// 00600660  0f8497000000         je 0x6006fd
// 00600666  8b7500               mov esi, dword ptr [ebp]
// 00600669  8b7d04               mov edi, dword ptr [ebp + 4]
// 0060066c  0fb606               movzx eax, byte ptr [esi]
// 0060066f  4f                   dec edi
// 00600670  46                   inc esi
// 00600671  3dff000000           cmp eax, 0xff
// 00600676  7440                 je 0x6006b8
// 00600678  eb06                 jmp 0x600680
// 0060067a  8d9b00000000         lea ebx, [ebx]
// 00600680  8b8394010000         mov eax, dword ptr [ebx + 0x194]
// 00600686  ff4014               inc dword ptr [eax + 0x14]
// 00600689  897500               mov dword ptr [ebp], esi
// 0060068c  897d04               mov dword ptr [ebp + 4], edi
// 0060068f  85ff                 test edi, edi
// 00600691  7513                 jne 0x6006a6
// 00600693  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00600696  53                   push ebx
// 00600697  ffd1                 call ecx
// 00600699  83c404               add esp, 4
// 0060069c  84c0                 test al, al
// 0060069e  745d                 je 0x6006fd
// 006006a0  8b7500               mov esi, dword ptr [ebp]
// 006006a3  8b7d04               mov edi, dword ptr [ebp + 4]
// 006006a6  0fb606               movzx eax, byte ptr [esi]
// 006006a9  4f                   dec edi
// 006006aa  46                   inc esi
// 006006ab  3dff000000           cmp eax, 0xff
// 006006b0  75ce                 jne 0x600680
// 006006b2  eb04                 jmp 0x6006b8
// 006006b4  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 006006b8  85ff                 test edi, edi
// 006006ba  7513                 jne 0x6006cf
// 006006bc  8b550c               mov edx, dword ptr [ebp + 0xc]
// 006006bf  53                   push ebx
// 006006c0  ffd2                 call edx
// 006006c2  83c404               add esp, 4
// 006006c5  84c0                 test al, al
// 006006c7  7434                 je 0x6006fd
// 006006c9  8b7500               mov esi, dword ptr [ebp]
// 006006cc  8b7d04               mov edi, dword ptr [ebp + 4]
// 006006cf  0fb61e               movzx ebx, byte ptr [esi]
// 006006d2  4f                   dec edi
// 006006d3  46                   inc esi
// 006006d4  81fbff000000         cmp ebx, 0xff
// 006006da  74d8                 je 0x6006b4
// 006006dc  8b442414             mov eax, dword ptr [esp + 0x14]
// 006006e0  85db                 test ebx, ebx
// 006006e2  7520                 jne 0x600704
// 006006e4  8b8094010000         mov eax, dword ptr [eax + 0x194]
// 006006ea  83401402             add dword ptr [eax + 0x14], 2
// 006006ee  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 006006f2  897500               mov dword ptr [ebp], esi
// 006006f5  897d04               mov dword ptr [ebp + 4], edi
// 006006f8  e954ffffff           jmp 0x600651
// 006006fd  5f                   pop edi
// 006006fe  5e                   pop esi
// 006006ff  5d                   pop ebp
// 00600700  32c0                 xor al, al
// 00600702  5b                   pop ebx
// 00600703  c3                   ret 
// 00600704  8b8894010000         mov ecx, dword ptr [eax + 0x194]
// 0060070a  83791400             cmp dword ptr [ecx + 0x14], 0
// 0060070e  743a                 je 0x60074a
// 00600710  8b10                 mov edx, dword ptr [eax]
// 00600712  c7421474000000       mov dword ptr [edx + 0x14], 0x74
// 00600719  8b8894010000         mov ecx, dword ptr [eax + 0x194]
// 0060071f  8b10                 mov edx, dword ptr [eax]
// 00600721  8b4914               mov ecx, dword ptr [ecx + 0x14]
// 00600724  894a18               mov dword ptr [edx + 0x18], ecx
// 00600727  8b10                 mov edx, dword ptr [eax]
// 00600729  895a1c               mov dword ptr [edx + 0x1c], ebx
// 0060072c  8b08                 mov ecx, dword ptr [eax]
// 0060072e  8b5104               mov edx, dword ptr [ecx + 4]
// 00600731  6aff                 push -1
// 00600733  50                   push eax
// 00600734  ffd2                 call edx
// 00600736  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0060073a  8b8894010000         mov ecx, dword ptr [eax + 0x194]
// 00600740  83c408               add esp, 8
// 00600743  c7411400000000       mov dword ptr [ecx + 0x14], 0
// 0060074a  89987c010000         mov dword ptr [eax + 0x17c], ebx
// 00600750  897d04               mov dword ptr [ebp + 4], edi
// 00600753  5f                   pop edi
// 00600754  897500               mov dword ptr [ebp], esi
// 00600757  5e                   pop esi
// 00600758  5d                   pop ebp
// 00600759  b001                 mov al, 1
// 0060075b  5b                   pop ebx
// 0060075c  c3                   ret 
// library jpeg-6b/jdmarker.c (function _next_marker)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
