// from server: 100% by auto
// roc 2010-06 00561990  unit: G3D::_internal::DialogTemplate  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00561990
//
// 00561990  53                   push ebx
// 00561991  55                   push ebp
// 00561992  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00561996  8b5d18               mov ebx, dword ptr [ebp + 0x18]
// 00561999  56                   push esi
// 0056199a  8b33                 mov esi, dword ptr [ebx]
// 0056199c  57                   push edi
// 0056199d  8b7b04               mov edi, dword ptr [ebx + 4]
// 005619a0  85ff                 test edi, edi
// 005619a2  7519                 jne 0x5619bd
// 005619a4  8b430c               mov eax, dword ptr [ebx + 0xc]
// 005619a7  55                   push ebp
// 005619a8  ffd0                 call eax
// 005619aa  83c404               add esp, 4
// 005619ad  84c0                 test al, al
// 005619af  7507                 jne 0x5619b8
// 005619b1  5f                   pop edi
// 005619b2  5e                   pop esi
// 005619b3  5d                   pop ebp
// 005619b4  32c0                 xor al, al
// 005619b6  5b                   pop ebx
// 005619b7  c3                   ret 
// 005619b8  8b33                 mov esi, dword ptr [ebx]
// 005619ba  8b7b04               mov edi, dword ptr [ebx + 4]
// 005619bd  0fb606               movzx eax, byte ptr [esi]
// 005619c0  4f                   dec edi
// 005619c1  c1e008               shl eax, 8
// 005619c4  46                   inc esi
// 005619c5  89442414             mov dword ptr [esp + 0x14], eax
// 005619c9  85ff                 test edi, edi
// 005619cb  7516                 jne 0x5619e3
// 005619cd  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 005619d0  55                   push ebp
// 005619d1  ffd1                 call ecx
// 005619d3  83c404               add esp, 4
// 005619d6  84c0                 test al, al
// 005619d8  74d7                 je 0x5619b1
// 005619da  8b33                 mov esi, dword ptr [ebx]
// 005619dc  8b7b04               mov edi, dword ptr [ebx + 4]
// 005619df  8b442414             mov eax, dword ptr [esp + 0x14]
// 005619e3  0fb616               movzx edx, byte ptr [esi]
// 005619e6  03c2                 add eax, edx
// 005619e8  4f                   dec edi
// 005619e9  46                   inc esi
// 005619ea  83f804               cmp eax, 4
// 005619ed  7415                 je 0x561a04
// 005619ef  8b4500               mov eax, dword ptr [ebp]
// 005619f2  c740140b000000       mov dword ptr [eax + 0x14], 0xb
// 005619f9  8b4d00               mov ecx, dword ptr [ebp]
// 005619fc  8b11                 mov edx, dword ptr [ecx]
// 005619fe  55                   push ebp
// 005619ff  ffd2                 call edx
// 00561a01  83c404               add esp, 4
// 00561a04  85ff                 test edi, edi
// 00561a06  7512                 jne 0x561a1a
// 00561a08  8b430c               mov eax, dword ptr [ebx + 0xc]
// 00561a0b  55                   push ebp
// 00561a0c  ffd0                 call eax
// 00561a0e  83c404               add esp, 4
// 00561a11  84c0                 test al, al
// 00561a13  749c                 je 0x5619b1
// 00561a15  8b33                 mov esi, dword ptr [ebx]
// 00561a17  8b7b04               mov edi, dword ptr [ebx + 4]
// 00561a1a  0fb606               movzx eax, byte ptr [esi]
// 00561a1d  4f                   dec edi
// 00561a1e  c1e008               shl eax, 8
// 00561a21  46                   inc esi
// 00561a22  89442414             mov dword ptr [esp + 0x14], eax
// 00561a26  85ff                 test edi, edi
// 00561a28  751a                 jne 0x561a44
// 00561a2a  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 00561a2d  55                   push ebp
// 00561a2e  ffd1                 call ecx
// 00561a30  83c404               add esp, 4
// 00561a33  84c0                 test al, al
// 00561a35  0f8476ffffff         je 0x5619b1
// 00561a3b  8b33                 mov esi, dword ptr [ebx]
// 00561a3d  8b7b04               mov edi, dword ptr [ebx + 4]
// 00561a40  8b442414             mov eax, dword ptr [esp + 0x14]
// 00561a44  0fb616               movzx edx, byte ptr [esi]
// 00561a47  8b4d00               mov ecx, dword ptr [ebp]
// 00561a4a  03c2                 add eax, edx
// 00561a4c  c7411452000000       mov dword ptr [ecx + 0x14], 0x52
// 00561a53  8b5500               mov edx, dword ptr [ebp]
// 00561a56  894218               mov dword ptr [edx + 0x18], eax
// 00561a59  89442414             mov dword ptr [esp + 0x14], eax
// 00561a5d  8b4500               mov eax, dword ptr [ebp]
// 00561a60  8b4804               mov ecx, dword ptr [eax + 4]
// 00561a63  6a01                 push 1
// 00561a65  55                   push ebp
// 00561a66  ffd1                 call ecx
// 00561a68  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00561a6c  83c408               add esp, 8
// 00561a6f  8995fc000000         mov dword ptr [ebp + 0xfc], edx
// 00561a75  4f                   dec edi
// 00561a76  46                   inc esi
// 00561a77  897b04               mov dword ptr [ebx + 4], edi
// 00561a7a  5f                   pop edi
// 00561a7b  8933                 mov dword ptr [ebx], esi
// 00561a7d  5e                   pop esi
// 00561a7e  5d                   pop ebp
// 00561a7f  b001                 mov al, 1
// 00561a81  5b                   pop ebx
// 00561a82  c3                   ret 
// library jpeg-6b/jdmarker.c (function _get_dri)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
