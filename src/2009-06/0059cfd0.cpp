// from server: 100% by auto
// roc 2009-06 0059cfd0  unit: seg_00590000  size: 572 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0059cfd0
//
// 0059cfd0  83ec2c               sub esp, 0x2c
// 0059cfd3  53                   push ebx
// 0059cfd4  56                   push esi
// 0059cfd5  57                   push edi
// 0059cfd6  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 0059cfda  83bffc00000000       cmp dword ptr [edi + 0xfc], 0
// 0059cfe1  8b9f98010000         mov ebx, dword ptr [edi + 0x198]
// 0059cfe7  8b8770010000         mov eax, dword ptr [edi + 0x170]
// 0059cfed  8b8f78010000         mov ecx, dword ptr [edi + 0x178]
// 0059cff3  895c2418             mov dword ptr [esp + 0x18], ebx
// 0059cff7  89442414             mov dword ptr [esp + 0x14], eax
// 0059cffb  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0059cfff  7418                 je 0x59d019
// 0059d001  837b2800             cmp dword ptr [ebx + 0x28], 0
// 0059d005  7512                 jne 0x59d019
// 0059d007  8bf7                 mov esi, edi
// 0059d009  e802fdffff           call 0x59cd10
// 0059d00e  84c0                 test al, al
// 0059d010  7507                 jne 0x59d019
// 0059d012  5f                   pop edi
// 0059d013  5e                   pop esi
// 0059d014  5b                   pop ebx
// 0059d015  83c42c               add esp, 0x2c
// 0059d018  c3                   ret 
// 0059d019  807b0800             cmp byte ptr [ebx + 8], 0
// 0059d01d  55                   push ebp
// 0059d01e  0f85db010000         jne 0x59d1ff
// 0059d024  8b4b14               mov ecx, dword ptr [ebx + 0x14]
// 0059d027  894c2410             mov dword ptr [esp + 0x10], ecx
// 0059d02b  85c9                 test ecx, ecx
// 0059d02d  7611                 jbe 0x59d040
// 0059d02f  5d                   pop ebp
// 0059d030  5f                   pop edi
// 0059d031  49                   dec ecx
// 0059d032  ff4b28               dec dword ptr [ebx + 0x28]
// 0059d035  5e                   pop esi
// 0059d036  894b14               mov dword ptr [ebx + 0x14], ecx
// 0059d039  b001                 mov al, 1
// 0059d03b  5b                   pop ebx
// 0059d03c  83c42c               add esp, 0x2c
// 0059d03f  c3                   ret 
// 0059d040  8b4718               mov eax, dword ptr [edi + 0x18]
// 0059d043  8baf6c010000         mov ebp, dword ptr [edi + 0x16c]
// 0059d049  3b6c2418             cmp ebp, dword ptr [esp + 0x18]
// 0059d04d  897c2438             mov dword ptr [esp + 0x38], edi
// 0059d051  8b10                 mov edx, dword ptr [eax]
// 0059d053  89542428             mov dword ptr [esp + 0x28], edx
// 0059d057  8b542444             mov edx, dword ptr [esp + 0x44]
// 0059d05b  8b4004               mov eax, dword ptr [eax + 4]
// 0059d05e  8b12                 mov edx, dword ptr [edx]
// 0059d060  8944242c             mov dword ptr [esp + 0x2c], eax
// 0059d064  8b730c               mov esi, dword ptr [ebx + 0xc]
// 0059d067  8b4310               mov eax, dword ptr [ebx + 0x10]
// 0059d06a  89542424             mov dword ptr [esp + 0x24], edx
// 0059d06e  8b533c               mov edx, dword ptr [ebx + 0x3c]
// 0059d071  89542414             mov dword ptr [esp + 0x14], edx
// 0059d075  0f8f68010000         jg 0x59d1e3
// 0059d07b  eb03                 jmp 0x59d080
// 0059d07d  8d4900               lea ecx, [ecx]
// 0059d080  83f808               cmp eax, 8
// 0059d083  7d31                 jge 0x59d0b6
// 0059d085  6a00                 push 0
// 0059d087  50                   push eax
// 0059d088  8d442430             lea eax, [esp + 0x30]
// 0059d08c  56                   push esi
// 0059d08d  50                   push eax
// 0059d08e  e83df4ffff           call 0x59c4d0
// 0059d093  83c410               add esp, 0x10
// 0059d096  84c0                 test al, al
// 0059d098  0f8415010000         je 0x59d1b3
// 0059d09e  8b442434             mov eax, dword ptr [esp + 0x34]
// 0059d0a2  83f808               cmp eax, 8
// 0059d0a5  8b742430             mov esi, dword ptr [esp + 0x30]
// 0059d0a9  7d0b                 jge 0x59d0b6
// 0059d0ab  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0059d0af  b901000000           mov ecx, 1
// 0059d0b4  eb2d                 jmp 0x59d0e3
// 0059d0b6  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0059d0ba  8d48f8               lea ecx, [eax - 8]
// 0059d0bd  8bd6                 mov edx, esi
// 0059d0bf  d3fa                 sar edx, cl
// 0059d0c1  81e2ff000000         and edx, 0xff
// 0059d0c7  8b8c9790000000       mov ecx, dword ptr [edi + edx*4 + 0x90]
// 0059d0ce  85c9                 test ecx, ecx
// 0059d0d0  740c                 je 0x59d0de
// 0059d0d2  0fb6bc3a90040000     movzx edi, byte ptr [edx + edi + 0x490]
// 0059d0da  2bc1                 sub eax, ecx
// 0059d0dc  eb28                 jmp 0x59d106
// 0059d0de  b909000000           mov ecx, 9
// 0059d0e3  51                   push ecx
// 0059d0e4  57                   push edi
// 0059d0e5  50                   push eax
// 0059d0e6  8d4c2434             lea ecx, [esp + 0x34]
// 0059d0ea  56                   push esi
// 0059d0eb  51                   push ecx
// 0059d0ec  e8fff4ffff           call 0x59c5f0
// 0059d0f1  8bf8                 mov edi, eax
// 0059d0f3  83c414               add esp, 0x14
// 0059d0f6  85ff                 test edi, edi
// 0059d0f8  0f8cb5000000         jl 0x59d1b3
// 0059d0fe  8b742430             mov esi, dword ptr [esp + 0x30]
// 0059d102  8b442434             mov eax, dword ptr [esp + 0x34]
// 0059d106  8bdf                 mov ebx, edi
// 0059d108  c1fb04               sar ebx, 4
// 0059d10b  83e70f               and edi, 0xf
// 0059d10e  7467                 je 0x59d177
// 0059d110  03eb                 add ebp, ebx
// 0059d112  3bc7                 cmp eax, edi
// 0059d114  7d20                 jge 0x59d136
// 0059d116  57                   push edi
// 0059d117  50                   push eax
// 0059d118  8d542430             lea edx, [esp + 0x30]
// 0059d11c  56                   push esi
// 0059d11d  52                   push edx
// 0059d11e  e8adf3ffff           call 0x59c4d0
// 0059d123  83c410               add esp, 0x10
// 0059d126  84c0                 test al, al
// 0059d128  0f8485000000         je 0x59d1b3
// 0059d12e  8b742430             mov esi, dword ptr [esp + 0x30]
// 0059d132  8b442434             mov eax, dword ptr [esp + 0x34]
// 0059d136  8bcf                 mov ecx, edi
// 0059d138  2bc7                 sub eax, edi
// 0059d13a  ba01000000           mov edx, 1
// 0059d13f  d3e2                 shl edx, cl
// 0059d141  8bde                 mov ebx, esi
// 0059d143  8bc8                 mov ecx, eax
// 0059d145  d3fb                 sar ebx, cl
// 0059d147  4a                   dec edx
// 0059d148  23d3                 and edx, ebx
// 0059d14a  3b14bdc03a8d00       cmp edx, dword ptr [edi*4 + 0x8d3ac0]
// 0059d151  7d0b                 jge 0x59d15e
// 0059d153  8b3cbd003b8d00       mov edi, dword ptr [edi*4 + 0x8d3b00]
// 0059d15a  03fa                 add edi, edx
// 0059d15c  eb02                 jmp 0x59d160
// 0059d15e  8bfa                 mov edi, edx
// 0059d160  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0059d164  8b542424             mov edx, dword ptr [esp + 0x24]
// 0059d168  d3e7                 shl edi, cl
// 0059d16a  8b0cadf8e88c00       mov ecx, dword ptr [ebp*4 + 0x8ce8f8]
// 0059d171  66893c4a             mov word ptr [edx + ecx*2], di
// 0059d175  eb08                 jmp 0x59d17f
// 0059d177  83fb0f               cmp ebx, 0xf
// 0059d17a  7510                 jne 0x59d18c
// 0059d17c  83c50f               add ebp, 0xf
// 0059d17f  45                   inc ebp
// 0059d180  3b6c2418             cmp ebp, dword ptr [esp + 0x18]
// 0059d184  0f8ef6feffff         jle 0x59d080
// 0059d18a  eb4b                 jmp 0x59d1d7
// 0059d18c  bf01000000           mov edi, 1
// 0059d191  8bcb                 mov ecx, ebx
// 0059d193  d3e7                 shl edi, cl
// 0059d195  8bef                 mov ebp, edi
// 0059d197  85db                 test ebx, ebx
// 0059d199  7437                 je 0x59d1d2
// 0059d19b  3bc3                 cmp eax, ebx
// 0059d19d  7d26                 jge 0x59d1c5
// 0059d19f  53                   push ebx
// 0059d1a0  50                   push eax
// 0059d1a1  8d442430             lea eax, [esp + 0x30]
// 0059d1a5  56                   push esi
// 0059d1a6  50                   push eax
// 0059d1a7  e824f3ffff           call 0x59c4d0
// 0059d1ac  83c410               add esp, 0x10
// 0059d1af  84c0                 test al, al
// 0059d1b1  750a                 jne 0x59d1bd
// 0059d1b3  5d                   pop ebp
// 0059d1b4  5f                   pop edi
// 0059d1b5  5e                   pop esi
// 0059d1b6  32c0                 xor al, al
// 0059d1b8  5b                   pop ebx
// 0059d1b9  83c42c               add esp, 0x2c
// 0059d1bc  c3                   ret 
// 0059d1bd  8b742430             mov esi, dword ptr [esp + 0x30]
// 0059d1c1  8b442434             mov eax, dword ptr [esp + 0x34]
// 0059d1c5  2bc3                 sub eax, ebx
// 0059d1c7  8bd6                 mov edx, esi
// 0059d1c9  8bc8                 mov ecx, eax
// 0059d1cb  d3fa                 sar edx, cl
// 0059d1cd  4f                   dec edi
// 0059d1ce  23d7                 and edx, edi
// 0059d1d0  03ea                 add ebp, edx
// 0059d1d2  4d                   dec ebp
// 0059d1d3  896c2410             mov dword ptr [esp + 0x10], ebp
// 0059d1d7  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0059d1db  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 0059d1df  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0059d1e3  8b5718               mov edx, dword ptr [edi + 0x18]
// 0059d1e6  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0059d1ea  892a                 mov dword ptr [edx], ebp
// 0059d1ec  8b5718               mov edx, dword ptr [edi + 0x18]
// 0059d1ef  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 0059d1f3  897a04               mov dword ptr [edx + 4], edi
// 0059d1f6  89730c               mov dword ptr [ebx + 0xc], esi
// 0059d1f9  894310               mov dword ptr [ebx + 0x10], eax
// 0059d1fc  894b14               mov dword ptr [ebx + 0x14], ecx
// 0059d1ff  ff4b28               dec dword ptr [ebx + 0x28]
// 0059d202  5d                   pop ebp
// 0059d203  5f                   pop edi
// 0059d204  5e                   pop esi
// 0059d205  b001                 mov al, 1
// 0059d207  5b                   pop ebx
// 0059d208  83c42c               add esp, 0x2c
// 0059d20b  c3                   ret 
// library jpeg-6b/jdphuff.c (function _decode_mcu_AC_first)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdphuff.c
