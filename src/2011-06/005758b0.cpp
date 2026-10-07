// roc 2011-06 005758b0  unit: seg_00570000  size: 1523 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005758b0
//
// 005758b0  81ec00010000         sub esp, 0x100
// 005758b6  56                   push esi
// 005758b7  8bb42408010000       mov esi, dword ptr [esp + 0x108]
// 005758be  8b8688010000         mov eax, dword ptr [esi + 0x188]
// 005758c4  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 005758c7  89442458             mov dword ptr [esp + 0x58], eax
// 005758cb  8b861c010000         mov eax, dword ptr [esi + 0x11c]
// 005758d1  48                   dec eax
// 005758d2  3b8e84000000         cmp ecx, dword ptr [esi + 0x84]
// 005758d8  89442478             mov dword ptr [esp + 0x78], eax
// 005758dc  7f4d                 jg 0x57592b
// 005758de  8bff                 mov edi, edi
// 005758e0  8b8690010000         mov eax, dword ptr [esi + 0x190]
// 005758e6  80781100             cmp byte ptr [eax + 0x11], 0
// 005758ea  753f                 jne 0x57592b
// 005758ec  8b567c               mov edx, dword ptr [esi + 0x7c]
// 005758ef  3b9684000000         cmp edx, dword ptr [esi + 0x84]
// 005758f5  7519                 jne 0x575910
// 005758f7  33c9                 xor ecx, ecx
// 005758f9  398e6c010000         cmp dword ptr [esi + 0x16c], ecx
// 005758ff  0f94c1               sete cl
// 00575902  038e88000000         add ecx, dword ptr [esi + 0x88]
// 00575908  398e80000000         cmp dword ptr [esi + 0x80], ecx
// 0057590e  771b                 ja 0x57592b
// 00575910  8b10                 mov edx, dword ptr [eax]
// 00575912  56                   push esi
// 00575913  ffd2                 call edx
// 00575915  83c404               add esp, 4
// 00575918  85c0                 test eax, eax
// 0057591a  0f8482000000         je 0x5759a2
// 00575920  8b467c               mov eax, dword ptr [esi + 0x7c]
// 00575923  3b8684000000         cmp eax, dword ptr [esi + 0x84]
// 00575929  7eb5                 jle 0x5758e0
// 0057592b  837e2400             cmp dword ptr [esi + 0x24], 0
// 0057592f  53                   push ebx
// 00575930  8b9ec4000000         mov ebx, dword ptr [esi + 0xc4]
// 00575936  c744245000000000     mov dword ptr [esp + 0x50], 0
// 0057593e  895c242c             mov dword ptr [esp + 0x2c], ebx
// 00575942  0f8e34050000         jle 0x575e7c
// 00575948  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0057594c  b8b8ffffff           mov eax, 0xffffffb8
// 00575951  8d5148               lea edx, [ecx + 0x48]
// 00575954  2bc1                 sub eax, ecx
// 00575956  55                   push ebp
// 00575957  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 0057595f  89542428             mov dword ptr [esp + 0x28], edx
// 00575963  89842488000000       mov dword ptr [esp + 0x88], eax
// 0057596a  57                   push edi
// 0057596b  eb03                 jmp 0x575970
// 0057596d  8d4900               lea ecx, [ecx]
// 00575970  807b3000             cmp byte ptr [ebx + 0x30], 0
// 00575974  0f84d6040000         je 0x575e50
// 0057597a  8b842414010000       mov eax, dword ptr [esp + 0x114]
// 00575981  8bb088000000         mov esi, dword ptr [eax + 0x88]
// 00575987  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 0057598a  3bb42484000000       cmp esi, dword ptr [esp + 0x84]
// 00575991  7319                 jae 0x5759ac
// 00575993  8bc1                 mov eax, ecx
// 00575995  89442414             mov dword ptr [esp + 0x14], eax
// 00575999  03c0                 add eax, eax
// 0057599b  c644241300           mov byte ptr [esp + 0x13], 0
// 005759a0  eb26                 jmp 0x5759c8
// 005759a2  33c0                 xor eax, eax
// 005759a4  5e                   pop esi
// 005759a5  81c400010000         add esp, 0x100
// 005759ab  c3                   ret 
// 005759ac  8b4320               mov eax, dword ptr [ebx + 0x20]
// 005759af  33d2                 xor edx, edx
// 005759b1  f7f1                 div ecx
// 005759b3  8bc2                 mov eax, edx
// 005759b5  89442414             mov dword ptr [esp + 0x14], eax
// 005759b9  85c0                 test eax, eax
// 005759bb  7506                 jne 0x5759c3
// 005759bd  8bc1                 mov eax, ecx
// 005759bf  894c2414             mov dword ptr [esp + 0x14], ecx
// 005759c3  c644241301           mov byte ptr [esp + 0x13], 1
// 005759c8  8bbc2414010000       mov edi, dword ptr [esp + 0x114]
// 005759cf  6a00                 push 0
// 005759d1  85f6                 test esi, esi
// 005759d3  7625                 jbe 0x5759fa
// 005759d5  8b5704               mov edx, dword ptr [edi + 4]
// 005759d8  4e                   dec esi
// 005759d9  0faff1               imul esi, ecx
// 005759dc  03c1                 add eax, ecx
// 005759de  8b4a20               mov ecx, dword ptr [edx + 0x20]
// 005759e1  50                   push eax
// 005759e2  56                   push esi
// 005759e3  8b742438             mov esi, dword ptr [esp + 0x38]
// 005759e7  8b06                 mov eax, dword ptr [esi]
// 005759e9  50                   push eax
// 005759ea  57                   push edi
// 005759eb  ffd1                 call ecx
// 005759ed  8b530c               mov edx, dword ptr [ebx + 0xc]
// 005759f0  8d0490               lea eax, [eax + edx*4]
// 005759f3  c644242600           mov byte ptr [esp + 0x26], 0
// 005759f8  eb18                 jmp 0x575a12
// 005759fa  8b742430             mov esi, dword ptr [esp + 0x30]
// 005759fe  8b16                 mov edx, dword ptr [esi]
// 00575a00  8b4f04               mov ecx, dword ptr [edi + 4]
// 00575a03  50                   push eax
// 00575a04  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00575a07  6a00                 push 0
// 00575a09  52                   push edx
// 00575a0a  57                   push edi
// 00575a0b  ffd0                 call eax
// 00575a0d  c644242601           mov byte ptr [esp + 0x26], 1
// 00575a12  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 00575a16  89842480000000       mov dword ptr [esp + 0x80], eax
// 00575a1d  8b4170               mov eax, dword ptr [ecx + 0x70]
// 00575a20  03442474             add eax, dword ptr [esp + 0x74]
// 00575a24  83c414               add esp, 0x14
// 00575a27  89442420             mov dword ptr [esp + 0x20], eax
// 00575a2b  8b434c               mov eax, dword ptr [ebx + 0x4c]
// 00575a2e  0fb710               movzx edx, word ptr [eax]
// 00575a31  0fb74802             movzx ecx, word ptr [eax + 2]
// 00575a35  8954241c             mov dword ptr [esp + 0x1c], edx
// 00575a39  0fb75010             movzx edx, word ptr [eax + 0x10]
// 00575a3d  894c2478             mov dword ptr [esp + 0x78], ecx
// 00575a41  0fb74820             movzx ecx, word ptr [eax + 0x20]
// 00575a45  89542474             mov dword ptr [esp + 0x74], edx
// 00575a49  0fb75012             movzx edx, word ptr [eax + 0x12]
// 00575a4d  0fb74004             movzx eax, word ptr [eax + 4]
// 00575a51  898c2480000000       mov dword ptr [esp + 0x80], ecx
// 00575a58  8b8f9c010000         mov ecx, dword ptr [edi + 0x19c]
// 00575a5e  038c248c000000       add ecx, dword ptr [esp + 0x8c]
// 00575a65  837c241400           cmp dword ptr [esp + 0x14], 0
// 00575a6a  8954247c             mov dword ptr [esp + 0x7c], edx
// 00575a6e  8b543104             mov edx, dword ptr [ecx + esi + 4]
// 00575a72  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00575a76  89442468             mov dword ptr [esp + 0x68], eax
// 00575a7a  8b842418010000       mov eax, dword ptr [esp + 0x118]
// 00575a81  89942488000000       mov dword ptr [esp + 0x88], edx
// 00575a88  8b1488               mov edx, dword ptr [eax + ecx*4]
// 00575a8b  89542448             mov dword ptr [esp + 0x48], edx
// 00575a8f  c744245000000000     mov dword ptr [esp + 0x50], 0
// 00575a97  0f8eb3030000         jle 0x575e50
// 00575a9d  8d4900               lea ecx, [ecx]
// 00575aa0  807c241200           cmp byte ptr [esp + 0x12], 0
// 00575aa5  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 00575aa9  8b542450             mov edx, dword ptr [esp + 0x50]
// 00575aad  8b3c96               mov edi, dword ptr [esi + edx*4]
// 00575ab0  897c2418             mov dword ptr [esp + 0x18], edi
// 00575ab4  7406                 je 0x575abc
// 00575ab6  8bcf                 mov ecx, edi
// 00575ab8  85d2                 test edx, edx
// 00575aba  7404                 je 0x575ac0
// 00575abc  8b4c96fc             mov ecx, dword ptr [esi + edx*4 - 4]
// 00575ac0  807c241300           cmp byte ptr [esp + 0x13], 0
// 00575ac5  740b                 je 0x575ad2
// 00575ac7  8b442414             mov eax, dword ptr [esp + 0x14]
// 00575acb  48                   dec eax
// 00575acc  3bd0                 cmp edx, eax
// 00575ace  8bc7                 mov eax, edi
// 00575ad0  7404                 je 0x575ad6
// 00575ad2  8b449604             mov eax, dword ptr [esi + edx*4 + 4]
// 00575ad6  8b542418             mov edx, dword ptr [esp + 0x18]
// 00575ada  0fbf32               movsx esi, word ptr [edx]
// 00575add  0fbf39               movsx edi, word ptr [ecx]
// 00575ae0  0fbf28               movsx ebp, word ptr [eax]
// 00575ae3  8b531c               mov edx, dword ptr [ebx + 0x1c]
// 00575ae6  4a                   dec edx
// 00575ae7  83e880               sub eax, -0x80
// 00575aea  83e980               sub ecx, -0x80
// 00575aed  897c243c             mov dword ptr [esp + 0x3c], edi
// 00575af1  897c2424             mov dword ptr [esp + 0x24], edi
// 00575af5  89742430             mov dword ptr [esp + 0x30], esi
// 00575af9  8974245c             mov dword ptr [esp + 0x5c], esi
// 00575afd  896c2444             mov dword ptr [esp + 0x44], ebp
// 00575b01  896c2428             mov dword ptr [esp + 0x28], ebp
// 00575b05  c744243800000000     mov dword ptr [esp + 0x38], 0
// 00575b0d  89542470             mov dword ptr [esp + 0x70], edx
// 00575b11  c744244000000000     mov dword ptr [esp + 0x40], 0
// 00575b19  8944244c             mov dword ptr [esp + 0x4c], eax
// 00575b1d  894c2454             mov dword ptr [esp + 0x54], ecx
// 00575b21  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00575b25  6a01                 push 1
// 00575b27  8d842494000000       lea eax, [esp + 0x94]
// 00575b2e  50                   push eax
// 00575b2f  51                   push ecx
// 00575b30  e8eb22ffff           call 0x567e20
// 00575b35  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 00575b39  83c40c               add esp, 0xc
// 00575b3c  39542440             cmp dword ptr [esp + 0x40], edx
// 00575b40  7321                 jae 0x575b63
// 00575b42  8b442454             mov eax, dword ptr [esp + 0x54]
// 00575b46  0fbf08               movsx ecx, word ptr [eax]
// 00575b49  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00575b4d  8b542418             mov edx, dword ptr [esp + 0x18]
// 00575b51  0fbfb280000000       movsx esi, word ptr [edx + 0x80]
// 00575b58  894c243c             mov dword ptr [esp + 0x3c], ecx
// 00575b5c  0fbf08               movsx ecx, word ptr [eax]
// 00575b5f  894c2444             mov dword ptr [esp + 0x44], ecx
// 00575b63  8b542420             mov edx, dword ptr [esp + 0x20]
// 00575b67  8b4a04               mov ecx, dword ptr [edx + 4]
// 00575b6a  85c9                 test ecx, ecx
// 00575b6c  7469                 je 0x575bd7
// 00575b6e  6683bc249200000000   cmp word ptr [esp + 0x92], 0
// 00575b77  755e                 jne 0x575bd7
// 00575b79  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 00575b7d  8b5c2478             mov ebx, dword ptr [esp + 0x78]
// 00575b81  2bc6                 sub eax, esi
// 00575b83  0faf44241c           imul eax, dword ptr [esp + 0x1c]
// 00575b88  8d14c0               lea edx, [eax + eax*8]
// 00575b8b  8bc3                 mov eax, ebx
// 00575b8d  03d2                 add edx, edx
// 00575b8f  c1e007               shl eax, 7
// 00575b92  c1e308               shl ebx, 8
// 00575b95  03d2                 add edx, edx
// 00575b97  7819                 js 0x575bb2
// 00575b99  03c2                 add eax, edx
// 00575b9b  99                   cdq 
// 00575b9c  f7fb                 idiv ebx
// 00575b9e  85c9                 test ecx, ecx
// 00575ba0  7e29                 jle 0x575bcb
// 00575ba2  ba01000000           mov edx, 1
// 00575ba7  d3e2                 shl edx, cl
// 00575ba9  3bc2                 cmp eax, edx
// 00575bab  7c1e                 jl 0x575bcb
// 00575bad  8d42ff               lea eax, [edx - 1]
// 00575bb0  eb19                 jmp 0x575bcb
// 00575bb2  2bc2                 sub eax, edx
// 00575bb4  99                   cdq 
// 00575bb5  f7fb                 idiv ebx
// 00575bb7  85c9                 test ecx, ecx
// 00575bb9  7e0e                 jle 0x575bc9
// 00575bbb  ba01000000           mov edx, 1
// 00575bc0  d3e2                 shl edx, cl
// 00575bc2  3bc2                 cmp eax, edx
// 00575bc4  7c03                 jl 0x575bc9
// 00575bc6  8d42ff               lea eax, [edx - 1]
// 00575bc9  f7d8                 neg eax
// 00575bcb  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00575bcf  6689842492000000     mov word ptr [esp + 0x92], ax
// 00575bd7  8b442420             mov eax, dword ptr [esp + 0x20]
// 00575bdb  8b4808               mov ecx, dword ptr [eax + 8]
// 00575bde  85c9                 test ecx, ecx
// 00575be0  746b                 je 0x575c4d
// 00575be2  6683bc24a000000000   cmp word ptr [esp + 0xa0], 0
// 00575beb  7560                 jne 0x575c4d
// 00575bed  8b442424             mov eax, dword ptr [esp + 0x24]
// 00575bf1  2b442428             sub eax, dword ptr [esp + 0x28]
// 00575bf5  8b5c2474             mov ebx, dword ptr [esp + 0x74]
// 00575bf9  0faf44241c           imul eax, dword ptr [esp + 0x1c]
// 00575bfe  8d14c0               lea edx, [eax + eax*8]
// 00575c01  8bc3                 mov eax, ebx
// 00575c03  03d2                 add edx, edx
// 00575c05  c1e007               shl eax, 7
// 00575c08  c1e308               shl ebx, 8
// 00575c0b  03d2                 add edx, edx
// 00575c0d  7819                 js 0x575c28
// 00575c0f  03c2                 add eax, edx
// 00575c11  99                   cdq 
// 00575c12  f7fb                 idiv ebx
// 00575c14  85c9                 test ecx, ecx
// 00575c16  7e29                 jle 0x575c41
// 00575c18  ba01000000           mov edx, 1
// 00575c1d  d3e2                 shl edx, cl
// 00575c1f  3bc2                 cmp eax, edx
// 00575c21  7c1e                 jl 0x575c41
// 00575c23  8d42ff               lea eax, [edx - 1]
// 00575c26  eb19                 jmp 0x575c41
// 00575c28  2bc2                 sub eax, edx
// 00575c2a  99                   cdq 
// 00575c2b  f7fb                 idiv ebx
// 00575c2d  85c9                 test ecx, ecx
// 00575c2f  7e0e                 jle 0x575c3f
// 00575c31  ba01000000           mov edx, 1
// 00575c36  d3e2                 shl edx, cl
// 00575c38  3bc2                 cmp eax, edx
// 00575c3a  7c03                 jl 0x575c3f
// 00575c3c  8d42ff               lea eax, [edx - 1]
// 00575c3f  f7d8                 neg eax
// 00575c41  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00575c45  66898424a0000000     mov word ptr [esp + 0xa0], ax
// 00575c4d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00575c51  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 00575c54  85c9                 test ecx, ecx
// 00575c56  7477                 je 0x575ccf
// 00575c58  6683bc24b000000000   cmp word ptr [esp + 0xb0], 0
// 00575c61  756c                 jne 0x575ccf
// 00575c63  8b542430             mov edx, dword ptr [esp + 0x30]
// 00575c67  8b9c2480000000       mov ebx, dword ptr [esp + 0x80]
// 00575c6e  8d0412               lea eax, [edx + edx]
// 00575c71  8bd0                 mov edx, eax
// 00575c73  8b442428             mov eax, dword ptr [esp + 0x28]
// 00575c77  2bc2                 sub eax, edx
// 00575c79  03442424             add eax, dword ptr [esp + 0x24]
// 00575c7d  0faf44241c           imul eax, dword ptr [esp + 0x1c]
// 00575c82  8d14c0               lea edx, [eax + eax*8]
// 00575c85  8bc3                 mov eax, ebx
// 00575c87  c1e007               shl eax, 7
// 00575c8a  c1e308               shl ebx, 8
// 00575c8d  85d2                 test edx, edx
// 00575c8f  7c19                 jl 0x575caa
// 00575c91  03c2                 add eax, edx
// 00575c93  99                   cdq 
// 00575c94  f7fb                 idiv ebx
// 00575c96  85c9                 test ecx, ecx
// 00575c98  7e29                 jle 0x575cc3
// 00575c9a  ba01000000           mov edx, 1
// 00575c9f  d3e2                 shl edx, cl
// 00575ca1  3bc2                 cmp eax, edx
// 00575ca3  7c1e                 jl 0x575cc3
// 00575ca5  8d42ff               lea eax, [edx - 1]
// 00575ca8  eb19                 jmp 0x575cc3
// 00575caa  2bc2                 sub eax, edx
// 00575cac  99                   cdq 
// 00575cad  f7fb                 idiv ebx
// 00575caf  85c9                 test ecx, ecx
// 00575cb1  7e0e                 jle 0x575cc1
// 00575cb3  ba01000000           mov edx, 1
// 00575cb8  d3e2                 shl edx, cl
// 00575cba  3bc2                 cmp eax, edx
// 00575cbc  7c03                 jl 0x575cc1
// 00575cbe  8d42ff               lea eax, [edx - 1]
// 00575cc1  f7d8                 neg eax
// 00575cc3  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00575cc7  66898424b0000000     mov word ptr [esp + 0xb0], ax
// 00575ccf  8b442420             mov eax, dword ptr [esp + 0x20]
// 00575cd3  8b4810               mov ecx, dword ptr [eax + 0x10]
// 00575cd6  85c9                 test ecx, ecx
// 00575cd8  7469                 je 0x575d43
// 00575cda  6683bc24a200000000   cmp word ptr [esp + 0xa2], 0
// 00575ce3  755e                 jne 0x575d43
// 00575ce5  8b442444             mov eax, dword ptr [esp + 0x44]
// 00575ce9  2bc5                 sub eax, ebp
// 00575ceb  2b44243c             sub eax, dword ptr [esp + 0x3c]
// 00575cef  03c7                 add eax, edi
// 00575cf1  0faf44241c           imul eax, dword ptr [esp + 0x1c]
// 00575cf6  8b7c247c             mov edi, dword ptr [esp + 0x7c]
// 00575cfa  8d1480               lea edx, [eax + eax*4]
// 00575cfd  8bc7                 mov eax, edi
// 00575cff  c1e007               shl eax, 7
// 00575d02  c1e708               shl edi, 8
// 00575d05  85d2                 test edx, edx
// 00575d07  7c19                 jl 0x575d22
// 00575d09  03c2                 add eax, edx
// 00575d0b  99                   cdq 
// 00575d0c  f7ff                 idiv edi
// 00575d0e  85c9                 test ecx, ecx
// 00575d10  7e29                 jle 0x575d3b
// 00575d12  ba01000000           mov edx, 1
// 00575d17  d3e2                 shl edx, cl
// 00575d19  3bc2                 cmp eax, edx
// 00575d1b  7c1e                 jl 0x575d3b
// 00575d1d  8d42ff               lea eax, [edx - 1]
// 00575d20  eb19                 jmp 0x575d3b
// 00575d22  2bc2                 sub eax, edx
// 00575d24  99                   cdq 
// 00575d25  f7ff                 idiv edi
// 00575d27  85c9                 test ecx, ecx
// 00575d29  7e0e                 jle 0x575d39
// 00575d2b  ba01000000           mov edx, 1
// 00575d30  d3e2                 shl edx, cl
// 00575d32  3bc2                 cmp eax, edx
// 00575d34  7c03                 jl 0x575d39
// 00575d36  8d42ff               lea eax, [edx - 1]
// 00575d39  f7d8                 neg eax
// 00575d3b  66898424a2000000     mov word ptr [esp + 0xa2], ax
// 00575d43  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00575d47  8b4914               mov ecx, dword ptr [ecx + 0x14]
// 00575d4a  85c9                 test ecx, ecx
// 00575d4c  746e                 je 0x575dbc
// 00575d4e  6683bc249400000000   cmp word ptr [esp + 0x94], 0
// 00575d57  7563                 jne 0x575dbc
// 00575d59  8b542430             mov edx, dword ptr [esp + 0x30]
// 00575d5d  8b7c2468             mov edi, dword ptr [esp + 0x68]
// 00575d61  8d0412               lea eax, [edx + edx]
// 00575d64  8bd0                 mov edx, eax
// 00575d66  8bc6                 mov eax, esi
// 00575d68  2bc2                 sub eax, edx
// 00575d6a  0344245c             add eax, dword ptr [esp + 0x5c]
// 00575d6e  0faf44241c           imul eax, dword ptr [esp + 0x1c]
// 00575d73  8d14c0               lea edx, [eax + eax*8]
// 00575d76  8bc7                 mov eax, edi
// 00575d78  c1e007               shl eax, 7
// 00575d7b  c1e708               shl edi, 8
// 00575d7e  85d2                 test edx, edx
// 00575d80  7c19                 jl 0x575d9b
// 00575d82  03c2                 add eax, edx
// 00575d84  99                   cdq 
// 00575d85  f7ff                 idiv edi
// 00575d87  85c9                 test ecx, ecx
// 00575d89  7e29                 jle 0x575db4
// 00575d8b  ba01000000           mov edx, 1
// 00575d90  d3e2                 shl edx, cl
// 00575d92  3bc2                 cmp eax, edx
// 00575d94  7c1e                 jl 0x575db4
// 00575d96  8d42ff               lea eax, [edx - 1]
// 00575d99  eb19                 jmp 0x575db4
// 00575d9b  2bc2                 sub eax, edx
// 00575d9d  99                   cdq 
// 00575d9e  f7ff                 idiv edi
// 00575da0  85c9                 test ecx, ecx
// 00575da2  7e0e                 jle 0x575db2
// 00575da4  ba01000000           mov edx, 1
// 00575da9  d3e2                 shl edx, cl
// 00575dab  3bc2                 cmp eax, edx
// 00575dad  7c03                 jl 0x575db2
// 00575daf  8d42ff               lea eax, [edx - 1]
// 00575db2  f7d8                 neg eax
// 00575db4  6689842494000000     mov word ptr [esp + 0x94], ax
// 00575dbc  8b442438             mov eax, dword ptr [esp + 0x38]
// 00575dc0  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00575dc4  50                   push eax
// 00575dc5  8b842418010000       mov eax, dword ptr [esp + 0x118]
// 00575dcc  51                   push ecx
// 00575dcd  8d942498000000       lea edx, [esp + 0x98]
// 00575dd4  52                   push edx
// 00575dd5  53                   push ebx
// 00575dd6  50                   push eax
// 00575dd7  ff94249c000000       call dword ptr [esp + 0x9c]
// 00575dde  8b442458             mov eax, dword ptr [esp + 0x58]
// 00575de2  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 00575de6  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00575dea  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 00575dee  8b542444             mov edx, dword ptr [esp + 0x44]
// 00575df2  8944243c             mov dword ptr [esp + 0x3c], eax
// 00575df6  b880000000           mov eax, 0x80
// 00575dfb  0144242c             add dword ptr [esp + 0x2c], eax
// 00575dff  01442468             add dword ptr [esp + 0x68], eax
// 00575e03  01442460             add dword ptr [esp + 0x60], eax
// 00575e07  8b442454             mov eax, dword ptr [esp + 0x54]
// 00575e0b  894c2438             mov dword ptr [esp + 0x38], ecx
// 00575e0f  8b4b24               mov ecx, dword ptr [ebx + 0x24]
// 00575e12  014c244c             add dword ptr [esp + 0x4c], ecx
// 00575e16  40                   inc eax
// 00575e17  83c414               add esp, 0x14
// 00575e1a  8954245c             mov dword ptr [esp + 0x5c], edx
// 00575e1e  89742430             mov dword ptr [esp + 0x30], esi
// 00575e22  89442440             mov dword ptr [esp + 0x40], eax
// 00575e26  3b442470             cmp eax, dword ptr [esp + 0x70]
// 00575e2a  0f86f1fcffff         jbe 0x575b21
// 00575e30  8b442448             mov eax, dword ptr [esp + 0x48]
// 00575e34  8bd1                 mov edx, ecx
// 00575e36  8d0c90               lea ecx, [eax + edx*4]
// 00575e39  8b442450             mov eax, dword ptr [esp + 0x50]
// 00575e3d  40                   inc eax
// 00575e3e  3b442414             cmp eax, dword ptr [esp + 0x14]
// 00575e42  894c2448             mov dword ptr [esp + 0x48], ecx
// 00575e46  89442450             mov dword ptr [esp + 0x50], eax
// 00575e4a  0f8c50fcffff         jl 0x575aa0
// 00575e50  8b442458             mov eax, dword ptr [esp + 0x58]
// 00575e54  8b942414010000       mov edx, dword ptr [esp + 0x114]
// 00575e5b  8344246018           add dword ptr [esp + 0x60], 0x18
// 00575e60  8344242c04           add dword ptr [esp + 0x2c], 4
// 00575e65  40                   inc eax
// 00575e66  83c354               add ebx, 0x54
// 00575e69  3b4224               cmp eax, dword ptr [edx + 0x24]
// 00575e6c  89442458             mov dword ptr [esp + 0x58], eax
// 00575e70  895c2434             mov dword ptr [esp + 0x34], ebx
// 00575e74  0f8cf6faffff         jl 0x575970
// 00575e7a  5f                   pop edi
// 00575e7b  5d                   pop ebp
// 00575e7c  8b8c240c010000       mov ecx, dword ptr [esp + 0x10c]
// 00575e83  ff8188000000         inc dword ptr [ecx + 0x88]
// 00575e89  8b8188000000         mov eax, dword ptr [ecx + 0x88]
// 00575e8f  3b811c010000         cmp eax, dword ptr [ecx + 0x11c]
// 00575e95  5b                   pop ebx
// 00575e96  1bc0                 sbb eax, eax
// 00575e98  83c004               add eax, 4
// 00575e9b  5e                   pop esi
// 00575e9c  81c400010000         add esp, 0x100
// 00575ea2  c3                   ret 
// library jpeg-6b/jdcoefct.c (function _decompress_smooth_data)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcoefct.c
