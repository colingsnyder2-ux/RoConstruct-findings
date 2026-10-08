// from server: 100% by auto
// roc 2009-06 0058ff70  unit: seg_00580000  size: 1148 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0058ff70
//
// 0058ff70  51                   push ecx
// 0058ff71  53                   push ebx
// 0058ff72  55                   push ebp
// 0058ff73  56                   push esi
// 0058ff74  8b742414             mov esi, dword ptr [esp + 0x14]
// 0058ff78  57                   push edi
// 0058ff79  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0058ff81  bd01000000           mov ebp, 1
// 0058ff86  8b4674               mov eax, dword ptr [esi + 0x74]
// 0058ff89  3d06010000           cmp eax, 0x106
// 0058ff8e  7323                 jae 0x58ffb3
// 0058ff90  e83bf9ffff           call 0x58f8d0
// 0058ff95  8b4674               mov eax, dword ptr [esi + 0x74]
// 0058ff98  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0058ff9c  3d06010000           cmp eax, 0x106
// 0058ffa1  7308                 jae 0x58ffab
// 0058ffa3  85ff                 test edi, edi
// 0058ffa5  0f84a0020000         je 0x59024b
// 0058ffab  85c0                 test eax, eax
// 0058ffad  0f848e030000         je 0x590341
// 0058ffb3  83f803               cmp eax, 3
// 0058ffb6  724d                 jb 0x590005
// 0058ffb8  8b4648               mov eax, dword ptr [esi + 0x48]
// 0058ffbb  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 0058ffbe  8b566c               mov edx, dword ptr [esi + 0x6c]
// 0058ffc1  8b7e34               mov edi, dword ptr [esi + 0x34]
// 0058ffc4  d3e0                 shl eax, cl
// 0058ffc6  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 0058ffc9  0fb64c1102           movzx ecx, byte ptr [ecx + edx + 2]
// 0058ffce  33c1                 xor eax, ecx
// 0058ffd0  234654               and eax, dword ptr [esi + 0x54]
// 0058ffd3  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 0058ffd6  894648               mov dword ptr [esi + 0x48], eax
// 0058ffd9  0fb70441             movzx eax, word ptr [ecx + eax*2]
// 0058ffdd  23fa                 and edi, edx
// 0058ffdf  8b5640               mov edx, dword ptr [esi + 0x40]
// 0058ffe2  6689047a             mov word ptr [edx + edi*2], ax
// 0058ffe6  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 0058ffe9  234e34               and ecx, dword ptr [esi + 0x34]
// 0058ffec  8b5640               mov edx, dword ptr [esi + 0x40]
// 0058ffef  0fb7044a             movzx eax, word ptr [edx + ecx*2]
// 0058fff3  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 0058fff6  8b5644               mov edx, dword ptr [esi + 0x44]
// 0058fff9  89442410             mov dword ptr [esp + 0x10], eax
// 0058fffd  0fb7466c             movzx eax, word ptr [esi + 0x6c]
// 00590001  6689044a             mov word ptr [edx + ecx*2], ax
// 00590005  8b5670               mov edx, dword ptr [esi + 0x70]
// 00590008  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 0059000b  895664               mov dword ptr [esi + 0x64], edx
// 0059000e  8b542410             mov edx, dword ptr [esp + 0x10]
// 00590012  bb02000000           mov ebx, 2
// 00590017  894e78               mov dword ptr [esi + 0x78], ecx
// 0059001a  895e60               mov dword ptr [esi + 0x60], ebx
// 0059001d  85d2                 test edx, edx
// 0059001f  7471                 je 0x590092
// 00590021  8bc1                 mov eax, ecx
// 00590023  3b8680000000         cmp eax, dword ptr [esi + 0x80]
// 00590029  7367                 jae 0x590092
// 0059002b  8b466c               mov eax, dword ptr [esi + 0x6c]
// 0059002e  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 00590031  2bc2                 sub eax, edx
// 00590033  81e906010000         sub ecx, 0x106
// 00590039  3bc1                 cmp eax, ecx
// 0059003b  7755                 ja 0x590092
// 0059003d  8b8e88000000         mov ecx, dword ptr [esi + 0x88]
// 00590043  3bcb                 cmp ecx, ebx
// 00590045  7410                 je 0x590057
// 00590047  83f903               cmp ecx, 3
// 0059004a  7410                 je 0x59005c
// 0059004c  8bc2                 mov eax, edx
// 0059004e  8bfe                 mov edi, esi
// 00590050  e87bf6ffff           call 0x58f6d0
// 00590055  eb12                 jmp 0x590069
// 00590057  83f903               cmp ecx, 3
// 0059005a  7510                 jne 0x59006c
// 0059005c  3bc5                 cmp eax, ebp
// 0059005e  750c                 jne 0x59006c
// 00590060  52                   push edx
// 00590061  e8caf7ffff           call 0x58f830
// 00590066  83c404               add esp, 4
// 00590069  894660               mov dword ptr [esi + 0x60], eax
// 0059006c  8b4660               mov eax, dword ptr [esi + 0x60]
// 0059006f  83f805               cmp eax, 5
// 00590072  771e                 ja 0x590092
// 00590074  39ae88000000         cmp dword ptr [esi + 0x88], ebp
// 0059007a  7413                 je 0x59008f
// 0059007c  83f803               cmp eax, 3
// 0059007f  7511                 jne 0x590092
// 00590081  8b566c               mov edx, dword ptr [esi + 0x6c]
// 00590084  2b5670               sub edx, dword ptr [esi + 0x70]
// 00590087  81fa00100000         cmp edx, 0x1000
// 0059008d  7603                 jbe 0x590092
// 0059008f  895e60               mov dword ptr [esi + 0x60], ebx
// 00590092  8b4678               mov eax, dword ptr [esi + 0x78]
// 00590095  83f803               cmp eax, 3
// 00590098  0f82b5010000         jb 0x590253
// 0059009e  394660               cmp dword ptr [esi + 0x60], eax
// 005900a1  0f87ac010000         ja 0x590253
// 005900a7  668b566c             mov dx, word ptr [esi + 0x6c]
// 005900ab  662b5664             sub dx, word ptr [esi + 0x64]
// 005900af  8b466c               mov eax, dword ptr [esi + 0x6c]
// 005900b2  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 005900b5  8b9ea4160000         mov ebx, dword ptr [esi + 0x16a4]
// 005900bb  8d7c08fd             lea edi, [eax + ecx - 3]
// 005900bf  8a4678               mov al, byte ptr [esi + 0x78]
// 005900c2  662bd5               sub dx, bp
// 005900c5  0fb7ca               movzx ecx, dx
// 005900c8  8b96a0160000         mov edx, dword ptr [esi + 0x16a0]
// 005900ce  66890c53             mov word ptr [ebx + edx*2], cx
// 005900d2  8b9698160000         mov edx, dword ptr [esi + 0x1698]
// 005900d8  8b9ea0160000         mov ebx, dword ptr [esi + 0x16a0]
// 005900de  2c03                 sub al, 3
// 005900e0  88041a               mov byte ptr [edx + ebx], al
// 005900e3  01aea0160000         add dword ptr [esi + 0x16a0], ebp
// 005900e9  0fb6c0               movzx eax, al
// 005900ec  0fb69078368d00       movzx edx, byte ptr [eax + 0x8d3678]
// 005900f3  6601ac9698040000     add word ptr [esi + edx*4 + 0x498], bp
// 005900fb  8d849698040000       lea eax, [esi + edx*4 + 0x498]
// 00590102  81c1ffff0000         add ecx, 0xffff
// 00590108  b800010000           mov eax, 0x100
// 0059010d  663bc8               cmp cx, ax
// 00590110  730c                 jae 0x59011e
// 00590112  0fb7c9               movzx ecx, cx
// 00590115  0fb68178348d00       movzx eax, byte ptr [ecx + 0x8d3478]
// 0059011c  eb0d                 jmp 0x59012b
// 0059011e  0fb7d1               movzx edx, cx
// 00590121  c1ea07               shr edx, 7
// 00590124  0fb68278358d00       movzx eax, byte ptr [edx + 0x8d3578]
// 0059012b  6601ac8688090000     add word ptr [esi + eax*4 + 0x988], bp
// 00590133  8b869c160000         mov eax, dword ptr [esi + 0x169c]
// 00590139  2bc5                 sub eax, ebp
// 0059013b  33db                 xor ebx, ebx
// 0059013d  3986a0160000         cmp dword ptr [esi + 0x16a0], eax
// 00590143  8b4678               mov eax, dword ptr [esi + 0x78]
// 00590146  0f94c3               sete bl
// 00590149  8bcd                 mov ecx, ebp
// 0059014b  2bc8                 sub ecx, eax
// 0059014d  014e74               add dword ptr [esi + 0x74], ecx
// 00590150  83c0fe               add eax, -2
// 00590153  894678               mov dword ptr [esi + 0x78], eax
// 00590156  016e6c               add dword ptr [esi + 0x6c], ebp
// 00590159  8b566c               mov edx, dword ptr [esi + 0x6c]
// 0059015c  3bd7                 cmp edx, edi
// 0059015e  774e                 ja 0x5901ae
// 00590160  8b4648               mov eax, dword ptr [esi + 0x48]
// 00590163  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 00590166  8b6e40               mov ebp, dword ptr [esi + 0x40]
// 00590169  d3e0                 shl eax, cl
// 0059016b  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 0059016e  0fb64c1102           movzx ecx, byte ptr [ecx + edx + 2]
// 00590173  235634               and edx, dword ptr [esi + 0x34]
// 00590176  33c1                 xor eax, ecx
// 00590178  234654               and eax, dword ptr [esi + 0x54]
// 0059017b  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 0059017e  894648               mov dword ptr [esi + 0x48], eax
// 00590181  0fb70441             movzx eax, word ptr [ecx + eax*2]
// 00590185  6689445500           mov word ptr [ebp + edx*2], ax
// 0059018a  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 0059018d  234e34               and ecx, dword ptr [esi + 0x34]
// 00590190  8b5640               mov edx, dword ptr [esi + 0x40]
// 00590193  0fb7044a             movzx eax, word ptr [edx + ecx*2]
// 00590197  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 0059019a  8b5644               mov edx, dword ptr [esi + 0x44]
// 0059019d  89442410             mov dword ptr [esp + 0x10], eax
// 005901a1  0fb7466c             movzx eax, word ptr [esi + 0x6c]
// 005901a5  6689044a             mov word ptr [edx + ecx*2], ax
// 005901a9  bd01000000           mov ebp, 1
// 005901ae  834678ff             add dword ptr [esi + 0x78], -1
// 005901b2  75a2                 jne 0x590156
// 005901b4  016e6c               add dword ptr [esi + 0x6c], ebp
// 005901b7  8b466c               mov eax, dword ptr [esi + 0x6c]
// 005901ba  c7466800000000       mov dword ptr [esi + 0x68], 0
// 005901c1  c7466002000000       mov dword ptr [esi + 0x60], 2
// 005901c8  85db                 test ebx, ebx
// 005901ca  0f84b6fdffff         je 0x58ff86
// 005901d0  8b565c               mov edx, dword ptr [esi + 0x5c]
// 005901d3  85d2                 test edx, edx
// 005901d5  7c07                 jl 0x5901de
// 005901d7  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 005901da  03ca                 add ecx, edx
// 005901dc  eb02                 jmp 0x5901e0
// 005901de  33c9                 xor ecx, ecx
// 005901e0  6a00                 push 0
// 005901e2  2bc2                 sub eax, edx
// 005901e4  50                   push eax
// 005901e5  51                   push ecx
// 005901e6  56                   push esi
// 005901e7  e8f49c0000           call 0x599ee0
// 005901ec  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 005901ef  8b3e                 mov edi, dword ptr [esi]
// 005901f1  894e5c               mov dword ptr [esi + 0x5c], ecx
// 005901f4  8b471c               mov eax, dword ptr [edi + 0x1c]
// 005901f7  8b5814               mov ebx, dword ptr [eax + 0x14]
// 005901fa  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 005901fd  83c410               add esp, 0x10
// 00590200  3bd9                 cmp ebx, ecx
// 00590202  7602                 jbe 0x590206
// 00590204  8bd9                 mov ebx, ecx
// 00590206  85db                 test ebx, ebx
// 00590208  7435                 je 0x59023f
// 0059020a  8b5010               mov edx, dword ptr [eax + 0x10]
// 0059020d  8b470c               mov eax, dword ptr [edi + 0xc]
// 00590210  53                   push ebx
// 00590211  52                   push edx
// 00590212  50                   push eax
// 00590213  e89e9c1800           call 0x719eb6
// 00590218  8b471c               mov eax, dword ptr [edi + 0x1c]
// 0059021b  015f0c               add dword ptr [edi + 0xc], ebx
// 0059021e  015810               add dword ptr [eax + 0x10], ebx
// 00590221  015f14               add dword ptr [edi + 0x14], ebx
// 00590224  295f10               sub dword ptr [edi + 0x10], ebx
// 00590227  8b471c               mov eax, dword ptr [edi + 0x1c]
// 0059022a  295814               sub dword ptr [eax + 0x14], ebx
// 0059022d  8b7f1c               mov edi, dword ptr [edi + 0x1c]
// 00590230  83c40c               add esp, 0xc
// 00590233  837f1400             cmp dword ptr [edi + 0x14], 0
// 00590237  7506                 jne 0x59023f
// 00590239  8b4f08               mov ecx, dword ptr [edi + 8]
// 0059023c  894f10               mov dword ptr [edi + 0x10], ecx
// 0059023f  8b16                 mov edx, dword ptr [esi]
// 00590241  837a1000             cmp dword ptr [edx + 0x10], 0
// 00590245  0f853bfdffff         jne 0x58ff86
// 0059024b  5f                   pop edi
// 0059024c  5e                   pop esi
// 0059024d  5d                   pop ebp
// 0059024e  33c0                 xor eax, eax
// 00590250  5b                   pop ebx
// 00590251  59                   pop ecx
// 00590252  c3                   ret 
// 00590253  837e6800             cmp dword ptr [esi + 0x68], 0
// 00590257  0f84d6000000         je 0x590333
// 0059025d  8b466c               mov eax, dword ptr [esi + 0x6c]
// 00590260  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 00590263  8a4408ff             mov al, byte ptr [eax + ecx - 1]
// 00590267  8b96a0160000         mov edx, dword ptr [esi + 0x16a0]
// 0059026d  8b8ea4160000         mov ecx, dword ptr [esi + 0x16a4]
// 00590273  33ff                 xor edi, edi
// 00590275  66893c51             mov word ptr [ecx + edx*2], di
// 00590279  8b9698160000         mov edx, dword ptr [esi + 0x1698]
// 0059027f  8b8ea0160000         mov ecx, dword ptr [esi + 0x16a0]
// 00590285  88040a               mov byte ptr [edx + ecx], al
// 00590288  01aea0160000         add dword ptr [esi + 0x16a0], ebp
// 0059028e  0fb6d0               movzx edx, al
// 00590291  6601ac9694000000     add word ptr [esi + edx*4 + 0x94], bp
// 00590299  8d849694000000       lea eax, [esi + edx*4 + 0x94]
// 005902a0  8b869c160000         mov eax, dword ptr [esi + 0x169c]
// 005902a6  2bc5                 sub eax, ebp
// 005902a8  3986a0160000         cmp dword ptr [esi + 0x16a0], eax
// 005902ae  7572                 jne 0x590322
// 005902b0  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 005902b3  85c9                 test ecx, ecx
// 005902b5  7c07                 jl 0x5902be
// 005902b7  8b4638               mov eax, dword ptr [esi + 0x38]
// 005902ba  03c1                 add eax, ecx
// 005902bc  eb02                 jmp 0x5902c0
// 005902be  33c0                 xor eax, eax
// 005902c0  8b566c               mov edx, dword ptr [esi + 0x6c]
// 005902c3  6a00                 push 0
// 005902c5  2bd1                 sub edx, ecx
// 005902c7  52                   push edx
// 005902c8  50                   push eax
// 005902c9  56                   push esi
// 005902ca  e8119c0000           call 0x599ee0
// 005902cf  8b466c               mov eax, dword ptr [esi + 0x6c]
// 005902d2  8b3e                 mov edi, dword ptr [esi]
// 005902d4  89465c               mov dword ptr [esi + 0x5c], eax
// 005902d7  8b471c               mov eax, dword ptr [edi + 0x1c]
// 005902da  8b5814               mov ebx, dword ptr [eax + 0x14]
// 005902dd  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 005902e0  83c410               add esp, 0x10
// 005902e3  3bd9                 cmp ebx, ecx
// 005902e5  7602                 jbe 0x5902e9
// 005902e7  8bd9                 mov ebx, ecx
// 005902e9  85db                 test ebx, ebx
// 005902eb  7435                 je 0x590322
// 005902ed  8b4810               mov ecx, dword ptr [eax + 0x10]
// 005902f0  8b570c               mov edx, dword ptr [edi + 0xc]
// 005902f3  53                   push ebx
// 005902f4  51                   push ecx
// 005902f5  52                   push edx
// 005902f6  e8bb9b1800           call 0x719eb6
// 005902fb  8b471c               mov eax, dword ptr [edi + 0x1c]
// 005902fe  015f0c               add dword ptr [edi + 0xc], ebx
// 00590301  015810               add dword ptr [eax + 0x10], ebx
// 00590304  015f14               add dword ptr [edi + 0x14], ebx
// 00590307  295f10               sub dword ptr [edi + 0x10], ebx
// 0059030a  8b471c               mov eax, dword ptr [edi + 0x1c]
// 0059030d  295814               sub dword ptr [eax + 0x14], ebx
// 00590310  8b7f1c               mov edi, dword ptr [edi + 0x1c]
// 00590313  83c40c               add esp, 0xc
// 00590316  837f1400             cmp dword ptr [edi + 0x14], 0
// 0059031a  7506                 jne 0x590322
// 0059031c  8b4708               mov eax, dword ptr [edi + 8]
// 0059031f  894710               mov dword ptr [edi + 0x10], eax
// 00590322  8b0e                 mov ecx, dword ptr [esi]
// 00590324  016e6c               add dword ptr [esi + 0x6c], ebp
// 00590327  ff4e74               dec dword ptr [esi + 0x74]
// 0059032a  83791000             cmp dword ptr [ecx + 0x10], 0
// 0059032e  e912ffffff           jmp 0x590245
// 00590333  016e6c               add dword ptr [esi + 0x6c], ebp
// 00590336  ff4e74               dec dword ptr [esi + 0x74]
// 00590339  896e68               mov dword ptr [esi + 0x68], ebp
// 0059033c  e945fcffff           jmp 0x58ff86
// 00590341  837e6800             cmp dword ptr [esi + 0x68], 0
// 00590345  7446                 je 0x59038d
// 00590347  8b566c               mov edx, dword ptr [esi + 0x6c]
// 0059034a  8b4638               mov eax, dword ptr [esi + 0x38]
// 0059034d  8a4402ff             mov al, byte ptr [edx + eax - 1]
// 00590351  8b8ea0160000         mov ecx, dword ptr [esi + 0x16a0]
// 00590357  8b96a4160000         mov edx, dword ptr [esi + 0x16a4]
// 0059035d  33db                 xor ebx, ebx
// 0059035f  66891c4a             mov word ptr [edx + ecx*2], bx
// 00590363  8b96a0160000         mov edx, dword ptr [esi + 0x16a0]
// 00590369  8b8e98160000         mov ecx, dword ptr [esi + 0x1698]
// 0059036f  880411               mov byte ptr [ecx + edx], al
// 00590372  01aea0160000         add dword ptr [esi + 0x16a0], ebp
// 00590378  0fb6c0               movzx eax, al
// 0059037b  6601ac8694000000     add word ptr [esi + eax*4 + 0x94], bp
// 00590383  8d848694000000       lea eax, [esi + eax*4 + 0x94]
// 0059038a  895e68               mov dword ptr [esi + 0x68], ebx
// 0059038d  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 00590390  85c9                 test ecx, ecx
// 00590392  7c07                 jl 0x59039b
// 00590394  8b4638               mov eax, dword ptr [esi + 0x38]
// 00590397  03c1                 add eax, ecx
// 00590399  eb02                 jmp 0x59039d
// 0059039b  33c0                 xor eax, eax
// 0059039d  33d2                 xor edx, edx
// 0059039f  83ff04               cmp edi, 4
// 005903a2  0f94c2               sete dl
// 005903a5  52                   push edx
// 005903a6  8b566c               mov edx, dword ptr [esi + 0x6c]
// 005903a9  2bd1                 sub edx, ecx
// 005903ab  52                   push edx
// 005903ac  50                   push eax
// 005903ad  56                   push esi
// 005903ae  e82d9b0000           call 0x599ee0
// 005903b3  8b466c               mov eax, dword ptr [esi + 0x6c]
// 005903b6  89465c               mov dword ptr [esi + 0x5c], eax
// 005903b9  8b06                 mov eax, dword ptr [esi]
// 005903bb  83c410               add esp, 0x10
// 005903be  e87de9ffff           call 0x58ed40
// 005903c3  8b0e                 mov ecx, dword ptr [esi]
// 005903c5  33c0                 xor eax, eax
// 005903c7  394110               cmp dword ptr [ecx + 0x10], eax
// 005903ca  7510                 jne 0x5903dc
// 005903cc  83ff04               cmp edi, 4
// 005903cf  0f95c0               setne al
// 005903d2  5f                   pop edi
// 005903d3  5e                   pop esi
// 005903d4  5d                   pop ebp
// 005903d5  5b                   pop ebx
// 005903d6  48                   dec eax
// 005903d7  83e002               and eax, 2
// 005903da  59                   pop ecx
// 005903db  c3                   ret 
// 005903dc  83ff04               cmp edi, 4
// 005903df  0f94c0               sete al
// 005903e2  5f                   pop edi
// 005903e3  5e                   pop esi
// 005903e4  5d                   pop ebp
// 005903e5  5b                   pop ebx
// 005903e6  8d440001             lea eax, [eax + eax + 1]
// 005903ea  59                   pop ecx
// 005903eb  c3                   ret 
// library zlib-1.2.3/deflate.c (function _deflate_slow)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 deflate.c
