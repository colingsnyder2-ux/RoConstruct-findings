// from server: 100% by auto
// roc 2007-08 00512ab0  unit: G3D::_internal::DialogTemplate  size: 255 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00512ab0
//
// 00512ab0  53                   push ebx
// 00512ab1  55                   push ebp
// 00512ab2  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00512ab6  8b5d18               mov ebx, dword ptr [ebp + 0x18]
// 00512ab9  56                   push esi
// 00512aba  8b33                 mov esi, dword ptr [ebx]
// 00512abc  57                   push edi
// 00512abd  8b7b04               mov edi, dword ptr [ebx + 4]
// 00512ac0  85ff                 test edi, edi
// 00512ac2  7519                 jne 0x512add
// 00512ac4  8b430c               mov eax, dword ptr [ebx + 0xc]
// 00512ac7  55                   push ebp
// 00512ac8  ffd0                 call eax
// 00512aca  83c404               add esp, 4
// 00512acd  84c0                 test al, al
// 00512acf  7507                 jne 0x512ad8
// 00512ad1  5f                   pop edi
// 00512ad2  5e                   pop esi
// 00512ad3  5d                   pop ebp
// 00512ad4  32c0                 xor al, al
// 00512ad6  5b                   pop ebx
// 00512ad7  c3                   ret 
// 00512ad8  8b33                 mov esi, dword ptr [ebx]
// 00512ada  8b7b04               mov edi, dword ptr [ebx + 4]
// 00512add  33c0                 xor eax, eax
// 00512adf  8a26                 mov ah, byte ptr [esi]
// 00512ae1  83ef01               sub edi, 1
// 00512ae4  83c601               add esi, 1
// 00512ae7  85ff                 test edi, edi
// 00512ae9  89442414             mov dword ptr [esp + 0x14], eax
// 00512aed  7516                 jne 0x512b05
// 00512aef  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 00512af2  55                   push ebp
// 00512af3  ffd1                 call ecx
// 00512af5  83c404               add esp, 4
// 00512af8  84c0                 test al, al
// 00512afa  74d5                 je 0x512ad1
// 00512afc  8b33                 mov esi, dword ptr [ebx]
// 00512afe  8b7b04               mov edi, dword ptr [ebx + 4]
// 00512b01  8b442414             mov eax, dword ptr [esp + 0x14]
// 00512b05  0fb616               movzx edx, byte ptr [esi]
// 00512b08  03c2                 add eax, edx
// 00512b0a  83ef01               sub edi, 1
// 00512b0d  83c601               add esi, 1
// 00512b10  83f804               cmp eax, 4
// 00512b13  7415                 je 0x512b2a
// 00512b15  8b4500               mov eax, dword ptr [ebp]
// 00512b18  c740140b000000       mov dword ptr [eax + 0x14], 0xb
// 00512b1f  8b4d00               mov ecx, dword ptr [ebp]
// 00512b22  8b11                 mov edx, dword ptr [ecx]
// 00512b24  55                   push ebp
// 00512b25  ffd2                 call edx
// 00512b27  83c404               add esp, 4
// 00512b2a  85ff                 test edi, edi
// 00512b2c  7512                 jne 0x512b40
// 00512b2e  8b430c               mov eax, dword ptr [ebx + 0xc]
// 00512b31  55                   push ebp
// 00512b32  ffd0                 call eax
// 00512b34  83c404               add esp, 4
// 00512b37  84c0                 test al, al
// 00512b39  7496                 je 0x512ad1
// 00512b3b  8b33                 mov esi, dword ptr [ebx]
// 00512b3d  8b7b04               mov edi, dword ptr [ebx + 4]
// 00512b40  33c9                 xor ecx, ecx
// 00512b42  8a2e                 mov ch, byte ptr [esi]
// 00512b44  83ef01               sub edi, 1
// 00512b47  83c601               add esi, 1
// 00512b4a  85ff                 test edi, edi
// 00512b4c  894c2414             mov dword ptr [esp + 0x14], ecx
// 00512b50  7516                 jne 0x512b68
// 00512b52  8b530c               mov edx, dword ptr [ebx + 0xc]
// 00512b55  55                   push ebp
// 00512b56  ffd2                 call edx
// 00512b58  83c404               add esp, 4
// 00512b5b  84c0                 test al, al
// 00512b5d  0f846effffff         je 0x512ad1
// 00512b63  8b33                 mov esi, dword ptr [ebx]
// 00512b65  8b7b04               mov edi, dword ptr [ebx + 4]
// 00512b68  0fb60e               movzx ecx, byte ptr [esi]
// 00512b6b  8b5500               mov edx, dword ptr [ebp]
// 00512b6e  8b442414             mov eax, dword ptr [esp + 0x14]
// 00512b72  03c1                 add eax, ecx
// 00512b74  c7421452000000       mov dword ptr [edx + 0x14], 0x52
// 00512b7b  8b4d00               mov ecx, dword ptr [ebp]
// 00512b7e  894118               mov dword ptr [ecx + 0x18], eax
// 00512b81  8b5500               mov edx, dword ptr [ebp]
// 00512b84  89442414             mov dword ptr [esp + 0x14], eax
// 00512b88  8b4204               mov eax, dword ptr [edx + 4]
// 00512b8b  6a01                 push 1
// 00512b8d  55                   push ebp
// 00512b8e  ffd0                 call eax
// 00512b90  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00512b94  83c408               add esp, 8
// 00512b97  898dfc000000         mov dword ptr [ebp + 0xfc], ecx
// 00512b9d  83c7ff               add edi, -1
// 00512ba0  83c601               add esi, 1
// 00512ba3  897b04               mov dword ptr [ebx + 4], edi
// 00512ba6  5f                   pop edi
// 00512ba7  8933                 mov dword ptr [ebx], esi
// 00512ba9  5e                   pop esi
// 00512baa  5d                   pop ebp
// 00512bab  b001                 mov al, 1
// 00512bad  5b                   pop ebx
// 00512bae  c3                   ret 
// library jpeg-6b/jdmarker.c (function _get_dri)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
