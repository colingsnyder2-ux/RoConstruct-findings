// from server: 100% by auto
// roc 2008-06 006f2020  unit: CXTPControls  size: 402 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f2020
//
// 006f2020  83ec18               sub esp, 0x18
// 006f2023  53                   push ebx
// 006f2024  55                   push ebp
// 006f2025  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 006f2029  56                   push esi
// 006f202a  33f6                 xor esi, esi
// 006f202c  33db                 xor ebx, ebx
// 006f202e  39712c               cmp dword ptr [ecx + 0x2c], esi
// 006f2031  894c2418             mov dword ptr [esp + 0x18], ecx
// 006f2035  897500               mov dword ptr [ebp], esi
// 006f2038  897504               mov dword ptr [ebp + 4], esi
// 006f203b  8974240c             mov dword ptr [esp + 0xc], esi
// 006f203f  c744241001000000     mov dword ptr [esp + 0x10], 1
// 006f2047  89742414             mov dword ptr [esp + 0x14], esi
// 006f204b  0f8e56010000         jle 0x6f21a7
// 006f2051  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 006f2055  83c02c               add eax, 0x2c
// 006f2058  8944242c             mov dword ptr [esp + 0x2c], eax
// 006f205c  57                   push edi
// 006f205d  8d4900               lea ecx, [ecx]
// 006f2060  8378fc00             cmp dword ptr [eax - 4], 0
// 006f2064  0f8423010000         je 0x6f218d
// 006f206a  83780400             cmp dword ptr [eax + 4], 0
// 006f206e  0f8519010000         jne 0x6f218d
// 006f2074  837c243800           cmp dword ptr [esp + 0x38], 0
// 006f2079  8b50f4               mov edx, dword ptr [eax - 0xc]
// 006f207c  8b78f8               mov edi, dword ptr [eax - 8]
// 006f207f  8b4808               mov ecx, dword ptr [eax + 8]
// 006f2082  89542420             mov dword ptr [esp + 0x20], edx
// 006f2086  0f847c000000         je 0x6f2108
// 006f208c  85c9                 test ecx, ecx
// 006f208e  7416                 je 0x6f20a6
// 006f2090  833800               cmp dword ptr [eax], 0
// 006f2093  7516                 jne 0x6f20ab
// 006f2095  837c241400           cmp dword ptr [esp + 0x14], 0
// 006f209a  7506                 jne 0x6f20a2
// 006f209c  8b542434             mov edx, dword ptr [esp + 0x34]
// 006f20a0  031a                 add ebx, dword ptr [edx]
// 006f20a2  8b542420             mov edx, dword ptr [esp + 0x20]
// 006f20a6  833800               cmp dword ptr [eax], 0
// 006f20a9  741d                 je 0x6f20c8
// 006f20ab  85c9                 test ecx, ecx
// 006f20ad  7409                 je 0x6f20b8
// 006f20af  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 006f20b3  8b4904               mov ecx, dword ptr [ecx + 4]
// 006f20b6  eb02                 jmp 0x6f20ba
// 006f20b8  33c9                 xor ecx, ecx
// 006f20ba  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 006f20be  03cb                 add ecx, ebx
// 006f20c0  2bf1                 sub esi, ecx
// 006f20c2  33db                 xor ebx, ebx
// 006f20c4  895c2410             mov dword ptr [esp + 0x10], ebx
// 006f20c8  39542410             cmp dword ptr [esp + 0x10], edx
// 006f20cc  7f04                 jg 0x6f20d2
// 006f20ce  89542410             mov dword ptr [esp + 0x10], edx
// 006f20d2  03fb                 add edi, ebx
// 006f20d4  57                   push edi
// 006f20d5  56                   push esi
// 006f20d6  53                   push ebx
// 006f20d7  8bce                 mov ecx, esi
// 006f20d9  2bca                 sub ecx, edx
// 006f20db  51                   push ecx
// 006f20dc  83c0d4               add eax, -0x2c
// 006f20df  50                   push eax
// 006f20e0  ff15102d8000         call dword ptr [0x802d10]
// 006f20e6  8b442420             mov eax, dword ptr [esp + 0x20]
// 006f20ea  8b4d00               mov ecx, dword ptr [ebp]
// 006f20ed  2bc6                 sub eax, esi
// 006f20ef  3bc1                 cmp eax, ecx
// 006f20f1  7f02                 jg 0x6f20f5
// 006f20f3  8bc1                 mov eax, ecx
// 006f20f5  894500               mov dword ptr [ebp], eax
// 006f20f8  8b4504               mov eax, dword ptr [ebp + 4]
// 006f20fb  3bf8                 cmp edi, eax
// 006f20fd  7e02                 jle 0x6f2101
// 006f20ff  8bc7                 mov eax, edi
// 006f2101  894504               mov dword ptr [ebp + 4], eax
// 006f2104  8bdf                 mov ebx, edi
// 006f2106  eb75                 jmp 0x6f217d
// 006f2108  85c9                 test ecx, ecx
// 006f210a  7413                 je 0x6f211f
// 006f210c  833800               cmp dword ptr [eax], 0
// 006f210f  7513                 jne 0x6f2124
// 006f2111  837c241400           cmp dword ptr [esp + 0x14], 0
// 006f2116  7507                 jne 0x6f211f
// 006f2118  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 006f211c  037500               add esi, dword ptr [ebp]
// 006f211f  833800               cmp dword ptr [eax], 0
// 006f2122  741d                 je 0x6f2141
// 006f2124  85c9                 test ecx, ecx
// 006f2126  7409                 je 0x6f2131
// 006f2128  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 006f212c  8b4904               mov ecx, dword ptr [ecx + 4]
// 006f212f  eb02                 jmp 0x6f2133
// 006f2131  33c9                 xor ecx, ecx
// 006f2133  8b742410             mov esi, dword ptr [esp + 0x10]
// 006f2137  03ce                 add ecx, esi
// 006f2139  03d9                 add ebx, ecx
// 006f213b  33f6                 xor esi, esi
// 006f213d  89742410             mov dword ptr [esp + 0x10], esi
// 006f2141  397c2410             cmp dword ptr [esp + 0x10], edi
// 006f2145  7f04                 jg 0x6f214b
// 006f2147  897c2410             mov dword ptr [esp + 0x10], edi
// 006f214b  8d2c1f               lea ebp, [edi + ebx]
// 006f214e  55                   push ebp
// 006f214f  8d3c32               lea edi, [edx + esi]
// 006f2152  57                   push edi
// 006f2153  53                   push ebx
// 006f2154  56                   push esi
// 006f2155  83c0d4               add eax, -0x2c
// 006f2158  50                   push eax
// 006f2159  ff15102d8000         call dword ptr [0x802d10]
// 006f215f  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 006f2163  8b08                 mov ecx, dword ptr [eax]
// 006f2165  3bf9                 cmp edi, ecx
// 006f2167  7e02                 jle 0x6f216b
// 006f2169  8bcf                 mov ecx, edi
// 006f216b  8908                 mov dword ptr [eax], ecx
// 006f216d  8b4804               mov ecx, dword ptr [eax + 4]
// 006f2170  3be9                 cmp ebp, ecx
// 006f2172  7f02                 jg 0x6f2176
// 006f2174  8be9                 mov ebp, ecx
// 006f2176  896804               mov dword ptr [eax + 4], ebp
// 006f2179  8bf7                 mov esi, edi
// 006f217b  8be8                 mov ebp, eax
// 006f217d  8b442430             mov eax, dword ptr [esp + 0x30]
// 006f2181  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006f2185  c744241400000000     mov dword ptr [esp + 0x14], 0
// 006f218d  8b542418             mov edx, dword ptr [esp + 0x18]
// 006f2191  42                   inc edx
// 006f2192  83c040               add eax, 0x40
// 006f2195  3b512c               cmp edx, dword ptr [ecx + 0x2c]
// 006f2198  89542418             mov dword ptr [esp + 0x18], edx
// 006f219c  89442430             mov dword ptr [esp + 0x30], eax
// 006f21a0  0f8cbafeffff         jl 0x6f2060
// 006f21a6  5f                   pop edi
// 006f21a7  5e                   pop esi
// 006f21a8  8bc5                 mov eax, ebp
// 006f21aa  5d                   pop ebp
// 006f21ab  5b                   pop ebx
// 006f21ac  83c418               add esp, 0x18
// 006f21af  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPControls.cpp (function ?_CalcSize@CXTPControls@@IAE?AVCSize@@PAUXTPBUTTONINFO@1@ABV2@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControls.cpp
