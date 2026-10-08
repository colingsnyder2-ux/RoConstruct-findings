// roc 2007-03 00506f60  unit: seg_00500000  size: 628 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00506f60
//
// 00506f60  83ec18               sub esp, 0x18
// 00506f63  53                   push ebx
// 00506f64  55                   push ebp
// 00506f65  56                   push esi
// 00506f66  8b7718               mov esi, dword ptr [edi + 0x18]
// 00506f69  8b6e04               mov ebp, dword ptr [esi + 4]
// 00506f6c  85ed                 test ebp, ebp
// 00506f6e  8b1e                 mov ebx, dword ptr [esi]
// 00506f70  89742410             mov dword ptr [esp + 0x10], esi
// 00506f74  751b                 jne 0x506f91
// 00506f76  8b460c               mov eax, dword ptr [esi + 0xc]
// 00506f79  57                   push edi
// 00506f7a  ffd0                 call eax
// 00506f7c  83c404               add esp, 4
// 00506f7f  84c0                 test al, al
// 00506f81  7509                 jne 0x506f8c
// 00506f83  5e                   pop esi
// 00506f84  5d                   pop ebp
// 00506f85  32c0                 xor al, al
// 00506f87  5b                   pop ebx
// 00506f88  83c418               add esp, 0x18
// 00506f8b  c3                   ret 
// 00506f8c  8b1e                 mov ebx, dword ptr [esi]
// 00506f8e  8b6e04               mov ebp, dword ptr [esi + 4]
// 00506f91  33c0                 xor eax, eax
// 00506f93  8a23                 mov ah, byte ptr [ebx]
// 00506f95  83ed01               sub ebp, 1
// 00506f98  83c301               add ebx, 1
// 00506f9b  85ed                 test ebp, ebp
// 00506f9d  8944240c             mov dword ptr [esp + 0xc], eax
// 00506fa1  7516                 jne 0x506fb9
// 00506fa3  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00506fa6  57                   push edi
// 00506fa7  ffd1                 call ecx
// 00506fa9  83c404               add esp, 4
// 00506fac  84c0                 test al, al
// 00506fae  74d3                 je 0x506f83
// 00506fb0  8b1e                 mov ebx, dword ptr [esi]
// 00506fb2  8b6e04               mov ebp, dword ptr [esi + 4]
// 00506fb5  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00506fb9  0fb613               movzx edx, byte ptr [ebx]
// 00506fbc  03c2                 add eax, edx
// 00506fbe  83e802               sub eax, 2
// 00506fc1  83ed01               sub ebp, 1
// 00506fc4  83c301               add ebx, 1
// 00506fc7  85c0                 test eax, eax
// 00506fc9  8944240c             mov dword ptr [esp + 0xc], eax
// 00506fcd  0f8ede010000         jle 0x5071b1
// 00506fd3  85ed                 test ebp, ebp
// 00506fd5  7512                 jne 0x506fe9
// 00506fd7  8b460c               mov eax, dword ptr [esi + 0xc]
// 00506fda  57                   push edi
// 00506fdb  ffd0                 call eax
// 00506fdd  83c404               add esp, 4
// 00506fe0  84c0                 test al, al
// 00506fe2  749f                 je 0x506f83
// 00506fe4  8b1e                 mov ebx, dword ptr [esi]
// 00506fe6  8b6e04               mov ebp, dword ptr [esi + 4]
// 00506fe9  0fb633               movzx esi, byte ptr [ebx]
// 00506fec  8b0f                 mov ecx, dword ptr [edi]
// 00506fee  c7411451000000       mov dword ptr [ecx + 0x14], 0x51
// 00506ff5  8b17                 mov edx, dword ptr [edi]
// 00506ff7  8bc6                 mov eax, esi
// 00506ff9  c1f804               sar eax, 4
// 00506ffc  83e60f               and esi, 0xf
// 00506fff  897218               mov dword ptr [edx + 0x18], esi
// 00507002  8b0f                 mov ecx, dword ptr [edi]
// 00507004  89411c               mov dword ptr [ecx + 0x1c], eax
// 00507007  8b17                 mov edx, dword ptr [edi]
// 00507009  8944241c             mov dword ptr [esp + 0x1c], eax
// 0050700d  8b4204               mov eax, dword ptr [edx + 4]
// 00507010  6a01                 push 1
// 00507012  57                   push edi
// 00507013  83ed01               sub ebp, 1
// 00507016  83c301               add ebx, 1
// 00507019  ffd0                 call eax
// 0050701b  83c408               add esp, 8
// 0050701e  83fe04               cmp esi, 4
// 00507021  7c18                 jl 0x50703b
// 00507023  8b0f                 mov ecx, dword ptr [edi]
// 00507025  c741141f000000       mov dword ptr [ecx + 0x14], 0x1f
// 0050702c  8b17                 mov edx, dword ptr [edi]
// 0050702e  897218               mov dword ptr [edx + 0x18], esi
// 00507031  8b07                 mov eax, dword ptr [edi]
// 00507033  8b08                 mov ecx, dword ptr [eax]
// 00507035  57                   push edi
// 00507036  ffd1                 call ecx
// 00507038  83c404               add esp, 4
// 0050703b  83bcb79000000000     cmp dword ptr [edi + esi*4 + 0x90], 0
// 00507043  7510                 jne 0x507055
// 00507045  57                   push edi
// 00507046  e8b5de0000           call 0x514f00
// 0050704b  83c404               add esp, 4
// 0050704e  8984b790000000       mov dword ptr [edi + esi*4 + 0x90], eax
// 00507055  8b94b790000000       mov edx, dword ptr [edi + esi*4 + 0x90]
// 0050705c  be202c7a00           mov esi, 0x7a2c20
// 00507061  89542420             mov dword ptr [esp + 0x20], edx
// 00507065  89742418             mov dword ptr [esp + 0x18], esi
// 00507069  8da42400000000       lea esp, [esp]
// 00507070  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 00507075  7453                 je 0x5070ca
// 00507077  85ed                 test ebp, ebp
// 00507079  8b742410             mov esi, dword ptr [esp + 0x10]
// 0050707d  7516                 jne 0x507095
// 0050707f  8b460c               mov eax, dword ptr [esi + 0xc]
// 00507082  57                   push edi
// 00507083  ffd0                 call eax
// 00507085  83c404               add esp, 4
// 00507088  84c0                 test al, al
// 0050708a  0f84f3feffff         je 0x506f83
// 00507090  8b1e                 mov ebx, dword ptr [esi]
// 00507092  8b6e04               mov ebp, dword ptr [esi + 4]
// 00507095  33c9                 xor ecx, ecx
// 00507097  8a2b                 mov ch, byte ptr [ebx]
// 00507099  83ed01               sub ebp, 1
// 0050709c  83c301               add ebx, 1
// 0050709f  85ed                 test ebp, ebp
// 005070a1  894c2414             mov dword ptr [esp + 0x14], ecx
// 005070a5  7516                 jne 0x5070bd
// 005070a7  8b560c               mov edx, dword ptr [esi + 0xc]
// 005070aa  57                   push edi
// 005070ab  ffd2                 call edx
// 005070ad  83c404               add esp, 4
// 005070b0  84c0                 test al, al
// 005070b2  0f84cbfeffff         je 0x506f83
// 005070b8  8b1e                 mov ebx, dword ptr [esi]
// 005070ba  8b6e04               mov ebp, dword ptr [esi + 4]
// 005070bd  0fb603               movzx eax, byte ptr [ebx]
// 005070c0  01442414             add dword ptr [esp + 0x14], eax
// 005070c4  8b742418             mov esi, dword ptr [esp + 0x18]
// 005070c8  eb26                 jmp 0x5070f0
// 005070ca  85ed                 test ebp, ebp
// 005070cc  751b                 jne 0x5070e9
// 005070ce  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 005070d2  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005070d5  57                   push edi
// 005070d6  ffd1                 call ecx
// 005070d8  83c404               add esp, 4
// 005070db  84c0                 test al, al
// 005070dd  0f84a0feffff         je 0x506f83
// 005070e3  8b5d00               mov ebx, dword ptr [ebp]
// 005070e6  8b6d04               mov ebp, dword ptr [ebp + 4]
// 005070e9  0fb613               movzx edx, byte ptr [ebx]
// 005070ec  89542414             mov dword ptr [esp + 0x14], edx
// 005070f0  8b0e                 mov ecx, dword ptr [esi]
// 005070f2  668b542414           mov dx, word ptr [esp + 0x14]
// 005070f7  8b442420             mov eax, dword ptr [esp + 0x20]
// 005070fb  83c604               add esi, 4
// 005070fe  83ed01               sub ebp, 1
// 00507101  83c301               add ebx, 1
// 00507104  81fe202d7a00         cmp esi, 0x7a2d20
// 0050710a  66891448             mov word ptr [eax + ecx*2], dx
// 0050710e  89742418             mov dword ptr [esp + 0x18], esi
// 00507112  0f8c58ffffff         jl 0x507070
// 00507118  8b0f                 mov ecx, dword ptr [edi]
// 0050711a  83796802             cmp dword ptr [ecx + 0x68], 2
// 0050711e  7c6b                 jl 0x50718b
// 00507120  8d7004               lea esi, [eax + 4]
// 00507123  c744241808000000     mov dword ptr [esp + 0x18], 8
// 0050712b  eb03                 jmp 0x507130
// 0050712d  8d4900               lea ecx, [ecx]
// 00507130  8b07                 mov eax, dword ptr [edi]
// 00507132  0fb756fc             movzx edx, word ptr [esi - 4]
// 00507136  83c018               add eax, 0x18
// 00507139  8910                 mov dword ptr [eax], edx
// 0050713b  0fb74efe             movzx ecx, word ptr [esi - 2]
// 0050713f  894804               mov dword ptr [eax + 4], ecx
// 00507142  0fb716               movzx edx, word ptr [esi]
// 00507145  895008               mov dword ptr [eax + 8], edx
// 00507148  0fb74e02             movzx ecx, word ptr [esi + 2]
// 0050714c  89480c               mov dword ptr [eax + 0xc], ecx
// 0050714f  0fb75604             movzx edx, word ptr [esi + 4]
// 00507153  895010               mov dword ptr [eax + 0x10], edx
// 00507156  0fb74e06             movzx ecx, word ptr [esi + 6]
// 0050715a  894814               mov dword ptr [eax + 0x14], ecx
// 0050715d  0fb75608             movzx edx, word ptr [esi + 8]
// 00507161  895018               mov dword ptr [eax + 0x18], edx
// 00507164  0fb74e0a             movzx ecx, word ptr [esi + 0xa]
// 00507168  89481c               mov dword ptr [eax + 0x1c], ecx
// 0050716b  8b17                 mov edx, dword ptr [edi]
// 0050716d  c742145d000000       mov dword ptr [edx + 0x14], 0x5d
// 00507174  8b07                 mov eax, dword ptr [edi]
// 00507176  8b4804               mov ecx, dword ptr [eax + 4]
// 00507179  6a02                 push 2
// 0050717b  57                   push edi
// 0050717c  ffd1                 call ecx
// 0050717e  83c408               add esp, 8
// 00507181  83c610               add esi, 0x10
// 00507184  836c241801           sub dword ptr [esp + 0x18], 1
// 00507189  75a5                 jne 0x507130
// 0050718b  836c240c41           sub dword ptr [esp + 0xc], 0x41
// 00507190  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 00507195  7405                 je 0x50719c
// 00507197  836c240c40           sub dword ptr [esp + 0xc], 0x40
// 0050719c  837c240c00           cmp dword ptr [esp + 0xc], 0
// 005071a1  8b742410             mov esi, dword ptr [esp + 0x10]
// 005071a5  0f8f28feffff         jg 0x506fd3
// 005071ab  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005071af  85c0                 test eax, eax
// 005071b1  7413                 je 0x5071c6
// 005071b3  8b17                 mov edx, dword ptr [edi]
// 005071b5  c742140b000000       mov dword ptr [edx + 0x14], 0xb
// 005071bc  8b07                 mov eax, dword ptr [edi]
// 005071be  8b08                 mov ecx, dword ptr [eax]
// 005071c0  57                   push edi
// 005071c1  ffd1                 call ecx
// 005071c3  83c404               add esp, 4
// 005071c6  891e                 mov dword ptr [esi], ebx
// 005071c8  896e04               mov dword ptr [esi + 4], ebp
// 005071cb  5e                   pop esi
// 005071cc  5d                   pop ebp
// 005071cd  b001                 mov al, 1
// 005071cf  5b                   pop ebx
// 005071d0  83c418               add esp, 0x18
// 005071d3  c3                   ret 
// library jpeg-6b/jdmarker.c (function _get_dqt)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
