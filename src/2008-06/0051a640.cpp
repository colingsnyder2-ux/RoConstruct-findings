// roc 2008-06 0051a640  unit: G3D::_internal::DialogTemplate  size: 596 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051a640
//
// 0051a640  83ec14               sub esp, 0x14
// 0051a643  53                   push ebx
// 0051a644  55                   push ebp
// 0051a645  56                   push esi
// 0051a646  8b7718               mov esi, dword ptr [edi + 0x18]
// 0051a649  8b6e04               mov ebp, dword ptr [esi + 4]
// 0051a64c  8b1e                 mov ebx, dword ptr [esi]
// 0051a64e  89742410             mov dword ptr [esp + 0x10], esi
// 0051a652  85ed                 test ebp, ebp
// 0051a654  751b                 jne 0x51a671
// 0051a656  8b460c               mov eax, dword ptr [esi + 0xc]
// 0051a659  57                   push edi
// 0051a65a  ffd0                 call eax
// 0051a65c  83c404               add esp, 4
// 0051a65f  84c0                 test al, al
// 0051a661  7509                 jne 0x51a66c
// 0051a663  5e                   pop esi
// 0051a664  5d                   pop ebp
// 0051a665  32c0                 xor al, al
// 0051a667  5b                   pop ebx
// 0051a668  83c414               add esp, 0x14
// 0051a66b  c3                   ret 
// 0051a66c  8b1e                 mov ebx, dword ptr [esi]
// 0051a66e  8b6e04               mov ebp, dword ptr [esi + 4]
// 0051a671  0fb603               movzx eax, byte ptr [ebx]
// 0051a674  4d                   dec ebp
// 0051a675  c1e008               shl eax, 8
// 0051a678  43                   inc ebx
// 0051a679  8944240c             mov dword ptr [esp + 0xc], eax
// 0051a67d  85ed                 test ebp, ebp
// 0051a67f  7516                 jne 0x51a697
// 0051a681  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0051a684  57                   push edi
// 0051a685  ffd1                 call ecx
// 0051a687  83c404               add esp, 4
// 0051a68a  84c0                 test al, al
// 0051a68c  74d5                 je 0x51a663
// 0051a68e  8b1e                 mov ebx, dword ptr [esi]
// 0051a690  8b6e04               mov ebp, dword ptr [esi + 4]
// 0051a693  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0051a697  0fb613               movzx edx, byte ptr [ebx]
// 0051a69a  03c2                 add eax, edx
// 0051a69c  83e802               sub eax, 2
// 0051a69f  4d                   dec ebp
// 0051a6a0  43                   inc ebx
// 0051a6a1  8944240c             mov dword ptr [esp + 0xc], eax
// 0051a6a5  85c0                 test eax, eax
// 0051a6a7  0f8ec4010000         jle 0x51a871
// 0051a6ad  8d4900               lea ecx, [ecx]
// 0051a6b0  85ed                 test ebp, ebp
// 0051a6b2  7512                 jne 0x51a6c6
// 0051a6b4  8b460c               mov eax, dword ptr [esi + 0xc]
// 0051a6b7  57                   push edi
// 0051a6b8  ffd0                 call eax
// 0051a6ba  83c404               add esp, 4
// 0051a6bd  84c0                 test al, al
// 0051a6bf  74a2                 je 0x51a663
// 0051a6c1  8b1e                 mov ebx, dword ptr [esi]
// 0051a6c3  8b6e04               mov ebp, dword ptr [esi + 4]
// 0051a6c6  0fb633               movzx esi, byte ptr [ebx]
// 0051a6c9  8b0f                 mov ecx, dword ptr [edi]
// 0051a6cb  c7411451000000       mov dword ptr [ecx + 0x14], 0x51
// 0051a6d2  8b17                 mov edx, dword ptr [edi]
// 0051a6d4  8bc6                 mov eax, esi
// 0051a6d6  c1f804               sar eax, 4
// 0051a6d9  83e60f               and esi, 0xf
// 0051a6dc  897218               mov dword ptr [edx + 0x18], esi
// 0051a6df  8b0f                 mov ecx, dword ptr [edi]
// 0051a6e1  89411c               mov dword ptr [ecx + 0x1c], eax
// 0051a6e4  8b17                 mov edx, dword ptr [edi]
// 0051a6e6  8944241c             mov dword ptr [esp + 0x1c], eax
// 0051a6ea  8b4204               mov eax, dword ptr [edx + 4]
// 0051a6ed  6a01                 push 1
// 0051a6ef  57                   push edi
// 0051a6f0  4d                   dec ebp
// 0051a6f1  43                   inc ebx
// 0051a6f2  ffd0                 call eax
// 0051a6f4  83c408               add esp, 8
// 0051a6f7  83fe04               cmp esi, 4
// 0051a6fa  7c18                 jl 0x51a714
// 0051a6fc  8b0f                 mov ecx, dword ptr [edi]
// 0051a6fe  c741141f000000       mov dword ptr [ecx + 0x14], 0x1f
// 0051a705  8b17                 mov edx, dword ptr [edi]
// 0051a707  897218               mov dword ptr [edx + 0x18], esi
// 0051a70a  8b07                 mov eax, dword ptr [edi]
// 0051a70c  8b08                 mov ecx, dword ptr [eax]
// 0051a70e  57                   push edi
// 0051a70f  ffd1                 call ecx
// 0051a711  83c404               add esp, 4
// 0051a714  83bcb79000000000     cmp dword ptr [edi + esi*4 + 0x90], 0
// 0051a71c  7510                 jne 0x51a72e
// 0051a71e  57                   push edi
// 0051a71f  e8bc0f0000           call 0x51b6e0
// 0051a724  83c404               add esp, 4
// 0051a727  8984b790000000       mov dword ptr [edi + esi*4 + 0x90], eax
// 0051a72e  8b94b790000000       mov edx, dword ptr [edi + esi*4 + 0x90]
// 0051a735  89542418             mov dword ptr [esp + 0x18], edx
// 0051a739  c7442414b0b18200     mov dword ptr [esp + 0x14], 0x82b1b0
// 0051a741  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 0051a746  744c                 je 0x51a794
// 0051a748  85ed                 test ebp, ebp
// 0051a74a  751a                 jne 0x51a766
// 0051a74c  8b742410             mov esi, dword ptr [esp + 0x10]
// 0051a750  8b460c               mov eax, dword ptr [esi + 0xc]
// 0051a753  57                   push edi
// 0051a754  ffd0                 call eax
// 0051a756  83c404               add esp, 4
// 0051a759  84c0                 test al, al
// 0051a75b  0f8402ffffff         je 0x51a663
// 0051a761  8b1e                 mov ebx, dword ptr [esi]
// 0051a763  8b6e04               mov ebp, dword ptr [esi + 4]
// 0051a766  0fb633               movzx esi, byte ptr [ebx]
// 0051a769  4d                   dec ebp
// 0051a76a  c1e608               shl esi, 8
// 0051a76d  43                   inc ebx
// 0051a76e  85ed                 test ebp, ebp
// 0051a770  751b                 jne 0x51a78d
// 0051a772  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0051a776  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0051a779  57                   push edi
// 0051a77a  ffd1                 call ecx
// 0051a77c  83c404               add esp, 4
// 0051a77f  84c0                 test al, al
// 0051a781  0f84dcfeffff         je 0x51a663
// 0051a787  8b5d00               mov ebx, dword ptr [ebp]
// 0051a78a  8b6d04               mov ebp, dword ptr [ebp + 4]
// 0051a78d  0fb613               movzx edx, byte ptr [ebx]
// 0051a790  03f2                 add esi, edx
// 0051a792  eb21                 jmp 0x51a7b5
// 0051a794  85ed                 test ebp, ebp
// 0051a796  751a                 jne 0x51a7b2
// 0051a798  8b742410             mov esi, dword ptr [esp + 0x10]
// 0051a79c  8b460c               mov eax, dword ptr [esi + 0xc]
// 0051a79f  57                   push edi
// 0051a7a0  ffd0                 call eax
// 0051a7a2  83c404               add esp, 4
// 0051a7a5  84c0                 test al, al
// 0051a7a7  0f84b6feffff         je 0x51a663
// 0051a7ad  8b1e                 mov ebx, dword ptr [esi]
// 0051a7af  8b6e04               mov ebp, dword ptr [esi + 4]
// 0051a7b2  0fb633               movzx esi, byte ptr [ebx]
// 0051a7b5  8b442414             mov eax, dword ptr [esp + 0x14]
// 0051a7b9  8b08                 mov ecx, dword ptr [eax]
// 0051a7bb  8b542418             mov edx, dword ptr [esp + 0x18]
// 0051a7bf  83c004               add eax, 4
// 0051a7c2  4d                   dec ebp
// 0051a7c3  43                   inc ebx
// 0051a7c4  3db0b28200           cmp eax, 0x82b2b0
// 0051a7c9  6689344a             mov word ptr [edx + ecx*2], si
// 0051a7cd  89442414             mov dword ptr [esp + 0x14], eax
// 0051a7d1  0f8c6affffff         jl 0x51a741
// 0051a7d7  8b07                 mov eax, dword ptr [edi]
// 0051a7d9  83786802             cmp dword ptr [eax + 0x68], 2
// 0051a7dd  7c6c                 jl 0x51a84b
// 0051a7df  8bf2                 mov esi, edx
// 0051a7e1  83c604               add esi, 4
// 0051a7e4  c744241808000000     mov dword ptr [esp + 0x18], 8
// 0051a7ec  8d642400             lea esp, [esp]
// 0051a7f0  8b07                 mov eax, dword ptr [edi]
// 0051a7f2  0fb74efc             movzx ecx, word ptr [esi - 4]
// 0051a7f6  83c018               add eax, 0x18
// 0051a7f9  8908                 mov dword ptr [eax], ecx
// 0051a7fb  0fb756fe             movzx edx, word ptr [esi - 2]
// 0051a7ff  895004               mov dword ptr [eax + 4], edx
// 0051a802  0fb70e               movzx ecx, word ptr [esi]
// 0051a805  894808               mov dword ptr [eax + 8], ecx
// 0051a808  0fb75602             movzx edx, word ptr [esi + 2]
// 0051a80c  89500c               mov dword ptr [eax + 0xc], edx
// 0051a80f  0fb74e04             movzx ecx, word ptr [esi + 4]
// 0051a813  894810               mov dword ptr [eax + 0x10], ecx
// 0051a816  0fb75606             movzx edx, word ptr [esi + 6]
// 0051a81a  895014               mov dword ptr [eax + 0x14], edx
// 0051a81d  0fb74e08             movzx ecx, word ptr [esi + 8]
// 0051a821  894818               mov dword ptr [eax + 0x18], ecx
// 0051a824  0fb7560a             movzx edx, word ptr [esi + 0xa]
// 0051a828  89501c               mov dword ptr [eax + 0x1c], edx
// 0051a82b  8b07                 mov eax, dword ptr [edi]
// 0051a82d  c740145d000000       mov dword ptr [eax + 0x14], 0x5d
// 0051a834  8b0f                 mov ecx, dword ptr [edi]
// 0051a836  8b5104               mov edx, dword ptr [ecx + 4]
// 0051a839  6a02                 push 2
// 0051a83b  57                   push edi
// 0051a83c  ffd2                 call edx
// 0051a83e  83c408               add esp, 8
// 0051a841  83c610               add esi, 0x10
// 0051a844  836c241801           sub dword ptr [esp + 0x18], 1
// 0051a849  75a5                 jne 0x51a7f0
// 0051a84b  836c240c41           sub dword ptr [esp + 0xc], 0x41
// 0051a850  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 0051a855  7405                 je 0x51a85c
// 0051a857  836c240c40           sub dword ptr [esp + 0xc], 0x40
// 0051a85c  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0051a861  8b742410             mov esi, dword ptr [esp + 0x10]
// 0051a865  0f8f45feffff         jg 0x51a6b0
// 0051a86b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0051a86f  85c0                 test eax, eax
// 0051a871  7413                 je 0x51a886
// 0051a873  8b07                 mov eax, dword ptr [edi]
// 0051a875  c740140b000000       mov dword ptr [eax + 0x14], 0xb
// 0051a87c  8b0f                 mov ecx, dword ptr [edi]
// 0051a87e  8b11                 mov edx, dword ptr [ecx]
// 0051a880  57                   push edi
// 0051a881  ffd2                 call edx
// 0051a883  83c404               add esp, 4
// 0051a886  891e                 mov dword ptr [esi], ebx
// 0051a888  896e04               mov dword ptr [esi + 4], ebp
// 0051a88b  5e                   pop esi
// 0051a88c  5d                   pop ebp
// 0051a88d  b001                 mov al, 1
// 0051a88f  5b                   pop ebx
// 0051a890  83c414               add esp, 0x14
// 0051a893  c3                   ret 
// library jpeg-6b/jdmarker.c (function _get_dqt)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
