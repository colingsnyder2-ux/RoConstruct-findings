// from server: 100% by auto
// roc 2012-06 00643600  unit: seg_00640000  size: 285 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00643600
//
// 00643600  53                   push ebx
// 00643601  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00643605  55                   push ebp
// 00643606  8b6b18               mov ebp, dword ptr [ebx + 0x18]
// 00643609  56                   push esi
// 0064360a  8b7500               mov esi, dword ptr [ebp]
// 0064360d  57                   push edi
// 0064360e  8b7d04               mov edi, dword ptr [ebp + 4]
// 00643611  85ff                 test edi, edi
// 00643613  7517                 jne 0x64362c
// 00643615  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00643618  53                   push ebx
// 00643619  ffd0                 call eax
// 0064361b  83c404               add esp, 4
// 0064361e  84c0                 test al, al
// 00643620  0f8497000000         je 0x6436bd
// 00643626  8b7500               mov esi, dword ptr [ebp]
// 00643629  8b7d04               mov edi, dword ptr [ebp + 4]
// 0064362c  0fb606               movzx eax, byte ptr [esi]
// 0064362f  4f                   dec edi
// 00643630  46                   inc esi
// 00643631  3dff000000           cmp eax, 0xff
// 00643636  7440                 je 0x643678
// 00643638  eb06                 jmp 0x643640
// 0064363a  8d9b00000000         lea ebx, [ebx]
// 00643640  8b8394010000         mov eax, dword ptr [ebx + 0x194]
// 00643646  ff4014               inc dword ptr [eax + 0x14]
// 00643649  897500               mov dword ptr [ebp], esi
// 0064364c  897d04               mov dword ptr [ebp + 4], edi
// 0064364f  85ff                 test edi, edi
// 00643651  7513                 jne 0x643666
// 00643653  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00643656  53                   push ebx
// 00643657  ffd1                 call ecx
// 00643659  83c404               add esp, 4
// 0064365c  84c0                 test al, al
// 0064365e  745d                 je 0x6436bd
// 00643660  8b7500               mov esi, dword ptr [ebp]
// 00643663  8b7d04               mov edi, dword ptr [ebp + 4]
// 00643666  0fb606               movzx eax, byte ptr [esi]
// 00643669  4f                   dec edi
// 0064366a  46                   inc esi
// 0064366b  3dff000000           cmp eax, 0xff
// 00643670  75ce                 jne 0x643640
// 00643672  eb04                 jmp 0x643678
// 00643674  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00643678  85ff                 test edi, edi
// 0064367a  7513                 jne 0x64368f
// 0064367c  8b550c               mov edx, dword ptr [ebp + 0xc]
// 0064367f  53                   push ebx
// 00643680  ffd2                 call edx
// 00643682  83c404               add esp, 4
// 00643685  84c0                 test al, al
// 00643687  7434                 je 0x6436bd
// 00643689  8b7500               mov esi, dword ptr [ebp]
// 0064368c  8b7d04               mov edi, dword ptr [ebp + 4]
// 0064368f  0fb61e               movzx ebx, byte ptr [esi]
// 00643692  4f                   dec edi
// 00643693  46                   inc esi
// 00643694  81fbff000000         cmp ebx, 0xff
// 0064369a  74d8                 je 0x643674
// 0064369c  8b442414             mov eax, dword ptr [esp + 0x14]
// 006436a0  85db                 test ebx, ebx
// 006436a2  7520                 jne 0x6436c4
// 006436a4  8b8094010000         mov eax, dword ptr [eax + 0x194]
// 006436aa  83401402             add dword ptr [eax + 0x14], 2
// 006436ae  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 006436b2  897500               mov dword ptr [ebp], esi
// 006436b5  897d04               mov dword ptr [ebp + 4], edi
// 006436b8  e954ffffff           jmp 0x643611
// 006436bd  5f                   pop edi
// 006436be  5e                   pop esi
// 006436bf  5d                   pop ebp
// 006436c0  32c0                 xor al, al
// 006436c2  5b                   pop ebx
// 006436c3  c3                   ret 
// 006436c4  8b8894010000         mov ecx, dword ptr [eax + 0x194]
// 006436ca  83791400             cmp dword ptr [ecx + 0x14], 0
// 006436ce  743a                 je 0x64370a
// 006436d0  8b10                 mov edx, dword ptr [eax]
// 006436d2  c7421474000000       mov dword ptr [edx + 0x14], 0x74
// 006436d9  8b8894010000         mov ecx, dword ptr [eax + 0x194]
// 006436df  8b10                 mov edx, dword ptr [eax]
// 006436e1  8b4914               mov ecx, dword ptr [ecx + 0x14]
// 006436e4  894a18               mov dword ptr [edx + 0x18], ecx
// 006436e7  8b10                 mov edx, dword ptr [eax]
// 006436e9  895a1c               mov dword ptr [edx + 0x1c], ebx
// 006436ec  8b08                 mov ecx, dword ptr [eax]
// 006436ee  8b5104               mov edx, dword ptr [ecx + 4]
// 006436f1  6aff                 push -1
// 006436f3  50                   push eax
// 006436f4  ffd2                 call edx
// 006436f6  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006436fa  8b8894010000         mov ecx, dword ptr [eax + 0x194]
// 00643700  83c408               add esp, 8
// 00643703  c7411400000000       mov dword ptr [ecx + 0x14], 0
// 0064370a  89987c010000         mov dword ptr [eax + 0x17c], ebx
// 00643710  897d04               mov dword ptr [ebp + 4], edi
// 00643713  5f                   pop edi
// 00643714  897500               mov dword ptr [ebp], esi
// 00643717  5e                   pop esi
// 00643718  5d                   pop ebp
// 00643719  b001                 mov al, 1
// 0064371b  5b                   pop ebx
// 0064371c  c3                   ret 
// library jpeg-6b/jdmarker.c (function _next_marker)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
