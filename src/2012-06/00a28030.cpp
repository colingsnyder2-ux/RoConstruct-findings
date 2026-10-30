// roc 2012-06 00a28030  unit: CXTPReportPaintManager  size: 971 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a28030
//
// 00a28030  6aff                 push -1
// 00a28032  680b4bae00           push 0xae4b0b
// 00a28037  64a100000000         mov eax, dword ptr fs:[0]
// 00a2803d  50                   push eax
// 00a2803e  83ec2c               sub esp, 0x2c
// 00a28041  53                   push ebx
// 00a28042  55                   push ebp
// 00a28043  56                   push esi
// 00a28044  57                   push edi
// 00a28045  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a2804a  33c4                 xor eax, esp
// 00a2804c  50                   push eax
// 00a2804d  8d442440             lea eax, [esp + 0x40]
// 00a28051  64a300000000         mov dword ptr fs:[0], eax
// 00a28057  8be9                 mov ebp, ecx
// 00a28059  8b442450             mov eax, dword ptr [esp + 0x50]
// 00a2805d  8b4824               mov ecx, dword ptr [eax + 0x24]
// 00a28060  8b5810               mov ebx, dword ptr [eax + 0x10]
// 00a28063  8b542470             mov edx, dword ptr [esp + 0x70]
// 00a28067  8b02                 mov eax, dword ptr [edx]
// 00a28069  8b13                 mov edx, dword ptr [ebx]
// 00a2806b  894c2418             mov dword ptr [esp + 0x18], ecx
// 00a2806f  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 00a28073  8b31                 mov esi, dword ptr [ecx]
// 00a28075  8944241c             mov dword ptr [esp + 0x1c], eax
// 00a28079  8b82b8000000         mov eax, dword ptr [edx + 0xb8]
// 00a2807f  8bcb                 mov ecx, ebx
// 00a28081  895c2428             mov dword ptr [esp + 0x28], ebx
// 00a28085  ffd0                 call eax
// 00a28087  8d4c2458             lea ecx, [esp + 0x58]
// 00a2808b  51                   push ecx
// 00a2808c  8d542434             lea edx, [esp + 0x34]
// 00a28090  52                   push edx
// 00a28091  89442428             mov dword ptr [esp + 0x28], eax
// 00a28095  8bfe                 mov edi, esi
// 00a28097  ff15ec3ab200         call dword ptr [0xb23aec]
// 00a2809d  837c242000           cmp dword ptr [esp + 0x20], 0
// 00a280a2  8d4c2430             lea ecx, [esp + 0x30]
// 00a280a6  753c                 jne 0xa280e4
// 00a280a8  8b442450             mov eax, dword ptr [esp + 0x50]
// 00a280ac  8b4028               mov eax, dword ptr [eax + 0x28]
// 00a280af  0b442468             or eax, dword ptr [esp + 0x68]
// 00a280b3  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00a280b7  8b33                 mov esi, dword ptr [ebx]
// 00a280b9  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 00a280bd  0d20080000           or eax, 0x820
// 00a280c2  50                   push eax
// 00a280c3  51                   push ecx
// 00a280c4  8bcf                 mov ecx, edi
// 00a280c6  83c670               add esi, 0x70
// 00a280c9  ff155846b200         call dword ptr [0xb24658]
// 00a280cf  50                   push eax
// 00a280d0  8bcf                 mov ecx, edi
// 00a280d2  ff159847b200         call dword ptr [0xb24798]
// 00a280d8  8b16                 mov edx, dword ptr [esi]
// 00a280da  50                   push eax
// 00a280db  8bcb                 mov ecx, ebx
// 00a280dd  ffd2                 call edx
// 00a280df  e901030000           jmp 0xa283e5
// 00a280e4  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a280e8  8b00                 mov eax, dword ptr [eax]
// 00a280ea  68200c0000           push 0xc20
// 00a280ef  83c070               add eax, 0x70
// 00a280f2  51                   push ecx
// 00a280f3  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00a280f7  8944242c             mov dword ptr [esp + 0x2c], eax
// 00a280fb  ff155846b200         call dword ptr [0xb24658]
// 00a28101  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00a28105  50                   push eax
// 00a28106  ff159847b200         call dword ptr [0xb24798]
// 00a2810c  8b542430             mov edx, dword ptr [esp + 0x30]
// 00a28110  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00a28114  50                   push eax
// 00a28115  8b02                 mov eax, dword ptr [edx]
// 00a28117  ffd0                 call eax
// 00a28119  8b542438             mov edx, dword ptr [esp + 0x38]
// 00a2811d  8b442460             mov eax, dword ptr [esp + 0x60]
// 00a28121  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00a28125  2b542430             sub edx, dword ptr [esp + 0x30]
// 00a28129  2bc1                 sub eax, ecx
// 00a2812b  3bd0                 cmp edx, eax
// 00a2812d  7d3b                 jge 0xa2816a
// 00a2812f  8b542450             mov edx, dword ptr [esp + 0x50]
// 00a28133  8b4228               mov eax, dword ptr [edx + 0x28]
// 00a28136  83e003               and eax, 3
// 00a28139  83e801               sub eax, 1
// 00a2813c  7413                 je 0xa28151
// 00a2813e  83e801               sub eax, 1
// 00a28141  7527                 jne 0xa2816a
// 00a28143  8b442460             mov eax, dword ptr [esp + 0x60]
// 00a28147  2b442438             sub eax, dword ptr [esp + 0x38]
// 00a2814b  01442430             add dword ptr [esp + 0x30], eax
// 00a2814f  eb19                 jmp 0xa2816a
// 00a28151  8b442430             mov eax, dword ptr [esp + 0x30]
// 00a28155  2b442438             sub eax, dword ptr [esp + 0x38]
// 00a28159  2bc1                 sub eax, ecx
// 00a2815b  03442460             add eax, dword ptr [esp + 0x60]
// 00a2815f  99                   cdq 
// 00a28160  2bc2                 sub eax, edx
// 00a28162  d1f8                 sar eax, 1
// 00a28164  03c1                 add eax, ecx
// 00a28166  89442430             mov dword ptr [esp + 0x30], eax
// 00a2816a  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00a2816e  8b542430             mov edx, dword ptr [esp + 0x30]
// 00a28172  894c2438             mov dword ptr [esp + 0x38], ecx
// 00a28176  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00a2817a  89542414             mov dword ptr [esp + 0x14], edx
// 00a2817e  ff155846b200         call dword ptr [0xb24658]
// 00a28184  3bc6                 cmp eax, esi
// 00a28186  0f8e48020000         jle 0xa283d4
// 00a2818c  eb06                 jmp 0xa28194
// 00a2818e  8bff                 mov edi, edi
// 00a28190  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00a28194  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a28198  3b442438             cmp eax, dword ptr [esp + 0x38]
// 00a2819c  0f8d32020000         jge 0xa283d4
// 00a281a2  8d4c2470             lea ecx, [esp + 0x70]
// 00a281a6  ff158447b200         call dword ptr [0xb24784]
// 00a281ac  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a281b0  39442420             cmp dword ptr [esp + 0x20], eax
// 00a281b4  c744244800000000     mov dword ptr [esp + 0x48], 0
// 00a281bc  0f8e7c010000         jle 0xa2833e
// 00a281c2  8b13                 mov edx, dword ptr [ebx]
// 00a281c4  50                   push eax
// 00a281c5  8b82bc000000         mov eax, dword ptr [edx + 0xbc]
// 00a281cb  8bcb                 mov ecx, ebx
// 00a281cd  ffd0                 call eax
// 00a281cf  8bd8                 mov ebx, eax
// 00a281d1  8b4b30               mov ecx, dword ptr [ebx + 0x30]
// 00a281d4  2bcf                 sub ecx, edi
// 00a281d6  51                   push ecx
// 00a281d7  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00a281db  57                   push edi
// 00a281dc  8d54242c             lea edx, [esp + 0x2c]
// 00a281e0  52                   push edx
// 00a281e1  ff158449b200         call dword ptr [0xb24984]
// 00a281e7  50                   push eax
// 00a281e8  8d4c2474             lea ecx, [esp + 0x74]
// 00a281ec  c644244c01           mov byte ptr [esp + 0x4c], 1
// 00a281f1  ff152045b200         call dword ptr [0xb24520]
// 00a281f7  8d4c2424             lea ecx, [esp + 0x24]
// 00a281fb  c644244800           mov byte ptr [esp + 0x48], 0
// 00a28200  ff15d047b200         call dword ptr [0xb247d0]
// 00a28206  8d4c2470             lea ecx, [esp + 0x70]
// 00a2820a  ff155846b200         call dword ptr [0xb24658]
// 00a28210  85c0                 test eax, eax
// 00a28212  0f8e84000000         jle 0xa2829c
// 00a28218  6a0a                 push 0xa
// 00a2821a  8d4c2474             lea ecx, [esp + 0x74]
// 00a2821e  ff15384db200         call dword ptr [0xb24d38]
// 00a28224  6a0d                 push 0xd
// 00a28226  8d4c2474             lea ecx, [esp + 0x74]
// 00a2822a  ff15384db200         call dword ptr [0xb24d38]
// 00a28230  8b442468             mov eax, dword ptr [esp + 0x68]
// 00a28234  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00a28238  8b5500               mov edx, dword ptr [ebp]
// 00a2823b  8b92d4000000         mov edx, dword ptr [edx + 0xd4]
// 00a28241  50                   push eax
// 00a28242  83ec10               sub esp, 0x10
// 00a28245  8bc4                 mov eax, esp
// 00a28247  8908                 mov dword ptr [eax], ecx
// 00a28249  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00a2824d  894804               mov dword ptr [eax + 4], ecx
// 00a28250  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00a28254  894808               mov dword ptr [eax + 8], ecx
// 00a28257  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00a2825b  89480c               mov dword ptr [eax + 0xc], ecx
// 00a2825e  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00a28262  8d842484000000       lea eax, [esp + 0x84]
// 00a28269  50                   push eax
// 00a2826a  51                   push ecx
// 00a2826b  8d442430             lea eax, [esp + 0x30]
// 00a2826f  50                   push eax
// 00a28270  8bcd                 mov ecx, ebp
// 00a28272  ffd2                 call edx
// 00a28274  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00a28278  8bf0                 mov esi, eax
// 00a2827a  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a2827e  3bc1                 cmp eax, ecx
// 00a28280  894c2430             mov dword ptr [esp + 0x30], ecx
// 00a28284  7f04                 jg 0xa2828a
// 00a28286  89442430             mov dword ptr [esp + 0x30], eax
// 00a2828a  8d4c2470             lea ecx, [esp + 0x70]
// 00a2828e  ff155846b200         call dword ptr [0xb24658]
// 00a28294  3bf0                 cmp esi, eax
// 00a28296  0f8c24010000         jl 0xa283c0
// 00a2829c  8b442468             mov eax, dword ptr [esp + 0x68]
// 00a282a0  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00a282a4  8b542434             mov edx, dword ptr [esp + 0x34]
// 00a282a8  50                   push eax
// 00a282a9  83ec10               sub esp, 0x10
// 00a282ac  8bc4                 mov eax, esp
// 00a282ae  8908                 mov dword ptr [eax], ecx
// 00a282b0  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00a282b4  895004               mov dword ptr [eax + 4], edx
// 00a282b7  8b542450             mov edx, dword ptr [esp + 0x50]
// 00a282bb  894808               mov dword ptr [eax + 8], ecx
// 00a282be  51                   push ecx
// 00a282bf  89500c               mov dword ptr [eax + 0xc], edx
// 00a282c2  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 00a282c6  8bcc                 mov ecx, esp
// 00a282c8  89642444             mov dword ptr [esp + 0x44], esp
// 00a282cc  50                   push eax
// 00a282cd  ff158047b200         call dword ptr [0xb24780]
// 00a282d3  8b442468             mov eax, dword ptr [esp + 0x68]
// 00a282d7  8b5500               mov edx, dword ptr [ebp]
// 00a282da  8b92cc000000         mov edx, dword ptr [edx + 0xcc]
// 00a282e0  53                   push ebx
// 00a282e1  50                   push eax
// 00a282e2  8d4c2434             lea ecx, [esp + 0x34]
// 00a282e6  51                   push ecx
// 00a282e7  8bcd                 mov ecx, ebp
// 00a282e9  ffd2                 call edx
// 00a282eb  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00a282ef  8bf0                 mov esi, eax
// 00a282f1  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a282f5  3bc1                 cmp eax, ecx
// 00a282f7  894c2430             mov dword ptr [esp + 0x30], ecx
// 00a282fb  7f04                 jg 0xa28301
// 00a282fd  89442430             mov dword ptr [esp + 0x30], eax
// 00a28301  8b4334               mov eax, dword ptr [ebx + 0x34]
// 00a28304  8b7b30               mov edi, dword ptr [ebx + 0x30]
// 00a28307  ff44241c             inc dword ptr [esp + 0x1c]
// 00a2830b  03f8                 add edi, eax
// 00a2830d  3bf0                 cmp esi, eax
// 00a2830f  c7442448ffffffff     mov dword ptr [esp + 0x48], 0xffffffff
// 00a28317  8d4c2470             lea ecx, [esp + 0x70]
// 00a2831b  0f8cab000000         jl 0xa283cc
// 00a28321  ff15d047b200         call dword ptr [0xb247d0]
// 00a28327  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00a2832b  ff155846b200         call dword ptr [0xb24658]
// 00a28331  3bc7                 cmp eax, edi
// 00a28333  0f8f57feffff         jg 0xa28190
// 00a28339  e996000000           jmp 0xa283d4
// 00a2833e  8b742454             mov esi, dword ptr [esp + 0x54]
// 00a28342  8bce                 mov ecx, esi
// 00a28344  ff155846b200         call dword ptr [0xb24658]
// 00a2834a  2bc7                 sub eax, edi
// 00a2834c  50                   push eax
// 00a2834d  57                   push edi
// 00a2834e  8d44245c             lea eax, [esp + 0x5c]
// 00a28352  50                   push eax
// 00a28353  8bce                 mov ecx, esi
// 00a28355  ff158449b200         call dword ptr [0xb24984]
// 00a2835b  50                   push eax
// 00a2835c  8d4c2474             lea ecx, [esp + 0x74]
// 00a28360  c644244c02           mov byte ptr [esp + 0x4c], 2
// 00a28365  ff152045b200         call dword ptr [0xb24520]
// 00a2836b  8d4c2454             lea ecx, [esp + 0x54]
// 00a2836f  c644244800           mov byte ptr [esp + 0x48], 0
// 00a28374  ff15d047b200         call dword ptr [0xb247d0]
// 00a2837a  8b442468             mov eax, dword ptr [esp + 0x68]
// 00a2837e  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00a28382  8b5500               mov edx, dword ptr [ebp]
// 00a28385  8b92d4000000         mov edx, dword ptr [edx + 0xd4]
// 00a2838b  50                   push eax
// 00a2838c  83ec10               sub esp, 0x10
// 00a2838f  8bc4                 mov eax, esp
// 00a28391  8908                 mov dword ptr [eax], ecx
// 00a28393  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00a28397  894804               mov dword ptr [eax + 4], ecx
// 00a2839a  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00a2839e  894808               mov dword ptr [eax + 8], ecx
// 00a283a1  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00a283a5  89480c               mov dword ptr [eax + 0xc], ecx
// 00a283a8  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00a283ac  8d842484000000       lea eax, [esp + 0x84]
// 00a283b3  50                   push eax
// 00a283b4  51                   push ecx
// 00a283b5  8d442430             lea eax, [esp + 0x30]
// 00a283b9  50                   push eax
// 00a283ba  8bcd                 mov ecx, ebp
// 00a283bc  ffd2                 call edx
// 00a283be  8bf0                 mov esi, eax
// 00a283c0  c7442448ffffffff     mov dword ptr [esp + 0x48], 0xffffffff
// 00a283c8  8d4c2470             lea ecx, [esp + 0x70]
// 00a283cc  03f7                 add esi, edi
// 00a283ce  ff15d047b200         call dword ptr [0xb247d0]
// 00a283d4  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a283d8  6a00                 push 0
// 00a283da  e829acf5ff           call 0x983008
// 00a283df  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 00a283e3  8930                 mov dword ptr [eax], esi
// 00a283e5  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00a283e9  64890d00000000       mov dword ptr fs:[0], ecx
// 00a283f0  59                   pop ecx
// 00a283f1  5f                   pop edi
// 00a283f2  5e                   pop esi
// 00a283f3  5d                   pop ebp
// 00a283f4  5b                   pop ebx
// 00a283f5  83c438               add esp, 0x38
// 00a283f8  c22400               ret 0x24
// copied from an identical function in another client (function ?DrawTextLine@CXTPReportPaintManager@@MAEXPAUXTP_REPORTRECORDITEM_DRAWARGS@@ABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@VCRect@@HAAH3@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportPaintManager.cpp