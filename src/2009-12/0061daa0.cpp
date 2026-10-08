// roc 2009-12 0061daa0  unit: seg_00610000  size: 1523 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0061daa0
//
// 0061daa0  81ec00010000         sub esp, 0x100
// 0061daa6  56                   push esi
// 0061daa7  8bb42408010000       mov esi, dword ptr [esp + 0x108]
// 0061daae  8b8688010000         mov eax, dword ptr [esi + 0x188]
// 0061dab4  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 0061dab7  89442458             mov dword ptr [esp + 0x58], eax
// 0061dabb  8b861c010000         mov eax, dword ptr [esi + 0x11c]
// 0061dac1  48                   dec eax
// 0061dac2  3b8e84000000         cmp ecx, dword ptr [esi + 0x84]
// 0061dac8  89442478             mov dword ptr [esp + 0x78], eax
// 0061dacc  7f4d                 jg 0x61db1b
// 0061dace  8bff                 mov edi, edi
// 0061dad0  8b8690010000         mov eax, dword ptr [esi + 0x190]
// 0061dad6  80781100             cmp byte ptr [eax + 0x11], 0
// 0061dada  753f                 jne 0x61db1b
// 0061dadc  8b567c               mov edx, dword ptr [esi + 0x7c]
// 0061dadf  3b9684000000         cmp edx, dword ptr [esi + 0x84]
// 0061dae5  7519                 jne 0x61db00
// 0061dae7  33c9                 xor ecx, ecx
// 0061dae9  398e6c010000         cmp dword ptr [esi + 0x16c], ecx
// 0061daef  0f94c1               sete cl
// 0061daf2  038e88000000         add ecx, dword ptr [esi + 0x88]
// 0061daf8  398e80000000         cmp dword ptr [esi + 0x80], ecx
// 0061dafe  771b                 ja 0x61db1b
// 0061db00  8b10                 mov edx, dword ptr [eax]
// 0061db02  56                   push esi
// 0061db03  ffd2                 call edx
// 0061db05  83c404               add esp, 4
// 0061db08  85c0                 test eax, eax
// 0061db0a  0f8482000000         je 0x61db92
// 0061db10  8b467c               mov eax, dword ptr [esi + 0x7c]
// 0061db13  3b8684000000         cmp eax, dword ptr [esi + 0x84]
// 0061db19  7eb5                 jle 0x61dad0
// 0061db1b  837e2400             cmp dword ptr [esi + 0x24], 0
// 0061db1f  53                   push ebx
// 0061db20  8b9ec4000000         mov ebx, dword ptr [esi + 0xc4]
// 0061db26  c744245000000000     mov dword ptr [esp + 0x50], 0
// 0061db2e  895c242c             mov dword ptr [esp + 0x2c], ebx
// 0061db32  0f8e34050000         jle 0x61e06c
// 0061db38  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0061db3c  b8b8ffffff           mov eax, 0xffffffb8
// 0061db41  8d5148               lea edx, [ecx + 0x48]
// 0061db44  2bc1                 sub eax, ecx
// 0061db46  55                   push ebp
// 0061db47  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 0061db4f  89542428             mov dword ptr [esp + 0x28], edx
// 0061db53  89842488000000       mov dword ptr [esp + 0x88], eax
// 0061db5a  57                   push edi
// 0061db5b  eb03                 jmp 0x61db60
// 0061db5d  8d4900               lea ecx, [ecx]
// 0061db60  807b3000             cmp byte ptr [ebx + 0x30], 0
// 0061db64  0f84d6040000         je 0x61e040
// 0061db6a  8b842414010000       mov eax, dword ptr [esp + 0x114]
// 0061db71  8bb088000000         mov esi, dword ptr [eax + 0x88]
// 0061db77  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 0061db7a  3bb42484000000       cmp esi, dword ptr [esp + 0x84]
// 0061db81  7319                 jae 0x61db9c
// 0061db83  8bc1                 mov eax, ecx
// 0061db85  89442414             mov dword ptr [esp + 0x14], eax
// 0061db89  03c0                 add eax, eax
// 0061db8b  c644241300           mov byte ptr [esp + 0x13], 0
// 0061db90  eb26                 jmp 0x61dbb8
// 0061db92  33c0                 xor eax, eax
// 0061db94  5e                   pop esi
// 0061db95  81c400010000         add esp, 0x100
// 0061db9b  c3                   ret 
// 0061db9c  8b4320               mov eax, dword ptr [ebx + 0x20]
// 0061db9f  33d2                 xor edx, edx
// 0061dba1  f7f1                 div ecx
// 0061dba3  8bc2                 mov eax, edx
// 0061dba5  89442414             mov dword ptr [esp + 0x14], eax
// 0061dba9  85c0                 test eax, eax
// 0061dbab  7506                 jne 0x61dbb3
// 0061dbad  8bc1                 mov eax, ecx
// 0061dbaf  894c2414             mov dword ptr [esp + 0x14], ecx
// 0061dbb3  c644241301           mov byte ptr [esp + 0x13], 1
// 0061dbb8  8bbc2414010000       mov edi, dword ptr [esp + 0x114]
// 0061dbbf  6a00                 push 0
// 0061dbc1  85f6                 test esi, esi
// 0061dbc3  7625                 jbe 0x61dbea
// 0061dbc5  8b5704               mov edx, dword ptr [edi + 4]
// 0061dbc8  4e                   dec esi
// 0061dbc9  0faff1               imul esi, ecx
// 0061dbcc  03c1                 add eax, ecx
// 0061dbce  8b4a20               mov ecx, dword ptr [edx + 0x20]
// 0061dbd1  50                   push eax
// 0061dbd2  56                   push esi
// 0061dbd3  8b742438             mov esi, dword ptr [esp + 0x38]
// 0061dbd7  8b06                 mov eax, dword ptr [esi]
// 0061dbd9  50                   push eax
// 0061dbda  57                   push edi
// 0061dbdb  ffd1                 call ecx
// 0061dbdd  8b530c               mov edx, dword ptr [ebx + 0xc]
// 0061dbe0  8d0490               lea eax, [eax + edx*4]
// 0061dbe3  c644242600           mov byte ptr [esp + 0x26], 0
// 0061dbe8  eb18                 jmp 0x61dc02
// 0061dbea  8b742430             mov esi, dword ptr [esp + 0x30]
// 0061dbee  8b16                 mov edx, dword ptr [esi]
// 0061dbf0  8b4f04               mov ecx, dword ptr [edi + 4]
// 0061dbf3  50                   push eax
// 0061dbf4  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0061dbf7  6a00                 push 0
// 0061dbf9  52                   push edx
// 0061dbfa  57                   push edi
// 0061dbfb  ffd0                 call eax
// 0061dbfd  c644242601           mov byte ptr [esp + 0x26], 1
// 0061dc02  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 0061dc06  89842480000000       mov dword ptr [esp + 0x80], eax
// 0061dc0d  8b4170               mov eax, dword ptr [ecx + 0x70]
// 0061dc10  03442474             add eax, dword ptr [esp + 0x74]
// 0061dc14  83c414               add esp, 0x14
// 0061dc17  89442420             mov dword ptr [esp + 0x20], eax
// 0061dc1b  8b434c               mov eax, dword ptr [ebx + 0x4c]
// 0061dc1e  0fb710               movzx edx, word ptr [eax]
// 0061dc21  0fb74802             movzx ecx, word ptr [eax + 2]
// 0061dc25  8954241c             mov dword ptr [esp + 0x1c], edx
// 0061dc29  0fb75010             movzx edx, word ptr [eax + 0x10]
// 0061dc2d  894c2478             mov dword ptr [esp + 0x78], ecx
// 0061dc31  0fb74820             movzx ecx, word ptr [eax + 0x20]
// 0061dc35  89542474             mov dword ptr [esp + 0x74], edx
// 0061dc39  0fb75012             movzx edx, word ptr [eax + 0x12]
// 0061dc3d  0fb74004             movzx eax, word ptr [eax + 4]
// 0061dc41  898c2480000000       mov dword ptr [esp + 0x80], ecx
// 0061dc48  8b8f9c010000         mov ecx, dword ptr [edi + 0x19c]
// 0061dc4e  038c248c000000       add ecx, dword ptr [esp + 0x8c]
// 0061dc55  837c241400           cmp dword ptr [esp + 0x14], 0
// 0061dc5a  8954247c             mov dword ptr [esp + 0x7c], edx
// 0061dc5e  8b543104             mov edx, dword ptr [ecx + esi + 4]
// 0061dc62  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0061dc66  89442468             mov dword ptr [esp + 0x68], eax
// 0061dc6a  8b842418010000       mov eax, dword ptr [esp + 0x118]
// 0061dc71  89942488000000       mov dword ptr [esp + 0x88], edx
// 0061dc78  8b1488               mov edx, dword ptr [eax + ecx*4]
// 0061dc7b  89542448             mov dword ptr [esp + 0x48], edx
// 0061dc7f  c744245000000000     mov dword ptr [esp + 0x50], 0
// 0061dc87  0f8eb3030000         jle 0x61e040
// 0061dc8d  8d4900               lea ecx, [ecx]
// 0061dc90  807c241200           cmp byte ptr [esp + 0x12], 0
// 0061dc95  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 0061dc99  8b542450             mov edx, dword ptr [esp + 0x50]
// 0061dc9d  8b3c96               mov edi, dword ptr [esi + edx*4]
// 0061dca0  897c2418             mov dword ptr [esp + 0x18], edi
// 0061dca4  7406                 je 0x61dcac
// 0061dca6  8bcf                 mov ecx, edi
// 0061dca8  85d2                 test edx, edx
// 0061dcaa  7404                 je 0x61dcb0
// 0061dcac  8b4c96fc             mov ecx, dword ptr [esi + edx*4 - 4]
// 0061dcb0  807c241300           cmp byte ptr [esp + 0x13], 0
// 0061dcb5  740b                 je 0x61dcc2
// 0061dcb7  8b442414             mov eax, dword ptr [esp + 0x14]
// 0061dcbb  48                   dec eax
// 0061dcbc  3bd0                 cmp edx, eax
// 0061dcbe  8bc7                 mov eax, edi
// 0061dcc0  7404                 je 0x61dcc6
// 0061dcc2  8b449604             mov eax, dword ptr [esi + edx*4 + 4]
// 0061dcc6  8b542418             mov edx, dword ptr [esp + 0x18]
// 0061dcca  0fbf32               movsx esi, word ptr [edx]
// 0061dccd  0fbf39               movsx edi, word ptr [ecx]
// 0061dcd0  0fbf28               movsx ebp, word ptr [eax]
// 0061dcd3  8b531c               mov edx, dword ptr [ebx + 0x1c]
// 0061dcd6  4a                   dec edx
// 0061dcd7  83e880               sub eax, -0x80
// 0061dcda  83e980               sub ecx, -0x80
// 0061dcdd  897c243c             mov dword ptr [esp + 0x3c], edi
// 0061dce1  897c2424             mov dword ptr [esp + 0x24], edi
// 0061dce5  89742430             mov dword ptr [esp + 0x30], esi
// 0061dce9  8974245c             mov dword ptr [esp + 0x5c], esi
// 0061dced  896c2444             mov dword ptr [esp + 0x44], ebp
// 0061dcf1  896c2428             mov dword ptr [esp + 0x28], ebp
// 0061dcf5  c744243800000000     mov dword ptr [esp + 0x38], 0
// 0061dcfd  89542470             mov dword ptr [esp + 0x70], edx
// 0061dd01  c744244000000000     mov dword ptr [esp + 0x40], 0
// 0061dd09  8944244c             mov dword ptr [esp + 0x4c], eax
// 0061dd0d  894c2454             mov dword ptr [esp + 0x54], ecx
// 0061dd11  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0061dd15  6a01                 push 1
// 0061dd17  8d842494000000       lea eax, [esp + 0x94]
// 0061dd1e  50                   push eax
// 0061dd1f  51                   push ecx
// 0061dd20  e8bbdffeff           call 0x60bce0
// 0061dd25  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 0061dd29  83c40c               add esp, 0xc
// 0061dd2c  39542440             cmp dword ptr [esp + 0x40], edx
// 0061dd30  7321                 jae 0x61dd53
// 0061dd32  8b442454             mov eax, dword ptr [esp + 0x54]
// 0061dd36  0fbf08               movsx ecx, word ptr [eax]
// 0061dd39  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0061dd3d  8b542418             mov edx, dword ptr [esp + 0x18]
// 0061dd41  0fbfb280000000       movsx esi, word ptr [edx + 0x80]
// 0061dd48  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0061dd4c  0fbf08               movsx ecx, word ptr [eax]
// 0061dd4f  894c2444             mov dword ptr [esp + 0x44], ecx
// 0061dd53  8b542420             mov edx, dword ptr [esp + 0x20]
// 0061dd57  8b4a04               mov ecx, dword ptr [edx + 4]
// 0061dd5a  85c9                 test ecx, ecx
// 0061dd5c  7469                 je 0x61ddc7
// 0061dd5e  6683bc249200000000   cmp word ptr [esp + 0x92], 0
// 0061dd67  755e                 jne 0x61ddc7
// 0061dd69  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 0061dd6d  8b5c2478             mov ebx, dword ptr [esp + 0x78]
// 0061dd71  2bc6                 sub eax, esi
// 0061dd73  0faf44241c           imul eax, dword ptr [esp + 0x1c]
// 0061dd78  8d14c0               lea edx, [eax + eax*8]
// 0061dd7b  8bc3                 mov eax, ebx
// 0061dd7d  03d2                 add edx, edx
// 0061dd7f  c1e007               shl eax, 7
// 0061dd82  c1e308               shl ebx, 8
// 0061dd85  03d2                 add edx, edx
// 0061dd87  7819                 js 0x61dda2
// 0061dd89  03c2                 add eax, edx
// 0061dd8b  99                   cdq 
// 0061dd8c  f7fb                 idiv ebx
// 0061dd8e  85c9                 test ecx, ecx
// 0061dd90  7e29                 jle 0x61ddbb
// 0061dd92  ba01000000           mov edx, 1
// 0061dd97  d3e2                 shl edx, cl
// 0061dd99  3bc2                 cmp eax, edx
// 0061dd9b  7c1e                 jl 0x61ddbb
// 0061dd9d  8d42ff               lea eax, [edx - 1]
// 0061dda0  eb19                 jmp 0x61ddbb
// 0061dda2  2bc2                 sub eax, edx
// 0061dda4  99                   cdq 
// 0061dda5  f7fb                 idiv ebx
// 0061dda7  85c9                 test ecx, ecx
// 0061dda9  7e0e                 jle 0x61ddb9
// 0061ddab  ba01000000           mov edx, 1
// 0061ddb0  d3e2                 shl edx, cl
// 0061ddb2  3bc2                 cmp eax, edx
// 0061ddb4  7c03                 jl 0x61ddb9
// 0061ddb6  8d42ff               lea eax, [edx - 1]
// 0061ddb9  f7d8                 neg eax
// 0061ddbb  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 0061ddbf  6689842492000000     mov word ptr [esp + 0x92], ax
// 0061ddc7  8b442420             mov eax, dword ptr [esp + 0x20]
// 0061ddcb  8b4808               mov ecx, dword ptr [eax + 8]
// 0061ddce  85c9                 test ecx, ecx
// 0061ddd0  746b                 je 0x61de3d
// 0061ddd2  6683bc24a000000000   cmp word ptr [esp + 0xa0], 0
// 0061dddb  7560                 jne 0x61de3d
// 0061dddd  8b442424             mov eax, dword ptr [esp + 0x24]
// 0061dde1  2b442428             sub eax, dword ptr [esp + 0x28]
// 0061dde5  8b5c2474             mov ebx, dword ptr [esp + 0x74]
// 0061dde9  0faf44241c           imul eax, dword ptr [esp + 0x1c]
// 0061ddee  8d14c0               lea edx, [eax + eax*8]
// 0061ddf1  8bc3                 mov eax, ebx
// 0061ddf3  03d2                 add edx, edx
// 0061ddf5  c1e007               shl eax, 7
// 0061ddf8  c1e308               shl ebx, 8
// 0061ddfb  03d2                 add edx, edx
// 0061ddfd  7819                 js 0x61de18
// 0061ddff  03c2                 add eax, edx
// 0061de01  99                   cdq 
// 0061de02  f7fb                 idiv ebx
// 0061de04  85c9                 test ecx, ecx
// 0061de06  7e29                 jle 0x61de31
// 0061de08  ba01000000           mov edx, 1
// 0061de0d  d3e2                 shl edx, cl
// 0061de0f  3bc2                 cmp eax, edx
// 0061de11  7c1e                 jl 0x61de31
// 0061de13  8d42ff               lea eax, [edx - 1]
// 0061de16  eb19                 jmp 0x61de31
// 0061de18  2bc2                 sub eax, edx
// 0061de1a  99                   cdq 
// 0061de1b  f7fb                 idiv ebx
// 0061de1d  85c9                 test ecx, ecx
// 0061de1f  7e0e                 jle 0x61de2f
// 0061de21  ba01000000           mov edx, 1
// 0061de26  d3e2                 shl edx, cl
// 0061de28  3bc2                 cmp eax, edx
// 0061de2a  7c03                 jl 0x61de2f
// 0061de2c  8d42ff               lea eax, [edx - 1]
// 0061de2f  f7d8                 neg eax
// 0061de31  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 0061de35  66898424a0000000     mov word ptr [esp + 0xa0], ax
// 0061de3d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0061de41  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0061de44  85c9                 test ecx, ecx
// 0061de46  7477                 je 0x61debf
// 0061de48  6683bc24b000000000   cmp word ptr [esp + 0xb0], 0
// 0061de51  756c                 jne 0x61debf
// 0061de53  8b542430             mov edx, dword ptr [esp + 0x30]
// 0061de57  8b9c2480000000       mov ebx, dword ptr [esp + 0x80]
// 0061de5e  8d0412               lea eax, [edx + edx]
// 0061de61  8bd0                 mov edx, eax
// 0061de63  8b442428             mov eax, dword ptr [esp + 0x28]
// 0061de67  2bc2                 sub eax, edx
// 0061de69  03442424             add eax, dword ptr [esp + 0x24]
// 0061de6d  0faf44241c           imul eax, dword ptr [esp + 0x1c]
// 0061de72  8d14c0               lea edx, [eax + eax*8]
// 0061de75  8bc3                 mov eax, ebx
// 0061de77  c1e007               shl eax, 7
// 0061de7a  c1e308               shl ebx, 8
// 0061de7d  85d2                 test edx, edx
// 0061de7f  7c19                 jl 0x61de9a
// 0061de81  03c2                 add eax, edx
// 0061de83  99                   cdq 
// 0061de84  f7fb                 idiv ebx
// 0061de86  85c9                 test ecx, ecx
// 0061de88  7e29                 jle 0x61deb3
// 0061de8a  ba01000000           mov edx, 1
// 0061de8f  d3e2                 shl edx, cl
// 0061de91  3bc2                 cmp eax, edx
// 0061de93  7c1e                 jl 0x61deb3
// 0061de95  8d42ff               lea eax, [edx - 1]
// 0061de98  eb19                 jmp 0x61deb3
// 0061de9a  2bc2                 sub eax, edx
// 0061de9c  99                   cdq 
// 0061de9d  f7fb                 idiv ebx
// 0061de9f  85c9                 test ecx, ecx
// 0061dea1  7e0e                 jle 0x61deb1
// 0061dea3  ba01000000           mov edx, 1
// 0061dea8  d3e2                 shl edx, cl
// 0061deaa  3bc2                 cmp eax, edx
// 0061deac  7c03                 jl 0x61deb1
// 0061deae  8d42ff               lea eax, [edx - 1]
// 0061deb1  f7d8                 neg eax
// 0061deb3  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 0061deb7  66898424b0000000     mov word ptr [esp + 0xb0], ax
// 0061debf  8b442420             mov eax, dword ptr [esp + 0x20]
// 0061dec3  8b4810               mov ecx, dword ptr [eax + 0x10]
// 0061dec6  85c9                 test ecx, ecx
// 0061dec8  7469                 je 0x61df33
// 0061deca  6683bc24a200000000   cmp word ptr [esp + 0xa2], 0
// 0061ded3  755e                 jne 0x61df33
// 0061ded5  8b442444             mov eax, dword ptr [esp + 0x44]
// 0061ded9  2bc5                 sub eax, ebp
// 0061dedb  2b44243c             sub eax, dword ptr [esp + 0x3c]
// 0061dedf  03c7                 add eax, edi
// 0061dee1  0faf44241c           imul eax, dword ptr [esp + 0x1c]
// 0061dee6  8b7c247c             mov edi, dword ptr [esp + 0x7c]
// 0061deea  8d1480               lea edx, [eax + eax*4]
// 0061deed  8bc7                 mov eax, edi
// 0061deef  c1e007               shl eax, 7
// 0061def2  c1e708               shl edi, 8
// 0061def5  85d2                 test edx, edx
// 0061def7  7c19                 jl 0x61df12
// 0061def9  03c2                 add eax, edx
// 0061defb  99                   cdq 
// 0061defc  f7ff                 idiv edi
// 0061defe  85c9                 test ecx, ecx
// 0061df00  7e29                 jle 0x61df2b
// 0061df02  ba01000000           mov edx, 1
// 0061df07  d3e2                 shl edx, cl
// 0061df09  3bc2                 cmp eax, edx
// 0061df0b  7c1e                 jl 0x61df2b
// 0061df0d  8d42ff               lea eax, [edx - 1]
// 0061df10  eb19                 jmp 0x61df2b
// 0061df12  2bc2                 sub eax, edx
// 0061df14  99                   cdq 
// 0061df15  f7ff                 idiv edi
// 0061df17  85c9                 test ecx, ecx
// 0061df19  7e0e                 jle 0x61df29
// 0061df1b  ba01000000           mov edx, 1
// 0061df20  d3e2                 shl edx, cl
// 0061df22  3bc2                 cmp eax, edx
// 0061df24  7c03                 jl 0x61df29
// 0061df26  8d42ff               lea eax, [edx - 1]
// 0061df29  f7d8                 neg eax
// 0061df2b  66898424a2000000     mov word ptr [esp + 0xa2], ax
// 0061df33  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0061df37  8b4914               mov ecx, dword ptr [ecx + 0x14]
// 0061df3a  85c9                 test ecx, ecx
// 0061df3c  746e                 je 0x61dfac
// 0061df3e  6683bc249400000000   cmp word ptr [esp + 0x94], 0
// 0061df47  7563                 jne 0x61dfac
// 0061df49  8b542430             mov edx, dword ptr [esp + 0x30]
// 0061df4d  8b7c2468             mov edi, dword ptr [esp + 0x68]
// 0061df51  8d0412               lea eax, [edx + edx]
// 0061df54  8bd0                 mov edx, eax
// 0061df56  8bc6                 mov eax, esi
// 0061df58  2bc2                 sub eax, edx
// 0061df5a  0344245c             add eax, dword ptr [esp + 0x5c]
// 0061df5e  0faf44241c           imul eax, dword ptr [esp + 0x1c]
// 0061df63  8d14c0               lea edx, [eax + eax*8]
// 0061df66  8bc7                 mov eax, edi
// 0061df68  c1e007               shl eax, 7
// 0061df6b  c1e708               shl edi, 8
// 0061df6e  85d2                 test edx, edx
// 0061df70  7c19                 jl 0x61df8b
// 0061df72  03c2                 add eax, edx
// 0061df74  99                   cdq 
// 0061df75  f7ff                 idiv edi
// 0061df77  85c9                 test ecx, ecx
// 0061df79  7e29                 jle 0x61dfa4
// 0061df7b  ba01000000           mov edx, 1
// 0061df80  d3e2                 shl edx, cl
// 0061df82  3bc2                 cmp eax, edx
// 0061df84  7c1e                 jl 0x61dfa4
// 0061df86  8d42ff               lea eax, [edx - 1]
// 0061df89  eb19                 jmp 0x61dfa4
// 0061df8b  2bc2                 sub eax, edx
// 0061df8d  99                   cdq 
// 0061df8e  f7ff                 idiv edi
// 0061df90  85c9                 test ecx, ecx
// 0061df92  7e0e                 jle 0x61dfa2
// 0061df94  ba01000000           mov edx, 1
// 0061df99  d3e2                 shl edx, cl
// 0061df9b  3bc2                 cmp eax, edx
// 0061df9d  7c03                 jl 0x61dfa2
// 0061df9f  8d42ff               lea eax, [edx - 1]
// 0061dfa2  f7d8                 neg eax
// 0061dfa4  6689842494000000     mov word ptr [esp + 0x94], ax
// 0061dfac  8b442438             mov eax, dword ptr [esp + 0x38]
// 0061dfb0  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0061dfb4  50                   push eax
// 0061dfb5  8b842418010000       mov eax, dword ptr [esp + 0x118]
// 0061dfbc  51                   push ecx
// 0061dfbd  8d942498000000       lea edx, [esp + 0x98]
// 0061dfc4  52                   push edx
// 0061dfc5  53                   push ebx
// 0061dfc6  50                   push eax
// 0061dfc7  ff94249c000000       call dword ptr [esp + 0x9c]
// 0061dfce  8b442458             mov eax, dword ptr [esp + 0x58]
// 0061dfd2  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 0061dfd6  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0061dfda  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 0061dfde  8b542444             mov edx, dword ptr [esp + 0x44]
// 0061dfe2  8944243c             mov dword ptr [esp + 0x3c], eax
// 0061dfe6  b880000000           mov eax, 0x80
// 0061dfeb  0144242c             add dword ptr [esp + 0x2c], eax
// 0061dfef  01442468             add dword ptr [esp + 0x68], eax
// 0061dff3  01442460             add dword ptr [esp + 0x60], eax
// 0061dff7  8b442454             mov eax, dword ptr [esp + 0x54]
// 0061dffb  894c2438             mov dword ptr [esp + 0x38], ecx
// 0061dfff  8b4b24               mov ecx, dword ptr [ebx + 0x24]
// 0061e002  014c244c             add dword ptr [esp + 0x4c], ecx
// 0061e006  40                   inc eax
// 0061e007  83c414               add esp, 0x14
// 0061e00a  8954245c             mov dword ptr [esp + 0x5c], edx
// 0061e00e  89742430             mov dword ptr [esp + 0x30], esi
// 0061e012  89442440             mov dword ptr [esp + 0x40], eax
// 0061e016  3b442470             cmp eax, dword ptr [esp + 0x70]
// 0061e01a  0f86f1fcffff         jbe 0x61dd11
// 0061e020  8b442448             mov eax, dword ptr [esp + 0x48]
// 0061e024  8bd1                 mov edx, ecx
// 0061e026  8d0c90               lea ecx, [eax + edx*4]
// 0061e029  8b442450             mov eax, dword ptr [esp + 0x50]
// 0061e02d  40                   inc eax
// 0061e02e  3b442414             cmp eax, dword ptr [esp + 0x14]
// 0061e032  894c2448             mov dword ptr [esp + 0x48], ecx
// 0061e036  89442450             mov dword ptr [esp + 0x50], eax
// 0061e03a  0f8c50fcffff         jl 0x61dc90
// 0061e040  8b442458             mov eax, dword ptr [esp + 0x58]
// 0061e044  8b942414010000       mov edx, dword ptr [esp + 0x114]
// 0061e04b  8344246018           add dword ptr [esp + 0x60], 0x18
// 0061e050  8344242c04           add dword ptr [esp + 0x2c], 4
// 0061e055  40                   inc eax
// 0061e056  83c354               add ebx, 0x54
// 0061e059  3b4224               cmp eax, dword ptr [edx + 0x24]
// 0061e05c  89442458             mov dword ptr [esp + 0x58], eax
// 0061e060  895c2434             mov dword ptr [esp + 0x34], ebx
// 0061e064  0f8cf6faffff         jl 0x61db60
// 0061e06a  5f                   pop edi
// 0061e06b  5d                   pop ebp
// 0061e06c  8b8c240c010000       mov ecx, dword ptr [esp + 0x10c]
// 0061e073  ff8188000000         inc dword ptr [ecx + 0x88]
// 0061e079  8b8188000000         mov eax, dword ptr [ecx + 0x88]
// 0061e07f  3b811c010000         cmp eax, dword ptr [ecx + 0x11c]
// 0061e085  5b                   pop ebx
// 0061e086  1bc0                 sbb eax, eax
// 0061e088  83c004               add eax, 4
// 0061e08b  5e                   pop esi
// 0061e08c  81c400010000         add esp, 0x100
// 0061e092  c3                   ret 
// library jpeg-6b/jdcoefct.c (function _decompress_smooth_data)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcoefct.c
