// from server: 100% by auto
// roc 2009-06 0057dfe0  unit: G3D::_internal::DialogTemplate  size: 596 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0057dfe0
//
// 0057dfe0  83ec14               sub esp, 0x14
// 0057dfe3  53                   push ebx
// 0057dfe4  55                   push ebp
// 0057dfe5  56                   push esi
// 0057dfe6  8b7718               mov esi, dword ptr [edi + 0x18]
// 0057dfe9  8b6e04               mov ebp, dword ptr [esi + 4]
// 0057dfec  8b1e                 mov ebx, dword ptr [esi]
// 0057dfee  89742410             mov dword ptr [esp + 0x10], esi
// 0057dff2  85ed                 test ebp, ebp
// 0057dff4  751b                 jne 0x57e011
// 0057dff6  8b460c               mov eax, dword ptr [esi + 0xc]
// 0057dff9  57                   push edi
// 0057dffa  ffd0                 call eax
// 0057dffc  83c404               add esp, 4
// 0057dfff  84c0                 test al, al
// 0057e001  7509                 jne 0x57e00c
// 0057e003  5e                   pop esi
// 0057e004  5d                   pop ebp
// 0057e005  32c0                 xor al, al
// 0057e007  5b                   pop ebx
// 0057e008  83c414               add esp, 0x14
// 0057e00b  c3                   ret 
// 0057e00c  8b1e                 mov ebx, dword ptr [esi]
// 0057e00e  8b6e04               mov ebp, dword ptr [esi + 4]
// 0057e011  0fb603               movzx eax, byte ptr [ebx]
// 0057e014  4d                   dec ebp
// 0057e015  c1e008               shl eax, 8
// 0057e018  43                   inc ebx
// 0057e019  8944240c             mov dword ptr [esp + 0xc], eax
// 0057e01d  85ed                 test ebp, ebp
// 0057e01f  7516                 jne 0x57e037
// 0057e021  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0057e024  57                   push edi
// 0057e025  ffd1                 call ecx
// 0057e027  83c404               add esp, 4
// 0057e02a  84c0                 test al, al
// 0057e02c  74d5                 je 0x57e003
// 0057e02e  8b1e                 mov ebx, dword ptr [esi]
// 0057e030  8b6e04               mov ebp, dword ptr [esi + 4]
// 0057e033  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0057e037  0fb613               movzx edx, byte ptr [ebx]
// 0057e03a  03c2                 add eax, edx
// 0057e03c  83e802               sub eax, 2
// 0057e03f  4d                   dec ebp
// 0057e040  43                   inc ebx
// 0057e041  8944240c             mov dword ptr [esp + 0xc], eax
// 0057e045  85c0                 test eax, eax
// 0057e047  0f8ec4010000         jle 0x57e211
// 0057e04d  8d4900               lea ecx, [ecx]
// 0057e050  85ed                 test ebp, ebp
// 0057e052  7512                 jne 0x57e066
// 0057e054  8b460c               mov eax, dword ptr [esi + 0xc]
// 0057e057  57                   push edi
// 0057e058  ffd0                 call eax
// 0057e05a  83c404               add esp, 4
// 0057e05d  84c0                 test al, al
// 0057e05f  74a2                 je 0x57e003
// 0057e061  8b1e                 mov ebx, dword ptr [esi]
// 0057e063  8b6e04               mov ebp, dword ptr [esi + 4]
// 0057e066  0fb633               movzx esi, byte ptr [ebx]
// 0057e069  8b0f                 mov ecx, dword ptr [edi]
// 0057e06b  c7411451000000       mov dword ptr [ecx + 0x14], 0x51
// 0057e072  8b17                 mov edx, dword ptr [edi]
// 0057e074  8bc6                 mov eax, esi
// 0057e076  c1f804               sar eax, 4
// 0057e079  83e60f               and esi, 0xf
// 0057e07c  897218               mov dword ptr [edx + 0x18], esi
// 0057e07f  8b0f                 mov ecx, dword ptr [edi]
// 0057e081  89411c               mov dword ptr [ecx + 0x1c], eax
// 0057e084  8b17                 mov edx, dword ptr [edi]
// 0057e086  8944241c             mov dword ptr [esp + 0x1c], eax
// 0057e08a  8b4204               mov eax, dword ptr [edx + 4]
// 0057e08d  6a01                 push 1
// 0057e08f  57                   push edi
// 0057e090  4d                   dec ebp
// 0057e091  43                   inc ebx
// 0057e092  ffd0                 call eax
// 0057e094  83c408               add esp, 8
// 0057e097  83fe04               cmp esi, 4
// 0057e09a  7c18                 jl 0x57e0b4
// 0057e09c  8b0f                 mov ecx, dword ptr [edi]
// 0057e09e  c741141f000000       mov dword ptr [ecx + 0x14], 0x1f
// 0057e0a5  8b17                 mov edx, dword ptr [edi]
// 0057e0a7  897218               mov dword ptr [edx + 0x18], esi
// 0057e0aa  8b07                 mov eax, dword ptr [edi]
// 0057e0ac  8b08                 mov ecx, dword ptr [eax]
// 0057e0ae  57                   push edi
// 0057e0af  ffd1                 call ecx
// 0057e0b1  83c404               add esp, 4
// 0057e0b4  83bcb79000000000     cmp dword ptr [edi + esi*4 + 0x90], 0
// 0057e0bc  7510                 jne 0x57e0ce
// 0057e0be  57                   push edi
// 0057e0bf  e8bc0f0000           call 0x57f080
// 0057e0c4  83c404               add esp, 4
// 0057e0c7  8984b790000000       mov dword ptr [edi + esi*4 + 0x90], eax
// 0057e0ce  8b94b790000000       mov edx, dword ptr [edi + esi*4 + 0x90]
// 0057e0d5  89542418             mov dword ptr [esp + 0x18], edx
// 0057e0d9  c7442414f8e88c00     mov dword ptr [esp + 0x14], 0x8ce8f8
// 0057e0e1  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 0057e0e6  744c                 je 0x57e134
// 0057e0e8  85ed                 test ebp, ebp
// 0057e0ea  751a                 jne 0x57e106
// 0057e0ec  8b742410             mov esi, dword ptr [esp + 0x10]
// 0057e0f0  8b460c               mov eax, dword ptr [esi + 0xc]
// 0057e0f3  57                   push edi
// 0057e0f4  ffd0                 call eax
// 0057e0f6  83c404               add esp, 4
// 0057e0f9  84c0                 test al, al
// 0057e0fb  0f8402ffffff         je 0x57e003
// 0057e101  8b1e                 mov ebx, dword ptr [esi]
// 0057e103  8b6e04               mov ebp, dword ptr [esi + 4]
// 0057e106  0fb633               movzx esi, byte ptr [ebx]
// 0057e109  4d                   dec ebp
// 0057e10a  c1e608               shl esi, 8
// 0057e10d  43                   inc ebx
// 0057e10e  85ed                 test ebp, ebp
// 0057e110  751b                 jne 0x57e12d
// 0057e112  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0057e116  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0057e119  57                   push edi
// 0057e11a  ffd1                 call ecx
// 0057e11c  83c404               add esp, 4
// 0057e11f  84c0                 test al, al
// 0057e121  0f84dcfeffff         je 0x57e003
// 0057e127  8b5d00               mov ebx, dword ptr [ebp]
// 0057e12a  8b6d04               mov ebp, dword ptr [ebp + 4]
// 0057e12d  0fb613               movzx edx, byte ptr [ebx]
// 0057e130  03f2                 add esi, edx
// 0057e132  eb21                 jmp 0x57e155
// 0057e134  85ed                 test ebp, ebp
// 0057e136  751a                 jne 0x57e152
// 0057e138  8b742410             mov esi, dword ptr [esp + 0x10]
// 0057e13c  8b460c               mov eax, dword ptr [esi + 0xc]
// 0057e13f  57                   push edi
// 0057e140  ffd0                 call eax
// 0057e142  83c404               add esp, 4
// 0057e145  84c0                 test al, al
// 0057e147  0f84b6feffff         je 0x57e003
// 0057e14d  8b1e                 mov ebx, dword ptr [esi]
// 0057e14f  8b6e04               mov ebp, dword ptr [esi + 4]
// 0057e152  0fb633               movzx esi, byte ptr [ebx]
// 0057e155  8b442414             mov eax, dword ptr [esp + 0x14]
// 0057e159  8b08                 mov ecx, dword ptr [eax]
// 0057e15b  8b542418             mov edx, dword ptr [esp + 0x18]
// 0057e15f  83c004               add eax, 4
// 0057e162  4d                   dec ebp
// 0057e163  43                   inc ebx
// 0057e164  3df8e98c00           cmp eax, 0x8ce9f8
// 0057e169  6689344a             mov word ptr [edx + ecx*2], si
// 0057e16d  89442414             mov dword ptr [esp + 0x14], eax
// 0057e171  0f8c6affffff         jl 0x57e0e1
// 0057e177  8b07                 mov eax, dword ptr [edi]
// 0057e179  83786802             cmp dword ptr [eax + 0x68], 2
// 0057e17d  7c6c                 jl 0x57e1eb
// 0057e17f  8bf2                 mov esi, edx
// 0057e181  83c604               add esi, 4
// 0057e184  c744241808000000     mov dword ptr [esp + 0x18], 8
// 0057e18c  8d642400             lea esp, [esp]
// 0057e190  8b07                 mov eax, dword ptr [edi]
// 0057e192  0fb74efc             movzx ecx, word ptr [esi - 4]
// 0057e196  83c018               add eax, 0x18
// 0057e199  8908                 mov dword ptr [eax], ecx
// 0057e19b  0fb756fe             movzx edx, word ptr [esi - 2]
// 0057e19f  895004               mov dword ptr [eax + 4], edx
// 0057e1a2  0fb70e               movzx ecx, word ptr [esi]
// 0057e1a5  894808               mov dword ptr [eax + 8], ecx
// 0057e1a8  0fb75602             movzx edx, word ptr [esi + 2]
// 0057e1ac  89500c               mov dword ptr [eax + 0xc], edx
// 0057e1af  0fb74e04             movzx ecx, word ptr [esi + 4]
// 0057e1b3  894810               mov dword ptr [eax + 0x10], ecx
// 0057e1b6  0fb75606             movzx edx, word ptr [esi + 6]
// 0057e1ba  895014               mov dword ptr [eax + 0x14], edx
// 0057e1bd  0fb74e08             movzx ecx, word ptr [esi + 8]
// 0057e1c1  894818               mov dword ptr [eax + 0x18], ecx
// 0057e1c4  0fb7560a             movzx edx, word ptr [esi + 0xa]
// 0057e1c8  89501c               mov dword ptr [eax + 0x1c], edx
// 0057e1cb  8b07                 mov eax, dword ptr [edi]
// 0057e1cd  c740145d000000       mov dword ptr [eax + 0x14], 0x5d
// 0057e1d4  8b0f                 mov ecx, dword ptr [edi]
// 0057e1d6  8b5104               mov edx, dword ptr [ecx + 4]
// 0057e1d9  6a02                 push 2
// 0057e1db  57                   push edi
// 0057e1dc  ffd2                 call edx
// 0057e1de  83c408               add esp, 8
// 0057e1e1  83c610               add esi, 0x10
// 0057e1e4  836c241801           sub dword ptr [esp + 0x18], 1
// 0057e1e9  75a5                 jne 0x57e190
// 0057e1eb  836c240c41           sub dword ptr [esp + 0xc], 0x41
// 0057e1f0  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 0057e1f5  7405                 je 0x57e1fc
// 0057e1f7  836c240c40           sub dword ptr [esp + 0xc], 0x40
// 0057e1fc  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0057e201  8b742410             mov esi, dword ptr [esp + 0x10]
// 0057e205  0f8f45feffff         jg 0x57e050
// 0057e20b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0057e20f  85c0                 test eax, eax
// 0057e211  7413                 je 0x57e226
// 0057e213  8b07                 mov eax, dword ptr [edi]
// 0057e215  c740140b000000       mov dword ptr [eax + 0x14], 0xb
// 0057e21c  8b0f                 mov ecx, dword ptr [edi]
// 0057e21e  8b11                 mov edx, dword ptr [ecx]
// 0057e220  57                   push edi
// 0057e221  ffd2                 call edx
// 0057e223  83c404               add esp, 4
// 0057e226  891e                 mov dword ptr [esi], ebx
// 0057e228  896e04               mov dword ptr [esi + 4], ebp
// 0057e22b  5e                   pop esi
// 0057e22c  5d                   pop ebp
// 0057e22d  b001                 mov al, 1
// 0057e22f  5b                   pop ebx
// 0057e230  83c414               add esp, 0x14
// 0057e233  c3                   ret 
// library jpeg-6b/jdmarker.c (function _get_dqt)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
