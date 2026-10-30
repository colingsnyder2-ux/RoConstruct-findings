// from server: 100% by auto
// roc 2007-08 00513060  unit: G3D::_internal::DialogTemplate  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00513060
//
// 00513060  53                   push ebx
// 00513061  55                   push ebp
// 00513062  56                   push esi
// 00513063  8b742410             mov esi, dword ptr [esp + 0x10]
// 00513067  57                   push edi
// 00513068  8b7e18               mov edi, dword ptr [esi + 0x18]
// 0051306b  8b6f04               mov ebp, dword ptr [edi + 4]
// 0051306e  85ed                 test ebp, ebp
// 00513070  8b1f                 mov ebx, dword ptr [edi]
// 00513072  7519                 jne 0x51308d
// 00513074  8b470c               mov eax, dword ptr [edi + 0xc]
// 00513077  56                   push esi
// 00513078  ffd0                 call eax
// 0051307a  83c404               add esp, 4
// 0051307d  84c0                 test al, al
// 0051307f  7507                 jne 0x513088
// 00513081  5f                   pop edi
// 00513082  5e                   pop esi
// 00513083  5d                   pop ebp
// 00513084  32c0                 xor al, al
// 00513086  5b                   pop ebx
// 00513087  c3                   ret 
// 00513088  8b1f                 mov ebx, dword ptr [edi]
// 0051308a  8b6f04               mov ebp, dword ptr [edi + 4]
// 0051308d  33c9                 xor ecx, ecx
// 0051308f  8a2b                 mov ch, byte ptr [ebx]
// 00513091  83ed01               sub ebp, 1
// 00513094  83c301               add ebx, 1
// 00513097  85ed                 test ebp, ebp
// 00513099  894c2414             mov dword ptr [esp + 0x14], ecx
// 0051309d  7512                 jne 0x5130b1
// 0051309f  8b570c               mov edx, dword ptr [edi + 0xc]
// 005130a2  56                   push esi
// 005130a3  ffd2                 call edx
// 005130a5  83c404               add esp, 4
// 005130a8  84c0                 test al, al
// 005130aa  74d5                 je 0x513081
// 005130ac  8b1f                 mov ebx, dword ptr [edi]
// 005130ae  8b6f04               mov ebp, dword ptr [edi + 4]
// 005130b1  0fb603               movzx eax, byte ptr [ebx]
// 005130b4  8b16                 mov edx, dword ptr [esi]
// 005130b6  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005130ba  c742145b000000       mov dword ptr [edx + 0x14], 0x5b
// 005130c1  8b967c010000         mov edx, dword ptr [esi + 0x17c]
// 005130c7  8d4401fe             lea eax, [ecx + eax - 2]
// 005130cb  8b0e                 mov ecx, dword ptr [esi]
// 005130cd  895118               mov dword ptr [ecx + 0x18], edx
// 005130d0  8b0e                 mov ecx, dword ptr [esi]
// 005130d2  89411c               mov dword ptr [ecx + 0x1c], eax
// 005130d5  8b16                 mov edx, dword ptr [esi]
// 005130d7  89442414             mov dword ptr [esp + 0x14], eax
// 005130db  8b4204               mov eax, dword ptr [edx + 4]
// 005130de  6a01                 push 1
// 005130e0  56                   push esi
// 005130e1  ffd0                 call eax
// 005130e3  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005130e7  83c301               add ebx, 1
// 005130ea  83c5ff               add ebp, -1
// 005130ed  83c408               add esp, 8
// 005130f0  85c0                 test eax, eax
// 005130f2  891f                 mov dword ptr [edi], ebx
// 005130f4  896f04               mov dword ptr [edi + 4], ebp
// 005130f7  7e0d                 jle 0x513106
// 005130f9  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 005130fc  8b5110               mov edx, dword ptr [ecx + 0x10]
// 005130ff  50                   push eax
// 00513100  56                   push esi
// 00513101  ffd2                 call edx
// 00513103  83c408               add esp, 8
// 00513106  5f                   pop edi
// 00513107  5e                   pop esi
// 00513108  5d                   pop ebp
// 00513109  b001                 mov al, 1
// 0051310b  5b                   pop ebx
// 0051310c  c3                   ret 
// library jpeg-6b/jdmarker.c (function _skip_variable)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
