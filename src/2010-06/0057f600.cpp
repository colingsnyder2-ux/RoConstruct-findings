// roc 2010-06 0057f600  unit: seg_00570000  size: 1523 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0057f600
//
// 0057f600  81ec00010000         sub esp, 0x100
// 0057f606  56                   push esi
// 0057f607  8bb42408010000       mov esi, dword ptr [esp + 0x108]
// 0057f60e  8b8688010000         mov eax, dword ptr [esi + 0x188]
// 0057f614  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 0057f617  89442458             mov dword ptr [esp + 0x58], eax
// 0057f61b  8b861c010000         mov eax, dword ptr [esi + 0x11c]
// 0057f621  48                   dec eax
// 0057f622  3b8e84000000         cmp ecx, dword ptr [esi + 0x84]
// 0057f628  89442478             mov dword ptr [esp + 0x78], eax
// 0057f62c  7f4d                 jg 0x57f67b
// 0057f62e  8bff                 mov edi, edi
// 0057f630  8b8690010000         mov eax, dword ptr [esi + 0x190]
// 0057f636  80781100             cmp byte ptr [eax + 0x11], 0
// 0057f63a  753f                 jne 0x57f67b
// 0057f63c  8b567c               mov edx, dword ptr [esi + 0x7c]
// 0057f63f  3b9684000000         cmp edx, dword ptr [esi + 0x84]
// 0057f645  7519                 jne 0x57f660
// 0057f647  33c9                 xor ecx, ecx
// 0057f649  398e6c010000         cmp dword ptr [esi + 0x16c], ecx
// 0057f64f  0f94c1               sete cl
// 0057f652  038e88000000         add ecx, dword ptr [esi + 0x88]
// 0057f658  398e80000000         cmp dword ptr [esi + 0x80], ecx
// 0057f65e  771b                 ja 0x57f67b
// 0057f660  8b10                 mov edx, dword ptr [eax]
// 0057f662  56                   push esi
// 0057f663  ffd2                 call edx
// 0057f665  83c404               add esp, 4
// 0057f668  85c0                 test eax, eax
// 0057f66a  0f8482000000         je 0x57f6f2
// 0057f670  8b467c               mov eax, dword ptr [esi + 0x7c]
// 0057f673  3b8684000000         cmp eax, dword ptr [esi + 0x84]
// 0057f679  7eb5                 jle 0x57f630
// 0057f67b  837e2400             cmp dword ptr [esi + 0x24], 0
// 0057f67f  53                   push ebx
// 0057f680  8b9ec4000000         mov ebx, dword ptr [esi + 0xc4]
// 0057f686  c744245000000000     mov dword ptr [esp + 0x50], 0
// 0057f68e  895c242c             mov dword ptr [esp + 0x2c], ebx
// 0057f692  0f8e34050000         jle 0x57fbcc
// 0057f698  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0057f69c  b8b8ffffff           mov eax, 0xffffffb8
// 0057f6a1  8d5148               lea edx, [ecx + 0x48]
// 0057f6a4  2bc1                 sub eax, ecx
// 0057f6a6  55                   push ebp
// 0057f6a7  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 0057f6af  89542428             mov dword ptr [esp + 0x28], edx
// 0057f6b3  89842488000000       mov dword ptr [esp + 0x88], eax
// 0057f6ba  57                   push edi
// 0057f6bb  eb03                 jmp 0x57f6c0
// 0057f6bd  8d4900               lea ecx, [ecx]
// 0057f6c0  807b3000             cmp byte ptr [ebx + 0x30], 0
// 0057f6c4  0f84d6040000         je 0x57fba0
// 0057f6ca  8b842414010000       mov eax, dword ptr [esp + 0x114]
// 0057f6d1  8bb088000000         mov esi, dword ptr [eax + 0x88]
// 0057f6d7  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 0057f6da  3bb42484000000       cmp esi, dword ptr [esp + 0x84]
// 0057f6e1  7319                 jae 0x57f6fc
// 0057f6e3  8bc1                 mov eax, ecx
// 0057f6e5  89442414             mov dword ptr [esp + 0x14], eax
// 0057f6e9  03c0                 add eax, eax
// 0057f6eb  c644241300           mov byte ptr [esp + 0x13], 0
// 0057f6f0  eb26                 jmp 0x57f718
// 0057f6f2  33c0                 xor eax, eax
// 0057f6f4  5e                   pop esi
// 0057f6f5  81c400010000         add esp, 0x100
// 0057f6fb  c3                   ret 
// 0057f6fc  8b4320               mov eax, dword ptr [ebx + 0x20]
// 0057f6ff  33d2                 xor edx, edx
// 0057f701  f7f1                 div ecx
// 0057f703  8bc2                 mov eax, edx
// 0057f705  89442414             mov dword ptr [esp + 0x14], eax
// 0057f709  85c0                 test eax, eax
// 0057f70b  7506                 jne 0x57f713
// 0057f70d  8bc1                 mov eax, ecx
// 0057f70f  894c2414             mov dword ptr [esp + 0x14], ecx
// 0057f713  c644241301           mov byte ptr [esp + 0x13], 1
// 0057f718  8bbc2414010000       mov edi, dword ptr [esp + 0x114]
// 0057f71f  6a00                 push 0
// 0057f721  85f6                 test esi, esi
// 0057f723  7625                 jbe 0x57f74a
// 0057f725  8b5704               mov edx, dword ptr [edi + 4]
// 0057f728  4e                   dec esi
// 0057f729  0faff1               imul esi, ecx
// 0057f72c  03c1                 add eax, ecx
// 0057f72e  8b4a20               mov ecx, dword ptr [edx + 0x20]
// 0057f731  50                   push eax
// 0057f732  56                   push esi
// 0057f733  8b742438             mov esi, dword ptr [esp + 0x38]
// 0057f737  8b06                 mov eax, dword ptr [esi]
// 0057f739  50                   push eax
// 0057f73a  57                   push edi
// 0057f73b  ffd1                 call ecx
// 0057f73d  8b530c               mov edx, dword ptr [ebx + 0xc]
// 0057f740  8d0490               lea eax, [eax + edx*4]
// 0057f743  c644242600           mov byte ptr [esp + 0x26], 0
// 0057f748  eb18                 jmp 0x57f762
// 0057f74a  8b742430             mov esi, dword ptr [esp + 0x30]
// 0057f74e  8b16                 mov edx, dword ptr [esi]
// 0057f750  8b4f04               mov ecx, dword ptr [edi + 4]
// 0057f753  50                   push eax
// 0057f754  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0057f757  6a00                 push 0
// 0057f759  52                   push edx
// 0057f75a  57                   push edi
// 0057f75b  ffd0                 call eax
// 0057f75d  c644242601           mov byte ptr [esp + 0x26], 1
// 0057f762  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 0057f766  89842480000000       mov dword ptr [esp + 0x80], eax
// 0057f76d  8b4170               mov eax, dword ptr [ecx + 0x70]
// 0057f770  03442474             add eax, dword ptr [esp + 0x74]
// 0057f774  83c414               add esp, 0x14
// 0057f777  89442420             mov dword ptr [esp + 0x20], eax
// 0057f77b  8b434c               mov eax, dword ptr [ebx + 0x4c]
// 0057f77e  0fb710               movzx edx, word ptr [eax]
// 0057f781  0fb74802             movzx ecx, word ptr [eax + 2]
// 0057f785  8954241c             mov dword ptr [esp + 0x1c], edx
// 0057f789  0fb75010             movzx edx, word ptr [eax + 0x10]
// 0057f78d  894c2478             mov dword ptr [esp + 0x78], ecx
// 0057f791  0fb74820             movzx ecx, word ptr [eax + 0x20]
// 0057f795  89542474             mov dword ptr [esp + 0x74], edx
// 0057f799  0fb75012             movzx edx, word ptr [eax + 0x12]
// 0057f79d  0fb74004             movzx eax, word ptr [eax + 4]
// 0057f7a1  898c2480000000       mov dword ptr [esp + 0x80], ecx
// 0057f7a8  8b8f9c010000         mov ecx, dword ptr [edi + 0x19c]
// 0057f7ae  038c248c000000       add ecx, dword ptr [esp + 0x8c]
// 0057f7b5  837c241400           cmp dword ptr [esp + 0x14], 0
// 0057f7ba  8954247c             mov dword ptr [esp + 0x7c], edx
// 0057f7be  8b543104             mov edx, dword ptr [ecx + esi + 4]
// 0057f7c2  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0057f7c6  89442468             mov dword ptr [esp + 0x68], eax
// 0057f7ca  8b842418010000       mov eax, dword ptr [esp + 0x118]
// 0057f7d1  89942488000000       mov dword ptr [esp + 0x88], edx
// 0057f7d8  8b1488               mov edx, dword ptr [eax + ecx*4]
// 0057f7db  89542448             mov dword ptr [esp + 0x48], edx
// 0057f7df  c744245000000000     mov dword ptr [esp + 0x50], 0
// 0057f7e7  0f8eb3030000         jle 0x57fba0
// 0057f7ed  8d4900               lea ecx, [ecx]
// 0057f7f0  807c241200           cmp byte ptr [esp + 0x12], 0
// 0057f7f5  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 0057f7f9  8b542450             mov edx, dword ptr [esp + 0x50]
// 0057f7fd  8b3c96               mov edi, dword ptr [esi + edx*4]
// 0057f800  897c2418             mov dword ptr [esp + 0x18], edi
// 0057f804  7406                 je 0x57f80c
// 0057f806  8bcf                 mov ecx, edi
// 0057f808  85d2                 test edx, edx
// 0057f80a  7404                 je 0x57f810
// 0057f80c  8b4c96fc             mov ecx, dword ptr [esi + edx*4 - 4]
// 0057f810  807c241300           cmp byte ptr [esp + 0x13], 0
// 0057f815  740b                 je 0x57f822
// 0057f817  8b442414             mov eax, dword ptr [esp + 0x14]
// 0057f81b  48                   dec eax
// 0057f81c  3bd0                 cmp edx, eax
// 0057f81e  8bc7                 mov eax, edi
// 0057f820  7404                 je 0x57f826
// 0057f822  8b449604             mov eax, dword ptr [esi + edx*4 + 4]
// 0057f826  8b542418             mov edx, dword ptr [esp + 0x18]
// 0057f82a  0fbf32               movsx esi, word ptr [edx]
// 0057f82d  0fbf39               movsx edi, word ptr [ecx]
// 0057f830  0fbf28               movsx ebp, word ptr [eax]
// 0057f833  8b531c               mov edx, dword ptr [ebx + 0x1c]
// 0057f836  4a                   dec edx
// 0057f837  83e880               sub eax, -0x80
// 0057f83a  83e980               sub ecx, -0x80
// 0057f83d  897c243c             mov dword ptr [esp + 0x3c], edi
// 0057f841  897c2424             mov dword ptr [esp + 0x24], edi
// 0057f845  89742430             mov dword ptr [esp + 0x30], esi
// 0057f849  8974245c             mov dword ptr [esp + 0x5c], esi
// 0057f84d  896c2444             mov dword ptr [esp + 0x44], ebp
// 0057f851  896c2428             mov dword ptr [esp + 0x28], ebp
// 0057f855  c744243800000000     mov dword ptr [esp + 0x38], 0
// 0057f85d  89542470             mov dword ptr [esp + 0x70], edx
// 0057f861  c744244000000000     mov dword ptr [esp + 0x40], 0
// 0057f869  8944244c             mov dword ptr [esp + 0x4c], eax
// 0057f86d  894c2454             mov dword ptr [esp + 0x54], ecx
// 0057f871  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0057f875  6a01                 push 1
// 0057f877  8d842494000000       lea eax, [esp + 0x94]
// 0057f87e  50                   push eax
// 0057f87f  51                   push ecx
// 0057f880  e83bdbfeff           call 0x56d3c0
// 0057f885  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 0057f889  83c40c               add esp, 0xc
// 0057f88c  39542440             cmp dword ptr [esp + 0x40], edx
// 0057f890  7321                 jae 0x57f8b3
// 0057f892  8b442454             mov eax, dword ptr [esp + 0x54]
// 0057f896  0fbf08               movsx ecx, word ptr [eax]
// 0057f899  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0057f89d  8b542418             mov edx, dword ptr [esp + 0x18]
// 0057f8a1  0fbfb280000000       movsx esi, word ptr [edx + 0x80]
// 0057f8a8  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0057f8ac  0fbf08               movsx ecx, word ptr [eax]
// 0057f8af  894c2444             mov dword ptr [esp + 0x44], ecx
// 0057f8b3  8b542420             mov edx, dword ptr [esp + 0x20]
// 0057f8b7  8b4a04               mov ecx, dword ptr [edx + 4]
// 0057f8ba  85c9                 test ecx, ecx
// 0057f8bc  7469                 je 0x57f927
// 0057f8be  6683bc249200000000   cmp word ptr [esp + 0x92], 0
// 0057f8c7  755e                 jne 0x57f927
// 0057f8c9  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 0057f8cd  8b5c2478             mov ebx, dword ptr [esp + 0x78]
// 0057f8d1  2bc6                 sub eax, esi
// 0057f8d3  0faf44241c           imul eax, dword ptr [esp + 0x1c]
// 0057f8d8  8d14c0               lea edx, [eax + eax*8]
// 0057f8db  8bc3                 mov eax, ebx
// 0057f8dd  03d2                 add edx, edx
// 0057f8df  c1e007               shl eax, 7
// 0057f8e2  c1e308               shl ebx, 8
// 0057f8e5  03d2                 add edx, edx
// 0057f8e7  7819                 js 0x57f902
// 0057f8e9  03c2                 add eax, edx
// 0057f8eb  99                   cdq 
// 0057f8ec  f7fb                 idiv ebx
// 0057f8ee  85c9                 test ecx, ecx
// 0057f8f0  7e29                 jle 0x57f91b
// 0057f8f2  ba01000000           mov edx, 1
// 0057f8f7  d3e2                 shl edx, cl
// 0057f8f9  3bc2                 cmp eax, edx
// 0057f8fb  7c1e                 jl 0x57f91b
// 0057f8fd  8d42ff               lea eax, [edx - 1]
// 0057f900  eb19                 jmp 0x57f91b
// 0057f902  2bc2                 sub eax, edx
// 0057f904  99                   cdq 
// 0057f905  f7fb                 idiv ebx
// 0057f907  85c9                 test ecx, ecx
// 0057f909  7e0e                 jle 0x57f919
// 0057f90b  ba01000000           mov edx, 1
// 0057f910  d3e2                 shl edx, cl
// 0057f912  3bc2                 cmp eax, edx
// 0057f914  7c03                 jl 0x57f919
// 0057f916  8d42ff               lea eax, [edx - 1]
// 0057f919  f7d8                 neg eax
// 0057f91b  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 0057f91f  6689842492000000     mov word ptr [esp + 0x92], ax
// 0057f927  8b442420             mov eax, dword ptr [esp + 0x20]
// 0057f92b  8b4808               mov ecx, dword ptr [eax + 8]
// 0057f92e  85c9                 test ecx, ecx
// 0057f930  746b                 je 0x57f99d
// 0057f932  6683bc24a000000000   cmp word ptr [esp + 0xa0], 0
// 0057f93b  7560                 jne 0x57f99d
// 0057f93d  8b442424             mov eax, dword ptr [esp + 0x24]
// 0057f941  2b442428             sub eax, dword ptr [esp + 0x28]
// 0057f945  8b5c2474             mov ebx, dword ptr [esp + 0x74]
// 0057f949  0faf44241c           imul eax, dword ptr [esp + 0x1c]
// 0057f94e  8d14c0               lea edx, [eax + eax*8]
// 0057f951  8bc3                 mov eax, ebx
// 0057f953  03d2                 add edx, edx
// 0057f955  c1e007               shl eax, 7
// 0057f958  c1e308               shl ebx, 8
// 0057f95b  03d2                 add edx, edx
// 0057f95d  7819                 js 0x57f978
// 0057f95f  03c2                 add eax, edx
// 0057f961  99                   cdq 
// 0057f962  f7fb                 idiv ebx
// 0057f964  85c9                 test ecx, ecx
// 0057f966  7e29                 jle 0x57f991
// 0057f968  ba01000000           mov edx, 1
// 0057f96d  d3e2                 shl edx, cl
// 0057f96f  3bc2                 cmp eax, edx
// 0057f971  7c1e                 jl 0x57f991
// 0057f973  8d42ff               lea eax, [edx - 1]
// 0057f976  eb19                 jmp 0x57f991
// 0057f978  2bc2                 sub eax, edx
// 0057f97a  99                   cdq 
// 0057f97b  f7fb                 idiv ebx
// 0057f97d  85c9                 test ecx, ecx
// 0057f97f  7e0e                 jle 0x57f98f
// 0057f981  ba01000000           mov edx, 1
// 0057f986  d3e2                 shl edx, cl
// 0057f988  3bc2                 cmp eax, edx
// 0057f98a  7c03                 jl 0x57f98f
// 0057f98c  8d42ff               lea eax, [edx - 1]
// 0057f98f  f7d8                 neg eax
// 0057f991  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 0057f995  66898424a0000000     mov word ptr [esp + 0xa0], ax
// 0057f99d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0057f9a1  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0057f9a4  85c9                 test ecx, ecx
// 0057f9a6  7477                 je 0x57fa1f
// 0057f9a8  6683bc24b000000000   cmp word ptr [esp + 0xb0], 0
// 0057f9b1  756c                 jne 0x57fa1f
// 0057f9b3  8b542430             mov edx, dword ptr [esp + 0x30]
// 0057f9b7  8b9c2480000000       mov ebx, dword ptr [esp + 0x80]
// 0057f9be  8d0412               lea eax, [edx + edx]
// 0057f9c1  8bd0                 mov edx, eax
// 0057f9c3  8b442428             mov eax, dword ptr [esp + 0x28]
// 0057f9c7  2bc2                 sub eax, edx
// 0057f9c9  03442424             add eax, dword ptr [esp + 0x24]
// 0057f9cd  0faf44241c           imul eax, dword ptr [esp + 0x1c]
// 0057f9d2  8d14c0               lea edx, [eax + eax*8]
// 0057f9d5  8bc3                 mov eax, ebx
// 0057f9d7  c1e007               shl eax, 7
// 0057f9da  c1e308               shl ebx, 8
// 0057f9dd  85d2                 test edx, edx
// 0057f9df  7c19                 jl 0x57f9fa
// 0057f9e1  03c2                 add eax, edx
// 0057f9e3  99                   cdq 
// 0057f9e4  f7fb                 idiv ebx
// 0057f9e6  85c9                 test ecx, ecx
// 0057f9e8  7e29                 jle 0x57fa13
// 0057f9ea  ba01000000           mov edx, 1
// 0057f9ef  d3e2                 shl edx, cl
// 0057f9f1  3bc2                 cmp eax, edx
// 0057f9f3  7c1e                 jl 0x57fa13
// 0057f9f5  8d42ff               lea eax, [edx - 1]
// 0057f9f8  eb19                 jmp 0x57fa13
// 0057f9fa  2bc2                 sub eax, edx
// 0057f9fc  99                   cdq 
// 0057f9fd  f7fb                 idiv ebx
// 0057f9ff  85c9                 test ecx, ecx
// 0057fa01  7e0e                 jle 0x57fa11
// 0057fa03  ba01000000           mov edx, 1
// 0057fa08  d3e2                 shl edx, cl
// 0057fa0a  3bc2                 cmp eax, edx
// 0057fa0c  7c03                 jl 0x57fa11
// 0057fa0e  8d42ff               lea eax, [edx - 1]
// 0057fa11  f7d8                 neg eax
// 0057fa13  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 0057fa17  66898424b0000000     mov word ptr [esp + 0xb0], ax
// 0057fa1f  8b442420             mov eax, dword ptr [esp + 0x20]
// 0057fa23  8b4810               mov ecx, dword ptr [eax + 0x10]
// 0057fa26  85c9                 test ecx, ecx
// 0057fa28  7469                 je 0x57fa93
// 0057fa2a  6683bc24a200000000   cmp word ptr [esp + 0xa2], 0
// 0057fa33  755e                 jne 0x57fa93
// 0057fa35  8b442444             mov eax, dword ptr [esp + 0x44]
// 0057fa39  2bc5                 sub eax, ebp
// 0057fa3b  2b44243c             sub eax, dword ptr [esp + 0x3c]
// 0057fa3f  03c7                 add eax, edi
// 0057fa41  0faf44241c           imul eax, dword ptr [esp + 0x1c]
// 0057fa46  8b7c247c             mov edi, dword ptr [esp + 0x7c]
// 0057fa4a  8d1480               lea edx, [eax + eax*4]
// 0057fa4d  8bc7                 mov eax, edi
// 0057fa4f  c1e007               shl eax, 7
// 0057fa52  c1e708               shl edi, 8
// 0057fa55  85d2                 test edx, edx
// 0057fa57  7c19                 jl 0x57fa72
// 0057fa59  03c2                 add eax, edx
// 0057fa5b  99                   cdq 
// 0057fa5c  f7ff                 idiv edi
// 0057fa5e  85c9                 test ecx, ecx
// 0057fa60  7e29                 jle 0x57fa8b
// 0057fa62  ba01000000           mov edx, 1
// 0057fa67  d3e2                 shl edx, cl
// 0057fa69  3bc2                 cmp eax, edx
// 0057fa6b  7c1e                 jl 0x57fa8b
// 0057fa6d  8d42ff               lea eax, [edx - 1]
// 0057fa70  eb19                 jmp 0x57fa8b
// 0057fa72  2bc2                 sub eax, edx
// 0057fa74  99                   cdq 
// 0057fa75  f7ff                 idiv edi
// 0057fa77  85c9                 test ecx, ecx
// 0057fa79  7e0e                 jle 0x57fa89
// 0057fa7b  ba01000000           mov edx, 1
// 0057fa80  d3e2                 shl edx, cl
// 0057fa82  3bc2                 cmp eax, edx
// 0057fa84  7c03                 jl 0x57fa89
// 0057fa86  8d42ff               lea eax, [edx - 1]
// 0057fa89  f7d8                 neg eax
// 0057fa8b  66898424a2000000     mov word ptr [esp + 0xa2], ax
// 0057fa93  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0057fa97  8b4914               mov ecx, dword ptr [ecx + 0x14]
// 0057fa9a  85c9                 test ecx, ecx
// 0057fa9c  746e                 je 0x57fb0c
// 0057fa9e  6683bc249400000000   cmp word ptr [esp + 0x94], 0
// 0057faa7  7563                 jne 0x57fb0c
// 0057faa9  8b542430             mov edx, dword ptr [esp + 0x30]
// 0057faad  8b7c2468             mov edi, dword ptr [esp + 0x68]
// 0057fab1  8d0412               lea eax, [edx + edx]
// 0057fab4  8bd0                 mov edx, eax
// 0057fab6  8bc6                 mov eax, esi
// 0057fab8  2bc2                 sub eax, edx
// 0057faba  0344245c             add eax, dword ptr [esp + 0x5c]
// 0057fabe  0faf44241c           imul eax, dword ptr [esp + 0x1c]
// 0057fac3  8d14c0               lea edx, [eax + eax*8]
// 0057fac6  8bc7                 mov eax, edi
// 0057fac8  c1e007               shl eax, 7
// 0057facb  c1e708               shl edi, 8
// 0057face  85d2                 test edx, edx
// 0057fad0  7c19                 jl 0x57faeb
// 0057fad2  03c2                 add eax, edx
// 0057fad4  99                   cdq 
// 0057fad5  f7ff                 idiv edi
// 0057fad7  85c9                 test ecx, ecx
// 0057fad9  7e29                 jle 0x57fb04
// 0057fadb  ba01000000           mov edx, 1
// 0057fae0  d3e2                 shl edx, cl
// 0057fae2  3bc2                 cmp eax, edx
// 0057fae4  7c1e                 jl 0x57fb04
// 0057fae6  8d42ff               lea eax, [edx - 1]
// 0057fae9  eb19                 jmp 0x57fb04
// 0057faeb  2bc2                 sub eax, edx
// 0057faed  99                   cdq 
// 0057faee  f7ff                 idiv edi
// 0057faf0  85c9                 test ecx, ecx
// 0057faf2  7e0e                 jle 0x57fb02
// 0057faf4  ba01000000           mov edx, 1
// 0057faf9  d3e2                 shl edx, cl
// 0057fafb  3bc2                 cmp eax, edx
// 0057fafd  7c03                 jl 0x57fb02
// 0057faff  8d42ff               lea eax, [edx - 1]
// 0057fb02  f7d8                 neg eax
// 0057fb04  6689842494000000     mov word ptr [esp + 0x94], ax
// 0057fb0c  8b442438             mov eax, dword ptr [esp + 0x38]
// 0057fb10  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0057fb14  50                   push eax
// 0057fb15  8b842418010000       mov eax, dword ptr [esp + 0x118]
// 0057fb1c  51                   push ecx
// 0057fb1d  8d942498000000       lea edx, [esp + 0x98]
// 0057fb24  52                   push edx
// 0057fb25  53                   push ebx
// 0057fb26  50                   push eax
// 0057fb27  ff94249c000000       call dword ptr [esp + 0x9c]
// 0057fb2e  8b442458             mov eax, dword ptr [esp + 0x58]
// 0057fb32  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 0057fb36  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0057fb3a  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 0057fb3e  8b542444             mov edx, dword ptr [esp + 0x44]
// 0057fb42  8944243c             mov dword ptr [esp + 0x3c], eax
// 0057fb46  b880000000           mov eax, 0x80
// 0057fb4b  0144242c             add dword ptr [esp + 0x2c], eax
// 0057fb4f  01442468             add dword ptr [esp + 0x68], eax
// 0057fb53  01442460             add dword ptr [esp + 0x60], eax
// 0057fb57  8b442454             mov eax, dword ptr [esp + 0x54]
// 0057fb5b  894c2438             mov dword ptr [esp + 0x38], ecx
// 0057fb5f  8b4b24               mov ecx, dword ptr [ebx + 0x24]
// 0057fb62  014c244c             add dword ptr [esp + 0x4c], ecx
// 0057fb66  40                   inc eax
// 0057fb67  83c414               add esp, 0x14
// 0057fb6a  8954245c             mov dword ptr [esp + 0x5c], edx
// 0057fb6e  89742430             mov dword ptr [esp + 0x30], esi
// 0057fb72  89442440             mov dword ptr [esp + 0x40], eax
// 0057fb76  3b442470             cmp eax, dword ptr [esp + 0x70]
// 0057fb7a  0f86f1fcffff         jbe 0x57f871
// 0057fb80  8b442448             mov eax, dword ptr [esp + 0x48]
// 0057fb84  8bd1                 mov edx, ecx
// 0057fb86  8d0c90               lea ecx, [eax + edx*4]
// 0057fb89  8b442450             mov eax, dword ptr [esp + 0x50]
// 0057fb8d  40                   inc eax
// 0057fb8e  3b442414             cmp eax, dword ptr [esp + 0x14]
// 0057fb92  894c2448             mov dword ptr [esp + 0x48], ecx
// 0057fb96  89442450             mov dword ptr [esp + 0x50], eax
// 0057fb9a  0f8c50fcffff         jl 0x57f7f0
// 0057fba0  8b442458             mov eax, dword ptr [esp + 0x58]
// 0057fba4  8b942414010000       mov edx, dword ptr [esp + 0x114]
// 0057fbab  8344246018           add dword ptr [esp + 0x60], 0x18
// 0057fbb0  8344242c04           add dword ptr [esp + 0x2c], 4
// 0057fbb5  40                   inc eax
// 0057fbb6  83c354               add ebx, 0x54
// 0057fbb9  3b4224               cmp eax, dword ptr [edx + 0x24]
// 0057fbbc  89442458             mov dword ptr [esp + 0x58], eax
// 0057fbc0  895c2434             mov dword ptr [esp + 0x34], ebx
// 0057fbc4  0f8cf6faffff         jl 0x57f6c0
// 0057fbca  5f                   pop edi
// 0057fbcb  5d                   pop ebp
// 0057fbcc  8b8c240c010000       mov ecx, dword ptr [esp + 0x10c]
// 0057fbd3  ff8188000000         inc dword ptr [ecx + 0x88]
// 0057fbd9  8b8188000000         mov eax, dword ptr [ecx + 0x88]
// 0057fbdf  3b811c010000         cmp eax, dword ptr [ecx + 0x11c]
// 0057fbe5  5b                   pop ebx
// 0057fbe6  1bc0                 sbb eax, eax
// 0057fbe8  83c004               add eax, 4
// 0057fbeb  5e                   pop esi
// 0057fbec  81c400010000         add esp, 0x100
// 0057fbf2  c3                   ret 
// library jpeg-6b/jdcoefct.c (function _decompress_smooth_data)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcoefct.c
