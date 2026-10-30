// roc 2009-12 00882310  unit: CXTPControlGalleryOffice2007Theme  size: 3974 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00882310
//
// 00882310  81ecec000000         sub esp, 0xec
// 00882316  53                   push ebx
// 00882317  55                   push ebp
// 00882318  56                   push esi
// 00882319  8bb42400010000       mov esi, dword ptr [esp + 0x100]
// 00882320  57                   push edi
// 00882321  8bf9                 mov edi, ecx
// 00882323  8bce                 mov ecx, esi
// 00882325  897c241c             mov dword ptr [esp + 0x1c], edi
// 00882329  e8928e0600           call 0x8eb1c0
// 0088232e  83f805               cmp eax, 5
// 00882331  7422                 je 0x882355
// 00882333  83f806               cmp eax, 6
// 00882336  741d                 je 0x882355
// 00882338  8b842400010000       mov eax, dword ptr [esp + 0x100]
// 0088233f  56                   push esi
// 00882340  50                   push eax
// 00882341  8bcf                 mov ecx, edi
// 00882343  e8a86dffff           call 0x8790f0
// 00882348  5f                   pop edi
// 00882349  5e                   pop esi
// 0088234a  5d                   pop ebp
// 0088234b  5b                   pop ebx
// 0088234c  81c4ec000000         add esp, 0xec
// 00882352  c20800               ret 8
// 00882355  33c9                 xor ecx, ecx
// 00882357  83f805               cmp eax, 5
// 0088235a  8b4660               mov eax, dword ptr [esi + 0x60]
// 0088235d  0f94c1               sete cl
// 00882360  33db                 xor ebx, ebx
// 00882362  8be9                 mov ebp, ecx
// 00882364  896c2410             mov dword ptr [esp + 0x10], ebp
// 00882368  3bc3                 cmp eax, ebx
// 0088236a  7411                 je 0x88237d
// 0088236c  8b5658               mov edx, dword ptr [esi + 0x58]
// 0088236f  89542420             mov dword ptr [esp + 0x20], edx
// 00882373  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 0088237b  eb0f                 jmp 0x88238c
// 0088237d  8b4658               mov eax, dword ptr [esi + 0x58]
// 00882380  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 00882388  89442434             mov dword ptr [esp + 0x34], eax
// 0088238c  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0088238f  2b4e1c               sub ecx, dword ptr [esi + 0x1c]
// 00882392  85c9                 test ecx, ecx
// 00882394  0f8eef0e0000         jle 0x883289
// 0088239a  8b5608               mov edx, dword ptr [esi + 8]
// 0088239d  2b560c               sub edx, dword ptr [esi + 0xc]
// 008823a0  2b5604               sub edx, dword ptr [esi + 4]
// 008823a3  42                   inc edx
// 008823a4  85d2                 test edx, edx
// 008823a6  7e14                 jle 0x8823bc
// 008823a8  8b06                 mov eax, dword ptr [esi]
// 008823aa  8b5004               mov edx, dword ptr [eax + 4]
// 008823ad  8bce                 mov ecx, esi
// 008823af  ffd2                 call edx
// 008823b1  85c0                 test eax, eax
// 008823b3  7407                 je 0x8823bc
// 008823b5  bf01000000           mov edi, 1
// 008823ba  eb02                 jmp 0x8823be
// 008823bc  33ff                 xor edi, edi
// 008823be  8b5634               mov edx, dword ptr [esi + 0x34]
// 008823c1  8b4638               mov eax, dword ptr [esi + 0x38]
// 008823c4  8bca                 mov ecx, edx
// 008823c6  2bc8                 sub ecx, eax
// 008823c8  2b4628               sub eax, dword ptr [esi + 0x28]
// 008823cb  897c2414             mov dword ptr [esp + 0x14], edi
// 008823cf  898c249c000000       mov dword ptr [esp + 0x9c], ecx
// 008823d6  898424c4000000       mov dword ptr [esp + 0xc4], eax
// 008823dd  3bfb                 cmp edi, ebx
// 008823df  7405                 je 0x8823e6
// 008823e1  3b562c               cmp edx, dword ptr [esi + 0x2c]
// 008823e4  7e0e                 jle 0x8823f4
// 008823e6  899c249c000000       mov dword ptr [esp + 0x9c], ebx
// 008823ed  899c24c4000000       mov dword ptr [esp + 0xc4], ebx
// 008823f4  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008823f8  8b782c               mov edi, dword ptr [eax + 0x2c]
// 008823fb  680c28a000           push 0xa0280c
// 00882400  8bcf                 mov ecx, edi
// 00882402  897c243c             mov dword ptr [esp + 0x3c], edi
// 00882406  e8f5c8ffff           call 0x87ed00
// 0088240b  898424bc000000       mov dword ptr [esp + 0xbc], eax
// 00882412  3bc3                 cmp eax, ebx
// 00882414  0f846f0e0000         je 0x883289
// 0088241a  395e5c               cmp dword ptr [esi + 0x5c], ebx
// 0088241d  0f842c070000         je 0x882b4f
// 00882423  b8e827a000           mov eax, 0xa027e8
// 00882428  3beb                 cmp ebp, ebx
// 0088242a  7505                 jne 0x882431
// 0088242c  b8c427a000           mov eax, 0xa027c4
// 00882431  50                   push eax
// 00882432  8bcf                 mov ecx, edi
// 00882434  e8c7c8ffff           call 0x87ed00
// 00882439  89442418             mov dword ptr [esp + 0x18], eax
// 0088243d  3bc3                 cmp eax, ebx
// 0088243f  0f84440e0000         je 0x883289
// 00882445  8b2d64cc9800         mov ebp, dword ptr [0x98cc64]
// 0088244b  8d5e48               lea ebx, [esi + 0x48]
// 0088244e  53                   push ebx
// 0088244f  8d8c24b0000000       lea ecx, [esp + 0xb0]
// 00882456  51                   push ecx
// 00882457  ffd5                 call ebp
// 00882459  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0088245d  6a02                 push 2
// 0088245f  6a00                 push 0
// 00882461  8d9424d4000000       lea edx, [esp + 0xd4]
// 00882468  bf01000000           mov edi, 1
// 0088246d  52                   push edx
// 0088246e  897c2438             mov dword ptr [esp + 0x38], edi
// 00882472  e849e40500           call 0x8e08c0
// 00882477  83ec10               sub esp, 0x10
// 0088247a  8bcc                 mov ecx, esp
// 0088247c  8939                 mov dword ptr [ecx], edi
// 0088247e  33d2                 xor edx, edx
// 00882480  895104               mov dword ptr [ecx + 4], edx
// 00882483  8bd7                 mov edx, edi
// 00882485  8bbc2410010000       mov edi, dword ptr [esp + 0x110]
// 0088248c  895108               mov dword ptr [ecx + 8], edx
// 0088248f  33d2                 xor edx, edx
// 00882491  89510c               mov dword ptr [ecx + 0xc], edx
// 00882494  8b10                 mov edx, dword ptr [eax]
// 00882496  83ec10               sub esp, 0x10
// 00882499  8bcc                 mov ecx, esp
// 0088249b  8911                 mov dword ptr [ecx], edx
// 0088249d  8b5004               mov edx, dword ptr [eax + 4]
// 008824a0  895104               mov dword ptr [ecx + 4], edx
// 008824a3  8b5008               mov edx, dword ptr [eax + 8]
// 008824a6  8b400c               mov eax, dword ptr [eax + 0xc]
// 008824a9  895108               mov dword ptr [ecx + 8], edx
// 008824ac  89410c               mov dword ptr [ecx + 0xc], eax
// 008824af  8d8c24cc000000       lea ecx, [esp + 0xcc]
// 008824b6  51                   push ecx
// 008824b7  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008824bb  57                   push edi
// 008824bc  e8cfdc0500           call 0x8e0190
// 008824c1  53                   push ebx
// 008824c2  8d942490000000       lea edx, [esp + 0x90]
// 008824c9  52                   push edx
// 008824ca  ffd5                 call ebp
// 008824cc  6a00                 push 0
// 008824ce  6aff                 push -1
// 008824d0  8d842494000000       lea eax, [esp + 0x94]
// 008824d7  50                   push eax
// 008824d8  ff1558ca9800         call dword ptr [0x98ca58]
// 008824de  837c241000           cmp dword ptr [esp + 0x10], 0
// 008824e3  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 008824ea  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 008824f1  8b5628               mov edx, dword ptr [esi + 0x28]
// 008824f4  894c2450             mov dword ptr [esp + 0x50], ecx
// 008824f8  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 008824ff  8944244c             mov dword ptr [esp + 0x4c], eax
// 00882503  8944245c             mov dword ptr [esp + 0x5c], eax
// 00882507  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0088250a  894c2454             mov dword ptr [esp + 0x54], ecx
// 0088250e  894c2464             mov dword ptr [esp + 0x64], ecx
// 00882512  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 00882519  89442460             mov dword ptr [esp + 0x60], eax
// 0088251d  89542458             mov dword ptr [esp + 0x58], edx
// 00882521  894c2468             mov dword ptr [esp + 0x68], ecx
// 00882525  b89c27a000           mov eax, 0xa0279c
// 0088252a  7505                 jne 0x882531
// 0088252c  b87427a000           mov eax, 0xa02774
// 00882531  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00882535  50                   push eax
// 00882536  e8c5c7ffff           call 0x87ed00
// 0088253b  33db                 xor ebx, ebx
// 0088253d  8944241c             mov dword ptr [esp + 0x1c], eax
// 00882541  3bc3                 cmp eax, ebx
// 00882543  0f84400d0000         je 0x883289
// 00882549  395c2414             cmp dword ptr [esp + 0x14], ebx
// 0088254d  7509                 jne 0x882558
// 0088254f  895c2410             mov dword ptr [esp + 0x10], ebx
// 00882553  e997000000           jmp 0x8825ef
// 00882558  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0088255c  83f93c               cmp ecx, 0x3c
// 0088255f  750a                 jne 0x88256b
// 00882561  c744241003000000     mov dword ptr [esp + 0x10], 3
// 00882569  eb29                 jmp 0x882594
// 0088256b  8b442434             mov eax, dword ptr [esp + 0x34]
// 0088256f  83f83c               cmp eax, 0x3c
// 00882572  750a                 jne 0x88257e
// 00882574  c744241002000000     mov dword ptr [esp + 0x10], 2
// 0088257c  eb16                 jmp 0x882594
// 0088257e  3bc3                 cmp eax, ebx
// 00882580  7f0a                 jg 0x88258c
// 00882582  3bcb                 cmp ecx, ebx
// 00882584  7f06                 jg 0x88258c
// 00882586  895c2410             mov dword ptr [esp + 0x10], ebx
// 0088258a  eb63                 jmp 0x8825ef
// 0088258c  c744241001000000     mov dword ptr [esp + 0x10], 1
// 00882594  8b542410             mov edx, dword ptr [esp + 0x10]
// 00882598  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0088259c  6a04                 push 4
// 0088259e  52                   push edx
// 0088259f  8d8424d4000000       lea eax, [esp + 0xd4]
// 008825a6  be03000000           mov esi, 3
// 008825ab  50                   push eax
// 008825ac  8bee                 mov ebp, esi
// 008825ae  e80de30500           call 0x8e08c0
// 008825b3  83ec10               sub esp, 0x10
// 008825b6  8bcc                 mov ecx, esp
// 008825b8  8931                 mov dword ptr [ecx], esi
// 008825ba  896904               mov dword ptr [ecx + 4], ebp
// 008825bd  8bd6                 mov edx, esi
// 008825bf  895108               mov dword ptr [ecx + 8], edx
// 008825c2  89510c               mov dword ptr [ecx + 0xc], edx
// 008825c5  8b10                 mov edx, dword ptr [eax]
// 008825c7  83ec10               sub esp, 0x10
// 008825ca  8bcc                 mov ecx, esp
// 008825cc  8911                 mov dword ptr [ecx], edx
// 008825ce  8b5004               mov edx, dword ptr [eax + 4]
// 008825d1  895104               mov dword ptr [ecx + 4], edx
// 008825d4  8b5008               mov edx, dword ptr [eax + 8]
// 008825d7  8b400c               mov eax, dword ptr [eax + 0xc]
// 008825da  895108               mov dword ptr [ecx + 8], edx
// 008825dd  89410c               mov dword ptr [ecx + 0xc], eax
// 008825e0  8d4c246c             lea ecx, [esp + 0x6c]
// 008825e4  51                   push ecx
// 008825e5  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008825e9  57                   push edi
// 008825ea  e8a1db0500           call 0x8e0190
// 008825ef  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 008825f3  8b442454             mov eax, dword ptr [esp + 0x54]
// 008825f7  8d4410f7             lea eax, [eax + edx - 9]
// 008825fb  99                   cdq 
// 008825fc  2bc2                 sub eax, edx
// 008825fe  8b542450             mov edx, dword ptr [esp + 0x50]
// 00882602  8bc8                 mov ecx, eax
// 00882604  8b442458             mov eax, dword ptr [esp + 0x58]
// 00882608  8d4410f7             lea eax, [eax + edx - 9]
// 0088260c  be09000000           mov esi, 9
// 00882611  99                   cdq 
// 00882612  8bee                 mov ebp, esi
// 00882614  55                   push ebp
// 00882615  2bc2                 sub eax, edx
// 00882617  56                   push esi
// 00882618  d1f8                 sar eax, 1
// 0088261a  d1f9                 sar ecx, 1
// 0088261c  50                   push eax
// 0088261d  51                   push ecx
// 0088261e  8d8c24fc000000       lea ecx, [esp + 0xfc]
// 00882625  e85600bdff           call 0x452680
// 0088262a  395c2414             cmp dword ptr [esp + 0x14], ebx
// 0088262e  7505                 jne 0x882635
// 00882630  8d46fb               lea eax, [esi - 5]
// 00882633  eb0a                 jmp 0x88263f
// 00882635  33c0                 xor eax, eax
// 00882637  395c2410             cmp dword ptr [esp + 0x10], ebx
// 0088263b  0f95c0               setne al
// 0088263e  40                   inc eax
// 0088263f  50                   push eax
// 00882640  33c9                 xor ecx, ecx
// 00882642  83ec10               sub esp, 0x10
// 00882645  8bc4                 mov eax, esp
// 00882647  8908                 mov dword ptr [eax], ecx
// 00882649  894804               mov dword ptr [eax + 4], ecx
// 0088264c  8bce                 mov ecx, esi
// 0088264e  894808               mov dword ptr [eax + 8], ecx
// 00882651  89480c               mov dword ptr [eax + 0xc], ecx
// 00882654  8d8c24e0000000       lea ecx, [esp + 0xe0]
// 0088265b  51                   push ecx
// 0088265c  895c243c             mov dword ptr [esp + 0x3c], ebx
// 00882660  895c2440             mov dword ptr [esp + 0x40], ebx
// 00882664  895c2444             mov dword ptr [esp + 0x44], ebx
// 00882668  895c2448             mov dword ptr [esp + 0x48], ebx
// 0088266c  e85ffcffff           call 0x8822d0
// 00882671  83c418               add esp, 0x18
// 00882674  68ff00ff00           push 0xff00ff
// 00882679  8d542428             lea edx, [esp + 0x28]
// 0088267d  52                   push edx
// 0088267e  8b10                 mov edx, dword ptr [eax]
// 00882680  83ec10               sub esp, 0x10
// 00882683  8bcc                 mov ecx, esp
// 00882685  8911                 mov dword ptr [ecx], edx
// 00882687  8b5004               mov edx, dword ptr [eax + 4]
// 0088268a  895104               mov dword ptr [ecx + 4], edx
// 0088268d  8b5008               mov edx, dword ptr [eax + 8]
// 00882690  8b400c               mov eax, dword ptr [eax + 0xc]
// 00882693  895108               mov dword ptr [ecx + 8], edx
// 00882696  89410c               mov dword ptr [ecx + 0xc], eax
// 00882699  8d8c2404010000       lea ecx, [esp + 0x104]
// 008826a0  51                   push ecx
// 008826a1  8b8c24d8000000       mov ecx, dword ptr [esp + 0xd8]
// 008826a8  57                   push edi
// 008826a9  e852e70500           call 0x8e0e00
// 008826ae  395c2414             cmp dword ptr [esp + 0x14], ebx
// 008826b2  7509                 jne 0x8826bd
// 008826b4  895c2410             mov dword ptr [esp + 0x10], ebx
// 008826b8  e99f000000           jmp 0x88275c
// 008826bd  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008826c1  83f93d               cmp ecx, 0x3d
// 008826c4  750a                 jne 0x8826d0
// 008826c6  c744241003000000     mov dword ptr [esp + 0x10], 3
// 008826ce  eb29                 jmp 0x8826f9
// 008826d0  8b442434             mov eax, dword ptr [esp + 0x34]
// 008826d4  83f83d               cmp eax, 0x3d
// 008826d7  750a                 jne 0x8826e3
// 008826d9  c744241002000000     mov dword ptr [esp + 0x10], 2
// 008826e1  eb16                 jmp 0x8826f9
// 008826e3  3bc3                 cmp eax, ebx
// 008826e5  7f0a                 jg 0x8826f1
// 008826e7  3bcb                 cmp ecx, ebx
// 008826e9  7f06                 jg 0x8826f1
// 008826eb  895c2410             mov dword ptr [esp + 0x10], ebx
// 008826ef  eb6b                 jmp 0x88275c
// 008826f1  c744241001000000     mov dword ptr [esp + 0x10], 1
// 008826f9  8b542410             mov edx, dword ptr [esp + 0x10]
// 008826fd  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00882701  6a04                 push 4
// 00882703  bb03000000           mov ebx, 3
// 00882708  52                   push edx
// 00882709  8d8424d4000000       lea eax, [esp + 0xd4]
// 00882710  50                   push eax
// 00882711  8bf3                 mov esi, ebx
// 00882713  8beb                 mov ebp, ebx
// 00882715  895c243c             mov dword ptr [esp + 0x3c], ebx
// 00882719  e8a2e10500           call 0x8e08c0
// 0088271e  83ec10               sub esp, 0x10
// 00882721  8bcc                 mov ecx, esp
// 00882723  8931                 mov dword ptr [ecx], esi
// 00882725  896904               mov dword ptr [ecx + 4], ebp
// 00882728  895908               mov dword ptr [ecx + 8], ebx
// 0088272b  83ec10               sub esp, 0x10
// 0088272e  8bd3                 mov edx, ebx
// 00882730  89510c               mov dword ptr [ecx + 0xc], edx
// 00882733  8b10                 mov edx, dword ptr [eax]
// 00882735  8bcc                 mov ecx, esp
// 00882737  8911                 mov dword ptr [ecx], edx
// 00882739  8b5004               mov edx, dword ptr [eax + 4]
// 0088273c  895104               mov dword ptr [ecx + 4], edx
// 0088273f  8b5008               mov edx, dword ptr [eax + 8]
// 00882742  8b400c               mov eax, dword ptr [eax + 0xc]
// 00882745  895108               mov dword ptr [ecx + 8], edx
// 00882748  89410c               mov dword ptr [ecx + 0xc], eax
// 0088274b  8d4c247c             lea ecx, [esp + 0x7c]
// 0088274f  51                   push ecx
// 00882750  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00882754  57                   push edi
// 00882755  e836da0500           call 0x8e0190
// 0088275a  33db                 xor ebx, ebx
// 0088275c  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 00882760  8b442464             mov eax, dword ptr [esp + 0x64]
// 00882764  8d4410f7             lea eax, [eax + edx - 9]
// 00882768  99                   cdq 
// 00882769  2bc2                 sub eax, edx
// 0088276b  8b542460             mov edx, dword ptr [esp + 0x60]
// 0088276f  8bc8                 mov ecx, eax
// 00882771  8b442468             mov eax, dword ptr [esp + 0x68]
// 00882775  8d4410f7             lea eax, [eax + edx - 9]
// 00882779  be09000000           mov esi, 9
// 0088277e  99                   cdq 
// 0088277f  8bee                 mov ebp, esi
// 00882781  55                   push ebp
// 00882782  2bc2                 sub eax, edx
// 00882784  56                   push esi
// 00882785  d1f8                 sar eax, 1
// 00882787  d1f9                 sar ecx, 1
// 00882789  50                   push eax
// 0088278a  51                   push ecx
// 0088278b  8d8c24ec000000       lea ecx, [esp + 0xec]
// 00882792  e8e9febcff           call 0x452680
// 00882797  395c2414             cmp dword ptr [esp + 0x14], ebx
// 0088279b  7505                 jne 0x8827a2
// 0088279d  8d46ff               lea eax, [esi - 1]
// 008827a0  eb0c                 jmp 0x8827ae
// 008827a2  33c0                 xor eax, eax
// 008827a4  395c2410             cmp dword ptr [esp + 0x10], ebx
// 008827a8  0f95c0               setne al
// 008827ab  83c005               add eax, 5
// 008827ae  50                   push eax
// 008827af  33c9                 xor ecx, ecx
// 008827b1  83ec10               sub esp, 0x10
// 008827b4  8bc4                 mov eax, esp
// 008827b6  8908                 mov dword ptr [eax], ecx
// 008827b8  894804               mov dword ptr [eax + 4], ecx
// 008827bb  8bce                 mov ecx, esi
// 008827bd  894808               mov dword ptr [eax + 8], ecx
// 008827c0  89480c               mov dword ptr [eax + 0xc], ecx
// 008827c3  8d8c24e0000000       lea ecx, [esp + 0xe0]
// 008827ca  51                   push ecx
// 008827cb  895c243c             mov dword ptr [esp + 0x3c], ebx
// 008827cf  895c2440             mov dword ptr [esp + 0x40], ebx
// 008827d3  895c2444             mov dword ptr [esp + 0x44], ebx
// 008827d7  895c2448             mov dword ptr [esp + 0x48], ebx
// 008827db  e8f0faffff           call 0x8822d0
// 008827e0  83c418               add esp, 0x18
// 008827e3  68ff00ff00           push 0xff00ff
// 008827e8  8d542428             lea edx, [esp + 0x28]
// 008827ec  52                   push edx
// 008827ed  8b10                 mov edx, dword ptr [eax]
// 008827ef  83ec10               sub esp, 0x10
// 008827f2  8bcc                 mov ecx, esp
// 008827f4  8911                 mov dword ptr [ecx], edx
// 008827f6  8b5004               mov edx, dword ptr [eax + 4]
// 008827f9  895104               mov dword ptr [ecx + 4], edx
// 008827fc  8b5008               mov edx, dword ptr [eax + 8]
// 008827ff  8b400c               mov eax, dword ptr [eax + 0xc]
// 00882802  895108               mov dword ptr [ecx + 8], edx
// 00882805  89410c               mov dword ptr [ecx + 0xc], eax
// 00882808  8d8c24f4000000       lea ecx, [esp + 0xf4]
// 0088280f  51                   push ecx
// 00882810  8b8c24d8000000       mov ecx, dword ptr [esp + 0xd8]
// 00882817  57                   push edi
// 00882818  e8e3e50500           call 0x8e0e00
// 0088281d  8b442458             mov eax, dword ptr [esp + 0x58]
// 00882821  8b94248c000000       mov edx, dword ptr [esp + 0x8c]
// 00882828  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 0088282f  8b3568cc9800         mov esi, dword ptr [0x98cc68]
// 00882835  89442440             mov dword ptr [esp + 0x40], eax
// 00882839  8954243c             mov dword ptr [esp + 0x3c], edx
// 0088283d  8b542460             mov edx, dword ptr [esp + 0x60]
// 00882841  8d44243c             lea eax, [esp + 0x3c]
// 00882845  50                   push eax
// 00882846  894c2448             mov dword ptr [esp + 0x48], ecx
// 0088284a  8954244c             mov dword ptr [esp + 0x4c], edx
// 0088284e  ffd6                 call esi
// 00882850  85c0                 test eax, eax
// 00882852  0f85310a0000         jne 0x883289
// 00882858  8b542440             mov edx, dword ptr [esp + 0x40]
// 0088285c  8bac24c4000000       mov ebp, dword ptr [esp + 0xc4]
// 00882863  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00882867  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0088286b  899424b0000000       mov dword ptr [esp + 0xb0], edx
// 00882872  03d5                 add edx, ebp
// 00882874  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 00882878  896c246c             mov dword ptr [esp + 0x6c], ebp
// 0088287c  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 00882880  896c2474             mov dword ptr [esp + 0x74], ebp
// 00882884  8bac249c000000       mov ebp, dword ptr [esp + 0x9c]
// 0088288b  899424b8000000       mov dword ptr [esp + 0xb8], edx
// 00882892  89542470             mov dword ptr [esp + 0x70], edx
// 00882896  03d5                 add edx, ebp
// 00882898  41                   inc ecx
// 00882899  89542478             mov dword ptr [esp + 0x78], edx
// 0088289d  89542428             mov dword ptr [esp + 0x28], edx
// 008828a1  48                   dec eax
// 008828a2  898c24b4000000       mov dword ptr [esp + 0xb4], ecx
// 008828a9  894c242c             mov dword ptr [esp + 0x2c], ecx
// 008828ad  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008828b1  8d9424ac000000       lea edx, [esp + 0xac]
// 008828b8  52                   push edx
// 008828b9  898424b0000000       mov dword ptr [esp + 0xb0], eax
// 008828c0  89442428             mov dword ptr [esp + 0x28], eax
// 008828c4  894c2434             mov dword ptr [esp + 0x34], ecx
// 008828c8  ffd6                 call esi
// 008828ca  85c0                 test eax, eax
// 008828cc  7576                 jne 0x882944
// 008828ce  395c2414             cmp dword ptr [esp + 0x14], ebx
// 008828d2  7470                 je 0x882944
// 008828d4  837c24203e           cmp dword ptr [esp + 0x20], 0x3e
// 008828d9  7569                 jne 0x882944
// 008828db  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008828df  6a02                 push 2
// 008828e1  be01000000           mov esi, 1
// 008828e6  56                   push esi
// 008828e7  8d8424d4000000       lea eax, [esp + 0xd4]
// 008828ee  33db                 xor ebx, ebx
// 008828f0  50                   push eax
// 008828f1  8bee                 mov ebp, esi
// 008828f3  899c24b4000000       mov dword ptr [esp + 0xb4], ebx
// 008828fa  e8c1df0500           call 0x8e08c0
// 008828ff  83ec10               sub esp, 0x10
// 00882902  8bcc                 mov ecx, esp
// 00882904  8931                 mov dword ptr [ecx], esi
// 00882906  895904               mov dword ptr [ecx + 4], ebx
// 00882909  896908               mov dword ptr [ecx + 8], ebp
// 0088290c  83ec10               sub esp, 0x10
// 0088290f  8bd3                 mov edx, ebx
// 00882911  89510c               mov dword ptr [ecx + 0xc], edx
// 00882914  8b10                 mov edx, dword ptr [eax]
// 00882916  8bcc                 mov ecx, esp
// 00882918  8911                 mov dword ptr [ecx], edx
// 0088291a  8b5004               mov edx, dword ptr [eax + 4]
// 0088291d  895104               mov dword ptr [ecx + 4], edx
// 00882920  8b5008               mov edx, dword ptr [eax + 8]
// 00882923  8b400c               mov eax, dword ptr [eax + 0xc]
// 00882926  895108               mov dword ptr [ecx + 8], edx
// 00882929  89410c               mov dword ptr [ecx + 0xc], eax
// 0088292c  8d8c24cc000000       lea ecx, [esp + 0xcc]
// 00882933  51                   push ecx
// 00882934  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00882938  57                   push edi
// 00882939  e852d80500           call 0x8e0190
// 0088293e  8b3568cc9800         mov esi, dword ptr [0x98cc68]
// 00882944  8d54246c             lea edx, [esp + 0x6c]
// 00882948  52                   push edx
// 00882949  ffd6                 call esi
// 0088294b  85c0                 test eax, eax
// 0088294d  0f857a010000         jne 0x882acd
// 00882953  39442414             cmp dword ptr [esp + 0x14], eax
// 00882957  7504                 jne 0x88295d
// 00882959  33ed                 xor ebp, ebp
// 0088295b  eb2e                 jmp 0x88298b
// 0088295d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00882961  83f940               cmp ecx, 0x40
// 00882964  7505                 jne 0x88296b
// 00882966  8d69c3               lea ebp, [ecx - 0x3d]
// 00882969  eb1f                 jmp 0x88298a
// 0088296b  8b442434             mov eax, dword ptr [esp + 0x34]
// 0088296f  83f840               cmp eax, 0x40
// 00882972  7505                 jne 0x882979
// 00882974  8d68c2               lea ebp, [eax - 0x3e]
// 00882977  eb11                 jmp 0x88298a
// 00882979  85c0                 test eax, eax
// 0088297b  7f08                 jg 0x882985
// 0088297d  85c9                 test ecx, ecx
// 0088297f  7f04                 jg 0x882985
// 00882981  33ed                 xor ebp, ebp
// 00882983  eb06                 jmp 0x88298b
// 00882985  bd01000000           mov ebp, 1
// 0088298a  4d                   dec ebp
// 0088298b  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0088298f  685027a000           push 0xa02750
// 00882994  e867c3ffff           call 0x87ed00
// 00882999  8bf0                 mov esi, eax
// 0088299b  85f6                 test esi, esi
// 0088299d  0f84e6080000         je 0x883289
// 008829a3  6a03                 push 3
// 008829a5  55                   push ebp
// 008829a6  8d8424d4000000       lea eax, [esp + 0xd4]
// 008829ad  bb05000000           mov ebx, 5
// 008829b2  50                   push eax
// 008829b3  8bce                 mov ecx, esi
// 008829b5  899c24b4000000       mov dword ptr [esp + 0xb4], ebx
// 008829bc  e8ffde0500           call 0x8e08c0
// 008829c1  83ec10               sub esp, 0x10
// 008829c4  8bcc                 mov ecx, esp
// 008829c6  8919                 mov dword ptr [ecx], ebx
// 008829c8  8bd3                 mov edx, ebx
// 008829ca  895104               mov dword ptr [ecx + 4], edx
// 008829cd  895108               mov dword ptr [ecx + 8], edx
// 008829d0  89510c               mov dword ptr [ecx + 0xc], edx
// 008829d3  8b10                 mov edx, dword ptr [eax]
// 008829d5  83ec10               sub esp, 0x10
// 008829d8  8bcc                 mov ecx, esp
// 008829da  8911                 mov dword ptr [ecx], edx
// 008829dc  8b5004               mov edx, dword ptr [eax + 4]
// 008829df  895104               mov dword ptr [ecx + 4], edx
// 008829e2  8b5008               mov edx, dword ptr [eax + 8]
// 008829e5  8b400c               mov eax, dword ptr [eax + 0xc]
// 008829e8  895108               mov dword ptr [ecx + 8], edx
// 008829eb  89410c               mov dword ptr [ecx + 0xc], eax
// 008829ee  8d8c248c000000       lea ecx, [esp + 0x8c]
// 008829f5  51                   push ecx
// 008829f6  57                   push edi
// 008829f7  8bce                 mov ecx, esi
// 008829f9  e892d70500           call 0x8e0190
// 008829fe  8b542478             mov edx, dword ptr [esp + 0x78]
// 00882a02  2b542470             sub edx, dword ptr [esp + 0x70]
// 00882a06  83fa0a               cmp edx, 0xa
// 00882a09  0f8ebe000000         jle 0x882acd
// 00882a0f  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00882a13  682427a000           push 0xa02724
// 00882a18  e8e3c2ffff           call 0x87ed00
// 00882a1d  8bd8                 mov ebx, eax
// 00882a1f  8d8424c4000000       lea eax, [esp + 0xc4]
// 00882a26  50                   push eax
// 00882a27  8d4c2470             lea ecx, [esp + 0x70]
// 00882a2b  c78424a400000008000000 mov dword ptr [esp + 0xa4], 8
// 00882a36  e8c59fb9ff           call 0x41ca00
// 00882a3b  8b7004               mov esi, dword ptr [eax + 4]
// 00882a3e  8d8c24bc000000       lea ecx, [esp + 0xbc]
// 00882a45  51                   push ecx
// 00882a46  8d4c2470             lea ecx, [esp + 0x70]
// 00882a4a  83ee04               sub esi, 4
// 00882a4d  e8ae9fb9ff           call 0x41ca00
// 00882a52  8b9424a0000000       mov edx, dword ptr [esp + 0xa0]
// 00882a59  8b00                 mov eax, dword ptr [eax]
// 00882a5b  52                   push edx
// 00882a5c  b908000000           mov ecx, 8
// 00882a61  51                   push ecx
// 00882a62  83e803               sub eax, 3
// 00882a65  56                   push esi
// 00882a66  50                   push eax
// 00882a67  8d8c248c000000       lea ecx, [esp + 0x8c]
// 00882a6e  e80dfcbcff           call 0x452680
// 00882a73  6a03                 push 3
// 00882a75  55                   push ebp
// 00882a76  8d8424d4000000       lea eax, [esp + 0xd4]
// 00882a7d  33f6                 xor esi, esi
// 00882a7f  50                   push eax
// 00882a80  8bcb                 mov ecx, ebx
// 00882a82  89b424b4000000       mov dword ptr [esp + 0xb4], esi
// 00882a89  e832de0500           call 0x8e08c0
// 00882a8e  83ec10               sub esp, 0x10
// 00882a91  8bcc                 mov ecx, esp
// 00882a93  8931                 mov dword ptr [ecx], esi
// 00882a95  33d2                 xor edx, edx
// 00882a97  895104               mov dword ptr [ecx + 4], edx
// 00882a9a  895108               mov dword ptr [ecx + 8], edx
// 00882a9d  83ec10               sub esp, 0x10
// 00882aa0  8bd6                 mov edx, esi
// 00882aa2  89510c               mov dword ptr [ecx + 0xc], edx
// 00882aa5  8b10                 mov edx, dword ptr [eax]
// 00882aa7  8bcc                 mov ecx, esp
// 00882aa9  8911                 mov dword ptr [ecx], edx
// 00882aab  8b5004               mov edx, dword ptr [eax + 4]
// 00882aae  895104               mov dword ptr [ecx + 4], edx
// 00882ab1  8b5008               mov edx, dword ptr [eax + 8]
// 00882ab4  8b400c               mov eax, dword ptr [eax + 0xc]
// 00882ab7  895108               mov dword ptr [ecx + 8], edx
// 00882aba  89410c               mov dword ptr [ecx + 0xc], eax
// 00882abd  8d8c249c000000       lea ecx, [esp + 0x9c]
// 00882ac4  51                   push ecx
// 00882ac5  57                   push edi
// 00882ac6  8bcb                 mov ecx, ebx
// 00882ac8  e8c3d60500           call 0x8e0190
// 00882acd  8d542424             lea edx, [esp + 0x24]
// 00882ad1  52                   push edx
// 00882ad2  ff1568cc9800         call dword ptr [0x98cc68]
// 00882ad8  85c0                 test eax, eax
// 00882ada  0f85a9070000         jne 0x883289
// 00882ae0  33db                 xor ebx, ebx
// 00882ae2  395c2414             cmp dword ptr [esp + 0x14], ebx
// 00882ae6  0f849d070000         je 0x883289
// 00882aec  837c24203f           cmp dword ptr [esp + 0x20], 0x3f
// 00882af1  0f8592070000         jne 0x883289
// 00882af7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00882afb  6a02                 push 2
// 00882afd  be01000000           mov esi, 1
// 00882b02  56                   push esi
// 00882b03  8d8424d4000000       lea eax, [esp + 0xd4]
// 00882b0a  50                   push eax
// 00882b0b  8bee                 mov ebp, esi
// 00882b0d  899c2494000000       mov dword ptr [esp + 0x94], ebx
// 00882b14  e8a7dd0500           call 0x8e08c0
// 00882b19  83ec10               sub esp, 0x10
// 00882b1c  8bcc                 mov ecx, esp
// 00882b1e  8931                 mov dword ptr [ecx], esi
// 00882b20  895904               mov dword ptr [ecx + 4], ebx
// 00882b23  896908               mov dword ptr [ecx + 8], ebp
// 00882b26  8bd3                 mov edx, ebx
// 00882b28  89510c               mov dword ptr [ecx + 0xc], edx
// 00882b2b  8b10                 mov edx, dword ptr [eax]
// 00882b2d  83ec10               sub esp, 0x10
// 00882b30  8bcc                 mov ecx, esp
// 00882b32  8911                 mov dword ptr [ecx], edx
// 00882b34  8b5004               mov edx, dword ptr [eax + 4]
// 00882b37  895104               mov dword ptr [ecx + 4], edx
// 00882b3a  8b5008               mov edx, dword ptr [eax + 8]
// 00882b3d  8b400c               mov eax, dword ptr [eax + 0xc]
// 00882b40  895108               mov dword ptr [ecx + 8], edx
// 00882b43  89410c               mov dword ptr [ecx + 0xc], eax
// 00882b46  8d4c2444             lea ecx, [esp + 0x44]
// 00882b4a  e92f070000           jmp 0x88327e
// 00882b4f  b80027a000           mov eax, 0xa02700
// 00882b54  3beb                 cmp ebp, ebx
// 00882b56  7505                 jne 0x882b5d
// 00882b58  b8dc26a000           mov eax, 0xa026dc
// 00882b5d  50                   push eax
// 00882b5e  8bcf                 mov ecx, edi
// 00882b60  e89bc1ffff           call 0x87ed00
// 00882b65  89442418             mov dword ptr [esp + 0x18], eax
// 00882b69  3bc3                 cmp eax, ebx
// 00882b6b  751f                 jne 0x882b8c
// 00882b6d  8b942400010000       mov edx, dword ptr [esp + 0x100]
// 00882b74  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00882b78  56                   push esi
// 00882b79  52                   push edx
// 00882b7a  e87165ffff           call 0x8790f0
// 00882b7f  5f                   pop edi
// 00882b80  5e                   pop esi
// 00882b81  5d                   pop ebp
// 00882b82  5b                   pop ebx
// 00882b83  81c4ec000000         add esp, 0xec
// 00882b89  c20800               ret 8
// 00882b8c  8b2d64cc9800         mov ebp, dword ptr [0x98cc64]
// 00882b92  8d5e48               lea ebx, [esi + 0x48]
// 00882b95  53                   push ebx
// 00882b96  8d8424e0000000       lea eax, [esp + 0xe0]
// 00882b9d  50                   push eax
// 00882b9e  ffd5                 call ebp
// 00882ba0  6a02                 push 2
// 00882ba2  33ff                 xor edi, edi
// 00882ba4  57                   push edi
// 00882ba5  8d4c242c             lea ecx, [esp + 0x2c]
// 00882ba9  51                   push ecx
// 00882baa  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00882bae  c784249400000001000000 mov dword ptr [esp + 0x94], 1
// 00882bb9  e802dd0500           call 0x8e08c0
// 00882bbe  83ec10               sub esp, 0x10
// 00882bc1  8bcc                 mov ecx, esp
// 00882bc3  8939                 mov dword ptr [ecx], edi
// 00882bc5  8bbc2410010000       mov edi, dword ptr [esp + 0x110]
// 00882bcc  ba01000000           mov edx, 1
// 00882bd1  895104               mov dword ptr [ecx + 4], edx
// 00882bd4  33d2                 xor edx, edx
// 00882bd6  895108               mov dword ptr [ecx + 8], edx
// 00882bd9  8b942498000000       mov edx, dword ptr [esp + 0x98]
// 00882be0  89510c               mov dword ptr [ecx + 0xc], edx
// 00882be3  8b10                 mov edx, dword ptr [eax]
// 00882be5  83ec10               sub esp, 0x10
// 00882be8  8bcc                 mov ecx, esp
// 00882bea  8911                 mov dword ptr [ecx], edx
// 00882bec  8b5004               mov edx, dword ptr [eax + 4]
// 00882bef  895104               mov dword ptr [ecx + 4], edx
// 00882bf2  8b5008               mov edx, dword ptr [eax + 8]
// 00882bf5  8b400c               mov eax, dword ptr [eax + 0xc]
// 00882bf8  895108               mov dword ptr [ecx + 8], edx
// 00882bfb  89410c               mov dword ptr [ecx + 0xc], eax
// 00882bfe  8d8c24fc000000       lea ecx, [esp + 0xfc]
// 00882c05  51                   push ecx
// 00882c06  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00882c0a  57                   push edi
// 00882c0b  e880d50500           call 0x8e0190
// 00882c10  53                   push ebx
// 00882c11  8d942490000000       lea edx, [esp + 0x90]
// 00882c18  52                   push edx
// 00882c19  ffd5                 call ebp
// 00882c1b  6aff                 push -1
// 00882c1d  6a00                 push 0
// 00882c1f  8d842494000000       lea eax, [esp + 0x94]
// 00882c26  50                   push eax
// 00882c27  ff1558ca9800         call dword ptr [0x98ca58]
// 00882c2d  837c241000           cmp dword ptr [esp + 0x10], 0
// 00882c32  8b842490000000       mov eax, dword ptr [esp + 0x90]
// 00882c39  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 00882c40  8b5628               mov edx, dword ptr [esi + 0x28]
// 00882c43  89442470             mov dword ptr [esp + 0x70], eax
// 00882c47  89442460             mov dword ptr [esp + 0x60], eax
// 00882c4b  8b842494000000       mov eax, dword ptr [esp + 0x94]
// 00882c52  894c246c             mov dword ptr [esp + 0x6c], ecx
// 00882c56  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 00882c5d  89542474             mov dword ptr [esp + 0x74], edx
// 00882c61  8b562c               mov edx, dword ptr [esi + 0x2c]
// 00882c64  89442464             mov dword ptr [esp + 0x64], eax
// 00882c68  894c2478             mov dword ptr [esp + 0x78], ecx
// 00882c6c  8954245c             mov dword ptr [esp + 0x5c], edx
// 00882c70  894c2468             mov dword ptr [esp + 0x68], ecx
// 00882c74  b8b026a000           mov eax, 0xa026b0
// 00882c79  7505                 jne 0x882c80
// 00882c7b  b88426a000           mov eax, 0xa02684
// 00882c80  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00882c84  50                   push eax
// 00882c85  e876c0ffff           call 0x87ed00
// 00882c8a  33f6                 xor esi, esi
// 00882c8c  8944241c             mov dword ptr [esp + 0x1c], eax
// 00882c90  3bc6                 cmp eax, esi
// 00882c92  0f84f1050000         je 0x883289
// 00882c98  39742414             cmp dword ptr [esp + 0x14], esi
// 00882c9c  7509                 jne 0x882ca7
// 00882c9e  89742410             mov dword ptr [esp + 0x10], esi
// 00882ca2  e99a000000           jmp 0x882d41
// 00882ca7  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00882cab  83f93c               cmp ecx, 0x3c
// 00882cae  750a                 jne 0x882cba
// 00882cb0  c744241003000000     mov dword ptr [esp + 0x10], 3
// 00882cb8  eb29                 jmp 0x882ce3
// 00882cba  8b442434             mov eax, dword ptr [esp + 0x34]
// 00882cbe  83f83c               cmp eax, 0x3c
// 00882cc1  750a                 jne 0x882ccd
// 00882cc3  c744241002000000     mov dword ptr [esp + 0x10], 2
// 00882ccb  eb16                 jmp 0x882ce3
// 00882ccd  3bc6                 cmp eax, esi
// 00882ccf  7f0a                 jg 0x882cdb
// 00882cd1  3bce                 cmp ecx, esi
// 00882cd3  7f06                 jg 0x882cdb
// 00882cd5  89742410             mov dword ptr [esp + 0x10], esi
// 00882cd9  eb66                 jmp 0x882d41
// 00882cdb  c744241001000000     mov dword ptr [esp + 0x10], 1
// 00882ce3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00882ce7  6a04                 push 4
// 00882ce9  51                   push ecx
// 00882cea  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00882cee  8d942484000000       lea edx, [esp + 0x84]
// 00882cf5  bb03000000           mov ebx, 3
// 00882cfa  52                   push edx
// 00882cfb  8beb                 mov ebp, ebx
// 00882cfd  e8bedb0500           call 0x8e08c0
// 00882d02  83ec10               sub esp, 0x10
// 00882d05  8bcc                 mov ecx, esp
// 00882d07  8919                 mov dword ptr [ecx], ebx
// 00882d09  896904               mov dword ptr [ecx + 4], ebp
// 00882d0c  8bd3                 mov edx, ebx
// 00882d0e  895108               mov dword ptr [ecx + 8], edx
// 00882d11  89510c               mov dword ptr [ecx + 0xc], edx
// 00882d14  8b10                 mov edx, dword ptr [eax]
// 00882d16  83ec10               sub esp, 0x10
// 00882d19  8bcc                 mov ecx, esp
// 00882d1b  8911                 mov dword ptr [ecx], edx
// 00882d1d  8b5004               mov edx, dword ptr [eax + 4]
// 00882d20  895104               mov dword ptr [ecx + 4], edx
// 00882d23  8b5008               mov edx, dword ptr [eax + 8]
// 00882d26  8b400c               mov eax, dword ptr [eax + 0xc]
// 00882d29  895108               mov dword ptr [ecx + 8], edx
// 00882d2c  89410c               mov dword ptr [ecx + 0xc], eax
// 00882d2f  8d8c248c000000       lea ecx, [esp + 0x8c]
// 00882d36  51                   push ecx
// 00882d37  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00882d3b  57                   push edi
// 00882d3c  e84fd40500           call 0x8e0190
// 00882d41  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 00882d45  8b442474             mov eax, dword ptr [esp + 0x74]
// 00882d49  8d4410f7             lea eax, [eax + edx - 9]
// 00882d4d  99                   cdq 
// 00882d4e  2bc2                 sub eax, edx
// 00882d50  8b542470             mov edx, dword ptr [esp + 0x70]
// 00882d54  8bc8                 mov ecx, eax
// 00882d56  8b442478             mov eax, dword ptr [esp + 0x78]
// 00882d5a  8d4410f7             lea eax, [eax + edx - 9]
// 00882d5e  bb09000000           mov ebx, 9
// 00882d63  99                   cdq 
// 00882d64  8beb                 mov ebp, ebx
// 00882d66  55                   push ebp
// 00882d67  2bc2                 sub eax, edx
// 00882d69  53                   push ebx
// 00882d6a  d1f8                 sar eax, 1
// 00882d6c  d1f9                 sar ecx, 1
// 00882d6e  50                   push eax
// 00882d6f  51                   push ecx
// 00882d70  8d8c24fc000000       lea ecx, [esp + 0xfc]
// 00882d77  e804f9bcff           call 0x452680
// 00882d7c  39742414             cmp dword ptr [esp + 0x14], esi
// 00882d80  7505                 jne 0x882d87
// 00882d82  8d4303               lea eax, [ebx + 3]
// 00882d85  eb0c                 jmp 0x882d93
// 00882d87  33c0                 xor eax, eax
// 00882d89  39742410             cmp dword ptr [esp + 0x10], esi
// 00882d8d  0f95c0               setne al
// 00882d90  83c009               add eax, 9
// 00882d93  50                   push eax
// 00882d94  33c9                 xor ecx, ecx
// 00882d96  83ec10               sub esp, 0x10
// 00882d99  8bc4                 mov eax, esp
// 00882d9b  8908                 mov dword ptr [eax], ecx
// 00882d9d  894804               mov dword ptr [eax + 4], ecx
// 00882da0  8bcb                 mov ecx, ebx
// 00882da2  894808               mov dword ptr [eax + 8], ecx
// 00882da5  89480c               mov dword ptr [eax + 0xc], ecx
// 00882da8  8d8c2490000000       lea ecx, [esp + 0x90]
// 00882daf  51                   push ecx
// 00882db0  8974243c             mov dword ptr [esp + 0x3c], esi
// 00882db4  89742440             mov dword ptr [esp + 0x40], esi
// 00882db8  89742444             mov dword ptr [esp + 0x44], esi
// 00882dbc  89742448             mov dword ptr [esp + 0x48], esi
// 00882dc0  e80bf5ffff           call 0x8822d0
// 00882dc5  83c418               add esp, 0x18
// 00882dc8  68ff00ff00           push 0xff00ff
// 00882dcd  8d542428             lea edx, [esp + 0x28]
// 00882dd1  52                   push edx
// 00882dd2  8b10                 mov edx, dword ptr [eax]
// 00882dd4  83ec10               sub esp, 0x10
// 00882dd7  8bcc                 mov ecx, esp
// 00882dd9  8911                 mov dword ptr [ecx], edx
// 00882ddb  8b5004               mov edx, dword ptr [eax + 4]
// 00882dde  895104               mov dword ptr [ecx + 4], edx
// 00882de1  8b5008               mov edx, dword ptr [eax + 8]
// 00882de4  8b400c               mov eax, dword ptr [eax + 0xc]
// 00882de7  895108               mov dword ptr [ecx + 8], edx
// 00882dea  89410c               mov dword ptr [ecx + 0xc], eax
// 00882ded  8d8c2404010000       lea ecx, [esp + 0x104]
// 00882df4  51                   push ecx
// 00882df5  8b8c24d8000000       mov ecx, dword ptr [esp + 0xd8]
// 00882dfc  57                   push edi
// 00882dfd  e8fedf0500           call 0x8e0e00
// 00882e02  39742414             cmp dword ptr [esp + 0x14], esi
// 00882e06  7509                 jne 0x882e11
// 00882e08  89742410             mov dword ptr [esp + 0x10], esi
// 00882e0c  e9a2000000           jmp 0x882eb3
// 00882e11  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00882e15  83f93d               cmp ecx, 0x3d
// 00882e18  750a                 jne 0x882e24
// 00882e1a  c744241003000000     mov dword ptr [esp + 0x10], 3
// 00882e22  eb29                 jmp 0x882e4d
// 00882e24  8b442434             mov eax, dword ptr [esp + 0x34]
// 00882e28  83f83d               cmp eax, 0x3d
// 00882e2b  750a                 jne 0x882e37
// 00882e2d  c744241002000000     mov dword ptr [esp + 0x10], 2
// 00882e35  eb16                 jmp 0x882e4d
// 00882e37  3bc6                 cmp eax, esi
// 00882e39  7f0a                 jg 0x882e45
// 00882e3b  3bce                 cmp ecx, esi
// 00882e3d  7f06                 jg 0x882e45
// 00882e3f  89742410             mov dword ptr [esp + 0x10], esi
// 00882e43  eb6e                 jmp 0x882eb3
// 00882e45  c744241001000000     mov dword ptr [esp + 0x10], 1
// 00882e4d  8b542410             mov edx, dword ptr [esp + 0x10]
// 00882e51  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00882e55  6a04                 push 4
// 00882e57  bd03000000           mov ebp, 3
// 00882e5c  52                   push edx
// 00882e5d  8d8424e4000000       lea eax, [esp + 0xe4]
// 00882e64  50                   push eax
// 00882e65  8bdd                 mov ebx, ebp
// 00882e67  8bf5                 mov esi, ebp
// 00882e69  89ac2494000000       mov dword ptr [esp + 0x94], ebp
// 00882e70  e84bda0500           call 0x8e08c0
// 00882e75  83ec10               sub esp, 0x10
// 00882e78  8bcc                 mov ecx, esp
// 00882e7a  8919                 mov dword ptr [ecx], ebx
// 00882e7c  897104               mov dword ptr [ecx + 4], esi
// 00882e7f  896908               mov dword ptr [ecx + 8], ebp
// 00882e82  83ec10               sub esp, 0x10
// 00882e85  8bd5                 mov edx, ebp
// 00882e87  89510c               mov dword ptr [ecx + 0xc], edx
// 00882e8a  8b10                 mov edx, dword ptr [eax]
// 00882e8c  8bcc                 mov ecx, esp
// 00882e8e  8911                 mov dword ptr [ecx], edx
// 00882e90  8b5004               mov edx, dword ptr [eax + 4]
// 00882e93  895104               mov dword ptr [ecx + 4], edx
// 00882e96  8b5008               mov edx, dword ptr [eax + 8]
// 00882e99  8b400c               mov eax, dword ptr [eax + 0xc]
// 00882e9c  895108               mov dword ptr [ecx + 8], edx
// 00882e9f  89410c               mov dword ptr [ecx + 0xc], eax
// 00882ea2  8d4c247c             lea ecx, [esp + 0x7c]
// 00882ea6  51                   push ecx
// 00882ea7  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00882eab  57                   push edi
// 00882eac  e8dfd20500           call 0x8e0190
// 00882eb1  33f6                 xor esi, esi
// 00882eb3  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 00882eb7  8b442464             mov eax, dword ptr [esp + 0x64]
// 00882ebb  8d4410f7             lea eax, [eax + edx - 9]
// 00882ebf  99                   cdq 
// 00882ec0  2bc2                 sub eax, edx
// 00882ec2  8b542460             mov edx, dword ptr [esp + 0x60]
// 00882ec6  8bc8                 mov ecx, eax
// 00882ec8  8b442468             mov eax, dword ptr [esp + 0x68]
// 00882ecc  8d4410f7             lea eax, [eax + edx - 9]
// 00882ed0  bb09000000           mov ebx, 9
// 00882ed5  99                   cdq 
// 00882ed6  8beb                 mov ebp, ebx
// 00882ed8  55                   push ebp
// 00882ed9  2bc2                 sub eax, edx
// 00882edb  53                   push ebx
// 00882edc  d1f8                 sar eax, 1
// 00882ede  d1f9                 sar ecx, 1
// 00882ee0  50                   push eax
// 00882ee1  51                   push ecx
// 00882ee2  8d8c24dc000000       lea ecx, [esp + 0xdc]
// 00882ee9  e892f7bcff           call 0x452680
// 00882eee  39742414             cmp dword ptr [esp + 0x14], esi
// 00882ef2  7505                 jne 0x882ef9
// 00882ef4  8d4307               lea eax, [ebx + 7]
// 00882ef7  eb0c                 jmp 0x882f05
// 00882ef9  33c0                 xor eax, eax
// 00882efb  39742410             cmp dword ptr [esp + 0x10], esi
// 00882eff  0f95c0               setne al
// 00882f02  83c00d               add eax, 0xd
// 00882f05  50                   push eax
// 00882f06  33c9                 xor ecx, ecx
// 00882f08  83ec10               sub esp, 0x10
// 00882f0b  8bc4                 mov eax, esp
// 00882f0d  8908                 mov dword ptr [eax], ecx
// 00882f0f  894804               mov dword ptr [eax + 4], ecx
// 00882f12  8bcb                 mov ecx, ebx
// 00882f14  894808               mov dword ptr [eax + 8], ecx
// 00882f17  89480c               mov dword ptr [eax + 0xc], ecx
// 00882f1a  8d8c2490000000       lea ecx, [esp + 0x90]
// 00882f21  51                   push ecx
// 00882f22  8974243c             mov dword ptr [esp + 0x3c], esi
// 00882f26  89742440             mov dword ptr [esp + 0x40], esi
// 00882f2a  89742444             mov dword ptr [esp + 0x44], esi
// 00882f2e  89742448             mov dword ptr [esp + 0x48], esi
// 00882f32  e899f3ffff           call 0x8822d0
// 00882f37  83c418               add esp, 0x18
// 00882f3a  68ff00ff00           push 0xff00ff
// 00882f3f  8d542428             lea edx, [esp + 0x28]
// 00882f43  52                   push edx
// 00882f44  8b10                 mov edx, dword ptr [eax]
// 00882f46  83ec10               sub esp, 0x10
// 00882f49  8bcc                 mov ecx, esp
// 00882f4b  8911                 mov dword ptr [ecx], edx
// 00882f4d  8b5004               mov edx, dword ptr [eax + 4]
// 00882f50  895104               mov dword ptr [ecx + 4], edx
// 00882f53  8b5008               mov edx, dword ptr [eax + 8]
// 00882f56  8b400c               mov eax, dword ptr [eax + 0xc]
// 00882f59  895108               mov dword ptr [ecx + 8], edx
// 00882f5c  89410c               mov dword ptr [ecx + 0xc], eax
// 00882f5f  8d8c24e4000000       lea ecx, [esp + 0xe4]
// 00882f66  51                   push ecx
// 00882f67  8b8c24d8000000       mov ecx, dword ptr [esp + 0xd8]
// 00882f6e  57                   push edi
// 00882f6f  e88cde0500           call 0x8e0e00
// 00882f74  8b842490000000       mov eax, dword ptr [esp + 0x90]
// 00882f7b  8b542474             mov edx, dword ptr [esp + 0x74]
// 00882f7f  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00882f83  8b1d68cc9800         mov ebx, dword ptr [0x98cc68]
// 00882f89  89442450             mov dword ptr [esp + 0x50], eax
// 00882f8d  8954244c             mov dword ptr [esp + 0x4c], edx
// 00882f91  8b942498000000       mov edx, dword ptr [esp + 0x98]
// 00882f98  8d44244c             lea eax, [esp + 0x4c]
// 00882f9c  50                   push eax
// 00882f9d  894c2458             mov dword ptr [esp + 0x58], ecx
// 00882fa1  8954245c             mov dword ptr [esp + 0x5c], edx
// 00882fa5  ffd3                 call ebx
// 00882fa7  85c0                 test eax, eax
// 00882fa9  0f85da020000         jne 0x883289
// 00882faf  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00882fb3  8b6c2450             mov ebp, dword ptr [esp + 0x50]
// 00882fb7  8b9424c4000000       mov edx, dword ptr [esp + 0xc4]
// 00882fbe  894c2424             mov dword ptr [esp + 0x24], ecx
// 00882fc2  03ca                 add ecx, edx
// 00882fc4  8b542458             mov edx, dword ptr [esp + 0x58]
// 00882fc8  8d45ff               lea eax, [ebp - 1]
// 00882fcb  896c2440             mov dword ptr [esp + 0x40], ebp
// 00882fcf  8bac249c000000       mov ebp, dword ptr [esp + 0x9c]
// 00882fd6  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00882fda  894c243c             mov dword ptr [esp + 0x3c], ecx
// 00882fde  03cd                 add ecx, ebp
// 00882fe0  8b6c2458             mov ebp, dword ptr [esp + 0x58]
// 00882fe4  894c2444             mov dword ptr [esp + 0x44], ecx
// 00882fe8  898c24ac000000       mov dword ptr [esp + 0xac], ecx
// 00882fef  89442428             mov dword ptr [esp + 0x28], eax
// 00882ff3  42                   inc edx
// 00882ff4  898424b0000000       mov dword ptr [esp + 0xb0], eax
// 00882ffb  8b442454             mov eax, dword ptr [esp + 0x54]
// 00882fff  8d4c2424             lea ecx, [esp + 0x24]
// 00883003  51                   push ecx
// 00883004  89542434             mov dword ptr [esp + 0x34], edx
// 00883008  896c244c             mov dword ptr [esp + 0x4c], ebp
// 0088300c  898424b8000000       mov dword ptr [esp + 0xb8], eax
// 00883013  899424bc000000       mov dword ptr [esp + 0xbc], edx
// 0088301a  ffd3                 call ebx
// 0088301c  85c0                 test eax, eax
// 0088301e  756a                 jne 0x88308a
// 00883020  39742414             cmp dword ptr [esp + 0x14], esi
// 00883024  7464                 je 0x88308a
// 00883026  837c24203e           cmp dword ptr [esp + 0x20], 0x3e
// 0088302b  755d                 jne 0x88308a
// 0088302d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00883031  6a02                 push 2
// 00883033  8d5801               lea ebx, [eax + 1]
// 00883036  53                   push ebx
// 00883037  8d942484000000       lea edx, [esp + 0x84]
// 0088303e  52                   push edx
// 0088303f  33f6                 xor esi, esi
// 00883041  33ed                 xor ebp, ebp
// 00883043  e878d80500           call 0x8e08c0
// 00883048  83ec10               sub esp, 0x10
// 0088304b  8bcc                 mov ecx, esp
// 0088304d  8931                 mov dword ptr [ecx], esi
// 0088304f  895904               mov dword ptr [ecx + 4], ebx
// 00883052  896908               mov dword ptr [ecx + 8], ebp
// 00883055  83ec10               sub esp, 0x10
// 00883058  8bd3                 mov edx, ebx
// 0088305a  89510c               mov dword ptr [ecx + 0xc], edx
// 0088305d  8b10                 mov edx, dword ptr [eax]
// 0088305f  8bcc                 mov ecx, esp
// 00883061  8911                 mov dword ptr [ecx], edx
// 00883063  8b5004               mov edx, dword ptr [eax + 4]
// 00883066  895104               mov dword ptr [ecx + 4], edx
// 00883069  8b5008               mov edx, dword ptr [eax + 8]
// 0088306c  8b400c               mov eax, dword ptr [eax + 0xc]
// 0088306f  895108               mov dword ptr [ecx + 8], edx
// 00883072  89410c               mov dword ptr [ecx + 0xc], eax
// 00883075  8d4c2444             lea ecx, [esp + 0x44]
// 00883079  51                   push ecx
// 0088307a  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0088307e  57                   push edi
// 0088307f  e80cd10500           call 0x8e0190
// 00883084  8b1d68cc9800         mov ebx, dword ptr [0x98cc68]
// 0088308a  8d54243c             lea edx, [esp + 0x3c]
// 0088308e  52                   push edx
// 0088308f  ffd3                 call ebx
// 00883091  85c0                 test eax, eax
// 00883093  0f8577010000         jne 0x883210
// 00883099  39442414             cmp dword ptr [esp + 0x14], eax
// 0088309d  7504                 jne 0x8830a3
// 0088309f  33ed                 xor ebp, ebp
// 008830a1  eb2e                 jmp 0x8830d1
// 008830a3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008830a7  83f940               cmp ecx, 0x40
// 008830aa  7505                 jne 0x8830b1
// 008830ac  8d69c3               lea ebp, [ecx - 0x3d]
// 008830af  eb1f                 jmp 0x8830d0
// 008830b1  8b442434             mov eax, dword ptr [esp + 0x34]
// 008830b5  83f840               cmp eax, 0x40
// 008830b8  7505                 jne 0x8830bf
// 008830ba  8d68c2               lea ebp, [eax - 0x3e]
// 008830bd  eb11                 jmp 0x8830d0
// 008830bf  85c0                 test eax, eax
// 008830c1  7f08                 jg 0x8830cb
// 008830c3  85c9                 test ecx, ecx
// 008830c5  7f04                 jg 0x8830cb
// 008830c7  33ed                 xor ebp, ebp
// 008830c9  eb06                 jmp 0x8830d1
// 008830cb  bd01000000           mov ebp, 1
// 008830d0  4d                   dec ebp
// 008830d1  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008830d5  686026a000           push 0xa02660
// 008830da  e821bcffff           call 0x87ed00
// 008830df  8bf0                 mov esi, eax
// 008830e1  85f6                 test esi, esi
// 008830e3  0f84a0010000         je 0x883289
// 008830e9  6a03                 push 3
// 008830eb  55                   push ebp
// 008830ec  8d8424e4000000       lea eax, [esp + 0xe4]
// 008830f3  bb05000000           mov ebx, 5
// 008830f8  50                   push eax
// 008830f9  8bce                 mov ecx, esi
// 008830fb  899c2494000000       mov dword ptr [esp + 0x94], ebx
// 00883102  e8b9d70500           call 0x8e08c0
// 00883107  83ec10               sub esp, 0x10
// 0088310a  8bcc                 mov ecx, esp
// 0088310c  8919                 mov dword ptr [ecx], ebx
// 0088310e  8bd3                 mov edx, ebx
// 00883110  895104               mov dword ptr [ecx + 4], edx
// 00883113  895108               mov dword ptr [ecx + 8], edx
// 00883116  89510c               mov dword ptr [ecx + 0xc], edx
// 00883119  8b10                 mov edx, dword ptr [eax]
// 0088311b  83ec10               sub esp, 0x10
// 0088311e  8bcc                 mov ecx, esp
// 00883120  8911                 mov dword ptr [ecx], edx
// 00883122  8b5004               mov edx, dword ptr [eax + 4]
// 00883125  895104               mov dword ptr [ecx + 4], edx
// 00883128  8b5008               mov edx, dword ptr [eax + 8]
// 0088312b  8b400c               mov eax, dword ptr [eax + 0xc]
// 0088312e  895108               mov dword ptr [ecx + 8], edx
// 00883131  89410c               mov dword ptr [ecx + 0xc], eax
// 00883134  8d4c245c             lea ecx, [esp + 0x5c]
// 00883138  51                   push ecx
// 00883139  57                   push edi
// 0088313a  8bce                 mov ecx, esi
// 0088313c  e84fd00500           call 0x8e0190
// 00883141  8b542444             mov edx, dword ptr [esp + 0x44]
// 00883145  2b54243c             sub edx, dword ptr [esp + 0x3c]
// 00883149  83fa0a               cmp edx, 0xa
// 0088314c  0f8ebe000000         jle 0x883210
// 00883152  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00883156  683426a000           push 0xa02634
// 0088315b  e8a0bbffff           call 0x87ed00
// 00883160  8bd8                 mov ebx, eax
// 00883162  8d8424c4000000       lea eax, [esp + 0xc4]
// 00883169  50                   push eax
// 0088316a  8d4c2440             lea ecx, [esp + 0x40]
// 0088316e  c78424a400000008000000 mov dword ptr [esp + 0xa4], 8
// 00883179  e88298b9ff           call 0x41ca00
// 0088317e  8b7004               mov esi, dword ptr [eax + 4]
// 00883181  8d8c24bc000000       lea ecx, [esp + 0xbc]
// 00883188  51                   push ecx
// 00883189  8d4c2440             lea ecx, [esp + 0x40]
// 0088318d  83ee04               sub esi, 4
// 00883190  e86b98b9ff           call 0x41ca00
// 00883195  8b9424a0000000       mov edx, dword ptr [esp + 0xa0]
// 0088319c  8b00                 mov eax, dword ptr [eax]
// 0088319e  52                   push edx
// 0088319f  b908000000           mov ecx, 8
// 008831a4  51                   push ecx
// 008831a5  83e803               sub eax, 3
// 008831a8  56                   push esi
// 008831a9  50                   push eax
// 008831aa  8d8c24ec000000       lea ecx, [esp + 0xec]
// 008831b1  e8caf4bcff           call 0x452680
// 008831b6  6a03                 push 3
// 008831b8  55                   push ebp
// 008831b9  8d8424a4000000       lea eax, [esp + 0xa4]
// 008831c0  33f6                 xor esi, esi
// 008831c2  50                   push eax
// 008831c3  8bcb                 mov ecx, ebx
// 008831c5  89b42494000000       mov dword ptr [esp + 0x94], esi
// 008831cc  e8efd60500           call 0x8e08c0
// 008831d1  83ec10               sub esp, 0x10
// 008831d4  8bcc                 mov ecx, esp
// 008831d6  8931                 mov dword ptr [ecx], esi
// 008831d8  33d2                 xor edx, edx
// 008831da  895104               mov dword ptr [ecx + 4], edx
// 008831dd  895108               mov dword ptr [ecx + 8], edx
// 008831e0  83ec10               sub esp, 0x10
// 008831e3  8bd6                 mov edx, esi
// 008831e5  89510c               mov dword ptr [ecx + 0xc], edx
// 008831e8  8b10                 mov edx, dword ptr [eax]
// 008831ea  8bcc                 mov ecx, esp
// 008831ec  8911                 mov dword ptr [ecx], edx
// 008831ee  8b5004               mov edx, dword ptr [eax + 4]
// 008831f1  895104               mov dword ptr [ecx + 4], edx
// 008831f4  8b5008               mov edx, dword ptr [eax + 8]
// 008831f7  8b400c               mov eax, dword ptr [eax + 0xc]
// 008831fa  895108               mov dword ptr [ecx + 8], edx
// 008831fd  89410c               mov dword ptr [ecx + 0xc], eax
// 00883200  8d8c24fc000000       lea ecx, [esp + 0xfc]
// 00883207  51                   push ecx
// 00883208  57                   push edi
// 00883209  8bcb                 mov ecx, ebx
// 0088320b  e880cf0500           call 0x8e0190
// 00883210  8d9424ac000000       lea edx, [esp + 0xac]
// 00883217  52                   push edx
// 00883218  ff1568cc9800         call dword ptr [0x98cc68]
// 0088321e  85c0                 test eax, eax
// 00883220  7567                 jne 0x883289
// 00883222  39442414             cmp dword ptr [esp + 0x14], eax
// 00883226  7461                 je 0x883289
// 00883228  837c24203f           cmp dword ptr [esp + 0x20], 0x3f
// 0088322d  755a                 jne 0x883289
// 0088322f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00883233  8d5801               lea ebx, [eax + 1]
// 00883236  6a02                 push 2
// 00883238  53                   push ebx
// 00883239  8d842484000000       lea eax, [esp + 0x84]
// 00883240  50                   push eax
// 00883241  33f6                 xor esi, esi
// 00883243  33ed                 xor ebp, ebp
// 00883245  e876d60500           call 0x8e08c0
// 0088324a  83ec10               sub esp, 0x10
// 0088324d  8bcc                 mov ecx, esp
// 0088324f  8931                 mov dword ptr [ecx], esi
// 00883251  895904               mov dword ptr [ecx + 4], ebx
// 00883254  896908               mov dword ptr [ecx + 8], ebp
// 00883257  8bd3                 mov edx, ebx
// 00883259  89510c               mov dword ptr [ecx + 0xc], edx
// 0088325c  8b10                 mov edx, dword ptr [eax]
// 0088325e  83ec10               sub esp, 0x10
// 00883261  8bcc                 mov ecx, esp
// 00883263  8911                 mov dword ptr [ecx], edx
// 00883265  8b5004               mov edx, dword ptr [eax + 4]
// 00883268  895104               mov dword ptr [ecx + 4], edx
// 0088326b  8b5008               mov edx, dword ptr [eax + 8]
// 0088326e  8b400c               mov eax, dword ptr [eax + 0xc]
// 00883271  895108               mov dword ptr [ecx + 8], edx
// 00883274  89410c               mov dword ptr [ecx + 0xc], eax
// 00883277  8d8c24cc000000       lea ecx, [esp + 0xcc]
// 0088327e  51                   push ecx
// 0088327f  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00883283  57                   push edi
// 00883284  e807cf0500           call 0x8e0190
// 00883289  5f                   pop edi
// 0088328a  5e                   pop esi
// 0088328b  5d                   pop ebp
// 0088328c  5b                   pop ebx
// 0088328d  81c4ec000000         add esp, 0xec
// 00883293  c20800               ret 8
// copied from an identical function in another client (function ?DrawScrollBar@CXTPControlGalleryOffice2007Theme@@UAEXPAVCDC@@PAVCXTPScrollBase@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPOffice2007Theme.cpp