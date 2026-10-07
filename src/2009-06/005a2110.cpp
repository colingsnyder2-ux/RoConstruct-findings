// roc 2009-06 005a2110  unit: seg_005a0000  size: 349 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a2110
//
// 005a2110  83ec24               sub esp, 0x24
// 005a2113  56                   push esi
// 005a2114  57                   push edi
// 005a2115  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 005a2119  83bfbc00000000       cmp dword ptr [edi + 0xbc], 0
// 005a2120  8bb75c010000         mov esi, dword ptr [edi + 0x15c]
// 005a2126  8b4718               mov eax, dword ptr [edi + 0x18]
// 005a2129  8b08                 mov ecx, dword ptr [eax]
// 005a212b  8b5004               mov edx, dword ptr [eax + 4]
// 005a212e  8b460c               mov eax, dword ptr [esi + 0xc]
// 005a2131  894c2408             mov dword ptr [esp + 8], ecx
// 005a2135  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 005a2138  8954240c             mov dword ptr [esp + 0xc], edx
// 005a213c  8b5614               mov edx, dword ptr [esi + 0x14]
// 005a213f  89442410             mov dword ptr [esp + 0x10], eax
// 005a2143  8b4618               mov eax, dword ptr [esi + 0x18]
// 005a2146  894c2414             mov dword ptr [esp + 0x14], ecx
// 005a214a  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 005a214d  89542418             mov dword ptr [esp + 0x18], edx
// 005a2151  8b5620               mov edx, dword ptr [esi + 0x20]
// 005a2154  8944241c             mov dword ptr [esp + 0x1c], eax
// 005a2158  894c2420             mov dword ptr [esp + 0x20], ecx
// 005a215c  89542424             mov dword ptr [esp + 0x24], edx
// 005a2160  897c2428             mov dword ptr [esp + 0x28], edi
// 005a2164  7420                 je 0x5a2186
// 005a2166  837e2400             cmp dword ptr [esi + 0x24], 0
// 005a216a  751a                 jne 0x5a2186
// 005a216c  8b4628               mov eax, dword ptr [esi + 0x28]
// 005a216f  50                   push eax
// 005a2170  8d44240c             lea eax, [esp + 0xc]
// 005a2174  e8d7feffff           call 0x5a2050
// 005a2179  83c404               add esp, 4
// 005a217c  84c0                 test al, al
// 005a217e  7506                 jne 0x5a2186
// 005a2180  5f                   pop edi
// 005a2181  5e                   pop esi
// 005a2182  83c424               add esp, 0x24
// 005a2185  c3                   ret 
// 005a2186  53                   push ebx
// 005a2187  33db                 xor ebx, ebx
// 005a2189  399f00010000         cmp dword ptr [edi + 0x100], ebx
// 005a218f  55                   push ebp
// 005a2190  7e6a                 jle 0x5a21fc
// 005a2192  8d8f04010000         lea ecx, [edi + 0x104]
// 005a2198  894c2438             mov dword ptr [esp + 0x38], ecx
// 005a219c  8d642400             lea esp, [esp]
// 005a21a0  8b542438             mov edx, dword ptr [esp + 0x38]
// 005a21a4  8b02                 mov eax, dword ptr [edx]
// 005a21a6  8b8c87e8000000       mov ecx, dword ptr [edi + eax*4 + 0xe8]
// 005a21ad  8d6c8420             lea ebp, [esp + eax*4 + 0x20]
// 005a21b1  8b4118               mov eax, dword ptr [ecx + 0x18]
// 005a21b4  8b54863c             mov edx, dword ptr [esi + eax*4 + 0x3c]
// 005a21b8  8b4114               mov eax, dword ptr [ecx + 0x14]
// 005a21bb  8b4c862c             mov ecx, dword ptr [esi + eax*4 + 0x2c]
// 005a21bf  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 005a21c3  52                   push edx
// 005a21c4  8b5500               mov edx, dword ptr [ebp]
// 005a21c7  51                   push ecx
// 005a21c8  8b0c98               mov ecx, dword ptr [eax + ebx*4]
// 005a21cb  52                   push edx
// 005a21cc  51                   push ecx
// 005a21cd  8d442420             lea eax, [esp + 0x20]
// 005a21d1  e8fafcffff           call 0x5a1ed0
// 005a21d6  83c410               add esp, 0x10
// 005a21d9  84c0                 test al, al
// 005a21db  0f8482000000         je 0x5a2263
// 005a21e1  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 005a21e5  8b049a               mov eax, dword ptr [edx + ebx*4]
// 005a21e8  0fbf08               movsx ecx, word ptr [eax]
// 005a21eb  8344243804           add dword ptr [esp + 0x38], 4
// 005a21f0  43                   inc ebx
// 005a21f1  3b9f00010000         cmp ebx, dword ptr [edi + 0x100]
// 005a21f7  894d00               mov dword ptr [ebp], ecx
// 005a21fa  7ca4                 jl 0x5a21a0
// 005a21fc  8b5718               mov edx, dword ptr [edi + 0x18]
// 005a21ff  8b442410             mov eax, dword ptr [esp + 0x10]
// 005a2203  8902                 mov dword ptr [edx], eax
// 005a2205  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 005a2208  8b542414             mov edx, dword ptr [esp + 0x14]
// 005a220c  8b442418             mov eax, dword ptr [esp + 0x18]
// 005a2210  895104               mov dword ptr [ecx + 4], edx
// 005a2213  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005a2217  8b542420             mov edx, dword ptr [esp + 0x20]
// 005a221b  89460c               mov dword ptr [esi + 0xc], eax
// 005a221e  8b442424             mov eax, dword ptr [esp + 0x24]
// 005a2222  894e10               mov dword ptr [esi + 0x10], ecx
// 005a2225  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005a2229  895614               mov dword ptr [esi + 0x14], edx
// 005a222c  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005a2230  894618               mov dword ptr [esi + 0x18], eax
// 005a2233  894e1c               mov dword ptr [esi + 0x1c], ecx
// 005a2236  895620               mov dword ptr [esi + 0x20], edx
// 005a2239  8bbfbc000000         mov edi, dword ptr [edi + 0xbc]
// 005a223f  85ff                 test edi, edi
// 005a2241  7416                 je 0x5a2259
// 005a2243  837e2400             cmp dword ptr [esi + 0x24], 0
// 005a2247  750d                 jne 0x5a2256
// 005a2249  8b4628               mov eax, dword ptr [esi + 0x28]
// 005a224c  40                   inc eax
// 005a224d  83e007               and eax, 7
// 005a2250  897e24               mov dword ptr [esi + 0x24], edi
// 005a2253  894628               mov dword ptr [esi + 0x28], eax
// 005a2256  ff4e24               dec dword ptr [esi + 0x24]
// 005a2259  5d                   pop ebp
// 005a225a  5b                   pop ebx
// 005a225b  5f                   pop edi
// 005a225c  b001                 mov al, 1
// 005a225e  5e                   pop esi
// 005a225f  83c424               add esp, 0x24
// 005a2262  c3                   ret 
// 005a2263  5d                   pop ebp
// 005a2264  5b                   pop ebx
// 005a2265  5f                   pop edi
// 005a2266  32c0                 xor al, al
// 005a2268  5e                   pop esi
// 005a2269  83c424               add esp, 0x24
// 005a226c  c3                   ret 
// library jpeg-6b/jchuff.c (function _encode_mcu_huff)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jchuff.c
