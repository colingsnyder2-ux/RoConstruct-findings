// from server: 100% by auto
// roc 2010-06 00580b60  unit: seg_00580000  size: 572 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00580b60
//
// 00580b60  83ec2c               sub esp, 0x2c
// 00580b63  53                   push ebx
// 00580b64  56                   push esi
// 00580b65  57                   push edi
// 00580b66  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 00580b6a  83bffc00000000       cmp dword ptr [edi + 0xfc], 0
// 00580b71  8b9f98010000         mov ebx, dword ptr [edi + 0x198]
// 00580b77  8b8770010000         mov eax, dword ptr [edi + 0x170]
// 00580b7d  8b8f78010000         mov ecx, dword ptr [edi + 0x178]
// 00580b83  895c2418             mov dword ptr [esp + 0x18], ebx
// 00580b87  89442414             mov dword ptr [esp + 0x14], eax
// 00580b8b  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00580b8f  7418                 je 0x580ba9
// 00580b91  837b2800             cmp dword ptr [ebx + 0x28], 0
// 00580b95  7512                 jne 0x580ba9
// 00580b97  8bf7                 mov esi, edi
// 00580b99  e802fdffff           call 0x5808a0
// 00580b9e  84c0                 test al, al
// 00580ba0  7507                 jne 0x580ba9
// 00580ba2  5f                   pop edi
// 00580ba3  5e                   pop esi
// 00580ba4  5b                   pop ebx
// 00580ba5  83c42c               add esp, 0x2c
// 00580ba8  c3                   ret 
// 00580ba9  807b0800             cmp byte ptr [ebx + 8], 0
// 00580bad  55                   push ebp
// 00580bae  0f85db010000         jne 0x580d8f
// 00580bb4  8b4b14               mov ecx, dword ptr [ebx + 0x14]
// 00580bb7  894c2410             mov dword ptr [esp + 0x10], ecx
// 00580bbb  85c9                 test ecx, ecx
// 00580bbd  7611                 jbe 0x580bd0
// 00580bbf  5d                   pop ebp
// 00580bc0  5f                   pop edi
// 00580bc1  49                   dec ecx
// 00580bc2  ff4b28               dec dword ptr [ebx + 0x28]
// 00580bc5  5e                   pop esi
// 00580bc6  894b14               mov dword ptr [ebx + 0x14], ecx
// 00580bc9  b001                 mov al, 1
// 00580bcb  5b                   pop ebx
// 00580bcc  83c42c               add esp, 0x2c
// 00580bcf  c3                   ret 
// 00580bd0  8b4718               mov eax, dword ptr [edi + 0x18]
// 00580bd3  8baf6c010000         mov ebp, dword ptr [edi + 0x16c]
// 00580bd9  3b6c2418             cmp ebp, dword ptr [esp + 0x18]
// 00580bdd  897c2438             mov dword ptr [esp + 0x38], edi
// 00580be1  8b10                 mov edx, dword ptr [eax]
// 00580be3  89542428             mov dword ptr [esp + 0x28], edx
// 00580be7  8b542444             mov edx, dword ptr [esp + 0x44]
// 00580beb  8b4004               mov eax, dword ptr [eax + 4]
// 00580bee  8b12                 mov edx, dword ptr [edx]
// 00580bf0  8944242c             mov dword ptr [esp + 0x2c], eax
// 00580bf4  8b730c               mov esi, dword ptr [ebx + 0xc]
// 00580bf7  8b4310               mov eax, dword ptr [ebx + 0x10]
// 00580bfa  89542424             mov dword ptr [esp + 0x24], edx
// 00580bfe  8b533c               mov edx, dword ptr [ebx + 0x3c]
// 00580c01  89542414             mov dword ptr [esp + 0x14], edx
// 00580c05  0f8f68010000         jg 0x580d73
// 00580c0b  eb03                 jmp 0x580c10
// 00580c0d  8d4900               lea ecx, [ecx]
// 00580c10  83f808               cmp eax, 8
// 00580c13  7d31                 jge 0x580c46
// 00580c15  6a00                 push 0
// 00580c17  50                   push eax
// 00580c18  8d442430             lea eax, [esp + 0x30]
// 00580c1c  56                   push esi
// 00580c1d  50                   push eax
// 00580c1e  e83df4ffff           call 0x580060
// 00580c23  83c410               add esp, 0x10
// 00580c26  84c0                 test al, al
// 00580c28  0f8415010000         je 0x580d43
// 00580c2e  8b442434             mov eax, dword ptr [esp + 0x34]
// 00580c32  83f808               cmp eax, 8
// 00580c35  8b742430             mov esi, dword ptr [esp + 0x30]
// 00580c39  7d0b                 jge 0x580c46
// 00580c3b  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00580c3f  b901000000           mov ecx, 1
// 00580c44  eb2d                 jmp 0x580c73
// 00580c46  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00580c4a  8d48f8               lea ecx, [eax - 8]
// 00580c4d  8bd6                 mov edx, esi
// 00580c4f  d3fa                 sar edx, cl
// 00580c51  81e2ff000000         and edx, 0xff
// 00580c57  8b8c9790000000       mov ecx, dword ptr [edi + edx*4 + 0x90]
// 00580c5e  85c9                 test ecx, ecx
// 00580c60  740c                 je 0x580c6e
// 00580c62  0fb6bc3a90040000     movzx edi, byte ptr [edx + edi + 0x490]
// 00580c6a  2bc1                 sub eax, ecx
// 00580c6c  eb28                 jmp 0x580c96
// 00580c6e  b909000000           mov ecx, 9
// 00580c73  51                   push ecx
// 00580c74  57                   push edi
// 00580c75  50                   push eax
// 00580c76  8d4c2434             lea ecx, [esp + 0x34]
// 00580c7a  56                   push esi
// 00580c7b  51                   push ecx
// 00580c7c  e8fff4ffff           call 0x580180
// 00580c81  8bf8                 mov edi, eax
// 00580c83  83c414               add esp, 0x14
// 00580c86  85ff                 test edi, edi
// 00580c88  0f8cb5000000         jl 0x580d43
// 00580c8e  8b742430             mov esi, dword ptr [esp + 0x30]
// 00580c92  8b442434             mov eax, dword ptr [esp + 0x34]
// 00580c96  8bdf                 mov ebx, edi
// 00580c98  c1fb04               sar ebx, 4
// 00580c9b  83e70f               and edi, 0xf
// 00580c9e  7467                 je 0x580d07
// 00580ca0  03eb                 add ebp, ebx
// 00580ca2  3bc7                 cmp eax, edi
// 00580ca4  7d20                 jge 0x580cc6
// 00580ca6  57                   push edi
// 00580ca7  50                   push eax
// 00580ca8  8d542430             lea edx, [esp + 0x30]
// 00580cac  56                   push esi
// 00580cad  52                   push edx
// 00580cae  e8adf3ffff           call 0x580060
// 00580cb3  83c410               add esp, 0x10
// 00580cb6  84c0                 test al, al
// 00580cb8  0f8485000000         je 0x580d43
// 00580cbe  8b742430             mov esi, dword ptr [esp + 0x30]
// 00580cc2  8b442434             mov eax, dword ptr [esp + 0x34]
// 00580cc6  8bcf                 mov ecx, edi
// 00580cc8  2bc7                 sub eax, edi
// 00580cca  ba01000000           mov edx, 1
// 00580ccf  d3e2                 shl edx, cl
// 00580cd1  8bde                 mov ebx, esi
// 00580cd3  8bc8                 mov ecx, eax
// 00580cd5  d3fb                 sar ebx, cl
// 00580cd7  4a                   dec edx
// 00580cd8  23d3                 and edx, ebx
// 00580cda  3b14bdd086a200       cmp edx, dword ptr [edi*4 + 0xa286d0]
// 00580ce1  7d0b                 jge 0x580cee
// 00580ce3  8b3cbd1087a200       mov edi, dword ptr [edi*4 + 0xa28710]
// 00580cea  03fa                 add edi, edx
// 00580cec  eb02                 jmp 0x580cf0
// 00580cee  8bfa                 mov edi, edx
// 00580cf0  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00580cf4  8b542424             mov edx, dword ptr [esp + 0x24]
// 00580cf8  d3e7                 shl edi, cl
// 00580cfa  8b0cadf834a200       mov ecx, dword ptr [ebp*4 + 0xa234f8]
// 00580d01  66893c4a             mov word ptr [edx + ecx*2], di
// 00580d05  eb08                 jmp 0x580d0f
// 00580d07  83fb0f               cmp ebx, 0xf
// 00580d0a  7510                 jne 0x580d1c
// 00580d0c  83c50f               add ebp, 0xf
// 00580d0f  45                   inc ebp
// 00580d10  3b6c2418             cmp ebp, dword ptr [esp + 0x18]
// 00580d14  0f8ef6feffff         jle 0x580c10
// 00580d1a  eb4b                 jmp 0x580d67
// 00580d1c  bf01000000           mov edi, 1
// 00580d21  8bcb                 mov ecx, ebx
// 00580d23  d3e7                 shl edi, cl
// 00580d25  8bef                 mov ebp, edi
// 00580d27  85db                 test ebx, ebx
// 00580d29  7437                 je 0x580d62
// 00580d2b  3bc3                 cmp eax, ebx
// 00580d2d  7d26                 jge 0x580d55
// 00580d2f  53                   push ebx
// 00580d30  50                   push eax
// 00580d31  8d442430             lea eax, [esp + 0x30]
// 00580d35  56                   push esi
// 00580d36  50                   push eax
// 00580d37  e824f3ffff           call 0x580060
// 00580d3c  83c410               add esp, 0x10
// 00580d3f  84c0                 test al, al
// 00580d41  750a                 jne 0x580d4d
// 00580d43  5d                   pop ebp
// 00580d44  5f                   pop edi
// 00580d45  5e                   pop esi
// 00580d46  32c0                 xor al, al
// 00580d48  5b                   pop ebx
// 00580d49  83c42c               add esp, 0x2c
// 00580d4c  c3                   ret 
// 00580d4d  8b742430             mov esi, dword ptr [esp + 0x30]
// 00580d51  8b442434             mov eax, dword ptr [esp + 0x34]
// 00580d55  2bc3                 sub eax, ebx
// 00580d57  8bd6                 mov edx, esi
// 00580d59  8bc8                 mov ecx, eax
// 00580d5b  d3fa                 sar edx, cl
// 00580d5d  4f                   dec edi
// 00580d5e  23d7                 and edx, edi
// 00580d60  03ea                 add ebp, edx
// 00580d62  4d                   dec ebp
// 00580d63  896c2410             mov dword ptr [esp + 0x10], ebp
// 00580d67  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00580d6b  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 00580d6f  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00580d73  8b5718               mov edx, dword ptr [edi + 0x18]
// 00580d76  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00580d7a  892a                 mov dword ptr [edx], ebp
// 00580d7c  8b5718               mov edx, dword ptr [edi + 0x18]
// 00580d7f  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00580d83  897a04               mov dword ptr [edx + 4], edi
// 00580d86  89730c               mov dword ptr [ebx + 0xc], esi
// 00580d89  894310               mov dword ptr [ebx + 0x10], eax
// 00580d8c  894b14               mov dword ptr [ebx + 0x14], ecx
// 00580d8f  ff4b28               dec dword ptr [ebx + 0x28]
// 00580d92  5d                   pop ebp
// 00580d93  5f                   pop edi
// 00580d94  5e                   pop esi
// 00580d95  b001                 mov al, 1
// 00580d97  5b                   pop ebx
// 00580d98  83c42c               add esp, 0x2c
// 00580d9b  c3                   ret 
// library jpeg-6b/jdphuff.c (function _decode_mcu_AC_first)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdphuff.c
