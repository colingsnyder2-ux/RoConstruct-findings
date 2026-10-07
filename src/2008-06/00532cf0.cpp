// roc 2008-06 00532cf0  unit: seg_00530000  size: 572 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00532cf0
//
// 00532cf0  83ec2c               sub esp, 0x2c
// 00532cf3  53                   push ebx
// 00532cf4  56                   push esi
// 00532cf5  57                   push edi
// 00532cf6  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 00532cfa  83bffc00000000       cmp dword ptr [edi + 0xfc], 0
// 00532d01  8b9f98010000         mov ebx, dword ptr [edi + 0x198]
// 00532d07  8b8770010000         mov eax, dword ptr [edi + 0x170]
// 00532d0d  8b8f78010000         mov ecx, dword ptr [edi + 0x178]
// 00532d13  895c2418             mov dword ptr [esp + 0x18], ebx
// 00532d17  89442414             mov dword ptr [esp + 0x14], eax
// 00532d1b  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00532d1f  7418                 je 0x532d39
// 00532d21  837b2800             cmp dword ptr [ebx + 0x28], 0
// 00532d25  7512                 jne 0x532d39
// 00532d27  8bf7                 mov esi, edi
// 00532d29  e802fdffff           call 0x532a30
// 00532d2e  84c0                 test al, al
// 00532d30  7507                 jne 0x532d39
// 00532d32  5f                   pop edi
// 00532d33  5e                   pop esi
// 00532d34  5b                   pop ebx
// 00532d35  83c42c               add esp, 0x2c
// 00532d38  c3                   ret 
// 00532d39  807b0800             cmp byte ptr [ebx + 8], 0
// 00532d3d  55                   push ebp
// 00532d3e  0f85db010000         jne 0x532f1f
// 00532d44  8b4b14               mov ecx, dword ptr [ebx + 0x14]
// 00532d47  894c2410             mov dword ptr [esp + 0x10], ecx
// 00532d4b  85c9                 test ecx, ecx
// 00532d4d  7611                 jbe 0x532d60
// 00532d4f  5d                   pop ebp
// 00532d50  5f                   pop edi
// 00532d51  49                   dec ecx
// 00532d52  ff4b28               dec dword ptr [ebx + 0x28]
// 00532d55  5e                   pop esi
// 00532d56  894b14               mov dword ptr [ebx + 0x14], ecx
// 00532d59  b001                 mov al, 1
// 00532d5b  5b                   pop ebx
// 00532d5c  83c42c               add esp, 0x2c
// 00532d5f  c3                   ret 
// 00532d60  8b4718               mov eax, dword ptr [edi + 0x18]
// 00532d63  8baf6c010000         mov ebp, dword ptr [edi + 0x16c]
// 00532d69  3b6c2418             cmp ebp, dword ptr [esp + 0x18]
// 00532d6d  897c2438             mov dword ptr [esp + 0x38], edi
// 00532d71  8b10                 mov edx, dword ptr [eax]
// 00532d73  89542428             mov dword ptr [esp + 0x28], edx
// 00532d77  8b542444             mov edx, dword ptr [esp + 0x44]
// 00532d7b  8b4004               mov eax, dword ptr [eax + 4]
// 00532d7e  8b12                 mov edx, dword ptr [edx]
// 00532d80  8944242c             mov dword ptr [esp + 0x2c], eax
// 00532d84  8b730c               mov esi, dword ptr [ebx + 0xc]
// 00532d87  8b4310               mov eax, dword ptr [ebx + 0x10]
// 00532d8a  89542424             mov dword ptr [esp + 0x24], edx
// 00532d8e  8b533c               mov edx, dword ptr [ebx + 0x3c]
// 00532d91  89542414             mov dword ptr [esp + 0x14], edx
// 00532d95  0f8f68010000         jg 0x532f03
// 00532d9b  eb03                 jmp 0x532da0
// 00532d9d  8d4900               lea ecx, [ecx]
// 00532da0  83f808               cmp eax, 8
// 00532da3  7d31                 jge 0x532dd6
// 00532da5  6a00                 push 0
// 00532da7  50                   push eax
// 00532da8  8d442430             lea eax, [esp + 0x30]
// 00532dac  56                   push esi
// 00532dad  50                   push eax
// 00532dae  e83df4ffff           call 0x5321f0
// 00532db3  83c410               add esp, 0x10
// 00532db6  84c0                 test al, al
// 00532db8  0f8415010000         je 0x532ed3
// 00532dbe  8b442434             mov eax, dword ptr [esp + 0x34]
// 00532dc2  83f808               cmp eax, 8
// 00532dc5  8b742430             mov esi, dword ptr [esp + 0x30]
// 00532dc9  7d0b                 jge 0x532dd6
// 00532dcb  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00532dcf  b901000000           mov ecx, 1
// 00532dd4  eb2d                 jmp 0x532e03
// 00532dd6  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00532dda  8d48f8               lea ecx, [eax - 8]
// 00532ddd  8bd6                 mov edx, esi
// 00532ddf  d3fa                 sar edx, cl
// 00532de1  81e2ff000000         and edx, 0xff
// 00532de7  8b8c9790000000       mov ecx, dword ptr [edi + edx*4 + 0x90]
// 00532dee  85c9                 test ecx, ecx
// 00532df0  740c                 je 0x532dfe
// 00532df2  0fb6bc3a90040000     movzx edi, byte ptr [edx + edi + 0x490]
// 00532dfa  2bc1                 sub eax, ecx
// 00532dfc  eb28                 jmp 0x532e26
// 00532dfe  b909000000           mov ecx, 9
// 00532e03  51                   push ecx
// 00532e04  57                   push edi
// 00532e05  50                   push eax
// 00532e06  8d4c2434             lea ecx, [esp + 0x34]
// 00532e0a  56                   push esi
// 00532e0b  51                   push ecx
// 00532e0c  e8fff4ffff           call 0x532310
// 00532e11  8bf8                 mov edi, eax
// 00532e13  83c414               add esp, 0x14
// 00532e16  85ff                 test edi, edi
// 00532e18  0f8cb5000000         jl 0x532ed3
// 00532e1e  8b742430             mov esi, dword ptr [esp + 0x30]
// 00532e22  8b442434             mov eax, dword ptr [esp + 0x34]
// 00532e26  8bdf                 mov ebx, edi
// 00532e28  c1fb04               sar ebx, 4
// 00532e2b  83e70f               and edi, 0xf
// 00532e2e  7467                 je 0x532e97
// 00532e30  03eb                 add ebp, ebx
// 00532e32  3bc7                 cmp eax, edi
// 00532e34  7d20                 jge 0x532e56
// 00532e36  57                   push edi
// 00532e37  50                   push eax
// 00532e38  8d542430             lea edx, [esp + 0x30]
// 00532e3c  56                   push esi
// 00532e3d  52                   push edx
// 00532e3e  e8adf3ffff           call 0x5321f0
// 00532e43  83c410               add esp, 0x10
// 00532e46  84c0                 test al, al
// 00532e48  0f8485000000         je 0x532ed3
// 00532e4e  8b742430             mov esi, dword ptr [esp + 0x30]
// 00532e52  8b442434             mov eax, dword ptr [esp + 0x34]
// 00532e56  8bcf                 mov ecx, edi
// 00532e58  2bc7                 sub eax, edi
// 00532e5a  ba01000000           mov edx, 1
// 00532e5f  d3e2                 shl edx, cl
// 00532e61  8bde                 mov ebx, esi
// 00532e63  8bc8                 mov ecx, eax
// 00532e65  d3fb                 sar ebx, cl
// 00532e67  4a                   dec edx
// 00532e68  23d3                 and edx, ebx
// 00532e6a  3b14bdc8ca8200       cmp edx, dword ptr [edi*4 + 0x82cac8]
// 00532e71  7d0b                 jge 0x532e7e
// 00532e73  8b3cbd08cb8200       mov edi, dword ptr [edi*4 + 0x82cb08]
// 00532e7a  03fa                 add edi, edx
// 00532e7c  eb02                 jmp 0x532e80
// 00532e7e  8bfa                 mov edi, edx
// 00532e80  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00532e84  8b542424             mov edx, dword ptr [esp + 0x24]
// 00532e88  d3e7                 shl edi, cl
// 00532e8a  8b0cadb0b18200       mov ecx, dword ptr [ebp*4 + 0x82b1b0]
// 00532e91  66893c4a             mov word ptr [edx + ecx*2], di
// 00532e95  eb08                 jmp 0x532e9f
// 00532e97  83fb0f               cmp ebx, 0xf
// 00532e9a  7510                 jne 0x532eac
// 00532e9c  83c50f               add ebp, 0xf
// 00532e9f  45                   inc ebp
// 00532ea0  3b6c2418             cmp ebp, dword ptr [esp + 0x18]
// 00532ea4  0f8ef6feffff         jle 0x532da0
// 00532eaa  eb4b                 jmp 0x532ef7
// 00532eac  bf01000000           mov edi, 1
// 00532eb1  8bcb                 mov ecx, ebx
// 00532eb3  d3e7                 shl edi, cl
// 00532eb5  8bef                 mov ebp, edi
// 00532eb7  85db                 test ebx, ebx
// 00532eb9  7437                 je 0x532ef2
// 00532ebb  3bc3                 cmp eax, ebx
// 00532ebd  7d26                 jge 0x532ee5
// 00532ebf  53                   push ebx
// 00532ec0  50                   push eax
// 00532ec1  8d442430             lea eax, [esp + 0x30]
// 00532ec5  56                   push esi
// 00532ec6  50                   push eax
// 00532ec7  e824f3ffff           call 0x5321f0
// 00532ecc  83c410               add esp, 0x10
// 00532ecf  84c0                 test al, al
// 00532ed1  750a                 jne 0x532edd
// 00532ed3  5d                   pop ebp
// 00532ed4  5f                   pop edi
// 00532ed5  5e                   pop esi
// 00532ed6  32c0                 xor al, al
// 00532ed8  5b                   pop ebx
// 00532ed9  83c42c               add esp, 0x2c
// 00532edc  c3                   ret 
// 00532edd  8b742430             mov esi, dword ptr [esp + 0x30]
// 00532ee1  8b442434             mov eax, dword ptr [esp + 0x34]
// 00532ee5  2bc3                 sub eax, ebx
// 00532ee7  8bd6                 mov edx, esi
// 00532ee9  8bc8                 mov ecx, eax
// 00532eeb  d3fa                 sar edx, cl
// 00532eed  4f                   dec edi
// 00532eee  23d7                 and edx, edi
// 00532ef0  03ea                 add ebp, edx
// 00532ef2  4d                   dec ebp
// 00532ef3  896c2410             mov dword ptr [esp + 0x10], ebp
// 00532ef7  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00532efb  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 00532eff  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00532f03  8b5718               mov edx, dword ptr [edi + 0x18]
// 00532f06  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00532f0a  892a                 mov dword ptr [edx], ebp
// 00532f0c  8b5718               mov edx, dword ptr [edi + 0x18]
// 00532f0f  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00532f13  897a04               mov dword ptr [edx + 4], edi
// 00532f16  89730c               mov dword ptr [ebx + 0xc], esi
// 00532f19  894310               mov dword ptr [ebx + 0x10], eax
// 00532f1c  894b14               mov dword ptr [ebx + 0x14], ecx
// 00532f1f  ff4b28               dec dword ptr [ebx + 0x28]
// 00532f22  5d                   pop ebp
// 00532f23  5f                   pop edi
// 00532f24  5e                   pop esi
// 00532f25  b001                 mov al, 1
// 00532f27  5b                   pop ebx
// 00532f28  83c42c               add esp, 0x2c
// 00532f2b  c3                   ret 
// library jpeg-6b/jdphuff.c (function _decode_mcu_AC_first)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdphuff.c
