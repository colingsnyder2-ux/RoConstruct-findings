// roc 2009-12 0061f000  unit: seg_00610000  size: 572 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0061f000
//
// 0061f000  83ec2c               sub esp, 0x2c
// 0061f003  53                   push ebx
// 0061f004  56                   push esi
// 0061f005  57                   push edi
// 0061f006  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 0061f00a  83bffc00000000       cmp dword ptr [edi + 0xfc], 0
// 0061f011  8b9f98010000         mov ebx, dword ptr [edi + 0x198]
// 0061f017  8b8770010000         mov eax, dword ptr [edi + 0x170]
// 0061f01d  8b8f78010000         mov ecx, dword ptr [edi + 0x178]
// 0061f023  895c2418             mov dword ptr [esp + 0x18], ebx
// 0061f027  89442414             mov dword ptr [esp + 0x14], eax
// 0061f02b  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0061f02f  7418                 je 0x61f049
// 0061f031  837b2800             cmp dword ptr [ebx + 0x28], 0
// 0061f035  7512                 jne 0x61f049
// 0061f037  8bf7                 mov esi, edi
// 0061f039  e802fdffff           call 0x61ed40
// 0061f03e  84c0                 test al, al
// 0061f040  7507                 jne 0x61f049
// 0061f042  5f                   pop edi
// 0061f043  5e                   pop esi
// 0061f044  5b                   pop ebx
// 0061f045  83c42c               add esp, 0x2c
// 0061f048  c3                   ret 
// 0061f049  807b0800             cmp byte ptr [ebx + 8], 0
// 0061f04d  55                   push ebp
// 0061f04e  0f85db010000         jne 0x61f22f
// 0061f054  8b4b14               mov ecx, dword ptr [ebx + 0x14]
// 0061f057  894c2410             mov dword ptr [esp + 0x10], ecx
// 0061f05b  85c9                 test ecx, ecx
// 0061f05d  7611                 jbe 0x61f070
// 0061f05f  5d                   pop ebp
// 0061f060  5f                   pop edi
// 0061f061  49                   dec ecx
// 0061f062  ff4b28               dec dword ptr [ebx + 0x28]
// 0061f065  5e                   pop esi
// 0061f066  894b14               mov dword ptr [ebx + 0x14], ecx
// 0061f069  b001                 mov al, 1
// 0061f06b  5b                   pop ebx
// 0061f06c  83c42c               add esp, 0x2c
// 0061f06f  c3                   ret 
// 0061f070  8b4718               mov eax, dword ptr [edi + 0x18]
// 0061f073  8baf6c010000         mov ebp, dword ptr [edi + 0x16c]
// 0061f079  3b6c2418             cmp ebp, dword ptr [esp + 0x18]
// 0061f07d  897c2438             mov dword ptr [esp + 0x38], edi
// 0061f081  8b10                 mov edx, dword ptr [eax]
// 0061f083  89542428             mov dword ptr [esp + 0x28], edx
// 0061f087  8b542444             mov edx, dword ptr [esp + 0x44]
// 0061f08b  8b4004               mov eax, dword ptr [eax + 4]
// 0061f08e  8b12                 mov edx, dword ptr [edx]
// 0061f090  8944242c             mov dword ptr [esp + 0x2c], eax
// 0061f094  8b730c               mov esi, dword ptr [ebx + 0xc]
// 0061f097  8b4310               mov eax, dword ptr [ebx + 0x10]
// 0061f09a  89542424             mov dword ptr [esp + 0x24], edx
// 0061f09e  8b533c               mov edx, dword ptr [ebx + 0x3c]
// 0061f0a1  89542414             mov dword ptr [esp + 0x14], edx
// 0061f0a5  0f8f68010000         jg 0x61f213
// 0061f0ab  eb03                 jmp 0x61f0b0
// 0061f0ad  8d4900               lea ecx, [ecx]
// 0061f0b0  83f808               cmp eax, 8
// 0061f0b3  7d31                 jge 0x61f0e6
// 0061f0b5  6a00                 push 0
// 0061f0b7  50                   push eax
// 0061f0b8  8d442430             lea eax, [esp + 0x30]
// 0061f0bc  56                   push esi
// 0061f0bd  50                   push eax
// 0061f0be  e83df4ffff           call 0x61e500
// 0061f0c3  83c410               add esp, 0x10
// 0061f0c6  84c0                 test al, al
// 0061f0c8  0f8415010000         je 0x61f1e3
// 0061f0ce  8b442434             mov eax, dword ptr [esp + 0x34]
// 0061f0d2  83f808               cmp eax, 8
// 0061f0d5  8b742430             mov esi, dword ptr [esp + 0x30]
// 0061f0d9  7d0b                 jge 0x61f0e6
// 0061f0db  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0061f0df  b901000000           mov ecx, 1
// 0061f0e4  eb2d                 jmp 0x61f113
// 0061f0e6  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0061f0ea  8d48f8               lea ecx, [eax - 8]
// 0061f0ed  8bd6                 mov edx, esi
// 0061f0ef  d3fa                 sar edx, cl
// 0061f0f1  81e2ff000000         and edx, 0xff
// 0061f0f7  8b8c9790000000       mov ecx, dword ptr [edi + edx*4 + 0x90]
// 0061f0fe  85c9                 test ecx, ecx
// 0061f100  740c                 je 0x61f10e
// 0061f102  0fb6bc3a90040000     movzx edi, byte ptr [edx + edi + 0x490]
// 0061f10a  2bc1                 sub eax, ecx
// 0061f10c  eb28                 jmp 0x61f136
// 0061f10e  b909000000           mov ecx, 9
// 0061f113  51                   push ecx
// 0061f114  57                   push edi
// 0061f115  50                   push eax
// 0061f116  8d4c2434             lea ecx, [esp + 0x34]
// 0061f11a  56                   push esi
// 0061f11b  51                   push ecx
// 0061f11c  e8fff4ffff           call 0x61e620
// 0061f121  8bf8                 mov edi, eax
// 0061f123  83c414               add esp, 0x14
// 0061f126  85ff                 test edi, edi
// 0061f128  0f8cb5000000         jl 0x61f1e3
// 0061f12e  8b742430             mov esi, dword ptr [esp + 0x30]
// 0061f132  8b442434             mov eax, dword ptr [esp + 0x34]
// 0061f136  8bdf                 mov ebx, edi
// 0061f138  c1fb04               sar ebx, 4
// 0061f13b  83e70f               and edi, 0xf
// 0061f13e  7467                 je 0x61f1a7
// 0061f140  03eb                 add ebp, ebx
// 0061f142  3bc7                 cmp eax, edi
// 0061f144  7d20                 jge 0x61f166
// 0061f146  57                   push edi
// 0061f147  50                   push eax
// 0061f148  8d542430             lea edx, [esp + 0x30]
// 0061f14c  56                   push esi
// 0061f14d  52                   push edx
// 0061f14e  e8adf3ffff           call 0x61e500
// 0061f153  83c410               add esp, 0x10
// 0061f156  84c0                 test al, al
// 0061f158  0f8485000000         je 0x61f1e3
// 0061f15e  8b742430             mov esi, dword ptr [esp + 0x30]
// 0061f162  8b442434             mov eax, dword ptr [esp + 0x34]
// 0061f166  8bcf                 mov ecx, edi
// 0061f168  2bc7                 sub eax, edi
// 0061f16a  ba01000000           mov edx, 1
// 0061f16f  d3e2                 shl edx, cl
// 0061f171  8bde                 mov ebx, esi
// 0061f173  8bc8                 mov ecx, eax
// 0061f175  d3fb                 sar ebx, cl
// 0061f177  4a                   dec edx
// 0061f178  23d3                 and edx, ebx
// 0061f17a  3b14bd50a99c00       cmp edx, dword ptr [edi*4 + 0x9ca950]
// 0061f181  7d0b                 jge 0x61f18e
// 0061f183  8b3cbd90a99c00       mov edi, dword ptr [edi*4 + 0x9ca990]
// 0061f18a  03fa                 add edi, edx
// 0061f18c  eb02                 jmp 0x61f190
// 0061f18e  8bfa                 mov edi, edx
// 0061f190  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0061f194  8b542424             mov edx, dword ptr [esp + 0x24]
// 0061f198  d3e7                 shl edi, cl
// 0061f19a  8b0cad98579c00       mov ecx, dword ptr [ebp*4 + 0x9c5798]
// 0061f1a1  66893c4a             mov word ptr [edx + ecx*2], di
// 0061f1a5  eb08                 jmp 0x61f1af
// 0061f1a7  83fb0f               cmp ebx, 0xf
// 0061f1aa  7510                 jne 0x61f1bc
// 0061f1ac  83c50f               add ebp, 0xf
// 0061f1af  45                   inc ebp
// 0061f1b0  3b6c2418             cmp ebp, dword ptr [esp + 0x18]
// 0061f1b4  0f8ef6feffff         jle 0x61f0b0
// 0061f1ba  eb4b                 jmp 0x61f207
// 0061f1bc  bf01000000           mov edi, 1
// 0061f1c1  8bcb                 mov ecx, ebx
// 0061f1c3  d3e7                 shl edi, cl
// 0061f1c5  8bef                 mov ebp, edi
// 0061f1c7  85db                 test ebx, ebx
// 0061f1c9  7437                 je 0x61f202
// 0061f1cb  3bc3                 cmp eax, ebx
// 0061f1cd  7d26                 jge 0x61f1f5
// 0061f1cf  53                   push ebx
// 0061f1d0  50                   push eax
// 0061f1d1  8d442430             lea eax, [esp + 0x30]
// 0061f1d5  56                   push esi
// 0061f1d6  50                   push eax
// 0061f1d7  e824f3ffff           call 0x61e500
// 0061f1dc  83c410               add esp, 0x10
// 0061f1df  84c0                 test al, al
// 0061f1e1  750a                 jne 0x61f1ed
// 0061f1e3  5d                   pop ebp
// 0061f1e4  5f                   pop edi
// 0061f1e5  5e                   pop esi
// 0061f1e6  32c0                 xor al, al
// 0061f1e8  5b                   pop ebx
// 0061f1e9  83c42c               add esp, 0x2c
// 0061f1ec  c3                   ret 
// 0061f1ed  8b742430             mov esi, dword ptr [esp + 0x30]
// 0061f1f1  8b442434             mov eax, dword ptr [esp + 0x34]
// 0061f1f5  2bc3                 sub eax, ebx
// 0061f1f7  8bd6                 mov edx, esi
// 0061f1f9  8bc8                 mov ecx, eax
// 0061f1fb  d3fa                 sar edx, cl
// 0061f1fd  4f                   dec edi
// 0061f1fe  23d7                 and edx, edi
// 0061f200  03ea                 add ebp, edx
// 0061f202  4d                   dec ebp
// 0061f203  896c2410             mov dword ptr [esp + 0x10], ebp
// 0061f207  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0061f20b  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 0061f20f  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0061f213  8b5718               mov edx, dword ptr [edi + 0x18]
// 0061f216  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0061f21a  892a                 mov dword ptr [edx], ebp
// 0061f21c  8b5718               mov edx, dword ptr [edi + 0x18]
// 0061f21f  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 0061f223  897a04               mov dword ptr [edx + 4], edi
// 0061f226  89730c               mov dword ptr [ebx + 0xc], esi
// 0061f229  894310               mov dword ptr [ebx + 0x10], eax
// 0061f22c  894b14               mov dword ptr [ebx + 0x14], ecx
// 0061f22f  ff4b28               dec dword ptr [ebx + 0x28]
// 0061f232  5d                   pop ebp
// 0061f233  5f                   pop edi
// 0061f234  5e                   pop esi
// 0061f235  b001                 mov al, 1
// 0061f237  5b                   pop ebx
// 0061f238  83c42c               add esp, 0x2c
// 0061f23b  c3                   ret 
// library jpeg-6b/jdphuff.c (function _decode_mcu_AC_first)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdphuff.c
