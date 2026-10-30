// roc 2011-06 008b00f0  unit: CXTPReportPaintManager  size: 1129 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008b00f0
//
// 008b00f0  6aff                 push -1
// 008b00f2  684bb0a000           push 0xa0b04b
// 008b00f7  64a100000000         mov eax, dword ptr fs:[0]
// 008b00fd  50                   push eax
// 008b00fe  83ec44               sub esp, 0x44
// 008b0101  53                   push ebx
// 008b0102  55                   push ebp
// 008b0103  56                   push esi
// 008b0104  57                   push edi
// 008b0105  a12058c900           mov eax, dword ptr [0xc95820]
// 008b010a  33c4                 xor eax, esp
// 008b010c  50                   push eax
// 008b010d  8d442458             lea eax, [esp + 0x58]
// 008b0111  64a300000000         mov dword ptr fs:[0], eax
// 008b0117  8bf1                 mov esi, ecx
// 008b0119  8b442468             mov eax, dword ptr [esp + 0x68]
// 008b011d  8b5824               mov ebx, dword ptr [eax + 0x24]
// 008b0120  8b7810               mov edi, dword ptr [eax + 0x10]
// 008b0123  83c8ff               or eax, 0xffffffff
// 008b0126  89442424             mov dword ptr [esp + 0x24], eax
// 008b012a  89442428             mov dword ptr [esp + 0x28], eax
// 008b012e  8d442470             lea eax, [esp + 0x70]
// 008b0132  50                   push eax
// 008b0133  8d4c244c             lea ecx, [esp + 0x4c]
// 008b0137  51                   push ecx
// 008b0138  895c2428             mov dword ptr [esp + 0x28], ebx
// 008b013c  33ed                 xor ebp, ebp
// 008b013e  ff15681ca400         call dword ptr [0xa41c68]
// 008b0144  8b17                 mov edx, dword ptr [edi]
// 008b0146  8b82b8000000         mov eax, dword ptr [edx + 0xb8]
// 008b014c  8bcf                 mov ecx, edi
// 008b014e  ffd0                 call eax
// 008b0150  85c0                 test eax, eax
// 008b0152  7546                 jne 0x8b019a
// 008b0154  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 008b015b  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 008b015f  8b33                 mov esi, dword ptr [ebx]
// 008b0161  8b7c246c             mov edi, dword ptr [esp + 0x6c]
// 008b0165  f7d8                 neg eax
// 008b0167  1bc0                 sbb eax, eax
// 008b0169  83e010               and eax, 0x10
// 008b016c  0b4128               or eax, dword ptr [ecx + 0x28]
// 008b016f  8d542448             lea edx, [esp + 0x48]
// 008b0173  0d00080400           or eax, 0x40800
// 008b0178  50                   push eax
// 008b0179  52                   push edx
// 008b017a  8bcf                 mov ecx, edi
// 008b017c  83c670               add esi, 0x70
// 008b017f  ff15a826a400         call dword ptr [0xa426a8]
// 008b0185  50                   push eax
// 008b0186  8bcf                 mov ecx, edi
// 008b0188  ff15c82da400         call dword ptr [0xa42dc8]
// 008b018e  50                   push eax
// 008b018f  8b06                 mov eax, dword ptr [esi]
// 008b0191  8bcb                 mov ecx, ebx
// 008b0193  ffd0                 call eax
// 008b0195  e9a9030000           jmp 0x8b0543
// 008b019a  8b5308               mov edx, dword ptr [ebx + 8]
// 008b019d  8d4c2440             lea ecx, [esp + 0x40]
// 008b01a1  51                   push ecx
// 008b01a2  6a01                 push 1
// 008b01a4  686056a600           push 0xa65660
// 008b01a9  52                   push edx
// 008b01aa  ff153801a400         call dword ptr [0xa40138]
// 008b01b0  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 008b01b4  686056a600           push 0xa65660
// 008b01b9  50                   push eax
// 008b01ba  8d4c2424             lea ecx, [esp + 0x24]
// 008b01be  51                   push ecx
// 008b01bf  e82c27b6ff           call 0x4128f0
// 008b01c4  83c40c               add esp, 0xc
// 008b01c7  6a20                 push 0x20
// 008b01c9  33db                 xor ebx, ebx
// 008b01cb  6a0d                 push 0xd
// 008b01cd  8d4c2424             lea ecx, [esp + 0x24]
// 008b01d1  895c2468             mov dword ptr [esp + 0x68], ebx
// 008b01d5  ff15982ca400         call dword ptr [0xa42c98]
// 008b01db  8b16                 mov edx, dword ptr [esi]
// 008b01dd  8b92fc000000         mov edx, dword ptr [edx + 0xfc]
// 008b01e3  6a01                 push 1
// 008b01e5  8d442420             lea eax, [esp + 0x20]
// 008b01e9  50                   push eax
// 008b01ea  57                   push edi
// 008b01eb  8bce                 mov ecx, esi
// 008b01ed  ffd2                 call edx
// 008b01ef  8d4c2434             lea ecx, [esp + 0x34]
// 008b01f3  ff15b42da400         call dword ptr [0xa42db4]
// 008b01f9  8d4c2418             lea ecx, [esp + 0x18]
// 008b01fd  ff15b42da400         call dword ptr [0xa42db4]
// 008b0203  8d4c241c             lea ecx, [esp + 0x1c]
// 008b0207  c644246002           mov byte ptr [esp + 0x60], 2
// 008b020c  ff15a826a400         call dword ptr [0xa426a8]
// 008b0212  8d7801               lea edi, [eax + 1]
// 008b0215  57                   push edi
// 008b0216  8d4c2420             lea ecx, [esp + 0x20]
// 008b021a  ff15e023a400         call dword ptr [0xa423e0]
// 008b0220  57                   push edi
// 008b0221  8d4c2438             lea ecx, [esp + 0x38]
// 008b0225  89442430             mov dword ptr [esp + 0x30], eax
// 008b0229  ff15e023a400         call dword ptr [0xa423e0]
// 008b022f  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 008b0233  8bf8                 mov edi, eax
// 008b0235  8a02                 mov al, byte ptr [edx]
// 008b0237  897c2430             mov dword ptr [esp + 0x30], edi
// 008b023b  88442417             mov byte ptr [esp + 0x17], al
// 008b023f  84c0                 test al, al
// 008b0241  0f8471020000         je 0x8b04b8
// 008b0247  83c9ff               or ecx, 0xffffffff
// 008b024a  2bca                 sub ecx, edx
// 008b024c  894c243c             mov dword ptr [esp + 0x3c], ecx
// 008b0250  eb04                 jmp 0x8b0256
// 008b0252  8a442417             mov al, byte ptr [esp + 0x17]
// 008b0256  45                   inc ebp
// 008b0257  3c20                 cmp al, 0x20
// 008b0259  7416                 je 0x8b0271
// 008b025b  3c09                 cmp al, 9
// 008b025d  7412                 je 0x8b0271
// 008b025f  3c0a                 cmp al, 0xa
// 008b0261  740e                 je 0x8b0271
// 008b0263  88041f               mov byte ptr [edi + ebx], al
// 008b0266  c6441f0100           mov byte ptr [edi + ebx + 1], 0
// 008b026b  43                   inc ebx
// 008b026c  e934020000           jmp 0x8b04a5
// 008b0271  803f00               cmp byte ptr [edi], 0
// 008b0274  7508                 jne 0x8b027e
// 008b0276  3c0a                 cmp al, 0xa
// 008b0278  0f8527020000         jne 0x8b04a5
// 008b027e  8d4c2418             lea ecx, [esp + 0x18]
// 008b0282  ff15b026a400         call dword ptr [0xa426b0]
// 008b0288  84c0                 test al, al
// 008b028a  740c                 je 0x8b0298
// 008b028c  8bc5                 mov eax, ebp
// 008b028e  2bc3                 sub eax, ebx
// 008b0290  89442424             mov dword ptr [esp + 0x24], eax
// 008b0294  896c2428             mov dword ptr [esp + 0x28], ebp
// 008b0298  8b442420             mov eax, dword ptr [esp + 0x20]
// 008b029c  53                   push ebx
// 008b029d  57                   push edi
// 008b029e  50                   push eax
// 008b029f  e8fcbbffff           call 0x8abea0
// 008b02a4  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 008b02ab  2b4c247c             sub ecx, dword ptr [esp + 0x7c]
// 008b02af  83c40c               add esp, 0xc
// 008b02b2  3bc1                 cmp eax, ecx
// 008b02b4  89442438             mov dword ptr [esp + 0x38], eax
// 008b02b8  7e0a                 jle 0x8b02c4
// 008b02ba  83bc248000000000     cmp dword ptr [esp + 0x80], 0
// 008b02c2  750b                 jne 0x8b02cf
// 008b02c4  807c24170a           cmp byte ptr [esp + 0x17], 0xa
// 008b02c9  0f85f7000000         jne 0x8b03c6
// 008b02cf  8d4c2418             lea ecx, [esp + 0x18]
// 008b02d3  ff15b026a400         call dword ptr [0xa426b0]
// 008b02d9  84c0                 test al, al
// 008b02db  756a                 jne 0x8b0347
// 008b02dd  8b442420             mov eax, dword ptr [esp + 0x20]
// 008b02e1  8b3e                 mov edi, dword ptr [esi]
// 008b02e3  8d542418             lea edx, [esp + 0x18]
// 008b02e7  52                   push edx
// 008b02e8  50                   push eax
// 008b02e9  81c7ec000000         add edi, 0xec
// 008b02ef  e8bcbaffff           call 0x8abdb0
// 008b02f4  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008b02f8  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 008b02fc  83c408               add esp, 8
// 008b02ff  50                   push eax
// 008b0300  49                   dec ecx
// 008b0301  51                   push ecx
// 008b0302  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 008b0306  4a                   dec edx
// 008b0307  52                   push edx
// 008b0308  8b542458             mov edx, dword ptr [esp + 0x58]
// 008b030c  83ec10               sub esp, 0x10
// 008b030f  8bc4                 mov eax, esp
// 008b0311  8908                 mov dword ptr [eax], ecx
// 008b0313  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 008b0317  895004               mov dword ptr [eax + 4], edx
// 008b031a  8b542470             mov edx, dword ptr [esp + 0x70]
// 008b031e  894808               mov dword ptr [eax + 8], ecx
// 008b0321  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 008b0328  89500c               mov dword ptr [eax + 0xc], edx
// 008b032b  8b17                 mov edx, dword ptr [edi]
// 008b032d  8d442438             lea eax, [esp + 0x38]
// 008b0331  50                   push eax
// 008b0332  51                   push ecx
// 008b0333  8bce                 mov ecx, esi
// 008b0335  ffd2                 call edx
// 008b0337  8b442444             mov eax, dword ptr [esp + 0x44]
// 008b033b  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 008b033f  0144244c             add dword ptr [esp + 0x4c], eax
// 008b0343  894c2448             mov dword ptr [esp + 0x48], ecx
// 008b0347  8b442438             mov eax, dword ptr [esp + 0x38]
// 008b034b  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008b034f  50                   push eax
// 008b0350  8b442430             mov eax, dword ptr [esp + 0x30]
// 008b0354  03c8                 add ecx, eax
// 008b0356  8b16                 mov edx, dword ptr [esi]
// 008b0358  03cd                 add ecx, ebp
// 008b035a  51                   push ecx
// 008b035b  8b92ec000000         mov edx, dword ptr [edx + 0xec]
// 008b0361  8bfd                 mov edi, ebp
// 008b0363  2bfb                 sub edi, ebx
// 008b0365  8d4fff               lea ecx, [edi - 1]
// 008b0368  51                   push ecx
// 008b0369  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 008b036d  83ec10               sub esp, 0x10
// 008b0370  8bc4                 mov eax, esp
// 008b0372  8908                 mov dword ptr [eax], ecx
// 008b0374  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 008b0378  894804               mov dword ptr [eax + 4], ecx
// 008b037b  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 008b037f  894808               mov dword ptr [eax + 8], ecx
// 008b0382  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 008b0386  89480c               mov dword ptr [eax + 0xc], ecx
// 008b0389  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 008b0390  8d442438             lea eax, [esp + 0x38]
// 008b0394  50                   push eax
// 008b0395  51                   push ecx
// 008b0396  8bce                 mov ecx, esi
// 008b0398  ffd2                 call edx
// 008b039a  3bfd                 cmp edi, ebp
// 008b039c  7410                 je 0x8b03ae
// 008b039e  8b442444             mov eax, dword ptr [esp + 0x44]
// 008b03a2  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 008b03a6  0144244c             add dword ptr [esp + 0x4c], eax
// 008b03aa  894c2448             mov dword ptr [esp + 0x48], ecx
// 008b03ae  8d4c2418             lea ecx, [esp + 0x18]
// 008b03b2  ff155c27a400         call dword ptr [0xa4275c]
// 008b03b8  8b542430             mov edx, dword ptr [esp + 0x30]
// 008b03bc  c60200               mov byte ptr [edx], 0
// 008b03bf  8bfa                 mov edi, edx
// 008b03c1  e9dd000000           jmp 0x8b04a3
// 008b03c6  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008b03ca  8d442418             lea eax, [esp + 0x18]
// 008b03ce  50                   push eax
// 008b03cf  51                   push ecx
// 008b03d0  e8dbb9ffff           call 0x8abdb0
// 008b03d5  83c408               add esp, 8
// 008b03d8  8d4c2418             lea ecx, [esp + 0x18]
// 008b03dc  89442438             mov dword ptr [esp + 0x38], eax
// 008b03e0  ff15b026a400         call dword ptr [0xa426b0]
// 008b03e6  84c0                 test al, al
// 008b03e8  750f                 jne 0x8b03f9
// 008b03ea  686056a600           push 0xa65660
// 008b03ef  8d4c241c             lea ecx, [esp + 0x1c]
// 008b03f3  ff15a822a400         call dword ptr [0xa422a8]
// 008b03f9  57                   push edi
// 008b03fa  8d4c241c             lea ecx, [esp + 0x1c]
// 008b03fe  ff15a822a400         call dword ptr [0xa422a8]
// 008b0404  8b442420             mov eax, dword ptr [esp + 0x20]
// 008b0408  8d542418             lea edx, [esp + 0x18]
// 008b040c  52                   push edx
// 008b040d  50                   push eax
// 008b040e  e89db9ffff           call 0x8abdb0
// 008b0413  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 008b041a  2b4c2478             sub ecx, dword ptr [esp + 0x78]
// 008b041e  83c408               add esp, 8
// 008b0421  3bc1                 cmp eax, ecx
// 008b0423  7e77                 jle 0x8b049c
// 008b0425  83bc248000000000     cmp dword ptr [esp + 0x80], 0
// 008b042d  746d                 je 0x8b049c
// 008b042f  8b442438             mov eax, dword ptr [esp + 0x38]
// 008b0433  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008b0437  8b16                 mov edx, dword ptr [esi]
// 008b0439  50                   push eax
// 008b043a  8b442428             mov eax, dword ptr [esp + 0x28]
// 008b043e  49                   dec ecx
// 008b043f  51                   push ecx
// 008b0440  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 008b0444  8b92ec000000         mov edx, dword ptr [edx + 0xec]
// 008b044a  48                   dec eax
// 008b044b  50                   push eax
// 008b044c  83ec10               sub esp, 0x10
// 008b044f  8bc4                 mov eax, esp
// 008b0451  8908                 mov dword ptr [eax], ecx
// 008b0453  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 008b0457  894804               mov dword ptr [eax + 4], ecx
// 008b045a  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 008b045e  894808               mov dword ptr [eax + 8], ecx
// 008b0461  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 008b0465  89480c               mov dword ptr [eax + 0xc], ecx
// 008b0468  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 008b046f  8d442438             lea eax, [esp + 0x38]
// 008b0473  50                   push eax
// 008b0474  51                   push ecx
// 008b0475  8bce                 mov ecx, esi
// 008b0477  ffd2                 call edx
// 008b0479  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 008b047d  8b442444             mov eax, dword ptr [esp + 0x44]
// 008b0481  0144244c             add dword ptr [esp + 0x4c], eax
// 008b0485  8bd5                 mov edx, ebp
// 008b0487  894c2448             mov dword ptr [esp + 0x48], ecx
// 008b048b  2bd3                 sub edx, ebx
// 008b048d  57                   push edi
// 008b048e  8d4c241c             lea ecx, [esp + 0x1c]
// 008b0492  89542428             mov dword ptr [esp + 0x28], edx
// 008b0496  ff15a42da400         call dword ptr [0xa42da4]
// 008b049c  896c2428             mov dword ptr [esp + 0x28], ebp
// 008b04a0  c60700               mov byte ptr [edi], 0
// 008b04a3  33db                 xor ebx, ebx
// 008b04a5  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008b04a9  8a0428               mov al, byte ptr [eax + ebp]
// 008b04ac  88442417             mov byte ptr [esp + 0x17], al
// 008b04b0  84c0                 test al, al
// 008b04b2  0f859afdffff         jne 0x8b0252
// 008b04b8  8d4c2418             lea ecx, [esp + 0x18]
// 008b04bc  ff15a826a400         call dword ptr [0xa426a8]
// 008b04c2  85c0                 test eax, eax
// 008b04c4  745f                 je 0x8b0525
// 008b04c6  8b542420             mov edx, dword ptr [esp + 0x20]
// 008b04ca  8b3e                 mov edi, dword ptr [esi]
// 008b04cc  8d4c2418             lea ecx, [esp + 0x18]
// 008b04d0  51                   push ecx
// 008b04d1  52                   push edx
// 008b04d2  81c7ec000000         add edi, 0xec
// 008b04d8  e8d3b8ffff           call 0x8abdb0
// 008b04dd  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 008b04e1  83c408               add esp, 8
// 008b04e4  50                   push eax
// 008b04e5  ff15a826a400         call dword ptr [0xa426a8]
// 008b04eb  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008b04ef  8b542450             mov edx, dword ptr [esp + 0x50]
// 008b04f3  50                   push eax
// 008b04f4  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008b04f8  48                   dec eax
// 008b04f9  50                   push eax
// 008b04fa  83ec10               sub esp, 0x10
// 008b04fd  8bc4                 mov eax, esp
// 008b04ff  8908                 mov dword ptr [eax], ecx
// 008b0501  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 008b0505  895004               mov dword ptr [eax + 4], edx
// 008b0508  8b542470             mov edx, dword ptr [esp + 0x70]
// 008b050c  894808               mov dword ptr [eax + 8], ecx
// 008b050f  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 008b0516  89500c               mov dword ptr [eax + 0xc], edx
// 008b0519  8b17                 mov edx, dword ptr [edi]
// 008b051b  8d442438             lea eax, [esp + 0x38]
// 008b051f  50                   push eax
// 008b0520  51                   push ecx
// 008b0521  8bce                 mov ecx, esi
// 008b0523  ffd2                 call edx
// 008b0525  8d4c2418             lea ecx, [esp + 0x18]
// 008b0529  ff15082ea400         call dword ptr [0xa42e08]
// 008b052f  8d4c2434             lea ecx, [esp + 0x34]
// 008b0533  ff15082ea400         call dword ptr [0xa42e08]
// 008b0539  8d4c241c             lea ecx, [esp + 0x1c]
// 008b053d  ff15082ea400         call dword ptr [0xa42e08]
// 008b0543  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 008b0547  64890d00000000       mov dword ptr fs:[0], ecx
// 008b054e  59                   pop ecx
// 008b054f  5f                   pop edi
// 008b0550  5e                   pop esi
// 008b0551  5d                   pop ebp
// 008b0552  5b                   pop ebx
// 008b0553  83c450               add esp, 0x50
// 008b0556  c21c00               ret 0x1c
// copied from an identical function in another client (function ?DrawMultiLineText@CXTPReportPaintManager@@MAEXPAUXTP_REPORTRECORDITEM_DRAWARGS@@ABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@VCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportPaintManager.cpp