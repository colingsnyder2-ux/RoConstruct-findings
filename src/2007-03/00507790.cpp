// roc 2007-03 00507790  unit: seg_00500000  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00507790
//
// 00507790  53                   push ebx
// 00507791  55                   push ebp
// 00507792  56                   push esi
// 00507793  8b742410             mov esi, dword ptr [esp + 0x10]
// 00507797  57                   push edi
// 00507798  8b7e18               mov edi, dword ptr [esi + 0x18]
// 0050779b  8b6f04               mov ebp, dword ptr [edi + 4]
// 0050779e  85ed                 test ebp, ebp
// 005077a0  8b1f                 mov ebx, dword ptr [edi]
// 005077a2  7519                 jne 0x5077bd
// 005077a4  8b470c               mov eax, dword ptr [edi + 0xc]
// 005077a7  56                   push esi
// 005077a8  ffd0                 call eax
// 005077aa  83c404               add esp, 4
// 005077ad  84c0                 test al, al
// 005077af  7507                 jne 0x5077b8
// 005077b1  5f                   pop edi
// 005077b2  5e                   pop esi
// 005077b3  5d                   pop ebp
// 005077b4  32c0                 xor al, al
// 005077b6  5b                   pop ebx
// 005077b7  c3                   ret 
// 005077b8  8b1f                 mov ebx, dword ptr [edi]
// 005077ba  8b6f04               mov ebp, dword ptr [edi + 4]
// 005077bd  33c9                 xor ecx, ecx
// 005077bf  8a2b                 mov ch, byte ptr [ebx]
// 005077c1  83ed01               sub ebp, 1
// 005077c4  83c301               add ebx, 1
// 005077c7  85ed                 test ebp, ebp
// 005077c9  894c2414             mov dword ptr [esp + 0x14], ecx
// 005077cd  7512                 jne 0x5077e1
// 005077cf  8b570c               mov edx, dword ptr [edi + 0xc]
// 005077d2  56                   push esi
// 005077d3  ffd2                 call edx
// 005077d5  83c404               add esp, 4
// 005077d8  84c0                 test al, al
// 005077da  74d5                 je 0x5077b1
// 005077dc  8b1f                 mov ebx, dword ptr [edi]
// 005077de  8b6f04               mov ebp, dword ptr [edi + 4]
// 005077e1  0fb603               movzx eax, byte ptr [ebx]
// 005077e4  8b16                 mov edx, dword ptr [esi]
// 005077e6  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005077ea  c742145b000000       mov dword ptr [edx + 0x14], 0x5b
// 005077f1  8b967c010000         mov edx, dword ptr [esi + 0x17c]
// 005077f7  8d4401fe             lea eax, [ecx + eax - 2]
// 005077fb  8b0e                 mov ecx, dword ptr [esi]
// 005077fd  895118               mov dword ptr [ecx + 0x18], edx
// 00507800  8b0e                 mov ecx, dword ptr [esi]
// 00507802  89411c               mov dword ptr [ecx + 0x1c], eax
// 00507805  8b16                 mov edx, dword ptr [esi]
// 00507807  89442414             mov dword ptr [esp + 0x14], eax
// 0050780b  8b4204               mov eax, dword ptr [edx + 4]
// 0050780e  6a01                 push 1
// 00507810  56                   push esi
// 00507811  ffd0                 call eax
// 00507813  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00507817  83c301               add ebx, 1
// 0050781a  83c5ff               add ebp, -1
// 0050781d  83c408               add esp, 8
// 00507820  85c0                 test eax, eax
// 00507822  891f                 mov dword ptr [edi], ebx
// 00507824  896f04               mov dword ptr [edi + 4], ebp
// 00507827  7e0d                 jle 0x507836
// 00507829  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0050782c  8b5110               mov edx, dword ptr [ecx + 0x10]
// 0050782f  50                   push eax
// 00507830  56                   push esi
// 00507831  ffd2                 call edx
// 00507833  83c408               add esp, 8
// 00507836  5f                   pop edi
// 00507837  5e                   pop esi
// 00507838  5d                   pop ebp
// 00507839  b001                 mov al, 1
// 0050783b  5b                   pop ebx
// 0050783c  c3                   ret 
// library jpeg-6b/jdmarker.c (function _skip_variable)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
