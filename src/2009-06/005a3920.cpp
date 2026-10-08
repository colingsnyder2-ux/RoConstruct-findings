// from server: 100% by auto
// roc 2009-06 005a3920  unit: seg_005a0000  size: 883 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a3920
//
// 005a3920  81ec18010000         sub esp, 0x118
// 005a3926  8b84241c010000       mov eax, dword ptr [esp + 0x11c]
// 005a392d  8b8058010000         mov eax, dword ptr [eax + 0x158]
// 005a3933  8b4808               mov ecx, dword ptr [eax + 8]
// 005a3936  8b942420010000       mov edx, dword ptr [esp + 0x120]
// 005a393d  894c240c             mov dword ptr [esp + 0xc], ecx
// 005a3941  8b4a10               mov ecx, dword ptr [edx + 0x10]
// 005a3944  8b44880c             mov eax, dword ptr [eax + ecx*4 + 0xc]
// 005a3948  8b8c2434010000       mov ecx, dword ptr [esp + 0x134]
// 005a394f  85c9                 test ecx, ecx
// 005a3951  0f8635030000         jbe 0x5a3c8c
// 005a3957  8b94242c010000       mov edx, dword ptr [esp + 0x12c]
// 005a395e  53                   push ebx
// 005a395f  8b9c2434010000       mov ebx, dword ptr [esp + 0x134]
// 005a3966  55                   push ebp
// 005a3967  56                   push esi
// 005a3968  8bb42430010000       mov esi, dword ptr [esp + 0x130]
// 005a396f  8d549608             lea edx, [esi + edx*4 + 8]
// 005a3973  89542420             mov dword ptr [esp + 0x20], edx
// 005a3977  8d5008               lea edx, [eax + 8]
// 005a397a  89542410             mov dword ptr [esp + 0x10], edx
// 005a397e  8d542424             lea edx, [esp + 0x24]
// 005a3982  2bd0                 sub edx, eax
// 005a3984  89542414             mov dword ptr [esp + 0x14], edx
// 005a3988  57                   push edi
// 005a3989  8bbc2438010000       mov edi, dword ptr [esp + 0x138]
// 005a3990  8d54242c             lea edx, [esp + 0x2c]
// 005a3994  2bd0                 sub edx, eax
// 005a3996  89542420             mov dword ptr [esp + 0x20], edx
// 005a399a  83c704               add edi, 4
// 005a399d  894c2410             mov dword ptr [esp + 0x10], ecx
// 005a39a1  8b542424             mov edx, dword ptr [esp + 0x24]
// 005a39a5  8d442428             lea eax, [esp + 0x28]
// 005a39a9  be02000000           mov esi, 2
// 005a39ae  8bff                 mov edi, edi
// 005a39b0  8b4af8               mov ecx, dword ptr [edx - 8]
// 005a39b3  0fb62c19             movzx ebp, byte ptr [ecx + ebx]
// 005a39b7  83c580               add ebp, -0x80
// 005a39ba  8928                 mov dword ptr [eax], ebp
// 005a39bc  03cb                 add ecx, ebx
// 005a39be  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 005a39c2  41                   inc ecx
// 005a39c3  83c580               add ebp, -0x80
// 005a39c6  896804               mov dword ptr [eax + 4], ebp
// 005a39c9  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 005a39cd  41                   inc ecx
// 005a39ce  83c580               add ebp, -0x80
// 005a39d1  83c004               add eax, 4
// 005a39d4  896804               mov dword ptr [eax + 4], ebp
// 005a39d7  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 005a39db  41                   inc ecx
// 005a39dc  83c004               add eax, 4
// 005a39df  83c580               add ebp, -0x80
// 005a39e2  896804               mov dword ptr [eax + 4], ebp
// 005a39e5  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 005a39e9  41                   inc ecx
// 005a39ea  83c004               add eax, 4
// 005a39ed  83c580               add ebp, -0x80
// 005a39f0  896804               mov dword ptr [eax + 4], ebp
// 005a39f3  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 005a39f7  41                   inc ecx
// 005a39f8  83c004               add eax, 4
// 005a39fb  83c580               add ebp, -0x80
// 005a39fe  896804               mov dword ptr [eax + 4], ebp
// 005a3a01  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 005a3a05  41                   inc ecx
// 005a3a06  83c004               add eax, 4
// 005a3a09  83c580               add ebp, -0x80
// 005a3a0c  896804               mov dword ptr [eax + 4], ebp
// 005a3a0f  0fb64901             movzx ecx, byte ptr [ecx + 1]
// 005a3a13  83c004               add eax, 4
// 005a3a16  83c180               add ecx, -0x80
// 005a3a19  894804               mov dword ptr [eax + 4], ecx
// 005a3a1c  8b4afc               mov ecx, dword ptr [edx - 4]
// 005a3a1f  0fb62c19             movzx ebp, byte ptr [ecx + ebx]
// 005a3a23  83c004               add eax, 4
// 005a3a26  03cb                 add ecx, ebx
// 005a3a28  83c580               add ebp, -0x80
// 005a3a2b  896804               mov dword ptr [eax + 4], ebp
// 005a3a2e  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 005a3a32  83c004               add eax, 4
// 005a3a35  41                   inc ecx
// 005a3a36  83c580               add ebp, -0x80
// 005a3a39  896804               mov dword ptr [eax + 4], ebp
// 005a3a3c  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 005a3a40  83c004               add eax, 4
// 005a3a43  41                   inc ecx
// 005a3a44  83c580               add ebp, -0x80
// 005a3a47  896804               mov dword ptr [eax + 4], ebp
// 005a3a4a  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 005a3a4e  83c004               add eax, 4
// 005a3a51  41                   inc ecx
// 005a3a52  83c580               add ebp, -0x80
// 005a3a55  896804               mov dword ptr [eax + 4], ebp
// 005a3a58  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 005a3a5c  83c004               add eax, 4
// 005a3a5f  41                   inc ecx
// 005a3a60  83c580               add ebp, -0x80
// 005a3a63  896804               mov dword ptr [eax + 4], ebp
// 005a3a66  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 005a3a6a  83c004               add eax, 4
// 005a3a6d  41                   inc ecx
// 005a3a6e  83c004               add eax, 4
// 005a3a71  83c580               add ebp, -0x80
// 005a3a74  8928                 mov dword ptr [eax], ebp
// 005a3a76  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 005a3a7a  41                   inc ecx
// 005a3a7b  83c004               add eax, 4
// 005a3a7e  83c580               add ebp, -0x80
// 005a3a81  8928                 mov dword ptr [eax], ebp
// 005a3a83  0fb64901             movzx ecx, byte ptr [ecx + 1]
// 005a3a87  83c180               add ecx, -0x80
// 005a3a8a  83c004               add eax, 4
// 005a3a8d  8908                 mov dword ptr [eax], ecx
// 005a3a8f  8b0a                 mov ecx, dword ptr [edx]
// 005a3a91  83c004               add eax, 4
// 005a3a94  0fb62c19             movzx ebp, byte ptr [ecx + ebx]
// 005a3a98  83c580               add ebp, -0x80
// 005a3a9b  8928                 mov dword ptr [eax], ebp
// 005a3a9d  03cb                 add ecx, ebx
// 005a3a9f  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 005a3aa3  83c580               add ebp, -0x80
// 005a3aa6  896804               mov dword ptr [eax + 4], ebp
// 005a3aa9  41                   inc ecx
// 005a3aaa  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 005a3aae  83c004               add eax, 4
// 005a3ab1  41                   inc ecx
// 005a3ab2  83c580               add ebp, -0x80
// 005a3ab5  896804               mov dword ptr [eax + 4], ebp
// 005a3ab8  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 005a3abc  83c004               add eax, 4
// 005a3abf  41                   inc ecx
// 005a3ac0  83c580               add ebp, -0x80
// 005a3ac3  896804               mov dword ptr [eax + 4], ebp
// 005a3ac6  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 005a3aca  83c004               add eax, 4
// 005a3acd  41                   inc ecx
// 005a3ace  83c580               add ebp, -0x80
// 005a3ad1  896804               mov dword ptr [eax + 4], ebp
// 005a3ad4  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 005a3ad8  83c004               add eax, 4
// 005a3adb  41                   inc ecx
// 005a3adc  83c580               add ebp, -0x80
// 005a3adf  896804               mov dword ptr [eax + 4], ebp
// 005a3ae2  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 005a3ae6  83c004               add eax, 4
// 005a3ae9  41                   inc ecx
// 005a3aea  83c580               add ebp, -0x80
// 005a3aed  896804               mov dword ptr [eax + 4], ebp
// 005a3af0  0fb64901             movzx ecx, byte ptr [ecx + 1]
// 005a3af4  83c004               add eax, 4
// 005a3af7  83c180               add ecx, -0x80
// 005a3afa  894804               mov dword ptr [eax + 4], ecx
// 005a3afd  8b4a04               mov ecx, dword ptr [edx + 4]
// 005a3b00  0fb62c19             movzx ebp, byte ptr [ecx + ebx]
// 005a3b04  83c004               add eax, 4
// 005a3b07  03cb                 add ecx, ebx
// 005a3b09  83c580               add ebp, -0x80
// 005a3b0c  896804               mov dword ptr [eax + 4], ebp
// 005a3b0f  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 005a3b13  83c004               add eax, 4
// 005a3b16  41                   inc ecx
// 005a3b17  83c580               add ebp, -0x80
// 005a3b1a  896804               mov dword ptr [eax + 4], ebp
// 005a3b1d  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 005a3b21  83c004               add eax, 4
// 005a3b24  41                   inc ecx
// 005a3b25  83c580               add ebp, -0x80
// 005a3b28  896804               mov dword ptr [eax + 4], ebp
// 005a3b2b  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 005a3b2f  83c004               add eax, 4
// 005a3b32  41                   inc ecx
// 005a3b33  83c580               add ebp, -0x80
// 005a3b36  896804               mov dword ptr [eax + 4], ebp
// 005a3b39  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 005a3b3d  83c004               add eax, 4
// 005a3b40  41                   inc ecx
// 005a3b41  83c004               add eax, 4
// 005a3b44  83c580               add ebp, -0x80
// 005a3b47  8928                 mov dword ptr [eax], ebp
// 005a3b49  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 005a3b4d  41                   inc ecx
// 005a3b4e  83c004               add eax, 4
// 005a3b51  83c580               add ebp, -0x80
// 005a3b54  8928                 mov dword ptr [eax], ebp
// 005a3b56  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 005a3b5a  41                   inc ecx
// 005a3b5b  83c004               add eax, 4
// 005a3b5e  83c580               add ebp, -0x80
// 005a3b61  8928                 mov dword ptr [eax], ebp
// 005a3b63  0fb64901             movzx ecx, byte ptr [ecx + 1]
// 005a3b67  83c004               add eax, 4
// 005a3b6a  83c180               add ecx, -0x80
// 005a3b6d  8908                 mov dword ptr [eax], ecx
// 005a3b6f  83c004               add eax, 4
// 005a3b72  83c210               add edx, 0x10
// 005a3b75  83ee01               sub esi, 1
// 005a3b78  0f8532feffff         jne 0x5a39b0
// 005a3b7e  8d542428             lea edx, [esp + 0x28]
// 005a3b82  52                   push edx
// 005a3b83  ff542420             call dword ptr [esp + 0x20]
// 005a3b87  8b742418             mov esi, dword ptr [esp + 0x18]
// 005a3b8b  83c404               add esp, 4
// 005a3b8e  33ed                 xor ebp, ebp
// 005a3b90  8b4ef8               mov ecx, dword ptr [esi - 8]
// 005a3b93  8b44ac28             mov eax, dword ptr [esp + ebp*4 + 0x28]
// 005a3b97  8bd1                 mov edx, ecx
// 005a3b99  d1fa                 sar edx, 1
// 005a3b9b  85c0                 test eax, eax
// 005a3b9d  7d15                 jge 0x5a3bb4
// 005a3b9f  2bd0                 sub edx, eax
// 005a3ba1  3bd1                 cmp edx, ecx
// 005a3ba3  7c09                 jl 0x5a3bae
// 005a3ba5  8bc2                 mov eax, edx
// 005a3ba7  99                   cdq 
// 005a3ba8  f7f9                 idiv ecx
// 005a3baa  f7d8                 neg eax
// 005a3bac  eb13                 jmp 0x5a3bc1
// 005a3bae  33c0                 xor eax, eax
// 005a3bb0  f7d8                 neg eax
// 005a3bb2  eb0d                 jmp 0x5a3bc1
// 005a3bb4  03c2                 add eax, edx
// 005a3bb6  3bc1                 cmp eax, ecx
// 005a3bb8  7c05                 jl 0x5a3bbf
// 005a3bba  99                   cdq 
// 005a3bbb  f7f9                 idiv ecx
// 005a3bbd  eb02                 jmp 0x5a3bc1
// 005a3bbf  33c0                 xor eax, eax
// 005a3bc1  668947fc             mov word ptr [edi - 4], ax
// 005a3bc5  8b4efc               mov ecx, dword ptr [esi - 4]
// 005a3bc8  8b44ac2c             mov eax, dword ptr [esp + ebp*4 + 0x2c]
// 005a3bcc  8bd1                 mov edx, ecx
// 005a3bce  d1fa                 sar edx, 1
// 005a3bd0  85c0                 test eax, eax
// 005a3bd2  7d15                 jge 0x5a3be9
// 005a3bd4  2bd0                 sub edx, eax
// 005a3bd6  3bd1                 cmp edx, ecx
// 005a3bd8  7c09                 jl 0x5a3be3
// 005a3bda  8bc2                 mov eax, edx
// 005a3bdc  99                   cdq 
// 005a3bdd  f7f9                 idiv ecx
// 005a3bdf  f7d8                 neg eax
// 005a3be1  eb13                 jmp 0x5a3bf6
// 005a3be3  33c0                 xor eax, eax
// 005a3be5  f7d8                 neg eax
// 005a3be7  eb0d                 jmp 0x5a3bf6
// 005a3be9  03c2                 add eax, edx
// 005a3beb  3bc1                 cmp eax, ecx
// 005a3bed  7c05                 jl 0x5a3bf4
// 005a3bef  99                   cdq 
// 005a3bf0  f7f9                 idiv ecx
// 005a3bf2  eb02                 jmp 0x5a3bf6
// 005a3bf4  33c0                 xor eax, eax
// 005a3bf6  668947fe             mov word ptr [edi - 2], ax
// 005a3bfa  8b0e                 mov ecx, dword ptr [esi]
// 005a3bfc  8b442418             mov eax, dword ptr [esp + 0x18]
// 005a3c00  8b0406               mov eax, dword ptr [esi + eax]
// 005a3c03  8bd1                 mov edx, ecx
// 005a3c05  d1fa                 sar edx, 1
// 005a3c07  85c0                 test eax, eax
// 005a3c09  7d15                 jge 0x5a3c20
// 005a3c0b  2bd0                 sub edx, eax
// 005a3c0d  3bd1                 cmp edx, ecx
// 005a3c0f  7c09                 jl 0x5a3c1a
// 005a3c11  8bc2                 mov eax, edx
// 005a3c13  99                   cdq 
// 005a3c14  f7f9                 idiv ecx
// 005a3c16  f7d8                 neg eax
// 005a3c18  eb13                 jmp 0x5a3c2d
// 005a3c1a  33c0                 xor eax, eax
// 005a3c1c  f7d8                 neg eax
// 005a3c1e  eb0d                 jmp 0x5a3c2d
// 005a3c20  03c2                 add eax, edx
// 005a3c22  3bc1                 cmp eax, ecx
// 005a3c24  7c05                 jl 0x5a3c2b
// 005a3c26  99                   cdq 
// 005a3c27  f7f9                 idiv ecx
// 005a3c29  eb02                 jmp 0x5a3c2d
// 005a3c2b  33c0                 xor eax, eax
// 005a3c2d  668907               mov word ptr [edi], ax
// 005a3c30  8b4e04               mov ecx, dword ptr [esi + 4]
// 005a3c33  8b442420             mov eax, dword ptr [esp + 0x20]
// 005a3c37  8b0406               mov eax, dword ptr [esi + eax]
// 005a3c3a  8bd1                 mov edx, ecx
// 005a3c3c  d1fa                 sar edx, 1
// 005a3c3e  85c0                 test eax, eax
// 005a3c40  7d15                 jge 0x5a3c57
// 005a3c42  2bd0                 sub edx, eax
// 005a3c44  3bd1                 cmp edx, ecx
// 005a3c46  7c09                 jl 0x5a3c51
// 005a3c48  8bc2                 mov eax, edx
// 005a3c4a  99                   cdq 
// 005a3c4b  f7f9                 idiv ecx
// 005a3c4d  f7d8                 neg eax
// 005a3c4f  eb13                 jmp 0x5a3c64
// 005a3c51  33c0                 xor eax, eax
// 005a3c53  f7d8                 neg eax
// 005a3c55  eb0d                 jmp 0x5a3c64
// 005a3c57  03c2                 add eax, edx
// 005a3c59  3bc1                 cmp eax, ecx
// 005a3c5b  7c05                 jl 0x5a3c62
// 005a3c5d  99                   cdq 
// 005a3c5e  f7f9                 idiv ecx
// 005a3c60  eb02                 jmp 0x5a3c64
// 005a3c62  33c0                 xor eax, eax
// 005a3c64  66894702             mov word ptr [edi + 2], ax
// 005a3c68  83c504               add ebp, 4
// 005a3c6b  83c708               add edi, 8
// 005a3c6e  83c610               add esi, 0x10
// 005a3c71  83fd40               cmp ebp, 0x40
// 005a3c74  0f8c16ffffff         jl 0x5a3b90
// 005a3c7a  83c308               add ebx, 8
// 005a3c7d  836c241001           sub dword ptr [esp + 0x10], 1
// 005a3c82  0f8519fdffff         jne 0x5a39a1
// 005a3c88  5f                   pop edi
// 005a3c89  5e                   pop esi
// 005a3c8a  5d                   pop ebp
// 005a3c8b  5b                   pop ebx
// 005a3c8c  81c418010000         add esp, 0x118
// 005a3c92  c3                   ret 
// library jpeg-6b/jcdctmgr.c (function _forward_DCT)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcdctmgr.c
