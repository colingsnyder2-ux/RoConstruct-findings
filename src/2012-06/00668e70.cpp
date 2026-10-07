// roc 2012-06 00668e70  unit: seg_00660000  size: 883 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00668e70
//
// 00668e70  81ec18010000         sub esp, 0x118
// 00668e76  8b84241c010000       mov eax, dword ptr [esp + 0x11c]
// 00668e7d  8b8058010000         mov eax, dword ptr [eax + 0x158]
// 00668e83  8b4808               mov ecx, dword ptr [eax + 8]
// 00668e86  8b942420010000       mov edx, dword ptr [esp + 0x120]
// 00668e8d  894c240c             mov dword ptr [esp + 0xc], ecx
// 00668e91  8b4a10               mov ecx, dword ptr [edx + 0x10]
// 00668e94  8b44880c             mov eax, dword ptr [eax + ecx*4 + 0xc]
// 00668e98  8b8c2434010000       mov ecx, dword ptr [esp + 0x134]
// 00668e9f  85c9                 test ecx, ecx
// 00668ea1  0f8635030000         jbe 0x6691dc
// 00668ea7  8b94242c010000       mov edx, dword ptr [esp + 0x12c]
// 00668eae  53                   push ebx
// 00668eaf  8b9c2434010000       mov ebx, dword ptr [esp + 0x134]
// 00668eb6  55                   push ebp
// 00668eb7  56                   push esi
// 00668eb8  8bb42430010000       mov esi, dword ptr [esp + 0x130]
// 00668ebf  8d549608             lea edx, [esi + edx*4 + 8]
// 00668ec3  89542420             mov dword ptr [esp + 0x20], edx
// 00668ec7  8d5008               lea edx, [eax + 8]
// 00668eca  89542410             mov dword ptr [esp + 0x10], edx
// 00668ece  8d542424             lea edx, [esp + 0x24]
// 00668ed2  2bd0                 sub edx, eax
// 00668ed4  89542414             mov dword ptr [esp + 0x14], edx
// 00668ed8  57                   push edi
// 00668ed9  8bbc2438010000       mov edi, dword ptr [esp + 0x138]
// 00668ee0  8d54242c             lea edx, [esp + 0x2c]
// 00668ee4  2bd0                 sub edx, eax
// 00668ee6  89542420             mov dword ptr [esp + 0x20], edx
// 00668eea  83c704               add edi, 4
// 00668eed  894c2410             mov dword ptr [esp + 0x10], ecx
// 00668ef1  8b542424             mov edx, dword ptr [esp + 0x24]
// 00668ef5  8d442428             lea eax, [esp + 0x28]
// 00668ef9  be02000000           mov esi, 2
// 00668efe  8bff                 mov edi, edi
// 00668f00  8b4af8               mov ecx, dword ptr [edx - 8]
// 00668f03  0fb62c19             movzx ebp, byte ptr [ecx + ebx]
// 00668f07  83c580               add ebp, -0x80
// 00668f0a  8928                 mov dword ptr [eax], ebp
// 00668f0c  03cb                 add ecx, ebx
// 00668f0e  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 00668f12  41                   inc ecx
// 00668f13  83c580               add ebp, -0x80
// 00668f16  896804               mov dword ptr [eax + 4], ebp
// 00668f19  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 00668f1d  41                   inc ecx
// 00668f1e  83c580               add ebp, -0x80
// 00668f21  83c004               add eax, 4
// 00668f24  896804               mov dword ptr [eax + 4], ebp
// 00668f27  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 00668f2b  41                   inc ecx
// 00668f2c  83c004               add eax, 4
// 00668f2f  83c580               add ebp, -0x80
// 00668f32  896804               mov dword ptr [eax + 4], ebp
// 00668f35  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 00668f39  41                   inc ecx
// 00668f3a  83c004               add eax, 4
// 00668f3d  83c580               add ebp, -0x80
// 00668f40  896804               mov dword ptr [eax + 4], ebp
// 00668f43  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 00668f47  41                   inc ecx
// 00668f48  83c004               add eax, 4
// 00668f4b  83c580               add ebp, -0x80
// 00668f4e  896804               mov dword ptr [eax + 4], ebp
// 00668f51  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 00668f55  41                   inc ecx
// 00668f56  83c004               add eax, 4
// 00668f59  83c580               add ebp, -0x80
// 00668f5c  896804               mov dword ptr [eax + 4], ebp
// 00668f5f  0fb64901             movzx ecx, byte ptr [ecx + 1]
// 00668f63  83c004               add eax, 4
// 00668f66  83c180               add ecx, -0x80
// 00668f69  894804               mov dword ptr [eax + 4], ecx
// 00668f6c  8b4afc               mov ecx, dword ptr [edx - 4]
// 00668f6f  0fb62c19             movzx ebp, byte ptr [ecx + ebx]
// 00668f73  83c004               add eax, 4
// 00668f76  03cb                 add ecx, ebx
// 00668f78  83c580               add ebp, -0x80
// 00668f7b  896804               mov dword ptr [eax + 4], ebp
// 00668f7e  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 00668f82  83c004               add eax, 4
// 00668f85  41                   inc ecx
// 00668f86  83c580               add ebp, -0x80
// 00668f89  896804               mov dword ptr [eax + 4], ebp
// 00668f8c  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 00668f90  83c004               add eax, 4
// 00668f93  41                   inc ecx
// 00668f94  83c580               add ebp, -0x80
// 00668f97  896804               mov dword ptr [eax + 4], ebp
// 00668f9a  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 00668f9e  83c004               add eax, 4
// 00668fa1  41                   inc ecx
// 00668fa2  83c580               add ebp, -0x80
// 00668fa5  896804               mov dword ptr [eax + 4], ebp
// 00668fa8  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 00668fac  83c004               add eax, 4
// 00668faf  41                   inc ecx
// 00668fb0  83c580               add ebp, -0x80
// 00668fb3  896804               mov dword ptr [eax + 4], ebp
// 00668fb6  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 00668fba  83c004               add eax, 4
// 00668fbd  41                   inc ecx
// 00668fbe  83c004               add eax, 4
// 00668fc1  83c580               add ebp, -0x80
// 00668fc4  8928                 mov dword ptr [eax], ebp
// 00668fc6  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 00668fca  41                   inc ecx
// 00668fcb  83c004               add eax, 4
// 00668fce  83c580               add ebp, -0x80
// 00668fd1  8928                 mov dword ptr [eax], ebp
// 00668fd3  0fb64901             movzx ecx, byte ptr [ecx + 1]
// 00668fd7  83c180               add ecx, -0x80
// 00668fda  83c004               add eax, 4
// 00668fdd  8908                 mov dword ptr [eax], ecx
// 00668fdf  8b0a                 mov ecx, dword ptr [edx]
// 00668fe1  83c004               add eax, 4
// 00668fe4  0fb62c19             movzx ebp, byte ptr [ecx + ebx]
// 00668fe8  83c580               add ebp, -0x80
// 00668feb  8928                 mov dword ptr [eax], ebp
// 00668fed  03cb                 add ecx, ebx
// 00668fef  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 00668ff3  83c580               add ebp, -0x80
// 00668ff6  896804               mov dword ptr [eax + 4], ebp
// 00668ff9  41                   inc ecx
// 00668ffa  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 00668ffe  83c004               add eax, 4
// 00669001  41                   inc ecx
// 00669002  83c580               add ebp, -0x80
// 00669005  896804               mov dword ptr [eax + 4], ebp
// 00669008  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 0066900c  83c004               add eax, 4
// 0066900f  41                   inc ecx
// 00669010  83c580               add ebp, -0x80
// 00669013  896804               mov dword ptr [eax + 4], ebp
// 00669016  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 0066901a  83c004               add eax, 4
// 0066901d  41                   inc ecx
// 0066901e  83c580               add ebp, -0x80
// 00669021  896804               mov dword ptr [eax + 4], ebp
// 00669024  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 00669028  83c004               add eax, 4
// 0066902b  41                   inc ecx
// 0066902c  83c580               add ebp, -0x80
// 0066902f  896804               mov dword ptr [eax + 4], ebp
// 00669032  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 00669036  83c004               add eax, 4
// 00669039  41                   inc ecx
// 0066903a  83c580               add ebp, -0x80
// 0066903d  896804               mov dword ptr [eax + 4], ebp
// 00669040  0fb64901             movzx ecx, byte ptr [ecx + 1]
// 00669044  83c004               add eax, 4
// 00669047  83c180               add ecx, -0x80
// 0066904a  894804               mov dword ptr [eax + 4], ecx
// 0066904d  8b4a04               mov ecx, dword ptr [edx + 4]
// 00669050  0fb62c19             movzx ebp, byte ptr [ecx + ebx]
// 00669054  83c004               add eax, 4
// 00669057  03cb                 add ecx, ebx
// 00669059  83c580               add ebp, -0x80
// 0066905c  896804               mov dword ptr [eax + 4], ebp
// 0066905f  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 00669063  83c004               add eax, 4
// 00669066  41                   inc ecx
// 00669067  83c580               add ebp, -0x80
// 0066906a  896804               mov dword ptr [eax + 4], ebp
// 0066906d  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 00669071  83c004               add eax, 4
// 00669074  41                   inc ecx
// 00669075  83c580               add ebp, -0x80
// 00669078  896804               mov dword ptr [eax + 4], ebp
// 0066907b  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 0066907f  83c004               add eax, 4
// 00669082  41                   inc ecx
// 00669083  83c580               add ebp, -0x80
// 00669086  896804               mov dword ptr [eax + 4], ebp
// 00669089  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 0066908d  83c004               add eax, 4
// 00669090  41                   inc ecx
// 00669091  83c004               add eax, 4
// 00669094  83c580               add ebp, -0x80
// 00669097  8928                 mov dword ptr [eax], ebp
// 00669099  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 0066909d  41                   inc ecx
// 0066909e  83c004               add eax, 4
// 006690a1  83c580               add ebp, -0x80
// 006690a4  8928                 mov dword ptr [eax], ebp
// 006690a6  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 006690aa  41                   inc ecx
// 006690ab  83c004               add eax, 4
// 006690ae  83c580               add ebp, -0x80
// 006690b1  8928                 mov dword ptr [eax], ebp
// 006690b3  0fb64901             movzx ecx, byte ptr [ecx + 1]
// 006690b7  83c004               add eax, 4
// 006690ba  83c180               add ecx, -0x80
// 006690bd  8908                 mov dword ptr [eax], ecx
// 006690bf  83c004               add eax, 4
// 006690c2  83c210               add edx, 0x10
// 006690c5  83ee01               sub esi, 1
// 006690c8  0f8532feffff         jne 0x668f00
// 006690ce  8d542428             lea edx, [esp + 0x28]
// 006690d2  52                   push edx
// 006690d3  ff542420             call dword ptr [esp + 0x20]
// 006690d7  8b742418             mov esi, dword ptr [esp + 0x18]
// 006690db  83c404               add esp, 4
// 006690de  33ed                 xor ebp, ebp
// 006690e0  8b4ef8               mov ecx, dword ptr [esi - 8]
// 006690e3  8b44ac28             mov eax, dword ptr [esp + ebp*4 + 0x28]
// 006690e7  8bd1                 mov edx, ecx
// 006690e9  d1fa                 sar edx, 1
// 006690eb  85c0                 test eax, eax
// 006690ed  7d15                 jge 0x669104
// 006690ef  2bd0                 sub edx, eax
// 006690f1  3bd1                 cmp edx, ecx
// 006690f3  7c09                 jl 0x6690fe
// 006690f5  8bc2                 mov eax, edx
// 006690f7  99                   cdq 
// 006690f8  f7f9                 idiv ecx
// 006690fa  f7d8                 neg eax
// 006690fc  eb13                 jmp 0x669111
// 006690fe  33c0                 xor eax, eax
// 00669100  f7d8                 neg eax
// 00669102  eb0d                 jmp 0x669111
// 00669104  03c2                 add eax, edx
// 00669106  3bc1                 cmp eax, ecx
// 00669108  7c05                 jl 0x66910f
// 0066910a  99                   cdq 
// 0066910b  f7f9                 idiv ecx
// 0066910d  eb02                 jmp 0x669111
// 0066910f  33c0                 xor eax, eax
// 00669111  668947fc             mov word ptr [edi - 4], ax
// 00669115  8b4efc               mov ecx, dword ptr [esi - 4]
// 00669118  8b44ac2c             mov eax, dword ptr [esp + ebp*4 + 0x2c]
// 0066911c  8bd1                 mov edx, ecx
// 0066911e  d1fa                 sar edx, 1
// 00669120  85c0                 test eax, eax
// 00669122  7d15                 jge 0x669139
// 00669124  2bd0                 sub edx, eax
// 00669126  3bd1                 cmp edx, ecx
// 00669128  7c09                 jl 0x669133
// 0066912a  8bc2                 mov eax, edx
// 0066912c  99                   cdq 
// 0066912d  f7f9                 idiv ecx
// 0066912f  f7d8                 neg eax
// 00669131  eb13                 jmp 0x669146
// 00669133  33c0                 xor eax, eax
// 00669135  f7d8                 neg eax
// 00669137  eb0d                 jmp 0x669146
// 00669139  03c2                 add eax, edx
// 0066913b  3bc1                 cmp eax, ecx
// 0066913d  7c05                 jl 0x669144
// 0066913f  99                   cdq 
// 00669140  f7f9                 idiv ecx
// 00669142  eb02                 jmp 0x669146
// 00669144  33c0                 xor eax, eax
// 00669146  668947fe             mov word ptr [edi - 2], ax
// 0066914a  8b0e                 mov ecx, dword ptr [esi]
// 0066914c  8b442418             mov eax, dword ptr [esp + 0x18]
// 00669150  8b0406               mov eax, dword ptr [esi + eax]
// 00669153  8bd1                 mov edx, ecx
// 00669155  d1fa                 sar edx, 1
// 00669157  85c0                 test eax, eax
// 00669159  7d15                 jge 0x669170
// 0066915b  2bd0                 sub edx, eax
// 0066915d  3bd1                 cmp edx, ecx
// 0066915f  7c09                 jl 0x66916a
// 00669161  8bc2                 mov eax, edx
// 00669163  99                   cdq 
// 00669164  f7f9                 idiv ecx
// 00669166  f7d8                 neg eax
// 00669168  eb13                 jmp 0x66917d
// 0066916a  33c0                 xor eax, eax
// 0066916c  f7d8                 neg eax
// 0066916e  eb0d                 jmp 0x66917d
// 00669170  03c2                 add eax, edx
// 00669172  3bc1                 cmp eax, ecx
// 00669174  7c05                 jl 0x66917b
// 00669176  99                   cdq 
// 00669177  f7f9                 idiv ecx
// 00669179  eb02                 jmp 0x66917d
// 0066917b  33c0                 xor eax, eax
// 0066917d  668907               mov word ptr [edi], ax
// 00669180  8b4e04               mov ecx, dword ptr [esi + 4]
// 00669183  8b442420             mov eax, dword ptr [esp + 0x20]
// 00669187  8b0406               mov eax, dword ptr [esi + eax]
// 0066918a  8bd1                 mov edx, ecx
// 0066918c  d1fa                 sar edx, 1
// 0066918e  85c0                 test eax, eax
// 00669190  7d15                 jge 0x6691a7
// 00669192  2bd0                 sub edx, eax
// 00669194  3bd1                 cmp edx, ecx
// 00669196  7c09                 jl 0x6691a1
// 00669198  8bc2                 mov eax, edx
// 0066919a  99                   cdq 
// 0066919b  f7f9                 idiv ecx
// 0066919d  f7d8                 neg eax
// 0066919f  eb13                 jmp 0x6691b4
// 006691a1  33c0                 xor eax, eax
// 006691a3  f7d8                 neg eax
// 006691a5  eb0d                 jmp 0x6691b4
// 006691a7  03c2                 add eax, edx
// 006691a9  3bc1                 cmp eax, ecx
// 006691ab  7c05                 jl 0x6691b2
// 006691ad  99                   cdq 
// 006691ae  f7f9                 idiv ecx
// 006691b0  eb02                 jmp 0x6691b4
// 006691b2  33c0                 xor eax, eax
// 006691b4  66894702             mov word ptr [edi + 2], ax
// 006691b8  83c504               add ebp, 4
// 006691bb  83c708               add edi, 8
// 006691be  83c610               add esi, 0x10
// 006691c1  83fd40               cmp ebp, 0x40
// 006691c4  0f8c16ffffff         jl 0x6690e0
// 006691ca  83c308               add ebx, 8
// 006691cd  836c241001           sub dword ptr [esp + 0x10], 1
// 006691d2  0f8519fdffff         jne 0x668ef1
// 006691d8  5f                   pop edi
// 006691d9  5e                   pop esi
// 006691da  5d                   pop ebp
// 006691db  5b                   pop ebx
// 006691dc  81c418010000         add esp, 0x118
// 006691e2  c3                   ret 
// library jpeg-6b/jcdctmgr.c (function _forward_DCT)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcdctmgr.c
