// roc 2007-03 005071e0  unit: seg_00500000  size: 255 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005071e0
//
// 005071e0  53                   push ebx
// 005071e1  55                   push ebp
// 005071e2  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 005071e6  8b5d18               mov ebx, dword ptr [ebp + 0x18]
// 005071e9  56                   push esi
// 005071ea  8b33                 mov esi, dword ptr [ebx]
// 005071ec  57                   push edi
// 005071ed  8b7b04               mov edi, dword ptr [ebx + 4]
// 005071f0  85ff                 test edi, edi
// 005071f2  7519                 jne 0x50720d
// 005071f4  8b430c               mov eax, dword ptr [ebx + 0xc]
// 005071f7  55                   push ebp
// 005071f8  ffd0                 call eax
// 005071fa  83c404               add esp, 4
// 005071fd  84c0                 test al, al
// 005071ff  7507                 jne 0x507208
// 00507201  5f                   pop edi
// 00507202  5e                   pop esi
// 00507203  5d                   pop ebp
// 00507204  32c0                 xor al, al
// 00507206  5b                   pop ebx
// 00507207  c3                   ret 
// 00507208  8b33                 mov esi, dword ptr [ebx]
// 0050720a  8b7b04               mov edi, dword ptr [ebx + 4]
// 0050720d  33c0                 xor eax, eax
// 0050720f  8a26                 mov ah, byte ptr [esi]
// 00507211  83ef01               sub edi, 1
// 00507214  83c601               add esi, 1
// 00507217  85ff                 test edi, edi
// 00507219  89442414             mov dword ptr [esp + 0x14], eax
// 0050721d  7516                 jne 0x507235
// 0050721f  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 00507222  55                   push ebp
// 00507223  ffd1                 call ecx
// 00507225  83c404               add esp, 4
// 00507228  84c0                 test al, al
// 0050722a  74d5                 je 0x507201
// 0050722c  8b33                 mov esi, dword ptr [ebx]
// 0050722e  8b7b04               mov edi, dword ptr [ebx + 4]
// 00507231  8b442414             mov eax, dword ptr [esp + 0x14]
// 00507235  0fb616               movzx edx, byte ptr [esi]
// 00507238  03c2                 add eax, edx
// 0050723a  83ef01               sub edi, 1
// 0050723d  83c601               add esi, 1
// 00507240  83f804               cmp eax, 4
// 00507243  7415                 je 0x50725a
// 00507245  8b4500               mov eax, dword ptr [ebp]
// 00507248  c740140b000000       mov dword ptr [eax + 0x14], 0xb
// 0050724f  8b4d00               mov ecx, dword ptr [ebp]
// 00507252  8b11                 mov edx, dword ptr [ecx]
// 00507254  55                   push ebp
// 00507255  ffd2                 call edx
// 00507257  83c404               add esp, 4
// 0050725a  85ff                 test edi, edi
// 0050725c  7512                 jne 0x507270
// 0050725e  8b430c               mov eax, dword ptr [ebx + 0xc]
// 00507261  55                   push ebp
// 00507262  ffd0                 call eax
// 00507264  83c404               add esp, 4
// 00507267  84c0                 test al, al
// 00507269  7496                 je 0x507201
// 0050726b  8b33                 mov esi, dword ptr [ebx]
// 0050726d  8b7b04               mov edi, dword ptr [ebx + 4]
// 00507270  33c9                 xor ecx, ecx
// 00507272  8a2e                 mov ch, byte ptr [esi]
// 00507274  83ef01               sub edi, 1
// 00507277  83c601               add esi, 1
// 0050727a  85ff                 test edi, edi
// 0050727c  894c2414             mov dword ptr [esp + 0x14], ecx
// 00507280  7516                 jne 0x507298
// 00507282  8b530c               mov edx, dword ptr [ebx + 0xc]
// 00507285  55                   push ebp
// 00507286  ffd2                 call edx
// 00507288  83c404               add esp, 4
// 0050728b  84c0                 test al, al
// 0050728d  0f846effffff         je 0x507201
// 00507293  8b33                 mov esi, dword ptr [ebx]
// 00507295  8b7b04               mov edi, dword ptr [ebx + 4]
// 00507298  0fb60e               movzx ecx, byte ptr [esi]
// 0050729b  8b5500               mov edx, dword ptr [ebp]
// 0050729e  8b442414             mov eax, dword ptr [esp + 0x14]
// 005072a2  03c1                 add eax, ecx
// 005072a4  c7421452000000       mov dword ptr [edx + 0x14], 0x52
// 005072ab  8b4d00               mov ecx, dword ptr [ebp]
// 005072ae  894118               mov dword ptr [ecx + 0x18], eax
// 005072b1  8b5500               mov edx, dword ptr [ebp]
// 005072b4  89442414             mov dword ptr [esp + 0x14], eax
// 005072b8  8b4204               mov eax, dword ptr [edx + 4]
// 005072bb  6a01                 push 1
// 005072bd  55                   push ebp
// 005072be  ffd0                 call eax
// 005072c0  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005072c4  83c408               add esp, 8
// 005072c7  898dfc000000         mov dword ptr [ebp + 0xfc], ecx
// 005072cd  83c7ff               add edi, -1
// 005072d0  83c601               add esi, 1
// 005072d3  897b04               mov dword ptr [ebx + 4], edi
// 005072d6  5f                   pop edi
// 005072d7  8933                 mov dword ptr [ebx], esi
// 005072d9  5e                   pop esi
// 005072da  5d                   pop ebp
// 005072db  b001                 mov al, 1
// 005072dd  5b                   pop ebx
// 005072de  c3                   ret 
// library jpeg-6b/jdmarker.c (function _get_dri)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
