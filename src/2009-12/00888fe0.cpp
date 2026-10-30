// roc 2009-12 00888fe0  unit: XTPPaintThemes::CXTPOfficeTheme  size: 1491 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00888fe0
//
// 00888fe0  6aff                 push -1
// 00888fe2  68490c9600           push 0x960c49
// 00888fe7  64a100000000         mov eax, dword ptr fs:[0]
// 00888fed  50                   push eax
// 00888fee  83ec58               sub esp, 0x58
// 00888ff1  53                   push ebx
// 00888ff2  55                   push ebp
// 00888ff3  56                   push esi
// 00888ff4  57                   push edi
// 00888ff5  a10052b600           mov eax, dword ptr [0xb65200]
// 00888ffa  33c4                 xor eax, esp
// 00888ffc  50                   push eax
// 00888ffd  8d44246c             lea eax, [esp + 0x6c]
// 00889001  64a300000000         mov dword ptr fs:[0], eax
// 00889007  8bf1                 mov esi, ecx
// 00889009  8b9c2484000000       mov ebx, dword ptr [esp + 0x84]
// 00889010  8b83c0000000         mov eax, dword ptr [ebx + 0xc0]
// 00889016  8b8bc4000000         mov ecx, dword ptr [ebx + 0xc4]
// 0088901c  8bab00010000         mov ebp, dword ptr [ebx + 0x100]
// 00889022  8b93c8000000         mov edx, dword ptr [ebx + 0xc8]
// 00889028  8bbbfc000000         mov edi, dword ptr [ebx + 0xfc]
// 0088902e  8944244c             mov dword ptr [esp + 0x4c], eax
// 00889032  8b83cc000000         mov eax, dword ptr [ebx + 0xcc]
// 00889038  894c2450             mov dword ptr [esp + 0x50], ecx
// 0088903c  8bcb                 mov ecx, ebx
// 0088903e  896c2424             mov dword ptr [esp + 0x24], ebp
// 00889042  89542454             mov dword ptr [esp + 0x54], edx
// 00889046  89442458             mov dword ptr [esp + 0x58], eax
// 0088904a  897c2434             mov dword ptr [esp + 0x34], edi
// 0088904e  e83dccf6ff           call 0x7f5c90
// 00889053  85c0                 test eax, eax
// 00889055  740d                 je 0x889064
// 00889057  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0088905f  83f801               cmp eax, 1
// 00889062  7408                 je 0x88906c
// 00889064  c744243001000000     mov dword ptr [esp + 0x30], 1
// 0088906c  8b13                 mov edx, dword ptr [ebx]
// 0088906e  8b426c               mov eax, dword ptr [edx + 0x6c]
// 00889071  8bcb                 mov ecx, ebx
// 00889073  ffd0                 call eax
// 00889075  89442420             mov dword ptr [esp + 0x20], eax
// 00889079  8b839c000000         mov eax, dword ptr [ebx + 0x9c]
// 0088907f  83f8ff               cmp eax, -1
// 00889082  750f                 jne 0x889093
// 00889084  8b8b5c010000         mov ecx, dword ptr [ebx + 0x15c]
// 0088908a  85c9                 test ecx, ecx
// 0088908c  7405                 je 0x889093
// 0088908e  e81dd5f6ff           call 0x7f65b0
// 00889093  8b8ba0000000         mov ecx, dword ptr [ebx + 0xa0]
// 00889099  89842484000000       mov dword ptr [esp + 0x84], eax
// 008890a0  83f9ff               cmp ecx, -1
// 008890a3  750d                 jne 0x8890b2
// 008890a5  8b835c010000         mov eax, dword ptr [ebx + 0x15c]
// 008890ab  85c0                 test eax, eax
// 008890ad  7403                 je 0x8890b2
// 008890af  8b4838               mov ecx, dword ptr [eax + 0x38]
// 008890b2  894c2418             mov dword ptr [esp + 0x18], ecx
// 008890b6  83ff04               cmp edi, 4
// 008890b9  7514                 jne 0x8890cf
// 008890bb  39bc2484000000       cmp dword ptr [esp + 0x84], edi
// 008890c2  750b                 jne 0x8890cf
// 008890c4  c784248400000000000000 mov dword ptr [esp + 0x84], 0
// 008890cf  8bcd                 mov ecx, ebp
// 008890d1  e8aab6f7ff           call 0x804780
// 008890d6  8b5500               mov edx, dword ptr [ebp]
// 008890d9  8bf8                 mov edi, eax
// 008890db  8b82a0010000         mov eax, dword ptr [edx + 0x1a0]
// 008890e1  8bcd                 mov ecx, ebp
// 008890e3  ffd0                 call eax
// 008890e5  85c0                 test eax, eax
// 008890e7  740c                 je 0x8890f5
// 008890e9  8b8d10020000         mov ecx, dword ptr [ebp + 0x210]
// 008890ef  894c241c             mov dword ptr [esp + 0x1c], ecx
// 008890f3  eb08                 jmp 0x8890fd
// 008890f5  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 008890fd  8b13                 mov edx, dword ptr [ebx]
// 008890ff  8b5258               mov edx, dword ptr [edx + 0x58]
// 00889102  8d442438             lea eax, [esp + 0x38]
// 00889106  50                   push eax
// 00889107  8bcb                 mov ecx, ebx
// 00889109  ffd2                 call edx
// 0088910b  c744247400000000     mov dword ptr [esp + 0x74], 0
// 00889113  85ff                 test edi, edi
// 00889115  7411                 je 0x889128
// 00889117  8b06                 mov eax, dword ptr [esi]
// 00889119  8b9000010000         mov edx, dword ptr [eax + 0x100]
// 0088911f  8d4c2438             lea ecx, [esp + 0x38]
// 00889123  51                   push ecx
// 00889124  8bce                 mov ecx, esi
// 00889126  ffd2                 call edx
// 00889128  53                   push ebx
// 00889129  8d442440             lea eax, [esp + 0x40]
// 0088912d  50                   push eax
// 0088912e  8bce                 mov ecx, esi
// 00889130  e8ab4df7ff           call 0x7fdee0
// 00889135  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00889139  8b8610010000         mov eax, dword ptr [esi + 0x110]
// 0088913f  8b542440             mov edx, dword ptr [esp + 0x40]
// 00889143  83c104               add ecx, 4
// 00889146  83c204               add edx, 4
// 00889149  83c004               add eax, 4
// 0088914c  3bc8                 cmp ecx, eax
// 0088914e  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00889152  89542448             mov dword ptr [esp + 0x48], edx
// 00889156  7e06                 jle 0x88915e
// 00889158  894c2414             mov dword ptr [esp + 0x14], ecx
// 0088915c  eb06                 jmp 0x889164
// 0088915e  89442414             mov dword ptr [esp + 0x14], eax
// 00889162  8bc8                 mov ecx, eax
// 00889164  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 00889169  8d3c09               lea edi, [ecx + ecx]
// 0088916c  7502                 jne 0x889170
// 0088916e  8bf9                 mov edi, ecx
// 00889170  83bbfc00000008       cmp dword ptr [ebx + 0xfc], 8
// 00889177  750b                 jne 0x889184
// 00889179  83be9000000000       cmp dword ptr [esi + 0x90], 0
// 00889180  7502                 jne 0x889184
// 00889182  33ff                 xor edi, edi
// 00889184  83bc248800000000     cmp dword ptr [esp + 0x88], 0
// 0088918c  8bac2480000000       mov ebp, dword ptr [esp + 0x80]
// 00889193  0f84e2030000         je 0x88957b
// 00889199  83bb0401000000       cmp dword ptr [ebx + 0x104], 0
// 008891a0  742b                 je 0x8891cd
// 008891a2  397c244c             cmp dword ptr [esp + 0x4c], edi
// 008891a6  7d25                 jge 0x8891cd
// 008891a8  8b442450             mov eax, dword ptr [esp + 0x50]
// 008891ac  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 008891b0  8b16                 mov edx, dword ptr [esi]
// 008891b2  8b92d8000000         mov edx, dword ptr [edx + 0xd8]
// 008891b8  6a01                 push 1
// 008891ba  2bc8                 sub ecx, eax
// 008891bc  51                   push ecx
// 008891bd  8d4f01               lea ecx, [edi + 1]
// 008891c0  51                   push ecx
// 008891c1  50                   push eax
// 008891c2  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 008891c6  48                   dec eax
// 008891c7  50                   push eax
// 008891c8  55                   push ebp
// 008891c9  8bce                 mov ecx, esi
// 008891cb  ffd2                 call edx
// 008891cd  83bbfc00000008       cmp dword ptr [ebx + 0xfc], 8
// 008891d4  754b                 jne 0x889221
// 008891d6  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008891da  e8d1b1f7ff           call 0x8043b0
// 008891df  85c0                 test eax, eax
// 008891e1  7502                 jne 0x8891e5
// 008891e3  33ff                 xor edi, edi
// 008891e5  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 008891e9  3bc7                 cmp eax, edi
// 008891eb  7e04                 jle 0x8891f1
// 008891ed  33c9                 xor ecx, ecx
// 008891ef  eb03                 jmp 0x8891f4
// 008891f1  8d4f01               lea ecx, [edi + 1]
// 008891f4  8b16                 mov edx, dword ptr [esi]
// 008891f6  8b9220010000         mov edx, dword ptr [edx + 0x120]
// 008891fc  03c8                 add ecx, eax
// 008891fe  83ec10               sub esp, 0x10
// 00889201  8bc4                 mov eax, esp
// 00889203  8908                 mov dword ptr [eax], ecx
// 00889205  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00889209  894804               mov dword ptr [eax + 4], ecx
// 0088920c  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00889210  894808               mov dword ptr [eax + 8], ecx
// 00889213  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 00889217  89480c               mov dword ptr [eax + 0xc], ecx
// 0088921a  55                   push ebp
// 0088921b  8bce                 mov ecx, esi
// 0088921d  ffd2                 call edx
// 0088921f  eb4a                 jmp 0x88926b
// 00889221  8b842484000000       mov eax, dword ptr [esp + 0x84]
// 00889228  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0088922c  6a05                 push 5
// 0088922e  8b16                 mov edx, dword ptr [esi]
// 00889230  6a02                 push 2
// 00889232  8b9284000000         mov edx, dword ptr [edx + 0x84]
// 00889238  6a00                 push 0
// 0088923a  6a00                 push 0
// 0088923c  50                   push eax
// 0088923d  6a00                 push 0
// 0088923f  51                   push ecx
// 00889240  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 00889244  83ec10               sub esp, 0x10
// 00889247  8bc4                 mov eax, esp
// 00889249  8908                 mov dword ptr [eax], ecx
// 0088924b  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 0088924f  894804               mov dword ptr [eax + 4], ecx
// 00889252  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 00889259  894808               mov dword ptr [eax + 8], ecx
// 0088925c  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 00889263  89480c               mov dword ptr [eax + 0xc], ecx
// 00889266  55                   push ebp
// 00889267  8bce                 mov ecx, esi
// 00889269  ffd2                 call edx
// 0088926b  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0088926f  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00889273  8b542414             mov edx, dword ptr [esp + 0x14]
// 00889277  03d0                 add edx, eax
// 00889279  8944245c             mov dword ptr [esp + 0x5c], eax
// 0088927d  8b442458             mov eax, dword ptr [esp + 0x58]
// 00889281  894c2460             mov dword ptr [esp + 0x60], ecx
// 00889285  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00889289  89542464             mov dword ptr [esp + 0x64], edx
// 0088928d  89442468             mov dword ptr [esp + 0x68], eax
// 00889291  e81ab1f7ff           call 0x8043b0
// 00889296  85c0                 test eax, eax
// 00889298  7518                 jne 0x8892b2
// 0088929a  50                   push eax
// 0088929b  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 008892a1  99                   cdq 
// 008892a2  2bc2                 sub eax, edx
// 008892a4  d1f8                 sar eax, 1
// 008892a6  50                   push eax
// 008892a7  8d4c2464             lea ecx, [esp + 0x64]
// 008892ab  51                   push ecx
// 008892ac  ff156ccc9800         call dword ptr [0x98cc6c]
// 008892b2  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008892b6  8b442464             mov eax, dword ptr [esp + 0x64]
// 008892ba  2bc1                 sub eax, ecx
// 008892bc  99                   cdq 
// 008892bd  2bc2                 sub eax, edx
// 008892bf  8bf8                 mov edi, eax
// 008892c1  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008892c5  99                   cdq 
// 008892c6  2bc2                 sub eax, edx
// 008892c8  d1f8                 sar eax, 1
// 008892ca  d1ff                 sar edi, 1
// 008892cc  2bf8                 sub edi, eax
// 008892ce  8b442468             mov eax, dword ptr [esp + 0x68]
// 008892d2  2b442460             sub eax, dword ptr [esp + 0x60]
// 008892d6  03f9                 add edi, ecx
// 008892d8  99                   cdq 
// 008892d9  2bc2                 sub eax, edx
// 008892db  8bc8                 mov ecx, eax
// 008892dd  8b442448             mov eax, dword ptr [esp + 0x48]
// 008892e1  99                   cdq 
// 008892e2  2bc2                 sub eax, edx
// 008892e4  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 008892e8  d1f8                 sar eax, 1
// 008892ea  d1f9                 sar ecx, 1
// 008892ec  2bc8                 sub ecx, eax
// 008892ee  034c2460             add ecx, dword ptr [esp + 0x60]
// 008892f2  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 008892f7  8d0417               lea eax, [edi + edx]
// 008892fa  8b542448             mov edx, dword ptr [esp + 0x48]
// 008892fe  89442454             mov dword ptr [esp + 0x54], eax
// 00889302  8d0411               lea eax, [ecx + edx]
// 00889305  897c2424             mov dword ptr [esp + 0x24], edi
// 00889309  894c2428             mov dword ptr [esp + 0x28], ecx
// 0088930d  89442458             mov dword ptr [esp + 0x58], eax
// 00889311  7416                 je 0x889329
// 00889313  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00889317  6a00                 push 0
// 00889319  51                   push ecx
// 0088931a  8d542464             lea edx, [esp + 0x64]
// 0088931e  52                   push edx
// 0088931f  ff156ccc9800         call dword ptr [0x98cc6c]
// 00889325  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00889329  8b442418             mov eax, dword ptr [esp + 0x18]
// 0088932d  85c0                 test eax, eax
// 0088932f  7445                 je 0x889376
// 00889331  8b16                 mov edx, dword ptr [esi]
// 00889333  6a05                 push 5
// 00889335  6a02                 push 2
// 00889337  8b9284000000         mov edx, dword ptr [edx + 0x84]
// 0088933d  6a00                 push 0
// 0088933f  50                   push eax
// 00889340  8b842494000000       mov eax, dword ptr [esp + 0x94]
// 00889347  50                   push eax
// 00889348  8b442434             mov eax, dword ptr [esp + 0x34]
// 0088934c  6a00                 push 0
// 0088934e  50                   push eax
// 0088934f  83ec10               sub esp, 0x10
// 00889352  8bc4                 mov eax, esp
// 00889354  8938                 mov dword ptr [eax], edi
// 00889356  894804               mov dword ptr [eax + 4], ecx
// 00889359  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 00889360  894808               mov dword ptr [eax + 8], ecx
// 00889363  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 0088936a  89480c               mov dword ptr [eax + 0xc], ecx
// 0088936d  55                   push ebp
// 0088936e  8bce                 mov ecx, esi
// 00889370  ffd2                 call edx
// 00889372  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00889376  8b8390000000         mov eax, dword ptr [ebx + 0x90]
// 0088937c  85c0                 test eax, eax
// 0088937e  752e                 jne 0x8893ae
// 00889380  8b8388000000         mov eax, dword ptr [ebx + 0x88]
// 00889386  85c0                 test eax, eax
// 00889388  7f24                 jg 0x8893ae
// 0088938a  8b935c010000         mov edx, dword ptr [ebx + 0x15c]
// 00889390  85d2                 test edx, edx
// 00889392  740c                 je 0x8893a0
// 00889394  8b422c               mov eax, dword ptr [edx + 0x2c]
// 00889397  85c0                 test eax, eax
// 00889399  7f13                 jg 0x8893ae
// 0088939b  8b4228               mov eax, dword ptr [edx + 0x28]
// 0088939e  eb06                 jmp 0x8893a6
// 008893a0  8b8384000000         mov eax, dword ptr [ebx + 0x84]
// 008893a6  85c0                 test eax, eax
// 008893a8  0f8416010000         je 0x8894c4
// 008893ae  837c243000           cmp dword ptr [esp + 0x30], 0
// 008893b3  0f840b010000         je 0x8894c4
// 008893b9  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008893bd  8b03                 mov eax, dword ptr [ebx]
// 008893bf  8b90a8000000         mov edx, dword ptr [eax + 0xa8]
// 008893c5  51                   push ecx
// 008893c6  8bcb                 mov ecx, ebx
// 008893c8  ffd2                 call edx
// 008893ca  89842480000000       mov dword ptr [esp + 0x80], eax
// 008893d1  85c0                 test eax, eax
// 008893d3  0f84a5000000         je 0x88947e
// 008893d9  8bc8                 mov ecx, eax
// 008893db  e890c4c4ff           call 0x4d5870
// 008893e0  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 008893e7  8bf8                 mov edi, eax
// 008893e9  0faf7c243c           imul edi, dword ptr [esp + 0x3c]
// 008893ee  e88d48fcff           call 0x84dc80
// 008893f3  8bc8                 mov ecx, eax
// 008893f5  8bc7                 mov eax, edi
// 008893f7  99                   cdq 
// 008893f8  f7f9                 idiv ecx
// 008893fa  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 008893fe  6a00                 push 0
// 00889400  6a00                 push 0
// 00889402  89442448             mov dword ptr [esp + 0x48], eax
// 00889406  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 0088940a  2bc7                 sub eax, edi
// 0088940c  99                   cdq 
// 0088940d  2bc2                 sub eax, edx
// 0088940f  8bc8                 mov ecx, eax
// 00889411  8b442444             mov eax, dword ptr [esp + 0x44]
// 00889415  99                   cdq 
// 00889416  2bc2                 sub eax, edx
// 00889418  d1f8                 sar eax, 1
// 0088941a  d1f9                 sar ecx, 1
// 0088941c  2bc8                 sub ecx, eax
// 0088941e  8b442470             mov eax, dword ptr [esp + 0x70]
// 00889422  2b442468             sub eax, dword ptr [esp + 0x68]
// 00889426  03cf                 add ecx, edi
// 00889428  99                   cdq 
// 00889429  2bc2                 sub eax, edx
// 0088942b  8bf8                 mov edi, eax
// 0088942d  8b442448             mov eax, dword ptr [esp + 0x48]
// 00889431  99                   cdq 
// 00889432  2bc2                 sub eax, edx
// 00889434  8b16                 mov edx, dword ptr [esi]
// 00889436  d1f8                 sar eax, 1
// 00889438  8b92c0000000         mov edx, dword ptr [edx + 0xc0]
// 0088943e  d1ff                 sar edi, 1
// 00889440  2bf8                 sub edi, eax
// 00889442  8b442420             mov eax, dword ptr [esp + 0x20]
// 00889446  037c2468             add edi, dword ptr [esp + 0x68]
// 0088944a  50                   push eax
// 0088944b  8b842490000000       mov eax, dword ptr [esp + 0x90]
// 00889452  50                   push eax
// 00889453  8b442430             mov eax, dword ptr [esp + 0x30]
// 00889457  6a00                 push 0
// 00889459  50                   push eax
// 0088945a  8b842498000000       mov eax, dword ptr [esp + 0x98]
// 00889461  50                   push eax
// 00889462  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 00889466  50                   push eax
// 00889467  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 0088946b  50                   push eax
// 0088946c  57                   push edi
// 0088946d  51                   push ecx
// 0088946e  55                   push ebp
// 0088946f  8bce                 mov ecx, esi
// 00889471  ffd2                 call edx
// 00889473  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 0088947a  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0088947e  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00889482  837c241800           cmp dword ptr [esp + 0x18], 0
// 00889487  0f8498000000         je 0x889525
// 0088948d  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 00889492  7508                 jne 0x88949c
// 00889494  85c0                 test eax, eax
// 00889496  0f8589000000         jne 0x889525
// 0088949c  837c24340b           cmp dword ptr [esp + 0x34], 0xb
// 008894a1  7441                 je 0x8894e4
// 008894a3  83bc248400000000     cmp dword ptr [esp + 0x84], 0
// 008894ab  752b                 jne 0x8894d8
// 008894ad  6a28                 push 0x28
// 008894af  8bce                 mov ecx, esi
// 008894b1  e88a41f7ff           call 0x7fd640
// 008894b6  8b16                 mov edx, dword ptr [esi]
// 008894b8  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008894bc  8b92e8000000         mov edx, dword ptr [edx + 0xe8]
// 008894c2  eb43                 jmp 0x889507
// 008894c4  c784248000000000000000 mov dword ptr [esp + 0x80], 0
// 008894cf  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 008894d6  ebaa                 jmp 0x889482
// 008894d8  8b16                 mov edx, dword ptr [esi]
// 008894da  8b92e8000000         mov edx, dword ptr [edx + 0xe8]
// 008894e0  33c0                 xor eax, eax
// 008894e2  eb23                 jmp 0x889507
// 008894e4  83bc248400000000     cmp dword ptr [esp + 0x84], 0
// 008894ec  750f                 jne 0x8894fd
// 008894ee  6a28                 push 0x28
// 008894f0  8bce                 mov ecx, esi
// 008894f2  e84941f7ff           call 0x7fd640
// 008894f7  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008894fb  eb02                 jmp 0x8894ff
// 008894fd  33c0                 xor eax, eax
// 008894ff  8b16                 mov edx, dword ptr [esi]
// 00889501  8b92ec000000         mov edx, dword ptr [edx + 0xec]
// 00889507  50                   push eax
// 00889508  83ec10               sub esp, 0x10
// 0088950b  8bc4                 mov eax, esp
// 0088950d  8938                 mov dword ptr [eax], edi
// 0088950f  894804               mov dword ptr [eax + 4], ecx
// 00889512  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 00889516  894808               mov dword ptr [eax + 8], ecx
// 00889519  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 0088951d  89480c               mov dword ptr [eax + 0xc], ecx
// 00889520  55                   push ebp
// 00889521  8bce                 mov ecx, esi
// 00889523  ffd2                 call edx
// 00889525  8b06                 mov eax, dword ptr [esi]
// 00889527  8b507c               mov edx, dword ptr [eax + 0x7c]
// 0088952a  53                   push ebx
// 0088952b  8bce                 mov ecx, esi
// 0088952d  ffd2                 call edx
// 0088952f  8b5500               mov edx, dword ptr [ebp]
// 00889532  50                   push eax
// 00889533  8b4238               mov eax, dword ptr [edx + 0x38]
// 00889536  8bcd                 mov ecx, ebp
// 00889538  ffd0                 call eax
// 0088953a  6a01                 push 1
// 0088953c  8bcd                 mov ecx, ebp
// 0088953e  e84dcf0900           call 0x926490
// 00889543  8b442434             mov eax, dword ptr [esp + 0x34]
// 00889547  83f802               cmp eax, 2
// 0088954a  740a                 je 0x889556
// 0088954c  83f803               cmp eax, 3
// 0088954f  7405                 je 0x889556
// 00889551  83f804               cmp eax, 4
// 00889554  7525                 jne 0x88957b
// 00889556  83bbfc00000004       cmp dword ptr [ebx + 0xfc], 4
// 0088955d  750e                 jne 0x88956d
// 0088955f  8b16                 mov edx, dword ptr [esi]
// 00889561  8b8218010000         mov eax, dword ptr [edx + 0x118]
// 00889567  53                   push ebx
// 00889568  55                   push ebp
// 00889569  8bce                 mov ecx, esi
// 0088956b  ffd0                 call eax
// 0088956d  8b16                 mov edx, dword ptr [esi]
// 0088956f  8b821c010000         mov eax, dword ptr [edx + 0x11c]
// 00889575  53                   push ebx
// 00889576  55                   push ebp
// 00889577  8bce                 mov ecx, esi
// 00889579  ffd0                 call eax
// 0088957b  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 00889582  8b7c247c             mov edi, dword ptr [esp + 0x7c]
// 00889586  51                   push ecx
// 00889587  53                   push ebx
// 00889588  55                   push ebp
// 00889589  57                   push edi
// 0088958a  8bce                 mov ecx, esi
// 0088958c  e86f80f7ff           call 0x801600
// 00889591  8d4c2438             lea ecx, [esp + 0x38]
// 00889595  ff15c0de9800         call dword ptr [0x98dec0]
// 0088959b  8bc7                 mov eax, edi
// 0088959d  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 008895a1  64890d00000000       mov dword ptr fs:[0], ecx
// 008895a8  59                   pop ecx
// 008895a9  5f                   pop edi
// 008895aa  5e                   pop esi
// 008895ab  5d                   pop ebp
// 008895ac  5b                   pop ebx
// 008895ad  83c464               add esp, 0x64
// 008895b0  c21000               ret 0x10
// copied from an identical function in another client (function ?DrawControlPopupParent@CXTPOfficeTheme@XTPPaintThemes@@MAE?AVCSize@@PAVCDC@@PAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPOfficeTheme.cpp