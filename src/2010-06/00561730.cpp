// roc 2010-06 00561730  unit: G3D::_internal::DialogTemplate  size: 596 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00561730
//
// 00561730  83ec14               sub esp, 0x14
// 00561733  53                   push ebx
// 00561734  55                   push ebp
// 00561735  56                   push esi
// 00561736  8b7718               mov esi, dword ptr [edi + 0x18]
// 00561739  8b6e04               mov ebp, dword ptr [esi + 4]
// 0056173c  8b1e                 mov ebx, dword ptr [esi]
// 0056173e  89742410             mov dword ptr [esp + 0x10], esi
// 00561742  85ed                 test ebp, ebp
// 00561744  751b                 jne 0x561761
// 00561746  8b460c               mov eax, dword ptr [esi + 0xc]
// 00561749  57                   push edi
// 0056174a  ffd0                 call eax
// 0056174c  83c404               add esp, 4
// 0056174f  84c0                 test al, al
// 00561751  7509                 jne 0x56175c
// 00561753  5e                   pop esi
// 00561754  5d                   pop ebp
// 00561755  32c0                 xor al, al
// 00561757  5b                   pop ebx
// 00561758  83c414               add esp, 0x14
// 0056175b  c3                   ret 
// 0056175c  8b1e                 mov ebx, dword ptr [esi]
// 0056175e  8b6e04               mov ebp, dword ptr [esi + 4]
// 00561761  0fb603               movzx eax, byte ptr [ebx]
// 00561764  4d                   dec ebp
// 00561765  c1e008               shl eax, 8
// 00561768  43                   inc ebx
// 00561769  8944240c             mov dword ptr [esp + 0xc], eax
// 0056176d  85ed                 test ebp, ebp
// 0056176f  7516                 jne 0x561787
// 00561771  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00561774  57                   push edi
// 00561775  ffd1                 call ecx
// 00561777  83c404               add esp, 4
// 0056177a  84c0                 test al, al
// 0056177c  74d5                 je 0x561753
// 0056177e  8b1e                 mov ebx, dword ptr [esi]
// 00561780  8b6e04               mov ebp, dword ptr [esi + 4]
// 00561783  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00561787  0fb613               movzx edx, byte ptr [ebx]
// 0056178a  03c2                 add eax, edx
// 0056178c  83e802               sub eax, 2
// 0056178f  4d                   dec ebp
// 00561790  43                   inc ebx
// 00561791  8944240c             mov dword ptr [esp + 0xc], eax
// 00561795  85c0                 test eax, eax
// 00561797  0f8ec4010000         jle 0x561961
// 0056179d  8d4900               lea ecx, [ecx]
// 005617a0  85ed                 test ebp, ebp
// 005617a2  7512                 jne 0x5617b6
// 005617a4  8b460c               mov eax, dword ptr [esi + 0xc]
// 005617a7  57                   push edi
// 005617a8  ffd0                 call eax
// 005617aa  83c404               add esp, 4
// 005617ad  84c0                 test al, al
// 005617af  74a2                 je 0x561753
// 005617b1  8b1e                 mov ebx, dword ptr [esi]
// 005617b3  8b6e04               mov ebp, dword ptr [esi + 4]
// 005617b6  0fb633               movzx esi, byte ptr [ebx]
// 005617b9  8b0f                 mov ecx, dword ptr [edi]
// 005617bb  c7411451000000       mov dword ptr [ecx + 0x14], 0x51
// 005617c2  8b17                 mov edx, dword ptr [edi]
// 005617c4  8bc6                 mov eax, esi
// 005617c6  c1f804               sar eax, 4
// 005617c9  83e60f               and esi, 0xf
// 005617cc  897218               mov dword ptr [edx + 0x18], esi
// 005617cf  8b0f                 mov ecx, dword ptr [edi]
// 005617d1  89411c               mov dword ptr [ecx + 0x1c], eax
// 005617d4  8b17                 mov edx, dword ptr [edi]
// 005617d6  8944241c             mov dword ptr [esp + 0x1c], eax
// 005617da  8b4204               mov eax, dword ptr [edx + 4]
// 005617dd  6a01                 push 1
// 005617df  57                   push edi
// 005617e0  4d                   dec ebp
// 005617e1  43                   inc ebx
// 005617e2  ffd0                 call eax
// 005617e4  83c408               add esp, 8
// 005617e7  83fe04               cmp esi, 4
// 005617ea  7c18                 jl 0x561804
// 005617ec  8b0f                 mov ecx, dword ptr [edi]
// 005617ee  c741141f000000       mov dword ptr [ecx + 0x14], 0x1f
// 005617f5  8b17                 mov edx, dword ptr [edi]
// 005617f7  897218               mov dword ptr [edx + 0x18], esi
// 005617fa  8b07                 mov eax, dword ptr [edi]
// 005617fc  8b08                 mov ecx, dword ptr [eax]
// 005617fe  57                   push edi
// 005617ff  ffd1                 call ecx
// 00561801  83c404               add esp, 4
// 00561804  83bcb79000000000     cmp dword ptr [edi + esi*4 + 0x90], 0
// 0056180c  7510                 jne 0x56181e
// 0056180e  57                   push edi
// 0056180f  e8bc0f0000           call 0x5627d0
// 00561814  83c404               add esp, 4
// 00561817  8984b790000000       mov dword ptr [edi + esi*4 + 0x90], eax
// 0056181e  8b94b790000000       mov edx, dword ptr [edi + esi*4 + 0x90]
// 00561825  89542418             mov dword ptr [esp + 0x18], edx
// 00561829  c7442414f834a200     mov dword ptr [esp + 0x14], 0xa234f8
// 00561831  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 00561836  744c                 je 0x561884
// 00561838  85ed                 test ebp, ebp
// 0056183a  751a                 jne 0x561856
// 0056183c  8b742410             mov esi, dword ptr [esp + 0x10]
// 00561840  8b460c               mov eax, dword ptr [esi + 0xc]
// 00561843  57                   push edi
// 00561844  ffd0                 call eax
// 00561846  83c404               add esp, 4
// 00561849  84c0                 test al, al
// 0056184b  0f8402ffffff         je 0x561753
// 00561851  8b1e                 mov ebx, dword ptr [esi]
// 00561853  8b6e04               mov ebp, dword ptr [esi + 4]
// 00561856  0fb633               movzx esi, byte ptr [ebx]
// 00561859  4d                   dec ebp
// 0056185a  c1e608               shl esi, 8
// 0056185d  43                   inc ebx
// 0056185e  85ed                 test ebp, ebp
// 00561860  751b                 jne 0x56187d
// 00561862  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00561866  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00561869  57                   push edi
// 0056186a  ffd1                 call ecx
// 0056186c  83c404               add esp, 4
// 0056186f  84c0                 test al, al
// 00561871  0f84dcfeffff         je 0x561753
// 00561877  8b5d00               mov ebx, dword ptr [ebp]
// 0056187a  8b6d04               mov ebp, dword ptr [ebp + 4]
// 0056187d  0fb613               movzx edx, byte ptr [ebx]
// 00561880  03f2                 add esi, edx
// 00561882  eb21                 jmp 0x5618a5
// 00561884  85ed                 test ebp, ebp
// 00561886  751a                 jne 0x5618a2
// 00561888  8b742410             mov esi, dword ptr [esp + 0x10]
// 0056188c  8b460c               mov eax, dword ptr [esi + 0xc]
// 0056188f  57                   push edi
// 00561890  ffd0                 call eax
// 00561892  83c404               add esp, 4
// 00561895  84c0                 test al, al
// 00561897  0f84b6feffff         je 0x561753
// 0056189d  8b1e                 mov ebx, dword ptr [esi]
// 0056189f  8b6e04               mov ebp, dword ptr [esi + 4]
// 005618a2  0fb633               movzx esi, byte ptr [ebx]
// 005618a5  8b442414             mov eax, dword ptr [esp + 0x14]
// 005618a9  8b08                 mov ecx, dword ptr [eax]
// 005618ab  8b542418             mov edx, dword ptr [esp + 0x18]
// 005618af  83c004               add eax, 4
// 005618b2  4d                   dec ebp
// 005618b3  43                   inc ebx
// 005618b4  3df835a200           cmp eax, 0xa235f8
// 005618b9  6689344a             mov word ptr [edx + ecx*2], si
// 005618bd  89442414             mov dword ptr [esp + 0x14], eax
// 005618c1  0f8c6affffff         jl 0x561831
// 005618c7  8b07                 mov eax, dword ptr [edi]
// 005618c9  83786802             cmp dword ptr [eax + 0x68], 2
// 005618cd  7c6c                 jl 0x56193b
// 005618cf  8bf2                 mov esi, edx
// 005618d1  83c604               add esi, 4
// 005618d4  c744241808000000     mov dword ptr [esp + 0x18], 8
// 005618dc  8d642400             lea esp, [esp]
// 005618e0  8b07                 mov eax, dword ptr [edi]
// 005618e2  0fb74efc             movzx ecx, word ptr [esi - 4]
// 005618e6  83c018               add eax, 0x18
// 005618e9  8908                 mov dword ptr [eax], ecx
// 005618eb  0fb756fe             movzx edx, word ptr [esi - 2]
// 005618ef  895004               mov dword ptr [eax + 4], edx
// 005618f2  0fb70e               movzx ecx, word ptr [esi]
// 005618f5  894808               mov dword ptr [eax + 8], ecx
// 005618f8  0fb75602             movzx edx, word ptr [esi + 2]
// 005618fc  89500c               mov dword ptr [eax + 0xc], edx
// 005618ff  0fb74e04             movzx ecx, word ptr [esi + 4]
// 00561903  894810               mov dword ptr [eax + 0x10], ecx
// 00561906  0fb75606             movzx edx, word ptr [esi + 6]
// 0056190a  895014               mov dword ptr [eax + 0x14], edx
// 0056190d  0fb74e08             movzx ecx, word ptr [esi + 8]
// 00561911  894818               mov dword ptr [eax + 0x18], ecx
// 00561914  0fb7560a             movzx edx, word ptr [esi + 0xa]
// 00561918  89501c               mov dword ptr [eax + 0x1c], edx
// 0056191b  8b07                 mov eax, dword ptr [edi]
// 0056191d  c740145d000000       mov dword ptr [eax + 0x14], 0x5d
// 00561924  8b0f                 mov ecx, dword ptr [edi]
// 00561926  8b5104               mov edx, dword ptr [ecx + 4]
// 00561929  6a02                 push 2
// 0056192b  57                   push edi
// 0056192c  ffd2                 call edx
// 0056192e  83c408               add esp, 8
// 00561931  83c610               add esi, 0x10
// 00561934  836c241801           sub dword ptr [esp + 0x18], 1
// 00561939  75a5                 jne 0x5618e0
// 0056193b  836c240c41           sub dword ptr [esp + 0xc], 0x41
// 00561940  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 00561945  7405                 je 0x56194c
// 00561947  836c240c40           sub dword ptr [esp + 0xc], 0x40
// 0056194c  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00561951  8b742410             mov esi, dword ptr [esp + 0x10]
// 00561955  0f8f45feffff         jg 0x5617a0
// 0056195b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0056195f  85c0                 test eax, eax
// 00561961  7413                 je 0x561976
// 00561963  8b07                 mov eax, dword ptr [edi]
// 00561965  c740140b000000       mov dword ptr [eax + 0x14], 0xb
// 0056196c  8b0f                 mov ecx, dword ptr [edi]
// 0056196e  8b11                 mov edx, dword ptr [ecx]
// 00561970  57                   push edi
// 00561971  ffd2                 call edx
// 00561973  83c404               add esp, 4
// 00561976  891e                 mov dword ptr [esi], ebx
// 00561978  896e04               mov dword ptr [esi + 4], ebp
// 0056197b  5e                   pop esi
// 0056197c  5d                   pop ebp
// 0056197d  b001                 mov al, 1
// 0056197f  5b                   pop ebx
// 00561980  83c414               add esp, 0x14
// 00561983  c3                   ret 
// library jpeg-6b/jdmarker.c (function _get_dqt)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
