// roc 2008-06 0051aec0  unit: G3D::_internal::DialogTemplate  size: 285 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051aec0
//
// 0051aec0  53                   push ebx
// 0051aec1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0051aec5  55                   push ebp
// 0051aec6  8b6b18               mov ebp, dword ptr [ebx + 0x18]
// 0051aec9  56                   push esi
// 0051aeca  8b7500               mov esi, dword ptr [ebp]
// 0051aecd  57                   push edi
// 0051aece  8b7d04               mov edi, dword ptr [ebp + 4]
// 0051aed1  85ff                 test edi, edi
// 0051aed3  7517                 jne 0x51aeec
// 0051aed5  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0051aed8  53                   push ebx
// 0051aed9  ffd0                 call eax
// 0051aedb  83c404               add esp, 4
// 0051aede  84c0                 test al, al
// 0051aee0  0f8497000000         je 0x51af7d
// 0051aee6  8b7500               mov esi, dword ptr [ebp]
// 0051aee9  8b7d04               mov edi, dword ptr [ebp + 4]
// 0051aeec  0fb606               movzx eax, byte ptr [esi]
// 0051aeef  4f                   dec edi
// 0051aef0  46                   inc esi
// 0051aef1  3dff000000           cmp eax, 0xff
// 0051aef6  7440                 je 0x51af38
// 0051aef8  eb06                 jmp 0x51af00
// 0051aefa  8d9b00000000         lea ebx, [ebx]
// 0051af00  8b8394010000         mov eax, dword ptr [ebx + 0x194]
// 0051af06  ff4014               inc dword ptr [eax + 0x14]
// 0051af09  897500               mov dword ptr [ebp], esi
// 0051af0c  897d04               mov dword ptr [ebp + 4], edi
// 0051af0f  85ff                 test edi, edi
// 0051af11  7513                 jne 0x51af26
// 0051af13  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0051af16  53                   push ebx
// 0051af17  ffd1                 call ecx
// 0051af19  83c404               add esp, 4
// 0051af1c  84c0                 test al, al
// 0051af1e  745d                 je 0x51af7d
// 0051af20  8b7500               mov esi, dword ptr [ebp]
// 0051af23  8b7d04               mov edi, dword ptr [ebp + 4]
// 0051af26  0fb606               movzx eax, byte ptr [esi]
// 0051af29  4f                   dec edi
// 0051af2a  46                   inc esi
// 0051af2b  3dff000000           cmp eax, 0xff
// 0051af30  75ce                 jne 0x51af00
// 0051af32  eb04                 jmp 0x51af38
// 0051af34  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0051af38  85ff                 test edi, edi
// 0051af3a  7513                 jne 0x51af4f
// 0051af3c  8b550c               mov edx, dword ptr [ebp + 0xc]
// 0051af3f  53                   push ebx
// 0051af40  ffd2                 call edx
// 0051af42  83c404               add esp, 4
// 0051af45  84c0                 test al, al
// 0051af47  7434                 je 0x51af7d
// 0051af49  8b7500               mov esi, dword ptr [ebp]
// 0051af4c  8b7d04               mov edi, dword ptr [ebp + 4]
// 0051af4f  0fb61e               movzx ebx, byte ptr [esi]
// 0051af52  4f                   dec edi
// 0051af53  46                   inc esi
// 0051af54  81fbff000000         cmp ebx, 0xff
// 0051af5a  74d8                 je 0x51af34
// 0051af5c  8b442414             mov eax, dword ptr [esp + 0x14]
// 0051af60  85db                 test ebx, ebx
// 0051af62  7520                 jne 0x51af84
// 0051af64  8b8094010000         mov eax, dword ptr [eax + 0x194]
// 0051af6a  83401402             add dword ptr [eax + 0x14], 2
// 0051af6e  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0051af72  897500               mov dword ptr [ebp], esi
// 0051af75  897d04               mov dword ptr [ebp + 4], edi
// 0051af78  e954ffffff           jmp 0x51aed1
// 0051af7d  5f                   pop edi
// 0051af7e  5e                   pop esi
// 0051af7f  5d                   pop ebp
// 0051af80  32c0                 xor al, al
// 0051af82  5b                   pop ebx
// 0051af83  c3                   ret 
// 0051af84  8b8894010000         mov ecx, dword ptr [eax + 0x194]
// 0051af8a  83791400             cmp dword ptr [ecx + 0x14], 0
// 0051af8e  743a                 je 0x51afca
// 0051af90  8b10                 mov edx, dword ptr [eax]
// 0051af92  c7421474000000       mov dword ptr [edx + 0x14], 0x74
// 0051af99  8b8894010000         mov ecx, dword ptr [eax + 0x194]
// 0051af9f  8b10                 mov edx, dword ptr [eax]
// 0051afa1  8b4914               mov ecx, dword ptr [ecx + 0x14]
// 0051afa4  894a18               mov dword ptr [edx + 0x18], ecx
// 0051afa7  8b10                 mov edx, dword ptr [eax]
// 0051afa9  895a1c               mov dword ptr [edx + 0x1c], ebx
// 0051afac  8b08                 mov ecx, dword ptr [eax]
// 0051afae  8b5104               mov edx, dword ptr [ecx + 4]
// 0051afb1  6aff                 push -1
// 0051afb3  50                   push eax
// 0051afb4  ffd2                 call edx
// 0051afb6  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0051afba  8b8894010000         mov ecx, dword ptr [eax + 0x194]
// 0051afc0  83c408               add esp, 8
// 0051afc3  c7411400000000       mov dword ptr [ecx + 0x14], 0
// 0051afca  89987c010000         mov dword ptr [eax + 0x17c], ebx
// 0051afd0  897d04               mov dword ptr [ebp + 4], edi
// 0051afd3  5f                   pop edi
// 0051afd4  897500               mov dword ptr [ebp], esi
// 0051afd7  5e                   pop esi
// 0051afd8  5d                   pop ebp
// 0051afd9  b001                 mov al, 1
// 0051afdb  5b                   pop ebx
// 0051afdc  c3                   ret 
// library jpeg-6b/jdmarker.c (function _next_marker)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
