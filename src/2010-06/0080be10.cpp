// roc 2010-06 0080be10  unit: CXTPTabClientWnd  size: 1092 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0080be10
//
// 0080be10  81ec88000000         sub esp, 0x88
// 0080be16  53                   push ebx
// 0080be17  55                   push ebp
// 0080be18  56                   push esi
// 0080be19  57                   push edi
// 0080be1a  8bbc249c000000       mov edi, dword ptr [esp + 0x9c]
// 0080be21  33db                 xor ebx, ebx
// 0080be23  3bfb                 cmp edi, ebx
// 0080be25  8bf1                 mov esi, ecx
// 0080be27  0f8ca5010000         jl 0x80bfd2
// 0080be2d  e84ee7ffff           call 0x80a580
// 0080be32  48                   dec eax
// 0080be33  3bf8                 cmp edi, eax
// 0080be35  0f8d97010000         jge 0x80bfd2
// 0080be3b  e860ffffff           call 0x80bda0
// 0080be40  53                   push ebx
// 0080be41  8d8c2484000000       lea ecx, [esp + 0x84]
// 0080be48  e8f33bffff           call 0x7ffa40
// 0080be4d  3b7e70               cmp edi, dword ptr [esi + 0x70]
// 0080be50  0f8df9030000         jge 0x80c24f
// 0080be56  8b466c               mov eax, dword ptr [esi + 0x6c]
// 0080be59  8b2cb8               mov ebp, dword ptr [eax + edi*4]
// 0080be5c  8d4701               lea eax, [edi + 1]
// 0080be5f  3bc3                 cmp eax, ebx
// 0080be61  0f8ce8030000         jl 0x80c24f
// 0080be67  3b4670               cmp eax, dword ptr [esi + 0x70]
// 0080be6a  0f8ddf030000         jge 0x80c24f
// 0080be70  8b5534               mov edx, dword ptr [ebp + 0x34]
// 0080be73  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 0080be76  8b3c81               mov edi, dword ptr [ecx + eax*4]
// 0080be79  89542470             mov dword ptr [esp + 0x70], edx
// 0080be7d  8b4538               mov eax, dword ptr [ebp + 0x38]
// 0080be80  89442474             mov dword ptr [esp + 0x74], eax
// 0080be84  8b4d3c               mov ecx, dword ptr [ebp + 0x3c]
// 0080be87  894c2478             mov dword ptr [esp + 0x78], ecx
// 0080be8b  8b5540               mov edx, dword ptr [ebp + 0x40]
// 0080be8e  8954247c             mov dword ptr [esp + 0x7c], edx
// 0080be92  8b4734               mov eax, dword ptr [edi + 0x34]
// 0080be95  89442460             mov dword ptr [esp + 0x60], eax
// 0080be99  8b4f38               mov ecx, dword ptr [edi + 0x38]
// 0080be9c  894c2464             mov dword ptr [esp + 0x64], ecx
// 0080bea0  8b573c               mov edx, dword ptr [edi + 0x3c]
// 0080bea3  89542468             mov dword ptr [esp + 0x68], edx
// 0080bea7  8b4740               mov eax, dword ptr [edi + 0x40]
// 0080beaa  8d4c2460             lea ecx, [esp + 0x60]
// 0080beae  51                   push ecx
// 0080beaf  8d542474             lea edx, [esp + 0x74]
// 0080beb3  89442470             mov dword ptr [esp + 0x70], eax
// 0080beb7  52                   push edx
// 0080beb8  8d442428             lea eax, [esp + 0x28]
// 0080bebc  50                   push eax
// 0080bebd  897c244c             mov dword ptr [esp + 0x4c], edi
// 0080bec1  ff15e8b99e00         call dword ptr [0x9eb9e8]
// 0080bec7  8b8da0000000         mov ecx, dword ptr [ebp + 0xa0]
// 0080becd  894c2410             mov dword ptr [esp + 0x10], ecx
// 0080bed1  8b95a4000000         mov edx, dword ptr [ebp + 0xa4]
// 0080bed7  89542414             mov dword ptr [esp + 0x14], edx
// 0080bedb  8b85a8000000         mov eax, dword ptr [ebp + 0xa8]
// 0080bee1  89442418             mov dword ptr [esp + 0x18], eax
// 0080bee5  8b8dac000000         mov ecx, dword ptr [ebp + 0xac]
// 0080beeb  8d542410             lea edx, [esp + 0x10]
// 0080beef  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0080bef3  52                   push edx
// 0080bef4  8bce                 mov ecx, esi
// 0080bef6  e845c0f9ff           call 0x7a7f40
// 0080befb  8d442420             lea eax, [esp + 0x20]
// 0080beff  50                   push eax
// 0080bf00  8bce                 mov ecx, esi
// 0080bf02  e839c0f9ff           call 0x7a7f40
// 0080bf07  8b5620               mov edx, dword ptr [esi + 0x20]
// 0080bf0a  8d8c24a0000000       lea ecx, [esp + 0xa0]
// 0080bf11  51                   push ecx
// 0080bf12  52                   push edx
// 0080bf13  ff1558bc9e00         call dword ptr [0x9ebc58]
// 0080bf19  399ecc000000         cmp dword ptr [esi + 0xcc], ebx
// 0080bf1f  0f84ba000000         je 0x80bfdf
// 0080bf25  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 0080bf2c  8b9424a0000000       mov edx, dword ptr [esp + 0xa0]
// 0080bf33  33c0                 xor eax, eax
// 0080bf35  399e9c000000         cmp dword ptr [esi + 0x9c], ebx
// 0080bf3b  0f94c0               sete al
// 0080bf3e  50                   push eax
// 0080bf3f  51                   push ecx
// 0080bf40  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0080bf44  52                   push edx
// 0080bf45  8b542430             mov edx, dword ptr [esp + 0x30]
// 0080bf49  8d44241c             lea eax, [esp + 0x1c]
// 0080bf4d  50                   push eax
// 0080bf4e  83ec10               sub esp, 0x10
// 0080bf51  8bc4                 mov eax, esp
// 0080bf53  8908                 mov dword ptr [eax], ecx
// 0080bf55  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0080bf59  895004               mov dword ptr [eax + 4], edx
// 0080bf5c  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 0080bf60  894808               mov dword ptr [eax + 8], ecx
// 0080bf63  56                   push esi
// 0080bf64  8d8c24a4000000       lea ecx, [esp + 0xa4]
// 0080bf6b  89500c               mov dword ptr [eax + 0xc], edx
// 0080bf6e  e85d3bffff           call 0x7ffad0
// 0080bf73  85c0                 test eax, eax
// 0080bf75  745b                 je 0x80bfd2
// 0080bf77  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0080bf7b  8b542424             mov edx, dword ptr [esp + 0x24]
// 0080bf7f  57                   push edi
// 0080bf80  55                   push ebp
// 0080bf81  83ec10               sub esp, 0x10
// 0080bf84  8bc4                 mov eax, esp
// 0080bf86  8908                 mov dword ptr [eax], ecx
// 0080bf88  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0080bf8c  895004               mov dword ptr [eax + 4], edx
// 0080bf8f  8b542444             mov edx, dword ptr [esp + 0x44]
// 0080bf93  894808               mov dword ptr [eax + 8], ecx
// 0080bf96  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0080bf9a  89500c               mov dword ptr [eax + 0xc], edx
// 0080bf9d  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0080bfa1  83ec10               sub esp, 0x10
// 0080bfa4  8bc4                 mov eax, esp
// 0080bfa6  8908                 mov dword ptr [eax], ecx
// 0080bfa8  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0080bfac  895004               mov dword ptr [eax + 4], edx
// 0080bfaf  8b542444             mov edx, dword ptr [esp + 0x44]
// 0080bfb3  894808               mov dword ptr [eax + 8], ecx
// 0080bfb6  8bce                 mov ecx, esi
// 0080bfb8  89500c               mov dword ptr [eax + 0xc], edx
// 0080bfbb  e800e8ffff           call 0x80a7c0
// 0080bfc0  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 0080bfc6  8b01                 mov eax, dword ptr [ecx]
// 0080bfc8  8b9058010000         mov edx, dword ptr [eax + 0x158]
// 0080bfce  6a01                 push 1
// 0080bfd0  ffd2                 call edx
// 0080bfd2  5f                   pop edi
// 0080bfd3  5e                   pop esi
// 0080bfd4  5d                   pop ebp
// 0080bfd5  5b                   pop ebx
// 0080bfd6  81c488000000         add esp, 0x88
// 0080bfdc  c20c00               ret 0xc
// 0080bfdf  399e9c000000         cmp dword ptr [esi + 0x9c], ebx
// 0080bfe5  7515                 jne 0x80bffc
// 0080bfe7  8b442410             mov eax, dword ptr [esp + 0x10]
// 0080bfeb  2b8424a0000000       sub eax, dword ptr [esp + 0xa0]
// 0080bff2  895c2434             mov dword ptr [esp + 0x34], ebx
// 0080bff6  89442430             mov dword ptr [esp + 0x30], eax
// 0080bffa  eb13                 jmp 0x80c00f
// 0080bffc  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0080c000  2b8c24a4000000       sub ecx, dword ptr [esp + 0xa4]
// 0080c007  895c2430             mov dword ptr [esp + 0x30], ebx
// 0080c00b  894c2434             mov dword ptr [esp + 0x34], ecx
// 0080c00f  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0080c012  8d442430             lea eax, [esp + 0x30]
// 0080c016  8b10                 mov edx, dword ptr [eax]
// 0080c018  8b4004               mov eax, dword ptr [eax + 4]
// 0080c01b  51                   push ecx
// 0080c01c  8954243c             mov dword ptr [esp + 0x3c], edx
// 0080c020  89442440             mov dword ptr [esp + 0x40], eax
// 0080c024  ff1580bc9e00         call dword ptr [0x9ebc80]
// 0080c02a  50                   push eax
// 0080c02b  e83abcf9ff           call 0x7a7c6a
// 0080c030  8b1d84bc9e00         mov ebx, dword ptr [0x9ebc84]
// 0080c036  ffd3                 call ebx
// 0080c038  50                   push eax
// 0080c039  e82cbcf9ff           call 0x7a7c6a
// 0080c03e  3bc6                 cmp eax, esi
// 0080c040  0f85e6010000         jne 0x80c22c
// 0080c046  8b3d88bc9e00         mov edi, dword ptr [0x9ebc88]
// 0080c04c  6a00                 push 0
// 0080c04e  6a0f                 push 0xf
// 0080c050  6a0f                 push 0xf
// 0080c052  6a00                 push 0
// 0080c054  8d542454             lea edx, [esp + 0x54]
// 0080c058  52                   push edx
// 0080c059  ffd7                 call edi
// 0080c05b  85c0                 test eax, eax
// 0080c05d  7438                 je 0x80c097
// 0080c05f  90                   nop 
// 0080c060  6a0f                 push 0xf
// 0080c062  6a0f                 push 0xf
// 0080c064  6a00                 push 0
// 0080c066  8d442450             lea eax, [esp + 0x50]
// 0080c06a  50                   push eax
// 0080c06b  ff15f0bb9e00         call dword ptr [0x9ebbf0]
// 0080c071  85c0                 test eax, eax
// 0080c073  0f8459ffffff         je 0x80bfd2
// 0080c079  8d4c2444             lea ecx, [esp + 0x44]
// 0080c07d  51                   push ecx
// 0080c07e  ff1508bc9e00         call dword ptr [0x9ebc08]
// 0080c084  6a00                 push 0
// 0080c086  6a0f                 push 0xf
// 0080c088  6a0f                 push 0xf
// 0080c08a  6a00                 push 0
// 0080c08c  8d542454             lea edx, [esp + 0x54]
// 0080c090  52                   push edx
// 0080c091  ffd7                 call edi
// 0080c093  85c0                 test eax, eax
// 0080c095  75c9                 jne 0x80c060
// 0080c097  6a00                 push 0
// 0080c099  6a00                 push 0
// 0080c09b  6a00                 push 0
// 0080c09d  8d442450             lea eax, [esp + 0x50]
// 0080c0a1  50                   push eax
// 0080c0a2  ff15f0bb9e00         call dword ptr [0x9ebbf0]
// 0080c0a8  85c0                 test eax, eax
// 0080c0aa  0f847c010000         je 0x80c22c
// 0080c0b0  8b442448             mov eax, dword ptr [esp + 0x48]
// 0080c0b4  3d00020000           cmp eax, 0x200
// 0080c0b9  0f8537010000         jne 0x80c1f6
// 0080c0bf  8b442450             mov eax, dword ptr [esp + 0x50]
// 0080c0c3  8b5620               mov edx, dword ptr [esi + 0x20]
// 0080c0c6  0fbfc8               movsx ecx, ax
// 0080c0c9  c1e810               shr eax, 0x10
// 0080c0cc  898c24a0000000       mov dword ptr [esp + 0xa0], ecx
// 0080c0d3  8d8c24a0000000       lea ecx, [esp + 0xa0]
// 0080c0da  98                   cwde 
// 0080c0db  51                   push ecx
// 0080c0dc  52                   push edx
// 0080c0dd  898424ac000000       mov dword ptr [esp + 0xac], eax
// 0080c0e4  ff1558bc9e00         call dword ptr [0x9ebc58]
// 0080c0ea  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 0080c0f1  03442438             add eax, dword ptr [esp + 0x38]
// 0080c0f5  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 0080c0fc  034c243c             add ecx, dword ptr [esp + 0x3c]
// 0080c100  8b542428             mov edx, dword ptr [esp + 0x28]
// 0080c104  3bc2                 cmp eax, edx
// 0080c106  898424a0000000       mov dword ptr [esp + 0xa0], eax
// 0080c10d  898c24a4000000       mov dword ptr [esp + 0xa4], ecx
// 0080c114  8bf8                 mov edi, eax
// 0080c116  7c02                 jl 0x80c11a
// 0080c118  8bfa                 mov edi, edx
// 0080c11a  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0080c11e  3bfb                 cmp edi, ebx
// 0080c120  7e08                 jle 0x80c12a
// 0080c122  3bc2                 cmp eax, edx
// 0080c124  7c0d                 jl 0x80c133
// 0080c126  8bc2                 mov eax, edx
// 0080c128  eb02                 jmp 0x80c12c
// 0080c12a  8bc3                 mov eax, ebx
// 0080c12c  898424a0000000       mov dword ptr [esp + 0xa0], eax
// 0080c133  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 0080c137  3bcf                 cmp ecx, edi
// 0080c139  8bd1                 mov edx, ecx
// 0080c13b  7c02                 jl 0x80c13f
// 0080c13d  8bd7                 mov edx, edi
// 0080c13f  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0080c143  3bd3                 cmp edx, ebx
// 0080c145  7e08                 jle 0x80c14f
// 0080c147  3bcf                 cmp ecx, edi
// 0080c149  7c0d                 jl 0x80c158
// 0080c14b  8bcf                 mov ecx, edi
// 0080c14d  eb02                 jmp 0x80c151
// 0080c14f  8bcb                 mov ecx, ebx
// 0080c151  898c24a4000000       mov dword ptr [esp + 0xa4], ecx
// 0080c158  83be9c00000000       cmp dword ptr [esi + 0x9c], 0
// 0080c15f  7518                 jne 0x80c179
// 0080c161  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0080c165  3bc8                 cmp ecx, eax
// 0080c167  0f84a9000000         je 0x80c216
// 0080c16d  6a00                 push 0
// 0080c16f  2bc1                 sub eax, ecx
// 0080c171  50                   push eax
// 0080c172  8d442418             lea eax, [esp + 0x18]
// 0080c176  50                   push eax
// 0080c177  eb16                 jmp 0x80c18f
// 0080c179  8b442414             mov eax, dword ptr [esp + 0x14]
// 0080c17d  3bc1                 cmp eax, ecx
// 0080c17f  0f8491000000         je 0x80c216
// 0080c185  2bc8                 sub ecx, eax
// 0080c187  51                   push ecx
// 0080c188  6a00                 push 0
// 0080c18a  8d4c2418             lea ecx, [esp + 0x18]
// 0080c18e  51                   push ecx
// 0080c18f  ff1540bc9e00         call dword ptr [0x9ebc40]
// 0080c195  8b542440             mov edx, dword ptr [esp + 0x40]
// 0080c199  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0080c19d  52                   push edx
// 0080c19e  8b542428             mov edx, dword ptr [esp + 0x28]
// 0080c1a2  55                   push ebp
// 0080c1a3  83ec10               sub esp, 0x10
// 0080c1a6  8bc4                 mov eax, esp
// 0080c1a8  8908                 mov dword ptr [eax], ecx
// 0080c1aa  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0080c1ae  895004               mov dword ptr [eax + 4], edx
// 0080c1b1  8b542444             mov edx, dword ptr [esp + 0x44]
// 0080c1b5  894808               mov dword ptr [eax + 8], ecx
// 0080c1b8  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0080c1bc  89500c               mov dword ptr [eax + 0xc], edx
// 0080c1bf  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0080c1c3  83ec10               sub esp, 0x10
// 0080c1c6  8bc4                 mov eax, esp
// 0080c1c8  8908                 mov dword ptr [eax], ecx
// 0080c1ca  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0080c1ce  895004               mov dword ptr [eax + 4], edx
// 0080c1d1  8b542444             mov edx, dword ptr [esp + 0x44]
// 0080c1d5  894808               mov dword ptr [eax + 8], ecx
// 0080c1d8  8bce                 mov ecx, esi
// 0080c1da  89500c               mov dword ptr [eax + 0xc], edx
// 0080c1dd  e8dee5ffff           call 0x80a7c0
// 0080c1e2  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 0080c1e8  8b01                 mov eax, dword ptr [ecx]
// 0080c1ea  8b9058010000         mov edx, dword ptr [eax + 0x158]
// 0080c1f0  6a01                 push 1
// 0080c1f2  ffd2                 call edx
// 0080c1f4  eb20                 jmp 0x80c216
// 0080c1f6  3d00010000           cmp eax, 0x100
// 0080c1fb  7507                 jne 0x80c204
// 0080c1fd  837c244c1b           cmp dword ptr [esp + 0x4c], 0x1b
// 0080c202  eb05                 jmp 0x80c209
// 0080c204  3d02020000           cmp eax, 0x202
// 0080c209  7421                 je 0x80c22c
// 0080c20b  8d442444             lea eax, [esp + 0x44]
// 0080c20f  50                   push eax
// 0080c210  ff1508bc9e00         call dword ptr [0x9ebc08]
// 0080c216  8b1d84bc9e00         mov ebx, dword ptr [0x9ebc84]
// 0080c21c  ffd3                 call ebx
// 0080c21e  50                   push eax
// 0080c21f  e846baf9ff           call 0x7a7c6a
// 0080c224  3bc6                 cmp eax, esi
// 0080c226  0f841afeffff         je 0x80c046
// 0080c22c  ffd3                 call ebx
// 0080c22e  50                   push eax
// 0080c22f  e836baf9ff           call 0x7a7c6a
// 0080c234  3bc6                 cmp eax, esi
// 0080c236  0f8596fdffff         jne 0x80bfd2
// 0080c23c  ff158cbc9e00         call dword ptr [0x9ebc8c]
// 0080c242  5f                   pop edi
// 0080c243  5e                   pop esi
// 0080c244  5d                   pop ebp
// 0080c245  5b                   pop ebx
// 0080c246  81c488000000         add esp, 0x88
// 0080c24c  c20c00               ret 0xc
// 0080c24f  e8f8b9f9ff           call 0x7a7c4c
// copied from an identical function in another client (function ?TrackSplitter@CXTPTabClientWnd@@IAEXHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPTabClientWnd.cpp