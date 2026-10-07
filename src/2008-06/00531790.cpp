// roc 2008-06 00531790  unit: seg_00530000  size: 1523 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00531790
//
// 00531790  81ec00010000         sub esp, 0x100
// 00531796  56                   push esi
// 00531797  8bb42408010000       mov esi, dword ptr [esp + 0x108]
// 0053179e  8b8688010000         mov eax, dword ptr [esi + 0x188]
// 005317a4  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 005317a7  89442458             mov dword ptr [esp + 0x58], eax
// 005317ab  8b861c010000         mov eax, dword ptr [esi + 0x11c]
// 005317b1  48                   dec eax
// 005317b2  3b8e84000000         cmp ecx, dword ptr [esi + 0x84]
// 005317b8  89442478             mov dword ptr [esp + 0x78], eax
// 005317bc  7f4d                 jg 0x53180b
// 005317be  8bff                 mov edi, edi
// 005317c0  8b8690010000         mov eax, dword ptr [esi + 0x190]
// 005317c6  80781100             cmp byte ptr [eax + 0x11], 0
// 005317ca  753f                 jne 0x53180b
// 005317cc  8b567c               mov edx, dword ptr [esi + 0x7c]
// 005317cf  3b9684000000         cmp edx, dword ptr [esi + 0x84]
// 005317d5  7519                 jne 0x5317f0
// 005317d7  33c9                 xor ecx, ecx
// 005317d9  398e6c010000         cmp dword ptr [esi + 0x16c], ecx
// 005317df  0f94c1               sete cl
// 005317e2  038e88000000         add ecx, dword ptr [esi + 0x88]
// 005317e8  398e80000000         cmp dword ptr [esi + 0x80], ecx
// 005317ee  771b                 ja 0x53180b
// 005317f0  8b10                 mov edx, dword ptr [eax]
// 005317f2  56                   push esi
// 005317f3  ffd2                 call edx
// 005317f5  83c404               add esp, 4
// 005317f8  85c0                 test eax, eax
// 005317fa  0f8482000000         je 0x531882
// 00531800  8b467c               mov eax, dword ptr [esi + 0x7c]
// 00531803  3b8684000000         cmp eax, dword ptr [esi + 0x84]
// 00531809  7eb5                 jle 0x5317c0
// 0053180b  837e2400             cmp dword ptr [esi + 0x24], 0
// 0053180f  53                   push ebx
// 00531810  8b9ec4000000         mov ebx, dword ptr [esi + 0xc4]
// 00531816  c744245000000000     mov dword ptr [esp + 0x50], 0
// 0053181e  895c242c             mov dword ptr [esp + 0x2c], ebx
// 00531822  0f8e34050000         jle 0x531d5c
// 00531828  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0053182c  b8b8ffffff           mov eax, 0xffffffb8
// 00531831  8d5148               lea edx, [ecx + 0x48]
// 00531834  2bc1                 sub eax, ecx
// 00531836  55                   push ebp
// 00531837  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 0053183f  89542428             mov dword ptr [esp + 0x28], edx
// 00531843  89842488000000       mov dword ptr [esp + 0x88], eax
// 0053184a  57                   push edi
// 0053184b  eb03                 jmp 0x531850
// 0053184d  8d4900               lea ecx, [ecx]
// 00531850  807b3000             cmp byte ptr [ebx + 0x30], 0
// 00531854  0f84d6040000         je 0x531d30
// 0053185a  8b842414010000       mov eax, dword ptr [esp + 0x114]
// 00531861  8bb088000000         mov esi, dword ptr [eax + 0x88]
// 00531867  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 0053186a  3bb42484000000       cmp esi, dword ptr [esp + 0x84]
// 00531871  7319                 jae 0x53188c
// 00531873  8bc1                 mov eax, ecx
// 00531875  89442414             mov dword ptr [esp + 0x14], eax
// 00531879  03c0                 add eax, eax
// 0053187b  c644241300           mov byte ptr [esp + 0x13], 0
// 00531880  eb26                 jmp 0x5318a8
// 00531882  33c0                 xor eax, eax
// 00531884  5e                   pop esi
// 00531885  81c400010000         add esp, 0x100
// 0053188b  c3                   ret 
// 0053188c  8b4320               mov eax, dword ptr [ebx + 0x20]
// 0053188f  33d2                 xor edx, edx
// 00531891  f7f1                 div ecx
// 00531893  8bc2                 mov eax, edx
// 00531895  89442414             mov dword ptr [esp + 0x14], eax
// 00531899  85c0                 test eax, eax
// 0053189b  7506                 jne 0x5318a3
// 0053189d  8bc1                 mov eax, ecx
// 0053189f  894c2414             mov dword ptr [esp + 0x14], ecx
// 005318a3  c644241301           mov byte ptr [esp + 0x13], 1
// 005318a8  8bbc2414010000       mov edi, dword ptr [esp + 0x114]
// 005318af  6a00                 push 0
// 005318b1  85f6                 test esi, esi
// 005318b3  7625                 jbe 0x5318da
// 005318b5  8b5704               mov edx, dword ptr [edi + 4]
// 005318b8  4e                   dec esi
// 005318b9  0faff1               imul esi, ecx
// 005318bc  03c1                 add eax, ecx
// 005318be  8b4a20               mov ecx, dword ptr [edx + 0x20]
// 005318c1  50                   push eax
// 005318c2  56                   push esi
// 005318c3  8b742438             mov esi, dword ptr [esp + 0x38]
// 005318c7  8b06                 mov eax, dword ptr [esi]
// 005318c9  50                   push eax
// 005318ca  57                   push edi
// 005318cb  ffd1                 call ecx
// 005318cd  8b530c               mov edx, dword ptr [ebx + 0xc]
// 005318d0  8d0490               lea eax, [eax + edx*4]
// 005318d3  c644242600           mov byte ptr [esp + 0x26], 0
// 005318d8  eb18                 jmp 0x5318f2
// 005318da  8b742430             mov esi, dword ptr [esp + 0x30]
// 005318de  8b16                 mov edx, dword ptr [esi]
// 005318e0  8b4f04               mov ecx, dword ptr [edi + 4]
// 005318e3  50                   push eax
// 005318e4  8b4120               mov eax, dword ptr [ecx + 0x20]
// 005318e7  6a00                 push 0
// 005318e9  52                   push edx
// 005318ea  57                   push edi
// 005318eb  ffd0                 call eax
// 005318ed  c644242601           mov byte ptr [esp + 0x26], 1
// 005318f2  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 005318f6  89842480000000       mov dword ptr [esp + 0x80], eax
// 005318fd  8b4170               mov eax, dword ptr [ecx + 0x70]
// 00531900  03442474             add eax, dword ptr [esp + 0x74]
// 00531904  83c414               add esp, 0x14
// 00531907  89442420             mov dword ptr [esp + 0x20], eax
// 0053190b  8b434c               mov eax, dword ptr [ebx + 0x4c]
// 0053190e  0fb710               movzx edx, word ptr [eax]
// 00531911  0fb74802             movzx ecx, word ptr [eax + 2]
// 00531915  8954241c             mov dword ptr [esp + 0x1c], edx
// 00531919  0fb75010             movzx edx, word ptr [eax + 0x10]
// 0053191d  894c2478             mov dword ptr [esp + 0x78], ecx
// 00531921  0fb74820             movzx ecx, word ptr [eax + 0x20]
// 00531925  89542474             mov dword ptr [esp + 0x74], edx
// 00531929  0fb75012             movzx edx, word ptr [eax + 0x12]
// 0053192d  0fb74004             movzx eax, word ptr [eax + 4]
// 00531931  898c2480000000       mov dword ptr [esp + 0x80], ecx
// 00531938  8b8f9c010000         mov ecx, dword ptr [edi + 0x19c]
// 0053193e  038c248c000000       add ecx, dword ptr [esp + 0x8c]
// 00531945  837c241400           cmp dword ptr [esp + 0x14], 0
// 0053194a  8954247c             mov dword ptr [esp + 0x7c], edx
// 0053194e  8b543104             mov edx, dword ptr [ecx + esi + 4]
// 00531952  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00531956  89442468             mov dword ptr [esp + 0x68], eax
// 0053195a  8b842418010000       mov eax, dword ptr [esp + 0x118]
// 00531961  89942488000000       mov dword ptr [esp + 0x88], edx
// 00531968  8b1488               mov edx, dword ptr [eax + ecx*4]
// 0053196b  89542448             mov dword ptr [esp + 0x48], edx
// 0053196f  c744245000000000     mov dword ptr [esp + 0x50], 0
// 00531977  0f8eb3030000         jle 0x531d30
// 0053197d  8d4900               lea ecx, [ecx]
// 00531980  807c241200           cmp byte ptr [esp + 0x12], 0
// 00531985  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 00531989  8b542450             mov edx, dword ptr [esp + 0x50]
// 0053198d  8b3c96               mov edi, dword ptr [esi + edx*4]
// 00531990  897c2418             mov dword ptr [esp + 0x18], edi
// 00531994  7406                 je 0x53199c
// 00531996  8bcf                 mov ecx, edi
// 00531998  85d2                 test edx, edx
// 0053199a  7404                 je 0x5319a0
// 0053199c  8b4c96fc             mov ecx, dword ptr [esi + edx*4 - 4]
// 005319a0  807c241300           cmp byte ptr [esp + 0x13], 0
// 005319a5  740b                 je 0x5319b2
// 005319a7  8b442414             mov eax, dword ptr [esp + 0x14]
// 005319ab  48                   dec eax
// 005319ac  3bd0                 cmp edx, eax
// 005319ae  8bc7                 mov eax, edi
// 005319b0  7404                 je 0x5319b6
// 005319b2  8b449604             mov eax, dword ptr [esi + edx*4 + 4]
// 005319b6  8b542418             mov edx, dword ptr [esp + 0x18]
// 005319ba  0fbf32               movsx esi, word ptr [edx]
// 005319bd  0fbf39               movsx edi, word ptr [ecx]
// 005319c0  0fbf28               movsx ebp, word ptr [eax]
// 005319c3  8b531c               mov edx, dword ptr [ebx + 0x1c]
// 005319c6  4a                   dec edx
// 005319c7  83e880               sub eax, -0x80
// 005319ca  83e980               sub ecx, -0x80
// 005319cd  897c243c             mov dword ptr [esp + 0x3c], edi
// 005319d1  897c2424             mov dword ptr [esp + 0x24], edi
// 005319d5  89742430             mov dword ptr [esp + 0x30], esi
// 005319d9  8974245c             mov dword ptr [esp + 0x5c], esi
// 005319dd  896c2444             mov dword ptr [esp + 0x44], ebp
// 005319e1  896c2428             mov dword ptr [esp + 0x28], ebp
// 005319e5  c744243800000000     mov dword ptr [esp + 0x38], 0
// 005319ed  89542470             mov dword ptr [esp + 0x70], edx
// 005319f1  c744244000000000     mov dword ptr [esp + 0x40], 0
// 005319f9  8944244c             mov dword ptr [esp + 0x4c], eax
// 005319fd  894c2454             mov dword ptr [esp + 0x54], ecx
// 00531a01  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00531a05  6a01                 push 1
// 00531a07  8d842494000000       lea eax, [esp + 0x94]
// 00531a0e  50                   push eax
// 00531a0f  51                   push ecx
// 00531a10  e86b41ffff           call 0x525b80
// 00531a15  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 00531a19  83c40c               add esp, 0xc
// 00531a1c  39542440             cmp dword ptr [esp + 0x40], edx
// 00531a20  7321                 jae 0x531a43
// 00531a22  8b442454             mov eax, dword ptr [esp + 0x54]
// 00531a26  0fbf08               movsx ecx, word ptr [eax]
// 00531a29  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00531a2d  8b542418             mov edx, dword ptr [esp + 0x18]
// 00531a31  0fbfb280000000       movsx esi, word ptr [edx + 0x80]
// 00531a38  894c243c             mov dword ptr [esp + 0x3c], ecx
// 00531a3c  0fbf08               movsx ecx, word ptr [eax]
// 00531a3f  894c2444             mov dword ptr [esp + 0x44], ecx
// 00531a43  8b542420             mov edx, dword ptr [esp + 0x20]
// 00531a47  8b4a04               mov ecx, dword ptr [edx + 4]
// 00531a4a  85c9                 test ecx, ecx
// 00531a4c  7469                 je 0x531ab7
// 00531a4e  6683bc249200000000   cmp word ptr [esp + 0x92], 0
// 00531a57  755e                 jne 0x531ab7
// 00531a59  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 00531a5d  8b5c2478             mov ebx, dword ptr [esp + 0x78]
// 00531a61  2bc6                 sub eax, esi
// 00531a63  0faf44241c           imul eax, dword ptr [esp + 0x1c]
// 00531a68  8d14c0               lea edx, [eax + eax*8]
// 00531a6b  8bc3                 mov eax, ebx
// 00531a6d  03d2                 add edx, edx
// 00531a6f  c1e007               shl eax, 7
// 00531a72  c1e308               shl ebx, 8
// 00531a75  03d2                 add edx, edx
// 00531a77  7819                 js 0x531a92
// 00531a79  03c2                 add eax, edx
// 00531a7b  99                   cdq 
// 00531a7c  f7fb                 idiv ebx
// 00531a7e  85c9                 test ecx, ecx
// 00531a80  7e29                 jle 0x531aab
// 00531a82  ba01000000           mov edx, 1
// 00531a87  d3e2                 shl edx, cl
// 00531a89  3bc2                 cmp eax, edx
// 00531a8b  7c1e                 jl 0x531aab
// 00531a8d  8d42ff               lea eax, [edx - 1]
// 00531a90  eb19                 jmp 0x531aab
// 00531a92  2bc2                 sub eax, edx
// 00531a94  99                   cdq 
// 00531a95  f7fb                 idiv ebx
// 00531a97  85c9                 test ecx, ecx
// 00531a99  7e0e                 jle 0x531aa9
// 00531a9b  ba01000000           mov edx, 1
// 00531aa0  d3e2                 shl edx, cl
// 00531aa2  3bc2                 cmp eax, edx
// 00531aa4  7c03                 jl 0x531aa9
// 00531aa6  8d42ff               lea eax, [edx - 1]
// 00531aa9  f7d8                 neg eax
// 00531aab  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00531aaf  6689842492000000     mov word ptr [esp + 0x92], ax
// 00531ab7  8b442420             mov eax, dword ptr [esp + 0x20]
// 00531abb  8b4808               mov ecx, dword ptr [eax + 8]
// 00531abe  85c9                 test ecx, ecx
// 00531ac0  746b                 je 0x531b2d
// 00531ac2  6683bc24a000000000   cmp word ptr [esp + 0xa0], 0
// 00531acb  7560                 jne 0x531b2d
// 00531acd  8b442424             mov eax, dword ptr [esp + 0x24]
// 00531ad1  2b442428             sub eax, dword ptr [esp + 0x28]
// 00531ad5  8b5c2474             mov ebx, dword ptr [esp + 0x74]
// 00531ad9  0faf44241c           imul eax, dword ptr [esp + 0x1c]
// 00531ade  8d14c0               lea edx, [eax + eax*8]
// 00531ae1  8bc3                 mov eax, ebx
// 00531ae3  03d2                 add edx, edx
// 00531ae5  c1e007               shl eax, 7
// 00531ae8  c1e308               shl ebx, 8
// 00531aeb  03d2                 add edx, edx
// 00531aed  7819                 js 0x531b08
// 00531aef  03c2                 add eax, edx
// 00531af1  99                   cdq 
// 00531af2  f7fb                 idiv ebx
// 00531af4  85c9                 test ecx, ecx
// 00531af6  7e29                 jle 0x531b21
// 00531af8  ba01000000           mov edx, 1
// 00531afd  d3e2                 shl edx, cl
// 00531aff  3bc2                 cmp eax, edx
// 00531b01  7c1e                 jl 0x531b21
// 00531b03  8d42ff               lea eax, [edx - 1]
// 00531b06  eb19                 jmp 0x531b21
// 00531b08  2bc2                 sub eax, edx
// 00531b0a  99                   cdq 
// 00531b0b  f7fb                 idiv ebx
// 00531b0d  85c9                 test ecx, ecx
// 00531b0f  7e0e                 jle 0x531b1f
// 00531b11  ba01000000           mov edx, 1
// 00531b16  d3e2                 shl edx, cl
// 00531b18  3bc2                 cmp eax, edx
// 00531b1a  7c03                 jl 0x531b1f
// 00531b1c  8d42ff               lea eax, [edx - 1]
// 00531b1f  f7d8                 neg eax
// 00531b21  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00531b25  66898424a0000000     mov word ptr [esp + 0xa0], ax
// 00531b2d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00531b31  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 00531b34  85c9                 test ecx, ecx
// 00531b36  7477                 je 0x531baf
// 00531b38  6683bc24b000000000   cmp word ptr [esp + 0xb0], 0
// 00531b41  756c                 jne 0x531baf
// 00531b43  8b542430             mov edx, dword ptr [esp + 0x30]
// 00531b47  8b9c2480000000       mov ebx, dword ptr [esp + 0x80]
// 00531b4e  8d0412               lea eax, [edx + edx]
// 00531b51  8bd0                 mov edx, eax
// 00531b53  8b442428             mov eax, dword ptr [esp + 0x28]
// 00531b57  2bc2                 sub eax, edx
// 00531b59  03442424             add eax, dword ptr [esp + 0x24]
// 00531b5d  0faf44241c           imul eax, dword ptr [esp + 0x1c]
// 00531b62  8d14c0               lea edx, [eax + eax*8]
// 00531b65  8bc3                 mov eax, ebx
// 00531b67  c1e007               shl eax, 7
// 00531b6a  c1e308               shl ebx, 8
// 00531b6d  85d2                 test edx, edx
// 00531b6f  7c19                 jl 0x531b8a
// 00531b71  03c2                 add eax, edx
// 00531b73  99                   cdq 
// 00531b74  f7fb                 idiv ebx
// 00531b76  85c9                 test ecx, ecx
// 00531b78  7e29                 jle 0x531ba3
// 00531b7a  ba01000000           mov edx, 1
// 00531b7f  d3e2                 shl edx, cl
// 00531b81  3bc2                 cmp eax, edx
// 00531b83  7c1e                 jl 0x531ba3
// 00531b85  8d42ff               lea eax, [edx - 1]
// 00531b88  eb19                 jmp 0x531ba3
// 00531b8a  2bc2                 sub eax, edx
// 00531b8c  99                   cdq 
// 00531b8d  f7fb                 idiv ebx
// 00531b8f  85c9                 test ecx, ecx
// 00531b91  7e0e                 jle 0x531ba1
// 00531b93  ba01000000           mov edx, 1
// 00531b98  d3e2                 shl edx, cl
// 00531b9a  3bc2                 cmp eax, edx
// 00531b9c  7c03                 jl 0x531ba1
// 00531b9e  8d42ff               lea eax, [edx - 1]
// 00531ba1  f7d8                 neg eax
// 00531ba3  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00531ba7  66898424b0000000     mov word ptr [esp + 0xb0], ax
// 00531baf  8b442420             mov eax, dword ptr [esp + 0x20]
// 00531bb3  8b4810               mov ecx, dword ptr [eax + 0x10]
// 00531bb6  85c9                 test ecx, ecx
// 00531bb8  7469                 je 0x531c23
// 00531bba  6683bc24a200000000   cmp word ptr [esp + 0xa2], 0
// 00531bc3  755e                 jne 0x531c23
// 00531bc5  8b442444             mov eax, dword ptr [esp + 0x44]
// 00531bc9  2bc5                 sub eax, ebp
// 00531bcb  2b44243c             sub eax, dword ptr [esp + 0x3c]
// 00531bcf  03c7                 add eax, edi
// 00531bd1  0faf44241c           imul eax, dword ptr [esp + 0x1c]
// 00531bd6  8b7c247c             mov edi, dword ptr [esp + 0x7c]
// 00531bda  8d1480               lea edx, [eax + eax*4]
// 00531bdd  8bc7                 mov eax, edi
// 00531bdf  c1e007               shl eax, 7
// 00531be2  c1e708               shl edi, 8
// 00531be5  85d2                 test edx, edx
// 00531be7  7c19                 jl 0x531c02
// 00531be9  03c2                 add eax, edx
// 00531beb  99                   cdq 
// 00531bec  f7ff                 idiv edi
// 00531bee  85c9                 test ecx, ecx
// 00531bf0  7e29                 jle 0x531c1b
// 00531bf2  ba01000000           mov edx, 1
// 00531bf7  d3e2                 shl edx, cl
// 00531bf9  3bc2                 cmp eax, edx
// 00531bfb  7c1e                 jl 0x531c1b
// 00531bfd  8d42ff               lea eax, [edx - 1]
// 00531c00  eb19                 jmp 0x531c1b
// 00531c02  2bc2                 sub eax, edx
// 00531c04  99                   cdq 
// 00531c05  f7ff                 idiv edi
// 00531c07  85c9                 test ecx, ecx
// 00531c09  7e0e                 jle 0x531c19
// 00531c0b  ba01000000           mov edx, 1
// 00531c10  d3e2                 shl edx, cl
// 00531c12  3bc2                 cmp eax, edx
// 00531c14  7c03                 jl 0x531c19
// 00531c16  8d42ff               lea eax, [edx - 1]
// 00531c19  f7d8                 neg eax
// 00531c1b  66898424a2000000     mov word ptr [esp + 0xa2], ax
// 00531c23  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00531c27  8b4914               mov ecx, dword ptr [ecx + 0x14]
// 00531c2a  85c9                 test ecx, ecx
// 00531c2c  746e                 je 0x531c9c
// 00531c2e  6683bc249400000000   cmp word ptr [esp + 0x94], 0
// 00531c37  7563                 jne 0x531c9c
// 00531c39  8b542430             mov edx, dword ptr [esp + 0x30]
// 00531c3d  8b7c2468             mov edi, dword ptr [esp + 0x68]
// 00531c41  8d0412               lea eax, [edx + edx]
// 00531c44  8bd0                 mov edx, eax
// 00531c46  8bc6                 mov eax, esi
// 00531c48  2bc2                 sub eax, edx
// 00531c4a  0344245c             add eax, dword ptr [esp + 0x5c]
// 00531c4e  0faf44241c           imul eax, dword ptr [esp + 0x1c]
// 00531c53  8d14c0               lea edx, [eax + eax*8]
// 00531c56  8bc7                 mov eax, edi
// 00531c58  c1e007               shl eax, 7
// 00531c5b  c1e708               shl edi, 8
// 00531c5e  85d2                 test edx, edx
// 00531c60  7c19                 jl 0x531c7b
// 00531c62  03c2                 add eax, edx
// 00531c64  99                   cdq 
// 00531c65  f7ff                 idiv edi
// 00531c67  85c9                 test ecx, ecx
// 00531c69  7e29                 jle 0x531c94
// 00531c6b  ba01000000           mov edx, 1
// 00531c70  d3e2                 shl edx, cl
// 00531c72  3bc2                 cmp eax, edx
// 00531c74  7c1e                 jl 0x531c94
// 00531c76  8d42ff               lea eax, [edx - 1]
// 00531c79  eb19                 jmp 0x531c94
// 00531c7b  2bc2                 sub eax, edx
// 00531c7d  99                   cdq 
// 00531c7e  f7ff                 idiv edi
// 00531c80  85c9                 test ecx, ecx
// 00531c82  7e0e                 jle 0x531c92
// 00531c84  ba01000000           mov edx, 1
// 00531c89  d3e2                 shl edx, cl
// 00531c8b  3bc2                 cmp eax, edx
// 00531c8d  7c03                 jl 0x531c92
// 00531c8f  8d42ff               lea eax, [edx - 1]
// 00531c92  f7d8                 neg eax
// 00531c94  6689842494000000     mov word ptr [esp + 0x94], ax
// 00531c9c  8b442438             mov eax, dword ptr [esp + 0x38]
// 00531ca0  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00531ca4  50                   push eax
// 00531ca5  8b842418010000       mov eax, dword ptr [esp + 0x118]
// 00531cac  51                   push ecx
// 00531cad  8d942498000000       lea edx, [esp + 0x98]
// 00531cb4  52                   push edx
// 00531cb5  53                   push ebx
// 00531cb6  50                   push eax
// 00531cb7  ff94249c000000       call dword ptr [esp + 0x9c]
// 00531cbe  8b442458             mov eax, dword ptr [esp + 0x58]
// 00531cc2  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 00531cc6  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00531cca  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 00531cce  8b542444             mov edx, dword ptr [esp + 0x44]
// 00531cd2  8944243c             mov dword ptr [esp + 0x3c], eax
// 00531cd6  b880000000           mov eax, 0x80
// 00531cdb  0144242c             add dword ptr [esp + 0x2c], eax
// 00531cdf  01442468             add dword ptr [esp + 0x68], eax
// 00531ce3  01442460             add dword ptr [esp + 0x60], eax
// 00531ce7  8b442454             mov eax, dword ptr [esp + 0x54]
// 00531ceb  894c2438             mov dword ptr [esp + 0x38], ecx
// 00531cef  8b4b24               mov ecx, dword ptr [ebx + 0x24]
// 00531cf2  014c244c             add dword ptr [esp + 0x4c], ecx
// 00531cf6  40                   inc eax
// 00531cf7  83c414               add esp, 0x14
// 00531cfa  8954245c             mov dword ptr [esp + 0x5c], edx
// 00531cfe  89742430             mov dword ptr [esp + 0x30], esi
// 00531d02  89442440             mov dword ptr [esp + 0x40], eax
// 00531d06  3b442470             cmp eax, dword ptr [esp + 0x70]
// 00531d0a  0f86f1fcffff         jbe 0x531a01
// 00531d10  8b442448             mov eax, dword ptr [esp + 0x48]
// 00531d14  8bd1                 mov edx, ecx
// 00531d16  8d0c90               lea ecx, [eax + edx*4]
// 00531d19  8b442450             mov eax, dword ptr [esp + 0x50]
// 00531d1d  40                   inc eax
// 00531d1e  3b442414             cmp eax, dword ptr [esp + 0x14]
// 00531d22  894c2448             mov dword ptr [esp + 0x48], ecx
// 00531d26  89442450             mov dword ptr [esp + 0x50], eax
// 00531d2a  0f8c50fcffff         jl 0x531980
// 00531d30  8b442458             mov eax, dword ptr [esp + 0x58]
// 00531d34  8b942414010000       mov edx, dword ptr [esp + 0x114]
// 00531d3b  8344246018           add dword ptr [esp + 0x60], 0x18
// 00531d40  8344242c04           add dword ptr [esp + 0x2c], 4
// 00531d45  40                   inc eax
// 00531d46  83c354               add ebx, 0x54
// 00531d49  3b4224               cmp eax, dword ptr [edx + 0x24]
// 00531d4c  89442458             mov dword ptr [esp + 0x58], eax
// 00531d50  895c2434             mov dword ptr [esp + 0x34], ebx
// 00531d54  0f8cf6faffff         jl 0x531850
// 00531d5a  5f                   pop edi
// 00531d5b  5d                   pop ebp
// 00531d5c  8b8c240c010000       mov ecx, dword ptr [esp + 0x10c]
// 00531d63  ff8188000000         inc dword ptr [ecx + 0x88]
// 00531d69  8b8188000000         mov eax, dword ptr [ecx + 0x88]
// 00531d6f  3b811c010000         cmp eax, dword ptr [ecx + 0x11c]
// 00531d75  5b                   pop ebx
// 00531d76  1bc0                 sbb eax, eax
// 00531d78  83c004               add eax, 4
// 00531d7b  5e                   pop esi
// 00531d7c  81c400010000         add esp, 0x100
// 00531d82  c3                   ret 
// library jpeg-6b/jdcoefct.c (function _decompress_smooth_data)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcoefct.c
