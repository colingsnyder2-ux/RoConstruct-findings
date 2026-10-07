// roc 2012-06 00642d80  unit: G3D::Sphere  size: 596 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00642d80
//
// 00642d80  83ec14               sub esp, 0x14
// 00642d83  53                   push ebx
// 00642d84  55                   push ebp
// 00642d85  56                   push esi
// 00642d86  8b7718               mov esi, dword ptr [edi + 0x18]
// 00642d89  8b6e04               mov ebp, dword ptr [esi + 4]
// 00642d8c  8b1e                 mov ebx, dword ptr [esi]
// 00642d8e  89742410             mov dword ptr [esp + 0x10], esi
// 00642d92  85ed                 test ebp, ebp
// 00642d94  751b                 jne 0x642db1
// 00642d96  8b460c               mov eax, dword ptr [esi + 0xc]
// 00642d99  57                   push edi
// 00642d9a  ffd0                 call eax
// 00642d9c  83c404               add esp, 4
// 00642d9f  84c0                 test al, al
// 00642da1  7509                 jne 0x642dac
// 00642da3  5e                   pop esi
// 00642da4  5d                   pop ebp
// 00642da5  32c0                 xor al, al
// 00642da7  5b                   pop ebx
// 00642da8  83c414               add esp, 0x14
// 00642dab  c3                   ret 
// 00642dac  8b1e                 mov ebx, dword ptr [esi]
// 00642dae  8b6e04               mov ebp, dword ptr [esi + 4]
// 00642db1  0fb603               movzx eax, byte ptr [ebx]
// 00642db4  4d                   dec ebp
// 00642db5  c1e008               shl eax, 8
// 00642db8  43                   inc ebx
// 00642db9  8944240c             mov dword ptr [esp + 0xc], eax
// 00642dbd  85ed                 test ebp, ebp
// 00642dbf  7516                 jne 0x642dd7
// 00642dc1  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00642dc4  57                   push edi
// 00642dc5  ffd1                 call ecx
// 00642dc7  83c404               add esp, 4
// 00642dca  84c0                 test al, al
// 00642dcc  74d5                 je 0x642da3
// 00642dce  8b1e                 mov ebx, dword ptr [esi]
// 00642dd0  8b6e04               mov ebp, dword ptr [esi + 4]
// 00642dd3  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00642dd7  0fb613               movzx edx, byte ptr [ebx]
// 00642dda  03c2                 add eax, edx
// 00642ddc  83e802               sub eax, 2
// 00642ddf  4d                   dec ebp
// 00642de0  43                   inc ebx
// 00642de1  8944240c             mov dword ptr [esp + 0xc], eax
// 00642de5  85c0                 test eax, eax
// 00642de7  0f8ec4010000         jle 0x642fb1
// 00642ded  8d4900               lea ecx, [ecx]
// 00642df0  85ed                 test ebp, ebp
// 00642df2  7512                 jne 0x642e06
// 00642df4  8b460c               mov eax, dword ptr [esi + 0xc]
// 00642df7  57                   push edi
// 00642df8  ffd0                 call eax
// 00642dfa  83c404               add esp, 4
// 00642dfd  84c0                 test al, al
// 00642dff  74a2                 je 0x642da3
// 00642e01  8b1e                 mov ebx, dword ptr [esi]
// 00642e03  8b6e04               mov ebp, dword ptr [esi + 4]
// 00642e06  0fb633               movzx esi, byte ptr [ebx]
// 00642e09  8b0f                 mov ecx, dword ptr [edi]
// 00642e0b  c7411451000000       mov dword ptr [ecx + 0x14], 0x51
// 00642e12  8b17                 mov edx, dword ptr [edi]
// 00642e14  8bc6                 mov eax, esi
// 00642e16  c1f804               sar eax, 4
// 00642e19  83e60f               and esi, 0xf
// 00642e1c  897218               mov dword ptr [edx + 0x18], esi
// 00642e1f  8b0f                 mov ecx, dword ptr [edi]
// 00642e21  89411c               mov dword ptr [ecx + 0x1c], eax
// 00642e24  8b17                 mov edx, dword ptr [edi]
// 00642e26  8944241c             mov dword ptr [esp + 0x1c], eax
// 00642e2a  8b4204               mov eax, dword ptr [edx + 4]
// 00642e2d  6a01                 push 1
// 00642e2f  57                   push edi
// 00642e30  4d                   dec ebp
// 00642e31  43                   inc ebx
// 00642e32  ffd0                 call eax
// 00642e34  83c408               add esp, 8
// 00642e37  83fe04               cmp esi, 4
// 00642e3a  7c18                 jl 0x642e54
// 00642e3c  8b0f                 mov ecx, dword ptr [edi]
// 00642e3e  c741141f000000       mov dword ptr [ecx + 0x14], 0x1f
// 00642e45  8b17                 mov edx, dword ptr [edi]
// 00642e47  897218               mov dword ptr [edx + 0x18], esi
// 00642e4a  8b07                 mov eax, dword ptr [edi]
// 00642e4c  8b08                 mov ecx, dword ptr [eax]
// 00642e4e  57                   push edi
// 00642e4f  ffd1                 call ecx
// 00642e51  83c404               add esp, 4
// 00642e54  83bcb79000000000     cmp dword ptr [edi + esi*4 + 0x90], 0
// 00642e5c  7510                 jne 0x642e6e
// 00642e5e  57                   push edi
// 00642e5f  e80c060100           call 0x653470
// 00642e64  83c404               add esp, 4
// 00642e67  8984b790000000       mov dword ptr [edi + esi*4 + 0x90], eax
// 00642e6e  8b94b790000000       mov edx, dword ptr [edi + esi*4 + 0x90]
// 00642e75  89542418             mov dword ptr [esp + 0x18], edx
// 00642e79  c74424144097b800     mov dword ptr [esp + 0x14], 0xb89740
// 00642e81  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 00642e86  744c                 je 0x642ed4
// 00642e88  85ed                 test ebp, ebp
// 00642e8a  751a                 jne 0x642ea6
// 00642e8c  8b742410             mov esi, dword ptr [esp + 0x10]
// 00642e90  8b460c               mov eax, dword ptr [esi + 0xc]
// 00642e93  57                   push edi
// 00642e94  ffd0                 call eax
// 00642e96  83c404               add esp, 4
// 00642e99  84c0                 test al, al
// 00642e9b  0f8402ffffff         je 0x642da3
// 00642ea1  8b1e                 mov ebx, dword ptr [esi]
// 00642ea3  8b6e04               mov ebp, dword ptr [esi + 4]
// 00642ea6  0fb633               movzx esi, byte ptr [ebx]
// 00642ea9  4d                   dec ebp
// 00642eaa  c1e608               shl esi, 8
// 00642ead  43                   inc ebx
// 00642eae  85ed                 test ebp, ebp
// 00642eb0  751b                 jne 0x642ecd
// 00642eb2  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00642eb6  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00642eb9  57                   push edi
// 00642eba  ffd1                 call ecx
// 00642ebc  83c404               add esp, 4
// 00642ebf  84c0                 test al, al
// 00642ec1  0f84dcfeffff         je 0x642da3
// 00642ec7  8b5d00               mov ebx, dword ptr [ebp]
// 00642eca  8b6d04               mov ebp, dword ptr [ebp + 4]
// 00642ecd  0fb613               movzx edx, byte ptr [ebx]
// 00642ed0  03f2                 add esi, edx
// 00642ed2  eb21                 jmp 0x642ef5
// 00642ed4  85ed                 test ebp, ebp
// 00642ed6  751a                 jne 0x642ef2
// 00642ed8  8b742410             mov esi, dword ptr [esp + 0x10]
// 00642edc  8b460c               mov eax, dword ptr [esi + 0xc]
// 00642edf  57                   push edi
// 00642ee0  ffd0                 call eax
// 00642ee2  83c404               add esp, 4
// 00642ee5  84c0                 test al, al
// 00642ee7  0f84b6feffff         je 0x642da3
// 00642eed  8b1e                 mov ebx, dword ptr [esi]
// 00642eef  8b6e04               mov ebp, dword ptr [esi + 4]
// 00642ef2  0fb633               movzx esi, byte ptr [ebx]
// 00642ef5  8b442414             mov eax, dword ptr [esp + 0x14]
// 00642ef9  8b08                 mov ecx, dword ptr [eax]
// 00642efb  8b542418             mov edx, dword ptr [esp + 0x18]
// 00642eff  83c004               add eax, 4
// 00642f02  4d                   dec ebp
// 00642f03  43                   inc ebx
// 00642f04  3d4098b800           cmp eax, 0xb89840
// 00642f09  6689344a             mov word ptr [edx + ecx*2], si
// 00642f0d  89442414             mov dword ptr [esp + 0x14], eax
// 00642f11  0f8c6affffff         jl 0x642e81
// 00642f17  8b07                 mov eax, dword ptr [edi]
// 00642f19  83786802             cmp dword ptr [eax + 0x68], 2
// 00642f1d  7c6c                 jl 0x642f8b
// 00642f1f  8bf2                 mov esi, edx
// 00642f21  83c604               add esi, 4
// 00642f24  c744241808000000     mov dword ptr [esp + 0x18], 8
// 00642f2c  8d642400             lea esp, [esp]
// 00642f30  8b07                 mov eax, dword ptr [edi]
// 00642f32  0fb74efc             movzx ecx, word ptr [esi - 4]
// 00642f36  83c018               add eax, 0x18
// 00642f39  8908                 mov dword ptr [eax], ecx
// 00642f3b  0fb756fe             movzx edx, word ptr [esi - 2]
// 00642f3f  895004               mov dword ptr [eax + 4], edx
// 00642f42  0fb70e               movzx ecx, word ptr [esi]
// 00642f45  894808               mov dword ptr [eax + 8], ecx
// 00642f48  0fb75602             movzx edx, word ptr [esi + 2]
// 00642f4c  89500c               mov dword ptr [eax + 0xc], edx
// 00642f4f  0fb74e04             movzx ecx, word ptr [esi + 4]
// 00642f53  894810               mov dword ptr [eax + 0x10], ecx
// 00642f56  0fb75606             movzx edx, word ptr [esi + 6]
// 00642f5a  895014               mov dword ptr [eax + 0x14], edx
// 00642f5d  0fb74e08             movzx ecx, word ptr [esi + 8]
// 00642f61  894818               mov dword ptr [eax + 0x18], ecx
// 00642f64  0fb7560a             movzx edx, word ptr [esi + 0xa]
// 00642f68  89501c               mov dword ptr [eax + 0x1c], edx
// 00642f6b  8b07                 mov eax, dword ptr [edi]
// 00642f6d  c740145d000000       mov dword ptr [eax + 0x14], 0x5d
// 00642f74  8b0f                 mov ecx, dword ptr [edi]
// 00642f76  8b5104               mov edx, dword ptr [ecx + 4]
// 00642f79  6a02                 push 2
// 00642f7b  57                   push edi
// 00642f7c  ffd2                 call edx
// 00642f7e  83c408               add esp, 8
// 00642f81  83c610               add esi, 0x10
// 00642f84  836c241801           sub dword ptr [esp + 0x18], 1
// 00642f89  75a5                 jne 0x642f30
// 00642f8b  836c240c41           sub dword ptr [esp + 0xc], 0x41
// 00642f90  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 00642f95  7405                 je 0x642f9c
// 00642f97  836c240c40           sub dword ptr [esp + 0xc], 0x40
// 00642f9c  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00642fa1  8b742410             mov esi, dword ptr [esp + 0x10]
// 00642fa5  0f8f45feffff         jg 0x642df0
// 00642fab  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00642faf  85c0                 test eax, eax
// 00642fb1  7413                 je 0x642fc6
// 00642fb3  8b07                 mov eax, dword ptr [edi]
// 00642fb5  c740140b000000       mov dword ptr [eax + 0x14], 0xb
// 00642fbc  8b0f                 mov ecx, dword ptr [edi]
// 00642fbe  8b11                 mov edx, dword ptr [ecx]
// 00642fc0  57                   push edi
// 00642fc1  ffd2                 call edx
// 00642fc3  83c404               add esp, 4
// 00642fc6  891e                 mov dword ptr [esi], ebx
// 00642fc8  896e04               mov dword ptr [esi + 4], ebp
// 00642fcb  5e                   pop esi
// 00642fcc  5d                   pop ebp
// 00642fcd  b001                 mov al, 1
// 00642fcf  5b                   pop ebx
// 00642fd0  83c414               add esp, 0x14
// 00642fd3  c3                   ret 
// library jpeg-6b/jdmarker.c (function _get_dqt)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
