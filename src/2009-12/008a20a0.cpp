// roc 2009-12 008a20a0  unit: CXTPReportInplaceList  size: 1117 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a20a0
//
// 008a20a0  6aff                 push -1
// 008a20a2  6802239600           push 0x962302
// 008a20a7  64a100000000         mov eax, dword ptr fs:[0]
// 008a20ad  50                   push eax
// 008a20ae  83ec74               sub esp, 0x74
// 008a20b1  53                   push ebx
// 008a20b2  55                   push ebp
// 008a20b3  56                   push esi
// 008a20b4  57                   push edi
// 008a20b5  a10052b600           mov eax, dword ptr [0xb65200]
// 008a20ba  33c4                 xor eax, esp
// 008a20bc  50                   push eax
// 008a20bd  8d842488000000       lea eax, [esp + 0x88]
// 008a20c4  64a300000000         mov dword ptr fs:[0], eax
// 008a20ca  8bf1                 mov esi, ecx
// 008a20cc  8b4654               mov eax, dword ptr [esi + 0x54]
// 008a20cf  8b9c2498000000       mov ebx, dword ptr [esp + 0x98]
// 008a20d6  8b5004               mov edx, dword ptr [eax + 4]
// 008a20d9  8d4e54               lea ecx, [esi + 0x54]
// 008a20dc  53                   push ebx
// 008a20dd  ffd2                 call edx
// 008a20df  8b4314               mov eax, dword ptr [ebx + 0x14]
// 008a20e2  8b4b18               mov ecx, dword ptr [ebx + 0x18]
// 008a20e5  8b531c               mov edx, dword ptr [ebx + 0x1c]
// 008a20e8  89442444             mov dword ptr [esp + 0x44], eax
// 008a20ec  8b4320               mov eax, dword ptr [ebx + 0x20]
// 008a20ef  33ed                 xor ebp, ebp
// 008a20f1  894c2448             mov dword ptr [esp + 0x48], ecx
// 008a20f5  8954244c             mov dword ptr [esp + 0x4c], edx
// 008a20f9  89442450             mov dword ptr [esp + 0x50], eax
// 008a20fd  396e20               cmp dword ptr [esi + 0x20], ebp
// 008a2100  7552                 jne 0x8a2154
// 008a2102  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 008a2105  55                   push ebp
// 008a2106  55                   push ebp
// 008a2107  51                   push ecx
// 008a2108  8d542438             lea edx, [esp + 0x38]
// 008a210c  52                   push edx
// 008a210d  680100a040           push 0x40a00001
// 008a2112  6856fd9900           push 0x99fd56
// 008a2117  6888269f00           push 0x9f2688
// 008a211c  896c2448             mov dword ptr [esp + 0x48], ebp
// 008a2120  896c244c             mov dword ptr [esp + 0x4c], ebp
// 008a2124  896c2450             mov dword ptr [esp + 0x50], ebp
// 008a2128  896c2454             mov dword ptr [esp + 0x54], ebp
// 008a212c  e847430800           call 0x926478
// 008a2131  2500004000           and eax, 0x400000
// 008a2136  0d80000000           or eax, 0x80
// 008a213b  50                   push eax
// 008a213c  8bce                 mov ecx, esi
// 008a213e  e88f17f5ff           call 0x7f38d2
// 008a2143  8b4658               mov eax, dword ptr [esi + 0x58]
// 008a2146  3bc5                 cmp eax, ebp
// 008a2148  7405                 je 0x8a214f
// 008a214a  8b4020               mov eax, dword ptr [eax + 0x20]
// 008a214d  eb02                 jmp 0x8a2151
// 008a214f  33c0                 xor eax, eax
// 008a2151  894638               mov dword ptr [esi + 0x38], eax
// 008a2154  8b4658               mov eax, dword ptr [esi + 0x58]
// 008a2157  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 008a215d  83c020               add eax, 0x20
// 008a2160  3bc5                 cmp eax, ebp
// 008a2162  7504                 jne 0x8a2168
// 008a2164  33c0                 xor eax, eax
// 008a2166  eb03                 jmp 0x8a216b
// 008a2168  8b4004               mov eax, dword ptr [eax + 4]
// 008a216b  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008a216e  8b3dc4cb9800         mov edi, dword ptr [0x98cbc4]
// 008a2174  6a01                 push 1
// 008a2176  50                   push eax
// 008a2177  6a30                 push 0x30
// 008a2179  51                   push ecx
// 008a217a  ffd7                 call edi
// 008a217c  8b5620               mov edx, dword ptr [esi + 0x20]
// 008a217f  55                   push ebp
// 008a2180  55                   push ebp
// 008a2181  6884010000           push 0x184
// 008a2186  52                   push edx
// 008a2187  ffd7                 call edi
// 008a2189  8b6c244c             mov ebp, dword ptr [esp + 0x4c]
// 008a218d  2b6c2444             sub ebp, dword ptr [esp + 0x44]
// 008a2191  8b4658               mov eax, dword ptr [esi + 0x58]
// 008a2194  50                   push eax
// 008a2195  8d4c2478             lea ecx, [esp + 0x78]
// 008a2199  45                   inc ebp
// 008a219a  e8eb420800           call 0x92648a
// 008a219f  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008a21a2  6a00                 push 0
// 008a21a4  6a00                 push 0
// 008a21a6  6a31                 push 0x31
// 008a21a8  51                   push ecx
// 008a21a9  c78424a000000000000000 mov dword ptr [esp + 0xa0], 0
// 008a21b4  ffd7                 call edi
// 008a21b6  50                   push eax
// 008a21b7  e8a821f5ff           call 0x7f4364
// 008a21bc  50                   push eax
// 008a21bd  8d542478             lea edx, [esp + 0x78]
// 008a21c1  52                   push edx
// 008a21c2  8d4c246c             lea ecx, [esp + 0x6c]
// 008a21c6  e89594faff           call 0x84b660
// 008a21cb  6a0a                 push 0xa
// 008a21cd  c684249400000001     mov byte ptr [esp + 0x94], 1
// 008a21d5  ff15dccb9800         call dword ptr [0x98cbdc]
// 008a21db  8b5660               mov edx, dword ptr [esi + 0x60]
// 008a21de  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 008a21e1  89442420             mov dword ptr [esp + 0x20], eax
// 008a21e5  8b01                 mov eax, dword ptr [ecx]
// 008a21e7  8b406c               mov eax, dword ptr [eax + 0x6c]
// 008a21ea  52                   push edx
// 008a21eb  8d542420             lea edx, [esp + 0x20]
// 008a21ef  52                   push edx
// 008a21f0  ffd0                 call eax
// 008a21f2  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 008a21f5  8b11                 mov edx, dword ptr [ecx]
// 008a21f7  8b8238010000         mov eax, dword ptr [edx + 0x138]
// 008a21fd  53                   push ebx
// 008a21fe  c684249400000002     mov byte ptr [esp + 0x94], 2
// 008a2206  ffd0                 call eax
// 008a2208  8b8c249c000000       mov ecx, dword ptr [esp + 0x9c]
// 008a220f  89442424             mov dword ptr [esp + 0x24], eax
// 008a2213  c744241800000000     mov dword ptr [esp + 0x18], 0
// 008a221b  e860bafaff           call 0x84dc80
// 008a2220  85c0                 test eax, eax
// 008a2222  0f8e2e010000         jle 0x8a2356
// 008a2228  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008a222c  51                   push ecx
// 008a222d  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 008a2234  e8f70c0000           call 0x8a2f30
// 008a2239  8bd8                 mov ebx, eax
// 008a223b  8d5320               lea edx, [ebx + 0x20]
// 008a223e  52                   push edx
// 008a223f  8d4c2418             lea ecx, [esp + 0x18]
// 008a2243  ff1594de9800         call dword ptr [0x98de94]
// 008a2249  8d4c2414             lea ecx, [esp + 0x14]
// 008a224d  c684249000000003     mov byte ptr [esp + 0x90], 3
// 008a2255  ff1580de9800         call dword ptr [0x98de80]
// 008a225b  50                   push eax
// 008a225c  8b4620               mov eax, dword ptr [esi + 0x20]
// 008a225f  6a00                 push 0
// 008a2261  6880010000           push 0x180
// 008a2266  50                   push eax
// 008a2267  ffd7                 call edi
// 008a2269  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008a226c  53                   push ebx
// 008a226d  50                   push eax
// 008a226e  689a010000           push 0x19a
// 008a2273  51                   push ecx
// 008a2274  89442438             mov dword ptr [esp + 0x38], eax
// 008a2278  ffd7                 call edi
// 008a227a  8d54242c             lea edx, [esp + 0x2c]
// 008a227e  52                   push edx
// 008a227f  8d4c2418             lea ecx, [esp + 0x18]
// 008a2283  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008a2289  50                   push eax
// 008a228a  8d4c241c             lea ecx, [esp + 0x1c]
// 008a228e  ff1580de9800         call dword ptr [0x98de80]
// 008a2294  50                   push eax
// 008a2295  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 008a229c  50                   push eax
// 008a229d  ff156cb19800         call dword ptr [0x98b16c]
// 008a22a3  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008a22a7  8b542420             mov edx, dword ptr [esp + 0x20]
// 008a22ab  03ca                 add ecx, edx
// 008a22ad  3be9                 cmp ebp, ecx
// 008a22af  7f34                 jg 0x8a22e5
// 008a22b1  8d44243c             lea eax, [esp + 0x3c]
// 008a22b5  50                   push eax
// 008a22b6  8d4c2418             lea ecx, [esp + 0x18]
// 008a22ba  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008a22c0  50                   push eax
// 008a22c1  8d4c241c             lea ecx, [esp + 0x1c]
// 008a22c5  ff1580de9800         call dword ptr [0x98de80]
// 008a22cb  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 008a22d2  50                   push eax
// 008a22d3  51                   push ecx
// 008a22d4  ff156cb19800         call dword ptr [0x98b16c]
// 008a22da  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 008a22de  8b442420             mov eax, dword ptr [esp + 0x20]
// 008a22e2  8d2c02               lea ebp, [edx + eax]
// 008a22e5  837c2424ff           cmp dword ptr [esp + 0x24], -1
// 008a22ea  7519                 jne 0x8a2305
// 008a22ec  8d4c2414             lea ecx, [esp + 0x14]
// 008a22f0  ff1580de9800         call dword ptr [0x98de80]
// 008a22f6  50                   push eax
// 008a22f7  8d4c2420             lea ecx, [esp + 0x20]
// 008a22fb  ff1584de9800         call dword ptr [0x98de84]
// 008a2301  85c0                 test eax, eax
// 008a2303  7409                 je 0x8a230e
// 008a2305  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008a2309  3b4b24               cmp ecx, dword ptr [ebx + 0x24]
// 008a230c  7512                 jne 0x8a2320
// 008a230e  8b542428             mov edx, dword ptr [esp + 0x28]
// 008a2312  8b4620               mov eax, dword ptr [esi + 0x20]
// 008a2315  6a00                 push 0
// 008a2317  52                   push edx
// 008a2318  6886010000           push 0x186
// 008a231d  50                   push eax
// 008a231e  ffd7                 call edi
// 008a2320  8d4c2414             lea ecx, [esp + 0x14]
// 008a2324  c684249000000002     mov byte ptr [esp + 0x90], 2
// 008a232c  ff15c0de9800         call dword ptr [0x98dec0]
// 008a2332  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 008a2336  8b8c249c000000       mov ecx, dword ptr [esp + 0x9c]
// 008a233d  43                   inc ebx
// 008a233e  895c2418             mov dword ptr [esp + 0x18], ebx
// 008a2342  e839b9faff           call 0x84dc80
// 008a2347  3bd8                 cmp ebx, eax
// 008a2349  0f8cd9feffff         jl 0x8a2228
// 008a234f  8b9c2498000000       mov ebx, dword ptr [esp + 0x98]
// 008a2356  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008a2359  6a00                 push 0
// 008a235b  6a00                 push 0
// 008a235d  68a1010000           push 0x1a1
// 008a2362  51                   push ecx
// 008a2363  ffd7                 call edi
// 008a2365  8b542450             mov edx, dword ptr [esp + 0x50]
// 008a2369  6a00                 push 0
// 008a236b  6a00                 push 0
// 008a236d  89442430             mov dword ptr [esp + 0x30], eax
// 008a2371  8b4620               mov eax, dword ptr [esi + 0x20]
// 008a2374  688b010000           push 0x18b
// 008a2379  50                   push eax
// 008a237a  89542458             mov dword ptr [esp + 0x58], edx
// 008a237e  ffd7                 call edi
// 008a2380  83f80a               cmp eax, 0xa
// 008a2383  7e07                 jle 0x8a238c
// 008a2385  b80a000000           mov eax, 0xa
// 008a238a  eb0f                 jmp 0x8a239b
// 008a238c  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008a238f  6a00                 push 0
// 008a2391  6a00                 push 0
// 008a2393  688b010000           push 0x18b
// 008a2398  51                   push ecx
// 008a2399  ffd7                 call edi
// 008a239b  0faf442428           imul eax, dword ptr [esp + 0x28]
// 008a23a0  8b542450             mov edx, dword ptr [esp + 0x50]
// 008a23a4  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008a23a8  8d440202             lea eax, [edx + eax + 2]
// 008a23ac  2bcd                 sub ecx, ebp
// 008a23ae  8d542444             lea edx, [esp + 0x44]
// 008a23b2  894c2444             mov dword ptr [esp + 0x44], ecx
// 008a23b6  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 008a23b9  52                   push edx
// 008a23ba  89442454             mov dword ptr [esp + 0x54], eax
// 008a23be  e8371af5ff           call 0x7f3dfa
// 008a23c3  8d442444             lea eax, [esp + 0x44]
// 008a23c7  50                   push eax
// 008a23c8  8d4c2458             lea ecx, [esp + 0x58]
// 008a23cc  51                   push ecx
// 008a23cd  e89ea3f9ff           call 0x83c770
// 008a23d2  8bc8                 mov ecx, eax
// 008a23d4  e8f79ef9ff           call 0x83c2d0
// 008a23d9  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 008a23dd  8b442460             mov eax, dword ptr [esp + 0x60]
// 008a23e1  3bc8                 cmp ecx, eax
// 008a23e3  8b3d6ccc9800         mov edi, dword ptr [0x98cc6c]
// 008a23e9  7e27                 jle 0x8a2412
// 008a23eb  8b542458             mov edx, dword ptr [esp + 0x58]
// 008a23ef  03c2                 add eax, edx
// 008a23f1  99                   cdq 
// 008a23f2  2bc2                 sub eax, edx
// 008a23f4  8b542448             mov edx, dword ptr [esp + 0x48]
// 008a23f8  d1f8                 sar eax, 1
// 008a23fa  3bd0                 cmp edx, eax
// 008a23fc  7e14                 jle 0x8a2412
// 008a23fe  8b4318               mov eax, dword ptr [ebx + 0x18]
// 008a2401  2b4320               sub eax, dword ptr [ebx + 0x20]
// 008a2404  2bc1                 sub eax, ecx
// 008a2406  03c2                 add eax, edx
// 008a2408  50                   push eax
// 008a2409  6a00                 push 0
// 008a240b  8d44244c             lea eax, [esp + 0x4c]
// 008a240f  50                   push eax
// 008a2410  ffd7                 call edi
// 008a2412  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008a2416  8b442454             mov eax, dword ptr [esp + 0x54]
// 008a241a  3bc8                 cmp ecx, eax
// 008a241c  7d0c                 jge 0x8a242a
// 008a241e  2bc1                 sub eax, ecx
// 008a2420  6a00                 push 0
// 008a2422  50                   push eax
// 008a2423  8d4c244c             lea ecx, [esp + 0x4c]
// 008a2427  51                   push ecx
// 008a2428  ffd7                 call edi
// 008a242a  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008a242e  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 008a2432  3bc8                 cmp ecx, eax
// 008a2434  7e0c                 jle 0x8a2442
// 008a2436  6a00                 push 0
// 008a2438  2bc1                 sub eax, ecx
// 008a243a  50                   push eax
// 008a243b  8d54244c             lea edx, [esp + 0x4c]
// 008a243f  52                   push edx
// 008a2440  ffd7                 call edi
// 008a2442  8bce                 mov ecx, esi
// 008a2444  e8b917f5ff           call 0x7f3c02
// 008a2449  8b4620               mov eax, dword ptr [esi + 0x20]
// 008a244c  85c0                 test eax, eax
// 008a244e  7462                 je 0x8a24b2
// 008a2450  8b3dc0c99800         mov edi, dword ptr [0x98c9c0]
// 008a2456  6a00                 push 0
// 008a2458  6af8                 push -8
// 008a245a  50                   push eax
// 008a245b  ffd7                 call edi
// 008a245d  6a00                 push 0
// 008a245f  6800000080           push 0x80000000
// 008a2464  6800000040           push 0x40000000
// 008a2469  8bce                 mov ecx, esi
// 008a246b  e86a1bf5ff           call 0x7f3fda
// 008a2470  8b4658               mov eax, dword ptr [esi + 0x58]
// 008a2473  8b4020               mov eax, dword ptr [eax + 0x20]
// 008a2476  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008a2479  50                   push eax
// 008a247a  6af8                 push -8
// 008a247c  51                   push ecx
// 008a247d  ffd7                 call edi
// 008a247f  8b442448             mov eax, dword ptr [esp + 0x48]
// 008a2483  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 008a2487  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 008a248b  6850020000           push 0x250
// 008a2490  2bc8                 sub ecx, eax
// 008a2492  51                   push ecx
// 008a2493  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008a2497  2bd1                 sub edx, ecx
// 008a2499  52                   push edx
// 008a249a  50                   push eax
// 008a249b  a110da9800           mov eax, dword ptr [0x98da10]
// 008a24a0  51                   push ecx
// 008a24a1  50                   push eax
// 008a24a2  8bce                 mov ecx, esi
// 008a24a4  e88317f5ff           call 0x7f3c2c
// 008a24a9  56                   push esi
// 008a24aa  e8f1b2faff           call 0x84d7a0
// 008a24af  83c404               add esp, 4
// 008a24b2  8d4c241c             lea ecx, [esp + 0x1c]
// 008a24b6  ff15c0de9800         call dword ptr [0x98dec0]
// 008a24bc  8d4c2464             lea ecx, [esp + 0x64]
// 008a24c0  c684249000000000     mov byte ptr [esp + 0x90], 0
// 008a24c8  e81392faff           call 0x84b6e0
// 008a24cd  8d4c2474             lea ecx, [esp + 0x74]
// 008a24d1  c7842490000000ffffffff mov dword ptr [esp + 0x90], 0xffffffff
// 008a24dc  e8a33f0800           call 0x926484
// 008a24e1  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 008a24e8  64890d00000000       mov dword ptr fs:[0], ecx
// 008a24ef  59                   pop ecx
// 008a24f0  5f                   pop edi
// 008a24f1  5e                   pop esi
// 008a24f2  5d                   pop ebp
// 008a24f3  5b                   pop ebx
// 008a24f4  81c480000000         add esp, 0x80
// 008a24fa  c20800               ret 8
// copied from an identical function in another client (function ?Create@CXTPReportInplaceList@@QAEXPAUXTP_REPORTRECORDITEM_ARGS@@PAVCXTPReportRecordItemConstraints@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/ReportControl/XTPReportInplaceControls.cpp