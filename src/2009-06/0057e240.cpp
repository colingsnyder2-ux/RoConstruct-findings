// from server: 100% by auto
// roc 2009-06 0057e240  unit: G3D::_internal::DialogTemplate  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0057e240
//
// 0057e240  53                   push ebx
// 0057e241  55                   push ebp
// 0057e242  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0057e246  8b5d18               mov ebx, dword ptr [ebp + 0x18]
// 0057e249  56                   push esi
// 0057e24a  8b33                 mov esi, dword ptr [ebx]
// 0057e24c  57                   push edi
// 0057e24d  8b7b04               mov edi, dword ptr [ebx + 4]
// 0057e250  85ff                 test edi, edi
// 0057e252  7519                 jne 0x57e26d
// 0057e254  8b430c               mov eax, dword ptr [ebx + 0xc]
// 0057e257  55                   push ebp
// 0057e258  ffd0                 call eax
// 0057e25a  83c404               add esp, 4
// 0057e25d  84c0                 test al, al
// 0057e25f  7507                 jne 0x57e268
// 0057e261  5f                   pop edi
// 0057e262  5e                   pop esi
// 0057e263  5d                   pop ebp
// 0057e264  32c0                 xor al, al
// 0057e266  5b                   pop ebx
// 0057e267  c3                   ret 
// 0057e268  8b33                 mov esi, dword ptr [ebx]
// 0057e26a  8b7b04               mov edi, dword ptr [ebx + 4]
// 0057e26d  0fb606               movzx eax, byte ptr [esi]
// 0057e270  4f                   dec edi
// 0057e271  c1e008               shl eax, 8
// 0057e274  46                   inc esi
// 0057e275  89442414             mov dword ptr [esp + 0x14], eax
// 0057e279  85ff                 test edi, edi
// 0057e27b  7516                 jne 0x57e293
// 0057e27d  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 0057e280  55                   push ebp
// 0057e281  ffd1                 call ecx
// 0057e283  83c404               add esp, 4
// 0057e286  84c0                 test al, al
// 0057e288  74d7                 je 0x57e261
// 0057e28a  8b33                 mov esi, dword ptr [ebx]
// 0057e28c  8b7b04               mov edi, dword ptr [ebx + 4]
// 0057e28f  8b442414             mov eax, dword ptr [esp + 0x14]
// 0057e293  0fb616               movzx edx, byte ptr [esi]
// 0057e296  03c2                 add eax, edx
// 0057e298  4f                   dec edi
// 0057e299  46                   inc esi
// 0057e29a  83f804               cmp eax, 4
// 0057e29d  7415                 je 0x57e2b4
// 0057e29f  8b4500               mov eax, dword ptr [ebp]
// 0057e2a2  c740140b000000       mov dword ptr [eax + 0x14], 0xb
// 0057e2a9  8b4d00               mov ecx, dword ptr [ebp]
// 0057e2ac  8b11                 mov edx, dword ptr [ecx]
// 0057e2ae  55                   push ebp
// 0057e2af  ffd2                 call edx
// 0057e2b1  83c404               add esp, 4
// 0057e2b4  85ff                 test edi, edi
// 0057e2b6  7512                 jne 0x57e2ca
// 0057e2b8  8b430c               mov eax, dword ptr [ebx + 0xc]
// 0057e2bb  55                   push ebp
// 0057e2bc  ffd0                 call eax
// 0057e2be  83c404               add esp, 4
// 0057e2c1  84c0                 test al, al
// 0057e2c3  749c                 je 0x57e261
// 0057e2c5  8b33                 mov esi, dword ptr [ebx]
// 0057e2c7  8b7b04               mov edi, dword ptr [ebx + 4]
// 0057e2ca  0fb606               movzx eax, byte ptr [esi]
// 0057e2cd  4f                   dec edi
// 0057e2ce  c1e008               shl eax, 8
// 0057e2d1  46                   inc esi
// 0057e2d2  89442414             mov dword ptr [esp + 0x14], eax
// 0057e2d6  85ff                 test edi, edi
// 0057e2d8  751a                 jne 0x57e2f4
// 0057e2da  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 0057e2dd  55                   push ebp
// 0057e2de  ffd1                 call ecx
// 0057e2e0  83c404               add esp, 4
// 0057e2e3  84c0                 test al, al
// 0057e2e5  0f8476ffffff         je 0x57e261
// 0057e2eb  8b33                 mov esi, dword ptr [ebx]
// 0057e2ed  8b7b04               mov edi, dword ptr [ebx + 4]
// 0057e2f0  8b442414             mov eax, dword ptr [esp + 0x14]
// 0057e2f4  0fb616               movzx edx, byte ptr [esi]
// 0057e2f7  8b4d00               mov ecx, dword ptr [ebp]
// 0057e2fa  03c2                 add eax, edx
// 0057e2fc  c7411452000000       mov dword ptr [ecx + 0x14], 0x52
// 0057e303  8b5500               mov edx, dword ptr [ebp]
// 0057e306  894218               mov dword ptr [edx + 0x18], eax
// 0057e309  89442414             mov dword ptr [esp + 0x14], eax
// 0057e30d  8b4500               mov eax, dword ptr [ebp]
// 0057e310  8b4804               mov ecx, dword ptr [eax + 4]
// 0057e313  6a01                 push 1
// 0057e315  55                   push ebp
// 0057e316  ffd1                 call ecx
// 0057e318  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0057e31c  83c408               add esp, 8
// 0057e31f  8995fc000000         mov dword ptr [ebp + 0xfc], edx
// 0057e325  4f                   dec edi
// 0057e326  46                   inc esi
// 0057e327  897b04               mov dword ptr [ebx + 4], edi
// 0057e32a  5f                   pop edi
// 0057e32b  8933                 mov dword ptr [ebx], esi
// 0057e32d  5e                   pop esi
// 0057e32e  5d                   pop ebp
// 0057e32f  b001                 mov al, 1
// 0057e331  5b                   pop ebx
// 0057e332  c3                   ret 
// library jpeg-6b/jdmarker.c (function _get_dri)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
