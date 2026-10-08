// from server: 100% by auto
// roc 2012-06 00660fc0  unit: seg_00660000  size: 1523 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00660fc0
//
// 00660fc0  81ec00010000         sub esp, 0x100
// 00660fc6  56                   push esi
// 00660fc7  8bb42408010000       mov esi, dword ptr [esp + 0x108]
// 00660fce  8b8688010000         mov eax, dword ptr [esi + 0x188]
// 00660fd4  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 00660fd7  89442458             mov dword ptr [esp + 0x58], eax
// 00660fdb  8b861c010000         mov eax, dword ptr [esi + 0x11c]
// 00660fe1  48                   dec eax
// 00660fe2  3b8e84000000         cmp ecx, dword ptr [esi + 0x84]
// 00660fe8  89442478             mov dword ptr [esp + 0x78], eax
// 00660fec  7f4d                 jg 0x66103b
// 00660fee  8bff                 mov edi, edi
// 00660ff0  8b8690010000         mov eax, dword ptr [esi + 0x190]
// 00660ff6  80781100             cmp byte ptr [eax + 0x11], 0
// 00660ffa  753f                 jne 0x66103b
// 00660ffc  8b567c               mov edx, dword ptr [esi + 0x7c]
// 00660fff  3b9684000000         cmp edx, dword ptr [esi + 0x84]
// 00661005  7519                 jne 0x661020
// 00661007  33c9                 xor ecx, ecx
// 00661009  398e6c010000         cmp dword ptr [esi + 0x16c], ecx
// 0066100f  0f94c1               sete cl
// 00661012  038e88000000         add ecx, dword ptr [esi + 0x88]
// 00661018  398e80000000         cmp dword ptr [esi + 0x80], ecx
// 0066101e  771b                 ja 0x66103b
// 00661020  8b10                 mov edx, dword ptr [eax]
// 00661022  56                   push esi
// 00661023  ffd2                 call edx
// 00661025  83c404               add esp, 4
// 00661028  85c0                 test eax, eax
// 0066102a  0f8482000000         je 0x6610b2
// 00661030  8b467c               mov eax, dword ptr [esi + 0x7c]
// 00661033  3b8684000000         cmp eax, dword ptr [esi + 0x84]
// 00661039  7eb5                 jle 0x660ff0
// 0066103b  837e2400             cmp dword ptr [esi + 0x24], 0
// 0066103f  53                   push ebx
// 00661040  8b9ec4000000         mov ebx, dword ptr [esi + 0xc4]
// 00661046  c744245000000000     mov dword ptr [esp + 0x50], 0
// 0066104e  895c242c             mov dword ptr [esp + 0x2c], ebx
// 00661052  0f8e34050000         jle 0x66158c
// 00661058  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0066105c  b8b8ffffff           mov eax, 0xffffffb8
// 00661061  8d5148               lea edx, [ecx + 0x48]
// 00661064  2bc1                 sub eax, ecx
// 00661066  55                   push ebp
// 00661067  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 0066106f  89542428             mov dword ptr [esp + 0x28], edx
// 00661073  89842488000000       mov dword ptr [esp + 0x88], eax
// 0066107a  57                   push edi
// 0066107b  eb03                 jmp 0x661080
// 0066107d  8d4900               lea ecx, [ecx]
// 00661080  807b3000             cmp byte ptr [ebx + 0x30], 0
// 00661084  0f84d6040000         je 0x661560
// 0066108a  8b842414010000       mov eax, dword ptr [esp + 0x114]
// 00661091  8bb088000000         mov esi, dword ptr [eax + 0x88]
// 00661097  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 0066109a  3bb42484000000       cmp esi, dword ptr [esp + 0x84]
// 006610a1  7319                 jae 0x6610bc
// 006610a3  8bc1                 mov eax, ecx
// 006610a5  89442414             mov dword ptr [esp + 0x14], eax
// 006610a9  03c0                 add eax, eax
// 006610ab  c644241300           mov byte ptr [esp + 0x13], 0
// 006610b0  eb26                 jmp 0x6610d8
// 006610b2  33c0                 xor eax, eax
// 006610b4  5e                   pop esi
// 006610b5  81c400010000         add esp, 0x100
// 006610bb  c3                   ret 
// 006610bc  8b4320               mov eax, dword ptr [ebx + 0x20]
// 006610bf  33d2                 xor edx, edx
// 006610c1  f7f1                 div ecx
// 006610c3  8bc2                 mov eax, edx
// 006610c5  89442414             mov dword ptr [esp + 0x14], eax
// 006610c9  85c0                 test eax, eax
// 006610cb  7506                 jne 0x6610d3
// 006610cd  8bc1                 mov eax, ecx
// 006610cf  894c2414             mov dword ptr [esp + 0x14], ecx
// 006610d3  c644241301           mov byte ptr [esp + 0x13], 1
// 006610d8  8bbc2414010000       mov edi, dword ptr [esp + 0x114]
// 006610df  6a00                 push 0
// 006610e1  85f6                 test esi, esi
// 006610e3  7625                 jbe 0x66110a
// 006610e5  8b5704               mov edx, dword ptr [edi + 4]
// 006610e8  4e                   dec esi
// 006610e9  0faff1               imul esi, ecx
// 006610ec  03c1                 add eax, ecx
// 006610ee  8b4a20               mov ecx, dword ptr [edx + 0x20]
// 006610f1  50                   push eax
// 006610f2  56                   push esi
// 006610f3  8b742438             mov esi, dword ptr [esp + 0x38]
// 006610f7  8b06                 mov eax, dword ptr [esi]
// 006610f9  50                   push eax
// 006610fa  57                   push edi
// 006610fb  ffd1                 call ecx
// 006610fd  8b530c               mov edx, dword ptr [ebx + 0xc]
// 00661100  8d0490               lea eax, [eax + edx*4]
// 00661103  c644242600           mov byte ptr [esp + 0x26], 0
// 00661108  eb18                 jmp 0x661122
// 0066110a  8b742430             mov esi, dword ptr [esp + 0x30]
// 0066110e  8b16                 mov edx, dword ptr [esi]
// 00661110  8b4f04               mov ecx, dword ptr [edi + 4]
// 00661113  50                   push eax
// 00661114  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00661117  6a00                 push 0
// 00661119  52                   push edx
// 0066111a  57                   push edi
// 0066111b  ffd0                 call eax
// 0066111d  c644242601           mov byte ptr [esp + 0x26], 1
// 00661122  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 00661126  89842480000000       mov dword ptr [esp + 0x80], eax
// 0066112d  8b4170               mov eax, dword ptr [ecx + 0x70]
// 00661130  03442474             add eax, dword ptr [esp + 0x74]
// 00661134  83c414               add esp, 0x14
// 00661137  89442420             mov dword ptr [esp + 0x20], eax
// 0066113b  8b434c               mov eax, dword ptr [ebx + 0x4c]
// 0066113e  0fb710               movzx edx, word ptr [eax]
// 00661141  0fb74802             movzx ecx, word ptr [eax + 2]
// 00661145  8954241c             mov dword ptr [esp + 0x1c], edx
// 00661149  0fb75010             movzx edx, word ptr [eax + 0x10]
// 0066114d  894c2478             mov dword ptr [esp + 0x78], ecx
// 00661151  0fb74820             movzx ecx, word ptr [eax + 0x20]
// 00661155  89542474             mov dword ptr [esp + 0x74], edx
// 00661159  0fb75012             movzx edx, word ptr [eax + 0x12]
// 0066115d  0fb74004             movzx eax, word ptr [eax + 4]
// 00661161  898c2480000000       mov dword ptr [esp + 0x80], ecx
// 00661168  8b8f9c010000         mov ecx, dword ptr [edi + 0x19c]
// 0066116e  038c248c000000       add ecx, dword ptr [esp + 0x8c]
// 00661175  837c241400           cmp dword ptr [esp + 0x14], 0
// 0066117a  8954247c             mov dword ptr [esp + 0x7c], edx
// 0066117e  8b543104             mov edx, dword ptr [ecx + esi + 4]
// 00661182  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00661186  89442468             mov dword ptr [esp + 0x68], eax
// 0066118a  8b842418010000       mov eax, dword ptr [esp + 0x118]
// 00661191  89942488000000       mov dword ptr [esp + 0x88], edx
// 00661198  8b1488               mov edx, dword ptr [eax + ecx*4]
// 0066119b  89542448             mov dword ptr [esp + 0x48], edx
// 0066119f  c744245000000000     mov dword ptr [esp + 0x50], 0
// 006611a7  0f8eb3030000         jle 0x661560
// 006611ad  8d4900               lea ecx, [ecx]
// 006611b0  807c241200           cmp byte ptr [esp + 0x12], 0
// 006611b5  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 006611b9  8b542450             mov edx, dword ptr [esp + 0x50]
// 006611bd  8b3c96               mov edi, dword ptr [esi + edx*4]
// 006611c0  897c2418             mov dword ptr [esp + 0x18], edi
// 006611c4  7406                 je 0x6611cc
// 006611c6  8bcf                 mov ecx, edi
// 006611c8  85d2                 test edx, edx
// 006611ca  7404                 je 0x6611d0
// 006611cc  8b4c96fc             mov ecx, dword ptr [esi + edx*4 - 4]
// 006611d0  807c241300           cmp byte ptr [esp + 0x13], 0
// 006611d5  740b                 je 0x6611e2
// 006611d7  8b442414             mov eax, dword ptr [esp + 0x14]
// 006611db  48                   dec eax
// 006611dc  3bd0                 cmp edx, eax
// 006611de  8bc7                 mov eax, edi
// 006611e0  7404                 je 0x6611e6
// 006611e2  8b449604             mov eax, dword ptr [esi + edx*4 + 4]
// 006611e6  8b542418             mov edx, dword ptr [esp + 0x18]
// 006611ea  0fbf32               movsx esi, word ptr [edx]
// 006611ed  0fbf39               movsx edi, word ptr [ecx]
// 006611f0  0fbf28               movsx ebp, word ptr [eax]
// 006611f3  8b531c               mov edx, dword ptr [ebx + 0x1c]
// 006611f6  4a                   dec edx
// 006611f7  83e880               sub eax, -0x80
// 006611fa  83e980               sub ecx, -0x80
// 006611fd  897c243c             mov dword ptr [esp + 0x3c], edi
// 00661201  897c2424             mov dword ptr [esp + 0x24], edi
// 00661205  89742430             mov dword ptr [esp + 0x30], esi
// 00661209  8974245c             mov dword ptr [esp + 0x5c], esi
// 0066120d  896c2444             mov dword ptr [esp + 0x44], ebp
// 00661211  896c2428             mov dword ptr [esp + 0x28], ebp
// 00661215  c744243800000000     mov dword ptr [esp + 0x38], 0
// 0066121d  89542470             mov dword ptr [esp + 0x70], edx
// 00661221  c744244000000000     mov dword ptr [esp + 0x40], 0
// 00661229  8944244c             mov dword ptr [esp + 0x4c], eax
// 0066122d  894c2454             mov dword ptr [esp + 0x54], ecx
// 00661231  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00661235  6a01                 push 1
// 00661237  8d842494000000       lea eax, [esp + 0x94]
// 0066123e  50                   push eax
// 0066123f  51                   push ecx
// 00661240  e8eb22ffff           call 0x653530
// 00661245  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 00661249  83c40c               add esp, 0xc
// 0066124c  39542440             cmp dword ptr [esp + 0x40], edx
// 00661250  7321                 jae 0x661273
// 00661252  8b442454             mov eax, dword ptr [esp + 0x54]
// 00661256  0fbf08               movsx ecx, word ptr [eax]
// 00661259  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0066125d  8b542418             mov edx, dword ptr [esp + 0x18]
// 00661261  0fbfb280000000       movsx esi, word ptr [edx + 0x80]
// 00661268  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0066126c  0fbf08               movsx ecx, word ptr [eax]
// 0066126f  894c2444             mov dword ptr [esp + 0x44], ecx
// 00661273  8b542420             mov edx, dword ptr [esp + 0x20]
// 00661277  8b4a04               mov ecx, dword ptr [edx + 4]
// 0066127a  85c9                 test ecx, ecx
// 0066127c  7469                 je 0x6612e7
// 0066127e  6683bc249200000000   cmp word ptr [esp + 0x92], 0
// 00661287  755e                 jne 0x6612e7
// 00661289  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 0066128d  8b5c2478             mov ebx, dword ptr [esp + 0x78]
// 00661291  2bc6                 sub eax, esi
// 00661293  0faf44241c           imul eax, dword ptr [esp + 0x1c]
// 00661298  8d14c0               lea edx, [eax + eax*8]
// 0066129b  8bc3                 mov eax, ebx
// 0066129d  03d2                 add edx, edx
// 0066129f  c1e007               shl eax, 7
// 006612a2  c1e308               shl ebx, 8
// 006612a5  03d2                 add edx, edx
// 006612a7  7819                 js 0x6612c2
// 006612a9  03c2                 add eax, edx
// 006612ab  99                   cdq 
// 006612ac  f7fb                 idiv ebx
// 006612ae  85c9                 test ecx, ecx
// 006612b0  7e29                 jle 0x6612db
// 006612b2  ba01000000           mov edx, 1
// 006612b7  d3e2                 shl edx, cl
// 006612b9  3bc2                 cmp eax, edx
// 006612bb  7c1e                 jl 0x6612db
// 006612bd  8d42ff               lea eax, [edx - 1]
// 006612c0  eb19                 jmp 0x6612db
// 006612c2  2bc2                 sub eax, edx
// 006612c4  99                   cdq 
// 006612c5  f7fb                 idiv ebx
// 006612c7  85c9                 test ecx, ecx
// 006612c9  7e0e                 jle 0x6612d9
// 006612cb  ba01000000           mov edx, 1
// 006612d0  d3e2                 shl edx, cl
// 006612d2  3bc2                 cmp eax, edx
// 006612d4  7c03                 jl 0x6612d9
// 006612d6  8d42ff               lea eax, [edx - 1]
// 006612d9  f7d8                 neg eax
// 006612db  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 006612df  6689842492000000     mov word ptr [esp + 0x92], ax
// 006612e7  8b442420             mov eax, dword ptr [esp + 0x20]
// 006612eb  8b4808               mov ecx, dword ptr [eax + 8]
// 006612ee  85c9                 test ecx, ecx
// 006612f0  746b                 je 0x66135d
// 006612f2  6683bc24a000000000   cmp word ptr [esp + 0xa0], 0
// 006612fb  7560                 jne 0x66135d
// 006612fd  8b442424             mov eax, dword ptr [esp + 0x24]
// 00661301  2b442428             sub eax, dword ptr [esp + 0x28]
// 00661305  8b5c2474             mov ebx, dword ptr [esp + 0x74]
// 00661309  0faf44241c           imul eax, dword ptr [esp + 0x1c]
// 0066130e  8d14c0               lea edx, [eax + eax*8]
// 00661311  8bc3                 mov eax, ebx
// 00661313  03d2                 add edx, edx
// 00661315  c1e007               shl eax, 7
// 00661318  c1e308               shl ebx, 8
// 0066131b  03d2                 add edx, edx
// 0066131d  7819                 js 0x661338
// 0066131f  03c2                 add eax, edx
// 00661321  99                   cdq 
// 00661322  f7fb                 idiv ebx
// 00661324  85c9                 test ecx, ecx
// 00661326  7e29                 jle 0x661351
// 00661328  ba01000000           mov edx, 1
// 0066132d  d3e2                 shl edx, cl
// 0066132f  3bc2                 cmp eax, edx
// 00661331  7c1e                 jl 0x661351
// 00661333  8d42ff               lea eax, [edx - 1]
// 00661336  eb19                 jmp 0x661351
// 00661338  2bc2                 sub eax, edx
// 0066133a  99                   cdq 
// 0066133b  f7fb                 idiv ebx
// 0066133d  85c9                 test ecx, ecx
// 0066133f  7e0e                 jle 0x66134f
// 00661341  ba01000000           mov edx, 1
// 00661346  d3e2                 shl edx, cl
// 00661348  3bc2                 cmp eax, edx
// 0066134a  7c03                 jl 0x66134f
// 0066134c  8d42ff               lea eax, [edx - 1]
// 0066134f  f7d8                 neg eax
// 00661351  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00661355  66898424a0000000     mov word ptr [esp + 0xa0], ax
// 0066135d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00661361  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 00661364  85c9                 test ecx, ecx
// 00661366  7477                 je 0x6613df
// 00661368  6683bc24b000000000   cmp word ptr [esp + 0xb0], 0
// 00661371  756c                 jne 0x6613df
// 00661373  8b542430             mov edx, dword ptr [esp + 0x30]
// 00661377  8b9c2480000000       mov ebx, dword ptr [esp + 0x80]
// 0066137e  8d0412               lea eax, [edx + edx]
// 00661381  8bd0                 mov edx, eax
// 00661383  8b442428             mov eax, dword ptr [esp + 0x28]
// 00661387  2bc2                 sub eax, edx
// 00661389  03442424             add eax, dword ptr [esp + 0x24]
// 0066138d  0faf44241c           imul eax, dword ptr [esp + 0x1c]
// 00661392  8d14c0               lea edx, [eax + eax*8]
// 00661395  8bc3                 mov eax, ebx
// 00661397  c1e007               shl eax, 7
// 0066139a  c1e308               shl ebx, 8
// 0066139d  85d2                 test edx, edx
// 0066139f  7c19                 jl 0x6613ba
// 006613a1  03c2                 add eax, edx
// 006613a3  99                   cdq 
// 006613a4  f7fb                 idiv ebx
// 006613a6  85c9                 test ecx, ecx
// 006613a8  7e29                 jle 0x6613d3
// 006613aa  ba01000000           mov edx, 1
// 006613af  d3e2                 shl edx, cl
// 006613b1  3bc2                 cmp eax, edx
// 006613b3  7c1e                 jl 0x6613d3
// 006613b5  8d42ff               lea eax, [edx - 1]
// 006613b8  eb19                 jmp 0x6613d3
// 006613ba  2bc2                 sub eax, edx
// 006613bc  99                   cdq 
// 006613bd  f7fb                 idiv ebx
// 006613bf  85c9                 test ecx, ecx
// 006613c1  7e0e                 jle 0x6613d1
// 006613c3  ba01000000           mov edx, 1
// 006613c8  d3e2                 shl edx, cl
// 006613ca  3bc2                 cmp eax, edx
// 006613cc  7c03                 jl 0x6613d1
// 006613ce  8d42ff               lea eax, [edx - 1]
// 006613d1  f7d8                 neg eax
// 006613d3  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 006613d7  66898424b0000000     mov word ptr [esp + 0xb0], ax
// 006613df  8b442420             mov eax, dword ptr [esp + 0x20]
// 006613e3  8b4810               mov ecx, dword ptr [eax + 0x10]
// 006613e6  85c9                 test ecx, ecx
// 006613e8  7469                 je 0x661453
// 006613ea  6683bc24a200000000   cmp word ptr [esp + 0xa2], 0
// 006613f3  755e                 jne 0x661453
// 006613f5  8b442444             mov eax, dword ptr [esp + 0x44]
// 006613f9  2bc5                 sub eax, ebp
// 006613fb  2b44243c             sub eax, dword ptr [esp + 0x3c]
// 006613ff  03c7                 add eax, edi
// 00661401  0faf44241c           imul eax, dword ptr [esp + 0x1c]
// 00661406  8b7c247c             mov edi, dword ptr [esp + 0x7c]
// 0066140a  8d1480               lea edx, [eax + eax*4]
// 0066140d  8bc7                 mov eax, edi
// 0066140f  c1e007               shl eax, 7
// 00661412  c1e708               shl edi, 8
// 00661415  85d2                 test edx, edx
// 00661417  7c19                 jl 0x661432
// 00661419  03c2                 add eax, edx
// 0066141b  99                   cdq 
// 0066141c  f7ff                 idiv edi
// 0066141e  85c9                 test ecx, ecx
// 00661420  7e29                 jle 0x66144b
// 00661422  ba01000000           mov edx, 1
// 00661427  d3e2                 shl edx, cl
// 00661429  3bc2                 cmp eax, edx
// 0066142b  7c1e                 jl 0x66144b
// 0066142d  8d42ff               lea eax, [edx - 1]
// 00661430  eb19                 jmp 0x66144b
// 00661432  2bc2                 sub eax, edx
// 00661434  99                   cdq 
// 00661435  f7ff                 idiv edi
// 00661437  85c9                 test ecx, ecx
// 00661439  7e0e                 jle 0x661449
// 0066143b  ba01000000           mov edx, 1
// 00661440  d3e2                 shl edx, cl
// 00661442  3bc2                 cmp eax, edx
// 00661444  7c03                 jl 0x661449
// 00661446  8d42ff               lea eax, [edx - 1]
// 00661449  f7d8                 neg eax
// 0066144b  66898424a2000000     mov word ptr [esp + 0xa2], ax
// 00661453  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00661457  8b4914               mov ecx, dword ptr [ecx + 0x14]
// 0066145a  85c9                 test ecx, ecx
// 0066145c  746e                 je 0x6614cc
// 0066145e  6683bc249400000000   cmp word ptr [esp + 0x94], 0
// 00661467  7563                 jne 0x6614cc
// 00661469  8b542430             mov edx, dword ptr [esp + 0x30]
// 0066146d  8b7c2468             mov edi, dword ptr [esp + 0x68]
// 00661471  8d0412               lea eax, [edx + edx]
// 00661474  8bd0                 mov edx, eax
// 00661476  8bc6                 mov eax, esi
// 00661478  2bc2                 sub eax, edx
// 0066147a  0344245c             add eax, dword ptr [esp + 0x5c]
// 0066147e  0faf44241c           imul eax, dword ptr [esp + 0x1c]
// 00661483  8d14c0               lea edx, [eax + eax*8]
// 00661486  8bc7                 mov eax, edi
// 00661488  c1e007               shl eax, 7
// 0066148b  c1e708               shl edi, 8
// 0066148e  85d2                 test edx, edx
// 00661490  7c19                 jl 0x6614ab
// 00661492  03c2                 add eax, edx
// 00661494  99                   cdq 
// 00661495  f7ff                 idiv edi
// 00661497  85c9                 test ecx, ecx
// 00661499  7e29                 jle 0x6614c4
// 0066149b  ba01000000           mov edx, 1
// 006614a0  d3e2                 shl edx, cl
// 006614a2  3bc2                 cmp eax, edx
// 006614a4  7c1e                 jl 0x6614c4
// 006614a6  8d42ff               lea eax, [edx - 1]
// 006614a9  eb19                 jmp 0x6614c4
// 006614ab  2bc2                 sub eax, edx
// 006614ad  99                   cdq 
// 006614ae  f7ff                 idiv edi
// 006614b0  85c9                 test ecx, ecx
// 006614b2  7e0e                 jle 0x6614c2
// 006614b4  ba01000000           mov edx, 1
// 006614b9  d3e2                 shl edx, cl
// 006614bb  3bc2                 cmp eax, edx
// 006614bd  7c03                 jl 0x6614c2
// 006614bf  8d42ff               lea eax, [edx - 1]
// 006614c2  f7d8                 neg eax
// 006614c4  6689842494000000     mov word ptr [esp + 0x94], ax
// 006614cc  8b442438             mov eax, dword ptr [esp + 0x38]
// 006614d0  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 006614d4  50                   push eax
// 006614d5  8b842418010000       mov eax, dword ptr [esp + 0x118]
// 006614dc  51                   push ecx
// 006614dd  8d942498000000       lea edx, [esp + 0x98]
// 006614e4  52                   push edx
// 006614e5  53                   push ebx
// 006614e6  50                   push eax
// 006614e7  ff94249c000000       call dword ptr [esp + 0x9c]
// 006614ee  8b442458             mov eax, dword ptr [esp + 0x58]
// 006614f2  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 006614f6  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 006614fa  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 006614fe  8b542444             mov edx, dword ptr [esp + 0x44]
// 00661502  8944243c             mov dword ptr [esp + 0x3c], eax
// 00661506  b880000000           mov eax, 0x80
// 0066150b  0144242c             add dword ptr [esp + 0x2c], eax
// 0066150f  01442468             add dword ptr [esp + 0x68], eax
// 00661513  01442460             add dword ptr [esp + 0x60], eax
// 00661517  8b442454             mov eax, dword ptr [esp + 0x54]
// 0066151b  894c2438             mov dword ptr [esp + 0x38], ecx
// 0066151f  8b4b24               mov ecx, dword ptr [ebx + 0x24]
// 00661522  014c244c             add dword ptr [esp + 0x4c], ecx
// 00661526  40                   inc eax
// 00661527  83c414               add esp, 0x14
// 0066152a  8954245c             mov dword ptr [esp + 0x5c], edx
// 0066152e  89742430             mov dword ptr [esp + 0x30], esi
// 00661532  89442440             mov dword ptr [esp + 0x40], eax
// 00661536  3b442470             cmp eax, dword ptr [esp + 0x70]
// 0066153a  0f86f1fcffff         jbe 0x661231
// 00661540  8b442448             mov eax, dword ptr [esp + 0x48]
// 00661544  8bd1                 mov edx, ecx
// 00661546  8d0c90               lea ecx, [eax + edx*4]
// 00661549  8b442450             mov eax, dword ptr [esp + 0x50]
// 0066154d  40                   inc eax
// 0066154e  3b442414             cmp eax, dword ptr [esp + 0x14]
// 00661552  894c2448             mov dword ptr [esp + 0x48], ecx
// 00661556  89442450             mov dword ptr [esp + 0x50], eax
// 0066155a  0f8c50fcffff         jl 0x6611b0
// 00661560  8b442458             mov eax, dword ptr [esp + 0x58]
// 00661564  8b942414010000       mov edx, dword ptr [esp + 0x114]
// 0066156b  8344246018           add dword ptr [esp + 0x60], 0x18
// 00661570  8344242c04           add dword ptr [esp + 0x2c], 4
// 00661575  40                   inc eax
// 00661576  83c354               add ebx, 0x54
// 00661579  3b4224               cmp eax, dword ptr [edx + 0x24]
// 0066157c  89442458             mov dword ptr [esp + 0x58], eax
// 00661580  895c2434             mov dword ptr [esp + 0x34], ebx
// 00661584  0f8cf6faffff         jl 0x661080
// 0066158a  5f                   pop edi
// 0066158b  5d                   pop ebp
// 0066158c  8b8c240c010000       mov ecx, dword ptr [esp + 0x10c]
// 00661593  ff8188000000         inc dword ptr [ecx + 0x88]
// 00661599  8b8188000000         mov eax, dword ptr [ecx + 0x88]
// 0066159f  3b811c010000         cmp eax, dword ptr [ecx + 0x11c]
// 006615a5  5b                   pop ebx
// 006615a6  1bc0                 sbb eax, eax
// 006615a8  83c004               add eax, 4
// 006615ab  5e                   pop esi
// 006615ac  81c400010000         add esp, 0x100
// 006615b2  c3                   ret 
// library jpeg-6b/jdcoefct.c (function _decompress_smooth_data)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcoefct.c
