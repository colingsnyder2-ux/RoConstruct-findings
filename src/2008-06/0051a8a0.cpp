// from server: 100% by auto
// roc 2008-06 0051a8a0  unit: G3D::_internal::DialogTemplate  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051a8a0
//
// 0051a8a0  53                   push ebx
// 0051a8a1  55                   push ebp
// 0051a8a2  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0051a8a6  8b5d18               mov ebx, dword ptr [ebp + 0x18]
// 0051a8a9  56                   push esi
// 0051a8aa  8b33                 mov esi, dword ptr [ebx]
// 0051a8ac  57                   push edi
// 0051a8ad  8b7b04               mov edi, dword ptr [ebx + 4]
// 0051a8b0  85ff                 test edi, edi
// 0051a8b2  7519                 jne 0x51a8cd
// 0051a8b4  8b430c               mov eax, dword ptr [ebx + 0xc]
// 0051a8b7  55                   push ebp
// 0051a8b8  ffd0                 call eax
// 0051a8ba  83c404               add esp, 4
// 0051a8bd  84c0                 test al, al
// 0051a8bf  7507                 jne 0x51a8c8
// 0051a8c1  5f                   pop edi
// 0051a8c2  5e                   pop esi
// 0051a8c3  5d                   pop ebp
// 0051a8c4  32c0                 xor al, al
// 0051a8c6  5b                   pop ebx
// 0051a8c7  c3                   ret 
// 0051a8c8  8b33                 mov esi, dword ptr [ebx]
// 0051a8ca  8b7b04               mov edi, dword ptr [ebx + 4]
// 0051a8cd  0fb606               movzx eax, byte ptr [esi]
// 0051a8d0  4f                   dec edi
// 0051a8d1  c1e008               shl eax, 8
// 0051a8d4  46                   inc esi
// 0051a8d5  89442414             mov dword ptr [esp + 0x14], eax
// 0051a8d9  85ff                 test edi, edi
// 0051a8db  7516                 jne 0x51a8f3
// 0051a8dd  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 0051a8e0  55                   push ebp
// 0051a8e1  ffd1                 call ecx
// 0051a8e3  83c404               add esp, 4
// 0051a8e6  84c0                 test al, al
// 0051a8e8  74d7                 je 0x51a8c1
// 0051a8ea  8b33                 mov esi, dword ptr [ebx]
// 0051a8ec  8b7b04               mov edi, dword ptr [ebx + 4]
// 0051a8ef  8b442414             mov eax, dword ptr [esp + 0x14]
// 0051a8f3  0fb616               movzx edx, byte ptr [esi]
// 0051a8f6  03c2                 add eax, edx
// 0051a8f8  4f                   dec edi
// 0051a8f9  46                   inc esi
// 0051a8fa  83f804               cmp eax, 4
// 0051a8fd  7415                 je 0x51a914
// 0051a8ff  8b4500               mov eax, dword ptr [ebp]
// 0051a902  c740140b000000       mov dword ptr [eax + 0x14], 0xb
// 0051a909  8b4d00               mov ecx, dword ptr [ebp]
// 0051a90c  8b11                 mov edx, dword ptr [ecx]
// 0051a90e  55                   push ebp
// 0051a90f  ffd2                 call edx
// 0051a911  83c404               add esp, 4
// 0051a914  85ff                 test edi, edi
// 0051a916  7512                 jne 0x51a92a
// 0051a918  8b430c               mov eax, dword ptr [ebx + 0xc]
// 0051a91b  55                   push ebp
// 0051a91c  ffd0                 call eax
// 0051a91e  83c404               add esp, 4
// 0051a921  84c0                 test al, al
// 0051a923  749c                 je 0x51a8c1
// 0051a925  8b33                 mov esi, dword ptr [ebx]
// 0051a927  8b7b04               mov edi, dword ptr [ebx + 4]
// 0051a92a  0fb606               movzx eax, byte ptr [esi]
// 0051a92d  4f                   dec edi
// 0051a92e  c1e008               shl eax, 8
// 0051a931  46                   inc esi
// 0051a932  89442414             mov dword ptr [esp + 0x14], eax
// 0051a936  85ff                 test edi, edi
// 0051a938  751a                 jne 0x51a954
// 0051a93a  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 0051a93d  55                   push ebp
// 0051a93e  ffd1                 call ecx
// 0051a940  83c404               add esp, 4
// 0051a943  84c0                 test al, al
// 0051a945  0f8476ffffff         je 0x51a8c1
// 0051a94b  8b33                 mov esi, dword ptr [ebx]
// 0051a94d  8b7b04               mov edi, dword ptr [ebx + 4]
// 0051a950  8b442414             mov eax, dword ptr [esp + 0x14]
// 0051a954  0fb616               movzx edx, byte ptr [esi]
// 0051a957  8b4d00               mov ecx, dword ptr [ebp]
// 0051a95a  03c2                 add eax, edx
// 0051a95c  c7411452000000       mov dword ptr [ecx + 0x14], 0x52
// 0051a963  8b5500               mov edx, dword ptr [ebp]
// 0051a966  894218               mov dword ptr [edx + 0x18], eax
// 0051a969  89442414             mov dword ptr [esp + 0x14], eax
// 0051a96d  8b4500               mov eax, dword ptr [ebp]
// 0051a970  8b4804               mov ecx, dword ptr [eax + 4]
// 0051a973  6a01                 push 1
// 0051a975  55                   push ebp
// 0051a976  ffd1                 call ecx
// 0051a978  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0051a97c  83c408               add esp, 8
// 0051a97f  8995fc000000         mov dword ptr [ebp + 0xfc], edx
// 0051a985  4f                   dec edi
// 0051a986  46                   inc esi
// 0051a987  897b04               mov dword ptr [ebx + 4], edi
// 0051a98a  5f                   pop edi
// 0051a98b  8933                 mov dword ptr [ebx], esi
// 0051a98d  5e                   pop esi
// 0051a98e  5d                   pop ebp
// 0051a98f  b001                 mov al, 1
// 0051a991  5b                   pop ebx
// 0051a992  c3                   ret 
// library jpeg-6b/jdmarker.c (function _get_dri)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
