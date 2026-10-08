// roc 2009-12 00625950  unit: seg_00620000  size: 883 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00625950
//
// 00625950  81ec18010000         sub esp, 0x118
// 00625956  8b84241c010000       mov eax, dword ptr [esp + 0x11c]
// 0062595d  8b8058010000         mov eax, dword ptr [eax + 0x158]
// 00625963  8b4808               mov ecx, dword ptr [eax + 8]
// 00625966  8b942420010000       mov edx, dword ptr [esp + 0x120]
// 0062596d  894c240c             mov dword ptr [esp + 0xc], ecx
// 00625971  8b4a10               mov ecx, dword ptr [edx + 0x10]
// 00625974  8b44880c             mov eax, dword ptr [eax + ecx*4 + 0xc]
// 00625978  8b8c2434010000       mov ecx, dword ptr [esp + 0x134]
// 0062597f  85c9                 test ecx, ecx
// 00625981  0f8635030000         jbe 0x625cbc
// 00625987  8b94242c010000       mov edx, dword ptr [esp + 0x12c]
// 0062598e  53                   push ebx
// 0062598f  8b9c2434010000       mov ebx, dword ptr [esp + 0x134]
// 00625996  55                   push ebp
// 00625997  56                   push esi
// 00625998  8bb42430010000       mov esi, dword ptr [esp + 0x130]
// 0062599f  8d549608             lea edx, [esi + edx*4 + 8]
// 006259a3  89542420             mov dword ptr [esp + 0x20], edx
// 006259a7  8d5008               lea edx, [eax + 8]
// 006259aa  89542410             mov dword ptr [esp + 0x10], edx
// 006259ae  8d542424             lea edx, [esp + 0x24]
// 006259b2  2bd0                 sub edx, eax
// 006259b4  89542414             mov dword ptr [esp + 0x14], edx
// 006259b8  57                   push edi
// 006259b9  8bbc2438010000       mov edi, dword ptr [esp + 0x138]
// 006259c0  8d54242c             lea edx, [esp + 0x2c]
// 006259c4  2bd0                 sub edx, eax
// 006259c6  89542420             mov dword ptr [esp + 0x20], edx
// 006259ca  83c704               add edi, 4
// 006259cd  894c2410             mov dword ptr [esp + 0x10], ecx
// 006259d1  8b542424             mov edx, dword ptr [esp + 0x24]
// 006259d5  8d442428             lea eax, [esp + 0x28]
// 006259d9  be02000000           mov esi, 2
// 006259de  8bff                 mov edi, edi
// 006259e0  8b4af8               mov ecx, dword ptr [edx - 8]
// 006259e3  0fb62c19             movzx ebp, byte ptr [ecx + ebx]
// 006259e7  83c580               add ebp, -0x80
// 006259ea  8928                 mov dword ptr [eax], ebp
// 006259ec  03cb                 add ecx, ebx
// 006259ee  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 006259f2  41                   inc ecx
// 006259f3  83c580               add ebp, -0x80
// 006259f6  896804               mov dword ptr [eax + 4], ebp
// 006259f9  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 006259fd  41                   inc ecx
// 006259fe  83c580               add ebp, -0x80
// 00625a01  83c004               add eax, 4
// 00625a04  896804               mov dword ptr [eax + 4], ebp
// 00625a07  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 00625a0b  41                   inc ecx
// 00625a0c  83c004               add eax, 4
// 00625a0f  83c580               add ebp, -0x80
// 00625a12  896804               mov dword ptr [eax + 4], ebp
// 00625a15  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 00625a19  41                   inc ecx
// 00625a1a  83c004               add eax, 4
// 00625a1d  83c580               add ebp, -0x80
// 00625a20  896804               mov dword ptr [eax + 4], ebp
// 00625a23  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 00625a27  41                   inc ecx
// 00625a28  83c004               add eax, 4
// 00625a2b  83c580               add ebp, -0x80
// 00625a2e  896804               mov dword ptr [eax + 4], ebp
// 00625a31  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 00625a35  41                   inc ecx
// 00625a36  83c004               add eax, 4
// 00625a39  83c580               add ebp, -0x80
// 00625a3c  896804               mov dword ptr [eax + 4], ebp
// 00625a3f  0fb64901             movzx ecx, byte ptr [ecx + 1]
// 00625a43  83c004               add eax, 4
// 00625a46  83c180               add ecx, -0x80
// 00625a49  894804               mov dword ptr [eax + 4], ecx
// 00625a4c  8b4afc               mov ecx, dword ptr [edx - 4]
// 00625a4f  0fb62c19             movzx ebp, byte ptr [ecx + ebx]
// 00625a53  83c004               add eax, 4
// 00625a56  03cb                 add ecx, ebx
// 00625a58  83c580               add ebp, -0x80
// 00625a5b  896804               mov dword ptr [eax + 4], ebp
// 00625a5e  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 00625a62  83c004               add eax, 4
// 00625a65  41                   inc ecx
// 00625a66  83c580               add ebp, -0x80
// 00625a69  896804               mov dword ptr [eax + 4], ebp
// 00625a6c  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 00625a70  83c004               add eax, 4
// 00625a73  41                   inc ecx
// 00625a74  83c580               add ebp, -0x80
// 00625a77  896804               mov dword ptr [eax + 4], ebp
// 00625a7a  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 00625a7e  83c004               add eax, 4
// 00625a81  41                   inc ecx
// 00625a82  83c580               add ebp, -0x80
// 00625a85  896804               mov dword ptr [eax + 4], ebp
// 00625a88  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 00625a8c  83c004               add eax, 4
// 00625a8f  41                   inc ecx
// 00625a90  83c580               add ebp, -0x80
// 00625a93  896804               mov dword ptr [eax + 4], ebp
// 00625a96  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 00625a9a  83c004               add eax, 4
// 00625a9d  41                   inc ecx
// 00625a9e  83c004               add eax, 4
// 00625aa1  83c580               add ebp, -0x80
// 00625aa4  8928                 mov dword ptr [eax], ebp
// 00625aa6  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 00625aaa  41                   inc ecx
// 00625aab  83c004               add eax, 4
// 00625aae  83c580               add ebp, -0x80
// 00625ab1  8928                 mov dword ptr [eax], ebp
// 00625ab3  0fb64901             movzx ecx, byte ptr [ecx + 1]
// 00625ab7  83c180               add ecx, -0x80
// 00625aba  83c004               add eax, 4
// 00625abd  8908                 mov dword ptr [eax], ecx
// 00625abf  8b0a                 mov ecx, dword ptr [edx]
// 00625ac1  83c004               add eax, 4
// 00625ac4  0fb62c19             movzx ebp, byte ptr [ecx + ebx]
// 00625ac8  83c580               add ebp, -0x80
// 00625acb  8928                 mov dword ptr [eax], ebp
// 00625acd  03cb                 add ecx, ebx
// 00625acf  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 00625ad3  83c580               add ebp, -0x80
// 00625ad6  896804               mov dword ptr [eax + 4], ebp
// 00625ad9  41                   inc ecx
// 00625ada  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 00625ade  83c004               add eax, 4
// 00625ae1  41                   inc ecx
// 00625ae2  83c580               add ebp, -0x80
// 00625ae5  896804               mov dword ptr [eax + 4], ebp
// 00625ae8  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 00625aec  83c004               add eax, 4
// 00625aef  41                   inc ecx
// 00625af0  83c580               add ebp, -0x80
// 00625af3  896804               mov dword ptr [eax + 4], ebp
// 00625af6  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 00625afa  83c004               add eax, 4
// 00625afd  41                   inc ecx
// 00625afe  83c580               add ebp, -0x80
// 00625b01  896804               mov dword ptr [eax + 4], ebp
// 00625b04  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 00625b08  83c004               add eax, 4
// 00625b0b  41                   inc ecx
// 00625b0c  83c580               add ebp, -0x80
// 00625b0f  896804               mov dword ptr [eax + 4], ebp
// 00625b12  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 00625b16  83c004               add eax, 4
// 00625b19  41                   inc ecx
// 00625b1a  83c580               add ebp, -0x80
// 00625b1d  896804               mov dword ptr [eax + 4], ebp
// 00625b20  0fb64901             movzx ecx, byte ptr [ecx + 1]
// 00625b24  83c004               add eax, 4
// 00625b27  83c180               add ecx, -0x80
// 00625b2a  894804               mov dword ptr [eax + 4], ecx
// 00625b2d  8b4a04               mov ecx, dword ptr [edx + 4]
// 00625b30  0fb62c19             movzx ebp, byte ptr [ecx + ebx]
// 00625b34  83c004               add eax, 4
// 00625b37  03cb                 add ecx, ebx
// 00625b39  83c580               add ebp, -0x80
// 00625b3c  896804               mov dword ptr [eax + 4], ebp
// 00625b3f  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 00625b43  83c004               add eax, 4
// 00625b46  41                   inc ecx
// 00625b47  83c580               add ebp, -0x80
// 00625b4a  896804               mov dword ptr [eax + 4], ebp
// 00625b4d  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 00625b51  83c004               add eax, 4
// 00625b54  41                   inc ecx
// 00625b55  83c580               add ebp, -0x80
// 00625b58  896804               mov dword ptr [eax + 4], ebp
// 00625b5b  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 00625b5f  83c004               add eax, 4
// 00625b62  41                   inc ecx
// 00625b63  83c580               add ebp, -0x80
// 00625b66  896804               mov dword ptr [eax + 4], ebp
// 00625b69  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 00625b6d  83c004               add eax, 4
// 00625b70  41                   inc ecx
// 00625b71  83c004               add eax, 4
// 00625b74  83c580               add ebp, -0x80
// 00625b77  8928                 mov dword ptr [eax], ebp
// 00625b79  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 00625b7d  41                   inc ecx
// 00625b7e  83c004               add eax, 4
// 00625b81  83c580               add ebp, -0x80
// 00625b84  8928                 mov dword ptr [eax], ebp
// 00625b86  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 00625b8a  41                   inc ecx
// 00625b8b  83c004               add eax, 4
// 00625b8e  83c580               add ebp, -0x80
// 00625b91  8928                 mov dword ptr [eax], ebp
// 00625b93  0fb64901             movzx ecx, byte ptr [ecx + 1]
// 00625b97  83c004               add eax, 4
// 00625b9a  83c180               add ecx, -0x80
// 00625b9d  8908                 mov dword ptr [eax], ecx
// 00625b9f  83c004               add eax, 4
// 00625ba2  83c210               add edx, 0x10
// 00625ba5  83ee01               sub esi, 1
// 00625ba8  0f8532feffff         jne 0x6259e0
// 00625bae  8d542428             lea edx, [esp + 0x28]
// 00625bb2  52                   push edx
// 00625bb3  ff542420             call dword ptr [esp + 0x20]
// 00625bb7  8b742418             mov esi, dword ptr [esp + 0x18]
// 00625bbb  83c404               add esp, 4
// 00625bbe  33ed                 xor ebp, ebp
// 00625bc0  8b4ef8               mov ecx, dword ptr [esi - 8]
// 00625bc3  8b44ac28             mov eax, dword ptr [esp + ebp*4 + 0x28]
// 00625bc7  8bd1                 mov edx, ecx
// 00625bc9  d1fa                 sar edx, 1
// 00625bcb  85c0                 test eax, eax
// 00625bcd  7d15                 jge 0x625be4
// 00625bcf  2bd0                 sub edx, eax
// 00625bd1  3bd1                 cmp edx, ecx
// 00625bd3  7c09                 jl 0x625bde
// 00625bd5  8bc2                 mov eax, edx
// 00625bd7  99                   cdq 
// 00625bd8  f7f9                 idiv ecx
// 00625bda  f7d8                 neg eax
// 00625bdc  eb13                 jmp 0x625bf1
// 00625bde  33c0                 xor eax, eax
// 00625be0  f7d8                 neg eax
// 00625be2  eb0d                 jmp 0x625bf1
// 00625be4  03c2                 add eax, edx
// 00625be6  3bc1                 cmp eax, ecx
// 00625be8  7c05                 jl 0x625bef
// 00625bea  99                   cdq 
// 00625beb  f7f9                 idiv ecx
// 00625bed  eb02                 jmp 0x625bf1
// 00625bef  33c0                 xor eax, eax
// 00625bf1  668947fc             mov word ptr [edi - 4], ax
// 00625bf5  8b4efc               mov ecx, dword ptr [esi - 4]
// 00625bf8  8b44ac2c             mov eax, dword ptr [esp + ebp*4 + 0x2c]
// 00625bfc  8bd1                 mov edx, ecx
// 00625bfe  d1fa                 sar edx, 1
// 00625c00  85c0                 test eax, eax
// 00625c02  7d15                 jge 0x625c19
// 00625c04  2bd0                 sub edx, eax
// 00625c06  3bd1                 cmp edx, ecx
// 00625c08  7c09                 jl 0x625c13
// 00625c0a  8bc2                 mov eax, edx
// 00625c0c  99                   cdq 
// 00625c0d  f7f9                 idiv ecx
// 00625c0f  f7d8                 neg eax
// 00625c11  eb13                 jmp 0x625c26
// 00625c13  33c0                 xor eax, eax
// 00625c15  f7d8                 neg eax
// 00625c17  eb0d                 jmp 0x625c26
// 00625c19  03c2                 add eax, edx
// 00625c1b  3bc1                 cmp eax, ecx
// 00625c1d  7c05                 jl 0x625c24
// 00625c1f  99                   cdq 
// 00625c20  f7f9                 idiv ecx
// 00625c22  eb02                 jmp 0x625c26
// 00625c24  33c0                 xor eax, eax
// 00625c26  668947fe             mov word ptr [edi - 2], ax
// 00625c2a  8b0e                 mov ecx, dword ptr [esi]
// 00625c2c  8b442418             mov eax, dword ptr [esp + 0x18]
// 00625c30  8b0406               mov eax, dword ptr [esi + eax]
// 00625c33  8bd1                 mov edx, ecx
// 00625c35  d1fa                 sar edx, 1
// 00625c37  85c0                 test eax, eax
// 00625c39  7d15                 jge 0x625c50
// 00625c3b  2bd0                 sub edx, eax
// 00625c3d  3bd1                 cmp edx, ecx
// 00625c3f  7c09                 jl 0x625c4a
// 00625c41  8bc2                 mov eax, edx
// 00625c43  99                   cdq 
// 00625c44  f7f9                 idiv ecx
// 00625c46  f7d8                 neg eax
// 00625c48  eb13                 jmp 0x625c5d
// 00625c4a  33c0                 xor eax, eax
// 00625c4c  f7d8                 neg eax
// 00625c4e  eb0d                 jmp 0x625c5d
// 00625c50  03c2                 add eax, edx
// 00625c52  3bc1                 cmp eax, ecx
// 00625c54  7c05                 jl 0x625c5b
// 00625c56  99                   cdq 
// 00625c57  f7f9                 idiv ecx
// 00625c59  eb02                 jmp 0x625c5d
// 00625c5b  33c0                 xor eax, eax
// 00625c5d  668907               mov word ptr [edi], ax
// 00625c60  8b4e04               mov ecx, dword ptr [esi + 4]
// 00625c63  8b442420             mov eax, dword ptr [esp + 0x20]
// 00625c67  8b0406               mov eax, dword ptr [esi + eax]
// 00625c6a  8bd1                 mov edx, ecx
// 00625c6c  d1fa                 sar edx, 1
// 00625c6e  85c0                 test eax, eax
// 00625c70  7d15                 jge 0x625c87
// 00625c72  2bd0                 sub edx, eax
// 00625c74  3bd1                 cmp edx, ecx
// 00625c76  7c09                 jl 0x625c81
// 00625c78  8bc2                 mov eax, edx
// 00625c7a  99                   cdq 
// 00625c7b  f7f9                 idiv ecx
// 00625c7d  f7d8                 neg eax
// 00625c7f  eb13                 jmp 0x625c94
// 00625c81  33c0                 xor eax, eax
// 00625c83  f7d8                 neg eax
// 00625c85  eb0d                 jmp 0x625c94
// 00625c87  03c2                 add eax, edx
// 00625c89  3bc1                 cmp eax, ecx
// 00625c8b  7c05                 jl 0x625c92
// 00625c8d  99                   cdq 
// 00625c8e  f7f9                 idiv ecx
// 00625c90  eb02                 jmp 0x625c94
// 00625c92  33c0                 xor eax, eax
// 00625c94  66894702             mov word ptr [edi + 2], ax
// 00625c98  83c504               add ebp, 4
// 00625c9b  83c708               add edi, 8
// 00625c9e  83c610               add esi, 0x10
// 00625ca1  83fd40               cmp ebp, 0x40
// 00625ca4  0f8c16ffffff         jl 0x625bc0
// 00625caa  83c308               add ebx, 8
// 00625cad  836c241001           sub dword ptr [esp + 0x10], 1
// 00625cb2  0f8519fdffff         jne 0x6259d1
// 00625cb8  5f                   pop edi
// 00625cb9  5e                   pop esi
// 00625cba  5d                   pop ebp
// 00625cbb  5b                   pop ebx
// 00625cbc  81c418010000         add esp, 0x118
// 00625cc2  c3                   ret 
// library jpeg-6b/jcdctmgr.c (function _forward_DCT)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcdctmgr.c
