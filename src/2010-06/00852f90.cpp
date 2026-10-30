// roc 2010-06 00852f90  unit: CXTPReportPaintManager  size: 1129 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00852f90
//
// 00852f90  6aff                 push -1
// 00852f92  687b7e9b00           push 0x9b7e7b
// 00852f97  64a100000000         mov eax, dword ptr fs:[0]
// 00852f9d  50                   push eax
// 00852f9e  83ec44               sub esp, 0x44
// 00852fa1  53                   push ebx
// 00852fa2  55                   push ebp
// 00852fa3  56                   push esi
// 00852fa4  57                   push edi
// 00852fa5  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 00852faa  33c4                 xor eax, esp
// 00852fac  50                   push eax
// 00852fad  8d442458             lea eax, [esp + 0x58]
// 00852fb1  64a300000000         mov dword ptr fs:[0], eax
// 00852fb7  8bf1                 mov esi, ecx
// 00852fb9  8b442468             mov eax, dword ptr [esp + 0x68]
// 00852fbd  8b5824               mov ebx, dword ptr [eax + 0x24]
// 00852fc0  8b7810               mov edi, dword ptr [eax + 0x10]
// 00852fc3  83c8ff               or eax, 0xffffffff
// 00852fc6  89442424             mov dword ptr [esp + 0x24], eax
// 00852fca  89442428             mov dword ptr [esp + 0x28], eax
// 00852fce  8d442470             lea eax, [esp + 0x70]
// 00852fd2  50                   push eax
// 00852fd3  8d4c244c             lea ecx, [esp + 0x4c]
// 00852fd7  51                   push ecx
// 00852fd8  895c2428             mov dword ptr [esp + 0x28], ebx
// 00852fdc  33ed                 xor ebp, ebp
// 00852fde  ff1548bc9e00         call dword ptr [0x9ebc48]
// 00852fe4  8b17                 mov edx, dword ptr [edi]
// 00852fe6  8b82b8000000         mov eax, dword ptr [edx + 0xb8]
// 00852fec  8bcf                 mov ecx, edi
// 00852fee  ffd0                 call eax
// 00852ff0  85c0                 test eax, eax
// 00852ff2  7546                 jne 0x85303a
// 00852ff4  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 00852ffb  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 00852fff  8b33                 mov esi, dword ptr [ebx]
// 00853001  8b7c246c             mov edi, dword ptr [esp + 0x6c]
// 00853005  f7d8                 neg eax
// 00853007  1bc0                 sbb eax, eax
// 00853009  83e010               and eax, 0x10
// 0085300c  0b4128               or eax, dword ptr [ecx + 0x28]
// 0085300f  8d542448             lea edx, [esp + 0x48]
// 00853013  0d00080400           or eax, 0x40800
// 00853018  50                   push eax
// 00853019  52                   push edx
// 0085301a  8bcf                 mov ecx, edi
// 0085301c  83c670               add esi, 0x70
// 0085301f  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 00853025  50                   push eax
// 00853026  8bcf                 mov ecx, edi
// 00853028  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 0085302e  50                   push eax
// 0085302f  8b06                 mov eax, dword ptr [esi]
// 00853031  8bcb                 mov ecx, ebx
// 00853033  ffd0                 call eax
// 00853035  e9a9030000           jmp 0x8533e3
// 0085303a  8b5308               mov edx, dword ptr [ebx + 8]
// 0085303d  8d4c2440             lea ecx, [esp + 0x40]
// 00853041  51                   push ecx
// 00853042  6a01                 push 1
// 00853044  68e86ea000           push 0xa06ee8
// 00853049  52                   push edx
// 0085304a  ff1594a19e00         call dword ptr [0x9ea194]
// 00853050  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 00853054  68e86ea000           push 0xa06ee8
// 00853059  50                   push eax
// 0085305a  8d4c2424             lea ecx, [esp + 0x24]
// 0085305e  51                   push ecx
// 0085305f  e8aca2bbff           call 0x40d310
// 00853064  83c40c               add esp, 0xc
// 00853067  6a20                 push 0x20
// 00853069  33db                 xor ebx, ebx
// 0085306b  6a0d                 push 0xd
// 0085306d  8d4c2424             lea ecx, [esp + 0x24]
// 00853071  895c2468             mov dword ptr [esp + 0x68], ebx
// 00853075  ff157ccc9e00         call dword ptr [0x9ecc7c]
// 0085307b  8b16                 mov edx, dword ptr [esi]
// 0085307d  8b92fc000000         mov edx, dword ptr [edx + 0xfc]
// 00853083  6a01                 push 1
// 00853085  8d442420             lea eax, [esp + 0x20]
// 00853089  50                   push eax
// 0085308a  57                   push edi
// 0085308b  8bce                 mov ecx, esi
// 0085308d  ffd2                 call edx
// 0085308f  8d4c2434             lea ecx, [esp + 0x34]
// 00853093  ff15a4ce9e00         call dword ptr [0x9ecea4]
// 00853099  8d4c2418             lea ecx, [esp + 0x18]
// 0085309d  ff15a4ce9e00         call dword ptr [0x9ecea4]
// 008530a3  8d4c241c             lea ecx, [esp + 0x1c]
// 008530a7  c644246002           mov byte ptr [esp + 0x60], 2
// 008530ac  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 008530b2  8d7801               lea edi, [eax + 1]
// 008530b5  57                   push edi
// 008530b6  8d4c2420             lea ecx, [esp + 0x20]
// 008530ba  ff15fcc39e00         call dword ptr [0x9ec3fc]
// 008530c0  57                   push edi
// 008530c1  8d4c2438             lea ecx, [esp + 0x38]
// 008530c5  89442430             mov dword ptr [esp + 0x30], eax
// 008530c9  ff15fcc39e00         call dword ptr [0x9ec3fc]
// 008530cf  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 008530d3  8bf8                 mov edi, eax
// 008530d5  8a02                 mov al, byte ptr [edx]
// 008530d7  897c2430             mov dword ptr [esp + 0x30], edi
// 008530db  88442417             mov byte ptr [esp + 0x17], al
// 008530df  84c0                 test al, al
// 008530e1  0f8471020000         je 0x853358
// 008530e7  83c9ff               or ecx, 0xffffffff
// 008530ea  2bca                 sub ecx, edx
// 008530ec  894c243c             mov dword ptr [esp + 0x3c], ecx
// 008530f0  eb04                 jmp 0x8530f6
// 008530f2  8a442417             mov al, byte ptr [esp + 0x17]
// 008530f6  45                   inc ebp
// 008530f7  3c20                 cmp al, 0x20
// 008530f9  7416                 je 0x853111
// 008530fb  3c09                 cmp al, 9
// 008530fd  7412                 je 0x853111
// 008530ff  3c0a                 cmp al, 0xa
// 00853101  740e                 je 0x853111
// 00853103  88041f               mov byte ptr [edi + ebx], al
// 00853106  c6441f0100           mov byte ptr [edi + ebx + 1], 0
// 0085310b  43                   inc ebx
// 0085310c  e934020000           jmp 0x853345
// 00853111  803f00               cmp byte ptr [edi], 0
// 00853114  7508                 jne 0x85311e
// 00853116  3c0a                 cmp al, 0xa
// 00853118  0f8527020000         jne 0x853345
// 0085311e  8d4c2418             lea ecx, [esp + 0x18]
// 00853122  ff15eccd9e00         call dword ptr [0x9ecdec]
// 00853128  84c0                 test al, al
// 0085312a  740c                 je 0x853138
// 0085312c  8bc5                 mov eax, ebp
// 0085312e  2bc3                 sub eax, ebx
// 00853130  89442424             mov dword ptr [esp + 0x24], eax
// 00853134  896c2428             mov dword ptr [esp + 0x28], ebp
// 00853138  8b442420             mov eax, dword ptr [esp + 0x20]
// 0085313c  53                   push ebx
// 0085313d  57                   push edi
// 0085313e  50                   push eax
// 0085313f  e8fcbbffff           call 0x84ed40
// 00853144  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 0085314b  2b4c247c             sub ecx, dword ptr [esp + 0x7c]
// 0085314f  83c40c               add esp, 0xc
// 00853152  3bc1                 cmp eax, ecx
// 00853154  89442438             mov dword ptr [esp + 0x38], eax
// 00853158  7e0a                 jle 0x853164
// 0085315a  83bc248000000000     cmp dword ptr [esp + 0x80], 0
// 00853162  750b                 jne 0x85316f
// 00853164  807c24170a           cmp byte ptr [esp + 0x17], 0xa
// 00853169  0f85f7000000         jne 0x853266
// 0085316f  8d4c2418             lea ecx, [esp + 0x18]
// 00853173  ff15eccd9e00         call dword ptr [0x9ecdec]
// 00853179  84c0                 test al, al
// 0085317b  756a                 jne 0x8531e7
// 0085317d  8b442420             mov eax, dword ptr [esp + 0x20]
// 00853181  8b3e                 mov edi, dword ptr [esi]
// 00853183  8d542418             lea edx, [esp + 0x18]
// 00853187  52                   push edx
// 00853188  50                   push eax
// 00853189  81c7ec000000         add edi, 0xec
// 0085318f  e8bcbaffff           call 0x84ec50
// 00853194  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00853198  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0085319c  83c408               add esp, 8
// 0085319f  50                   push eax
// 008531a0  49                   dec ecx
// 008531a1  51                   push ecx
// 008531a2  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 008531a6  4a                   dec edx
// 008531a7  52                   push edx
// 008531a8  8b542458             mov edx, dword ptr [esp + 0x58]
// 008531ac  83ec10               sub esp, 0x10
// 008531af  8bc4                 mov eax, esp
// 008531b1  8908                 mov dword ptr [eax], ecx
// 008531b3  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 008531b7  895004               mov dword ptr [eax + 4], edx
// 008531ba  8b542470             mov edx, dword ptr [esp + 0x70]
// 008531be  894808               mov dword ptr [eax + 8], ecx
// 008531c1  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 008531c8  89500c               mov dword ptr [eax + 0xc], edx
// 008531cb  8b17                 mov edx, dword ptr [edi]
// 008531cd  8d442438             lea eax, [esp + 0x38]
// 008531d1  50                   push eax
// 008531d2  51                   push ecx
// 008531d3  8bce                 mov ecx, esi
// 008531d5  ffd2                 call edx
// 008531d7  8b442444             mov eax, dword ptr [esp + 0x44]
// 008531db  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 008531df  0144244c             add dword ptr [esp + 0x4c], eax
// 008531e3  894c2448             mov dword ptr [esp + 0x48], ecx
// 008531e7  8b442438             mov eax, dword ptr [esp + 0x38]
// 008531eb  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008531ef  50                   push eax
// 008531f0  8b442430             mov eax, dword ptr [esp + 0x30]
// 008531f4  03c8                 add ecx, eax
// 008531f6  8b16                 mov edx, dword ptr [esi]
// 008531f8  03cd                 add ecx, ebp
// 008531fa  51                   push ecx
// 008531fb  8b92ec000000         mov edx, dword ptr [edx + 0xec]
// 00853201  8bfd                 mov edi, ebp
// 00853203  2bfb                 sub edi, ebx
// 00853205  8d4fff               lea ecx, [edi - 1]
// 00853208  51                   push ecx
// 00853209  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0085320d  83ec10               sub esp, 0x10
// 00853210  8bc4                 mov eax, esp
// 00853212  8908                 mov dword ptr [eax], ecx
// 00853214  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 00853218  894804               mov dword ptr [eax + 4], ecx
// 0085321b  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 0085321f  894808               mov dword ptr [eax + 8], ecx
// 00853222  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00853226  89480c               mov dword ptr [eax + 0xc], ecx
// 00853229  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 00853230  8d442438             lea eax, [esp + 0x38]
// 00853234  50                   push eax
// 00853235  51                   push ecx
// 00853236  8bce                 mov ecx, esi
// 00853238  ffd2                 call edx
// 0085323a  3bfd                 cmp edi, ebp
// 0085323c  7410                 je 0x85324e
// 0085323e  8b442444             mov eax, dword ptr [esp + 0x44]
// 00853242  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00853246  0144244c             add dword ptr [esp + 0x4c], eax
// 0085324a  894c2448             mov dword ptr [esp + 0x48], ecx
// 0085324e  8d4c2418             lea ecx, [esp + 0x18]
// 00853252  ff1588c69e00         call dword ptr [0x9ec688]
// 00853258  8b542430             mov edx, dword ptr [esp + 0x30]
// 0085325c  c60200               mov byte ptr [edx], 0
// 0085325f  8bfa                 mov edi, edx
// 00853261  e9dd000000           jmp 0x853343
// 00853266  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0085326a  8d442418             lea eax, [esp + 0x18]
// 0085326e  50                   push eax
// 0085326f  51                   push ecx
// 00853270  e8dbb9ffff           call 0x84ec50
// 00853275  83c408               add esp, 8
// 00853278  8d4c2418             lea ecx, [esp + 0x18]
// 0085327c  89442438             mov dword ptr [esp + 0x38], eax
// 00853280  ff15eccd9e00         call dword ptr [0x9ecdec]
// 00853286  84c0                 test al, al
// 00853288  750f                 jne 0x853299
// 0085328a  68e86ea000           push 0xa06ee8
// 0085328f  8d4c241c             lea ecx, [esp + 0x1c]
// 00853293  ff15c4c29e00         call dword ptr [0x9ec2c4]
// 00853299  57                   push edi
// 0085329a  8d4c241c             lea ecx, [esp + 0x1c]
// 0085329e  ff15c4c29e00         call dword ptr [0x9ec2c4]
// 008532a4  8b442420             mov eax, dword ptr [esp + 0x20]
// 008532a8  8d542418             lea edx, [esp + 0x18]
// 008532ac  52                   push edx
// 008532ad  50                   push eax
// 008532ae  e89db9ffff           call 0x84ec50
// 008532b3  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 008532ba  2b4c2478             sub ecx, dword ptr [esp + 0x78]
// 008532be  83c408               add esp, 8
// 008532c1  3bc1                 cmp eax, ecx
// 008532c3  7e77                 jle 0x85333c
// 008532c5  83bc248000000000     cmp dword ptr [esp + 0x80], 0
// 008532cd  746d                 je 0x85333c
// 008532cf  8b442438             mov eax, dword ptr [esp + 0x38]
// 008532d3  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008532d7  8b16                 mov edx, dword ptr [esi]
// 008532d9  50                   push eax
// 008532da  8b442428             mov eax, dword ptr [esp + 0x28]
// 008532de  49                   dec ecx
// 008532df  51                   push ecx
// 008532e0  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 008532e4  8b92ec000000         mov edx, dword ptr [edx + 0xec]
// 008532ea  48                   dec eax
// 008532eb  50                   push eax
// 008532ec  83ec10               sub esp, 0x10
// 008532ef  8bc4                 mov eax, esp
// 008532f1  8908                 mov dword ptr [eax], ecx
// 008532f3  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 008532f7  894804               mov dword ptr [eax + 4], ecx
// 008532fa  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 008532fe  894808               mov dword ptr [eax + 8], ecx
// 00853301  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00853305  89480c               mov dword ptr [eax + 0xc], ecx
// 00853308  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 0085330f  8d442438             lea eax, [esp + 0x38]
// 00853313  50                   push eax
// 00853314  51                   push ecx
// 00853315  8bce                 mov ecx, esi
// 00853317  ffd2                 call edx
// 00853319  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 0085331d  8b442444             mov eax, dword ptr [esp + 0x44]
// 00853321  0144244c             add dword ptr [esp + 0x4c], eax
// 00853325  8bd5                 mov edx, ebp
// 00853327  894c2448             mov dword ptr [esp + 0x48], ecx
// 0085332b  2bd3                 sub edx, ebx
// 0085332d  57                   push edi
// 0085332e  8d4c241c             lea ecx, [esp + 0x1c]
// 00853332  89542428             mov dword ptr [esp + 0x28], edx
// 00853336  ff158cce9e00         call dword ptr [0x9ece8c]
// 0085333c  896c2428             mov dword ptr [esp + 0x28], ebp
// 00853340  c60700               mov byte ptr [edi], 0
// 00853343  33db                 xor ebx, ebx
// 00853345  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00853349  8a0428               mov al, byte ptr [eax + ebp]
// 0085334c  88442417             mov byte ptr [esp + 0x17], al
// 00853350  84c0                 test al, al
// 00853352  0f859afdffff         jne 0x8530f2
// 00853358  8d4c2418             lea ecx, [esp + 0x18]
// 0085335c  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 00853362  85c0                 test eax, eax
// 00853364  745f                 je 0x8533c5
// 00853366  8b542420             mov edx, dword ptr [esp + 0x20]
// 0085336a  8b3e                 mov edi, dword ptr [esi]
// 0085336c  8d4c2418             lea ecx, [esp + 0x18]
// 00853370  51                   push ecx
// 00853371  52                   push edx
// 00853372  81c7ec000000         add edi, 0xec
// 00853378  e8d3b8ffff           call 0x84ec50
// 0085337d  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 00853381  83c408               add esp, 8
// 00853384  50                   push eax
// 00853385  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0085338b  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0085338f  8b542450             mov edx, dword ptr [esp + 0x50]
// 00853393  50                   push eax
// 00853394  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00853398  48                   dec eax
// 00853399  50                   push eax
// 0085339a  83ec10               sub esp, 0x10
// 0085339d  8bc4                 mov eax, esp
// 0085339f  8908                 mov dword ptr [eax], ecx
// 008533a1  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 008533a5  895004               mov dword ptr [eax + 4], edx
// 008533a8  8b542470             mov edx, dword ptr [esp + 0x70]
// 008533ac  894808               mov dword ptr [eax + 8], ecx
// 008533af  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 008533b6  89500c               mov dword ptr [eax + 0xc], edx
// 008533b9  8b17                 mov edx, dword ptr [edi]
// 008533bb  8d442438             lea eax, [esp + 0x38]
// 008533bf  50                   push eax
// 008533c0  51                   push ecx
// 008533c1  8bce                 mov ecx, esi
// 008533c3  ffd2                 call edx
// 008533c5  8d4c2418             lea ecx, [esp + 0x18]
// 008533c9  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 008533cf  8d4c2434             lea ecx, [esp + 0x34]
// 008533d3  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 008533d9  8d4c241c             lea ecx, [esp + 0x1c]
// 008533dd  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 008533e3  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 008533e7  64890d00000000       mov dword ptr fs:[0], ecx
// 008533ee  59                   pop ecx
// 008533ef  5f                   pop edi
// 008533f0  5e                   pop esi
// 008533f1  5d                   pop ebp
// 008533f2  5b                   pop ebx
// 008533f3  83c450               add esp, 0x50
// 008533f6  c21c00               ret 0x1c
// copied from an identical function in another client (function ?DrawMultiLineText@CXTPReportPaintManager@@MAEXPAUXTP_REPORTRECORDITEM_DRAWARGS@@ABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@VCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportPaintManager.cpp