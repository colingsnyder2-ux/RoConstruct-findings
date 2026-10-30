// from server: 100% by auto
// roc 2011-06 00576e10  unit: seg_00570000  size: 572 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00576e10
//
// 00576e10  83ec2c               sub esp, 0x2c
// 00576e13  53                   push ebx
// 00576e14  56                   push esi
// 00576e15  57                   push edi
// 00576e16  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 00576e1a  83bffc00000000       cmp dword ptr [edi + 0xfc], 0
// 00576e21  8b9f98010000         mov ebx, dword ptr [edi + 0x198]
// 00576e27  8b8770010000         mov eax, dword ptr [edi + 0x170]
// 00576e2d  8b8f78010000         mov ecx, dword ptr [edi + 0x178]
// 00576e33  895c2418             mov dword ptr [esp + 0x18], ebx
// 00576e37  89442414             mov dword ptr [esp + 0x14], eax
// 00576e3b  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00576e3f  7418                 je 0x576e59
// 00576e41  837b2800             cmp dword ptr [ebx + 0x28], 0
// 00576e45  7512                 jne 0x576e59
// 00576e47  8bf7                 mov esi, edi
// 00576e49  e802fdffff           call 0x576b50
// 00576e4e  84c0                 test al, al
// 00576e50  7507                 jne 0x576e59
// 00576e52  5f                   pop edi
// 00576e53  5e                   pop esi
// 00576e54  5b                   pop ebx
// 00576e55  83c42c               add esp, 0x2c
// 00576e58  c3                   ret 
// 00576e59  807b0800             cmp byte ptr [ebx + 8], 0
// 00576e5d  55                   push ebp
// 00576e5e  0f85db010000         jne 0x57703f
// 00576e64  8b4b14               mov ecx, dword ptr [ebx + 0x14]
// 00576e67  894c2410             mov dword ptr [esp + 0x10], ecx
// 00576e6b  85c9                 test ecx, ecx
// 00576e6d  7611                 jbe 0x576e80
// 00576e6f  5d                   pop ebp
// 00576e70  5f                   pop edi
// 00576e71  49                   dec ecx
// 00576e72  ff4b28               dec dword ptr [ebx + 0x28]
// 00576e75  5e                   pop esi
// 00576e76  894b14               mov dword ptr [ebx + 0x14], ecx
// 00576e79  b001                 mov al, 1
// 00576e7b  5b                   pop ebx
// 00576e7c  83c42c               add esp, 0x2c
// 00576e7f  c3                   ret 
// 00576e80  8b4718               mov eax, dword ptr [edi + 0x18]
// 00576e83  8baf6c010000         mov ebp, dword ptr [edi + 0x16c]
// 00576e89  3b6c2418             cmp ebp, dword ptr [esp + 0x18]
// 00576e8d  897c2438             mov dword ptr [esp + 0x38], edi
// 00576e91  8b10                 mov edx, dword ptr [eax]
// 00576e93  89542428             mov dword ptr [esp + 0x28], edx
// 00576e97  8b542444             mov edx, dword ptr [esp + 0x44]
// 00576e9b  8b4004               mov eax, dword ptr [eax + 4]
// 00576e9e  8b12                 mov edx, dword ptr [edx]
// 00576ea0  8944242c             mov dword ptr [esp + 0x2c], eax
// 00576ea4  8b730c               mov esi, dword ptr [ebx + 0xc]
// 00576ea7  8b4310               mov eax, dword ptr [ebx + 0x10]
// 00576eaa  89542424             mov dword ptr [esp + 0x24], edx
// 00576eae  8b533c               mov edx, dword ptr [ebx + 0x3c]
// 00576eb1  89542414             mov dword ptr [esp + 0x14], edx
// 00576eb5  0f8f68010000         jg 0x577023
// 00576ebb  eb03                 jmp 0x576ec0
// 00576ebd  8d4900               lea ecx, [ecx]
// 00576ec0  83f808               cmp eax, 8
// 00576ec3  7d31                 jge 0x576ef6
// 00576ec5  6a00                 push 0
// 00576ec7  50                   push eax
// 00576ec8  8d442430             lea eax, [esp + 0x30]
// 00576ecc  56                   push esi
// 00576ecd  50                   push eax
// 00576ece  e83df4ffff           call 0x576310
// 00576ed3  83c410               add esp, 0x10
// 00576ed6  84c0                 test al, al
// 00576ed8  0f8415010000         je 0x576ff3
// 00576ede  8b442434             mov eax, dword ptr [esp + 0x34]
// 00576ee2  83f808               cmp eax, 8
// 00576ee5  8b742430             mov esi, dword ptr [esp + 0x30]
// 00576ee9  7d0b                 jge 0x576ef6
// 00576eeb  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00576eef  b901000000           mov ecx, 1
// 00576ef4  eb2d                 jmp 0x576f23
// 00576ef6  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00576efa  8d48f8               lea ecx, [eax - 8]
// 00576efd  8bd6                 mov edx, esi
// 00576eff  d3fa                 sar edx, cl
// 00576f01  81e2ff000000         and edx, 0xff
// 00576f07  8b8c9790000000       mov ecx, dword ptr [edi + edx*4 + 0x90]
// 00576f0e  85c9                 test ecx, ecx
// 00576f10  740c                 je 0x576f1e
// 00576f12  0fb6bc3a90040000     movzx edi, byte ptr [edx + edi + 0x490]
// 00576f1a  2bc1                 sub eax, ecx
// 00576f1c  eb28                 jmp 0x576f46
// 00576f1e  b909000000           mov ecx, 9
// 00576f23  51                   push ecx
// 00576f24  57                   push edi
// 00576f25  50                   push eax
// 00576f26  8d4c2434             lea ecx, [esp + 0x34]
// 00576f2a  56                   push esi
// 00576f2b  51                   push ecx
// 00576f2c  e8fff4ffff           call 0x576430
// 00576f31  8bf8                 mov edi, eax
// 00576f33  83c414               add esp, 0x14
// 00576f36  85ff                 test edi, edi
// 00576f38  0f8cb5000000         jl 0x576ff3
// 00576f3e  8b742430             mov esi, dword ptr [esp + 0x30]
// 00576f42  8b442434             mov eax, dword ptr [esp + 0x34]
// 00576f46  8bdf                 mov ebx, edi
// 00576f48  c1fb04               sar ebx, 4
// 00576f4b  83e70f               and edi, 0xf
// 00576f4e  7467                 je 0x576fb7
// 00576f50  03eb                 add ebp, ebx
// 00576f52  3bc7                 cmp eax, edi
// 00576f54  7d20                 jge 0x576f76
// 00576f56  57                   push edi
// 00576f57  50                   push eax
// 00576f58  8d542430             lea edx, [esp + 0x30]
// 00576f5c  56                   push esi
// 00576f5d  52                   push edx
// 00576f5e  e8adf3ffff           call 0x576310
// 00576f63  83c410               add esp, 0x10
// 00576f66  84c0                 test al, al
// 00576f68  0f8485000000         je 0x576ff3
// 00576f6e  8b742430             mov esi, dword ptr [esp + 0x30]
// 00576f72  8b442434             mov eax, dword ptr [esp + 0x34]
// 00576f76  8bcf                 mov ecx, edi
// 00576f78  2bc7                 sub eax, edi
// 00576f7a  ba01000000           mov edx, 1
// 00576f7f  d3e2                 shl edx, cl
// 00576f81  8bde                 mov ebx, esi
// 00576f83  8bc8                 mov ecx, eax
// 00576f85  d3fb                 sar ebx, cl
// 00576f87  4a                   dec edx
// 00576f88  23d3                 and edx, ebx
// 00576f8a  3b14bd0880a800       cmp edx, dword ptr [edi*4 + 0xa88008]
// 00576f91  7d0b                 jge 0x576f9e
// 00576f93  8b3cbd4880a800       mov edi, dword ptr [edi*4 + 0xa88048]
// 00576f9a  03fa                 add edi, edx
// 00576f9c  eb02                 jmp 0x576fa0
// 00576f9e  8bfa                 mov edi, edx
// 00576fa0  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00576fa4  8b542424             mov edx, dword ptr [esp + 0x24]
// 00576fa8  d3e7                 shl edi, cl
// 00576faa  8b0cadf058a800       mov ecx, dword ptr [ebp*4 + 0xa858f0]
// 00576fb1  66893c4a             mov word ptr [edx + ecx*2], di
// 00576fb5  eb08                 jmp 0x576fbf
// 00576fb7  83fb0f               cmp ebx, 0xf
// 00576fba  7510                 jne 0x576fcc
// 00576fbc  83c50f               add ebp, 0xf
// 00576fbf  45                   inc ebp
// 00576fc0  3b6c2418             cmp ebp, dword ptr [esp + 0x18]
// 00576fc4  0f8ef6feffff         jle 0x576ec0
// 00576fca  eb4b                 jmp 0x577017
// 00576fcc  bf01000000           mov edi, 1
// 00576fd1  8bcb                 mov ecx, ebx
// 00576fd3  d3e7                 shl edi, cl
// 00576fd5  8bef                 mov ebp, edi
// 00576fd7  85db                 test ebx, ebx
// 00576fd9  7437                 je 0x577012
// 00576fdb  3bc3                 cmp eax, ebx
// 00576fdd  7d26                 jge 0x577005
// 00576fdf  53                   push ebx
// 00576fe0  50                   push eax
// 00576fe1  8d442430             lea eax, [esp + 0x30]
// 00576fe5  56                   push esi
// 00576fe6  50                   push eax
// 00576fe7  e824f3ffff           call 0x576310
// 00576fec  83c410               add esp, 0x10
// 00576fef  84c0                 test al, al
// 00576ff1  750a                 jne 0x576ffd
// 00576ff3  5d                   pop ebp
// 00576ff4  5f                   pop edi
// 00576ff5  5e                   pop esi
// 00576ff6  32c0                 xor al, al
// 00576ff8  5b                   pop ebx
// 00576ff9  83c42c               add esp, 0x2c
// 00576ffc  c3                   ret 
// 00576ffd  8b742430             mov esi, dword ptr [esp + 0x30]
// 00577001  8b442434             mov eax, dword ptr [esp + 0x34]
// 00577005  2bc3                 sub eax, ebx
// 00577007  8bd6                 mov edx, esi
// 00577009  8bc8                 mov ecx, eax
// 0057700b  d3fa                 sar edx, cl
// 0057700d  4f                   dec edi
// 0057700e  23d7                 and edx, edi
// 00577010  03ea                 add ebp, edx
// 00577012  4d                   dec ebp
// 00577013  896c2410             mov dword ptr [esp + 0x10], ebp
// 00577017  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0057701b  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 0057701f  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00577023  8b5718               mov edx, dword ptr [edi + 0x18]
// 00577026  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0057702a  892a                 mov dword ptr [edx], ebp
// 0057702c  8b5718               mov edx, dword ptr [edi + 0x18]
// 0057702f  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00577033  897a04               mov dword ptr [edx + 4], edi
// 00577036  89730c               mov dword ptr [ebx + 0xc], esi
// 00577039  894310               mov dword ptr [ebx + 0x10], eax
// 0057703c  894b14               mov dword ptr [ebx + 0x14], ecx
// 0057703f  ff4b28               dec dword ptr [ebx + 0x28]
// 00577042  5d                   pop ebp
// 00577043  5f                   pop edi
// 00577044  5e                   pop esi
// 00577045  b001                 mov al, 1
// 00577047  5b                   pop ebx
// 00577048  83c42c               add esp, 0x2c
// 0057704b  c3                   ret 
// library jpeg-6b/jdphuff.c (function _decode_mcu_AC_first)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdphuff.c
