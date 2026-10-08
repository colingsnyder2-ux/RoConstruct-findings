// from server: 100% by auto
// roc 2007-08 00526230  unit: G3D::Line  size: 1056 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00526230
//
// 00526230  83ec3c               sub esp, 0x3c
// 00526233  56                   push esi
// 00526234  8b742444             mov esi, dword ptr [esp + 0x44]
// 00526238  83befc00000000       cmp dword ptr [esi + 0xfc], 0
// 0052623f  57                   push edi
// 00526240  8bbe98010000         mov edi, dword ptr [esi + 0x198]
// 00526246  897c2418             mov dword ptr [esp + 0x18], edi
// 0052624a  7415                 je 0x526261
// 0052624c  837f2400             cmp dword ptr [edi + 0x24], 0
// 00526250  750f                 jne 0x526261
// 00526252  e859ffffff           call 0x5261b0
// 00526257  84c0                 test al, al
// 00526259  7506                 jne 0x526261
// 0052625b  5f                   pop edi
// 0052625c  5e                   pop esi
// 0052625d  83c43c               add esp, 0x3c
// 00526260  c3                   ret 
// 00526261  807f0800             cmp byte ptr [edi + 8], 0
// 00526265  53                   push ebx
// 00526266  55                   push ebp
// 00526267  0f85cb030000         jne 0x526638
// 0052626d  83be4001000000       cmp dword ptr [esi + 0x140], 0
// 00526274  8b4618               mov eax, dword ptr [esi + 0x18]
// 00526277  8b08                 mov ecx, dword ptr [eax]
// 00526279  8b5004               mov edx, dword ptr [eax + 4]
// 0052627c  8b5f0c               mov ebx, dword ptr [edi + 0xc]
// 0052627f  8b4710               mov eax, dword ptr [edi + 0x10]
// 00526282  894c2438             mov dword ptr [esp + 0x38], ecx
// 00526286  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 00526289  8954243c             mov dword ptr [esp + 0x3c], edx
// 0052628d  8b5718               mov edx, dword ptr [edi + 0x18]
// 00526290  894c2428             mov dword ptr [esp + 0x28], ecx
// 00526294  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 00526297  8954242c             mov dword ptr [esp + 0x2c], edx
// 0052629b  8b5720               mov edx, dword ptr [edi + 0x20]
// 0052629e  89742448             mov dword ptr [esp + 0x48], esi
// 005262a2  894c2430             mov dword ptr [esp + 0x30], ecx
// 005262a6  89542434             mov dword ptr [esp + 0x34], edx
// 005262aa  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005262b2  0f8e4b030000         jle 0x526603
// 005262b8  81c644010000         add esi, 0x144
// 005262be  8d4f70               lea ecx, [edi + 0x70]
// 005262c1  8974241c             mov dword ptr [esp + 0x1c], esi
// 005262c5  894c2418             mov dword ptr [esp + 0x18], ecx
// 005262c9  eb09                 jmp 0x5262d4
// 005262cb  eb03                 jmp 0x5262d0
// 005262cd  8d4900               lea ecx, [ecx]
// 005262d0  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005262d4  83f808               cmp eax, 8
// 005262d7  8b542454             mov edx, dword ptr [esp + 0x54]
// 005262db  8b742410             mov esi, dword ptr [esp + 0x10]
// 005262df  8b34b2               mov esi, dword ptr [edx + esi*4]
// 005262e2  8b29                 mov ebp, dword ptr [ecx]
// 005262e4  8b79d8               mov edi, dword ptr [ecx - 0x28]
// 005262e7  89742424             mov dword ptr [esp + 0x24], esi
// 005262eb  896c2414             mov dword ptr [esp + 0x14], ebp
// 005262ef  7d2d                 jge 0x52631e
// 005262f1  6a00                 push 0
// 005262f3  50                   push eax
// 005262f4  8d442440             lea eax, [esp + 0x40]
// 005262f8  53                   push ebx
// 005262f9  50                   push eax
// 005262fa  e891fcffff           call 0x525f90
// 005262ff  83c410               add esp, 0x10
// 00526302  84c0                 test al, al
// 00526304  0f843c030000         je 0x526646
// 0052630a  8b442444             mov eax, dword ptr [esp + 0x44]
// 0052630e  83f808               cmp eax, 8
// 00526311  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 00526315  7d07                 jge 0x52631e
// 00526317  b901000000           mov ecx, 1
// 0052631c  eb29                 jmp 0x526347
// 0052631e  8d48f8               lea ecx, [eax - 8]
// 00526321  8bd3                 mov edx, ebx
// 00526323  d3fa                 sar edx, cl
// 00526325  81e2ff000000         and edx, 0xff
// 0052632b  8b8c9790000000       mov ecx, dword ptr [edi + edx*4 + 0x90]
// 00526332  85c9                 test ecx, ecx
// 00526334  740c                 je 0x526342
// 00526336  0fb6bc3a90040000     movzx edi, byte ptr [edx + edi + 0x490]
// 0052633e  2bc1                 sub eax, ecx
// 00526340  eb28                 jmp 0x52636a
// 00526342  b909000000           mov ecx, 9
// 00526347  51                   push ecx
// 00526348  57                   push edi
// 00526349  50                   push eax
// 0052634a  8d4c2444             lea ecx, [esp + 0x44]
// 0052634e  53                   push ebx
// 0052634f  51                   push ecx
// 00526350  e86bfdffff           call 0x5260c0
// 00526355  8bf8                 mov edi, eax
// 00526357  83c414               add esp, 0x14
// 0052635a  85ff                 test edi, edi
// 0052635c  0f8ce4020000         jl 0x526646
// 00526362  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 00526366  8b442444             mov eax, dword ptr [esp + 0x44]
// 0052636a  85ff                 test edi, edi
// 0052636c  7454                 je 0x5263c2
// 0052636e  3bc7                 cmp eax, edi
// 00526370  7d20                 jge 0x526392
// 00526372  57                   push edi
// 00526373  50                   push eax
// 00526374  8d542440             lea edx, [esp + 0x40]
// 00526378  53                   push ebx
// 00526379  52                   push edx
// 0052637a  e811fcffff           call 0x525f90
// 0052637f  83c410               add esp, 0x10
// 00526382  84c0                 test al, al
// 00526384  0f84bc020000         je 0x526646
// 0052638a  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 0052638e  8b442444             mov eax, dword ptr [esp + 0x44]
// 00526392  8bcf                 mov ecx, edi
// 00526394  2bc7                 sub eax, edi
// 00526396  ba01000000           mov edx, 1
// 0052639b  d3e2                 shl edx, cl
// 0052639d  8beb                 mov ebp, ebx
// 0052639f  8bc8                 mov ecx, eax
// 005263a1  d3fd                 sar ebp, cl
// 005263a3  83ea01               sub edx, 1
// 005263a6  23d5                 and edx, ebp
// 005263a8  3b14bda8447a00       cmp edx, dword ptr [edi*4 + 0x7a44a8]
// 005263af  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 005263b3  7d0b                 jge 0x5263c0
// 005263b5  8b3cbde8447a00       mov edi, dword ptr [edi*4 + 0x7a44e8]
// 005263bc  03fa                 add edi, edx
// 005263be  eb02                 jmp 0x5263c2
// 005263c0  8bfa                 mov edi, edx
// 005263c2  8b542410             mov edx, dword ptr [esp + 0x10]
// 005263c6  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005263ca  80bc0a9800000000     cmp byte ptr [edx + ecx + 0x98], 0
// 005263d2  7413                 je 0x5263e7
// 005263d4  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005263d8  8b09                 mov ecx, dword ptr [ecx]
// 005263da  017c8c28             add dword ptr [esp + ecx*4 + 0x28], edi
// 005263de  8d4c8c28             lea ecx, [esp + ecx*4 + 0x28]
// 005263e2  8b09                 mov ecx, dword ptr [ecx]
// 005263e4  66890e               mov word ptr [esi], cx
// 005263e7  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005263eb  80bc0aa200000000     cmp byte ptr [edx + ecx + 0xa2], 0
// 005263f3  be01000000           mov esi, 1
// 005263f8  0f8412010000         je 0x526510
// 005263fe  8bff                 mov edi, edi
// 00526400  83f808               cmp eax, 8
// 00526403  7d2d                 jge 0x526432
// 00526405  6a00                 push 0
// 00526407  50                   push eax
// 00526408  8d542440             lea edx, [esp + 0x40]
// 0052640c  53                   push ebx
// 0052640d  52                   push edx
// 0052640e  e87dfbffff           call 0x525f90
// 00526413  83c410               add esp, 0x10
// 00526416  84c0                 test al, al
// 00526418  0f8428020000         je 0x526646
// 0052641e  8b442444             mov eax, dword ptr [esp + 0x44]
// 00526422  83f808               cmp eax, 8
// 00526425  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 00526429  7d07                 jge 0x526432
// 0052642b  b901000000           mov ecx, 1
// 00526430  eb29                 jmp 0x52645b
// 00526432  8d48f8               lea ecx, [eax - 8]
// 00526435  8bd3                 mov edx, ebx
// 00526437  d3fa                 sar edx, cl
// 00526439  81e2ff000000         and edx, 0xff
// 0052643f  8b8c9590000000       mov ecx, dword ptr [ebp + edx*4 + 0x90]
// 00526446  85c9                 test ecx, ecx
// 00526448  740c                 je 0x526456
// 0052644a  0fb6bc2a90040000     movzx edi, byte ptr [edx + ebp + 0x490]
// 00526452  2bc1                 sub eax, ecx
// 00526454  eb28                 jmp 0x52647e
// 00526456  b909000000           mov ecx, 9
// 0052645b  51                   push ecx
// 0052645c  55                   push ebp
// 0052645d  50                   push eax
// 0052645e  8d442444             lea eax, [esp + 0x44]
// 00526462  53                   push ebx
// 00526463  50                   push eax
// 00526464  e857fcffff           call 0x5260c0
// 00526469  8bf8                 mov edi, eax
// 0052646b  83c414               add esp, 0x14
// 0052646e  85ff                 test edi, edi
// 00526470  0f8cd0010000         jl 0x526646
// 00526476  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 0052647a  8b442444             mov eax, dword ptr [esp + 0x44]
// 0052647e  8bcf                 mov ecx, edi
// 00526480  c1f904               sar ecx, 4
// 00526483  83e70f               and edi, 0xf
// 00526486  7467                 je 0x5264ef
// 00526488  03f1                 add esi, ecx
// 0052648a  3bc7                 cmp eax, edi
// 0052648c  7d20                 jge 0x5264ae
// 0052648e  57                   push edi
// 0052648f  50                   push eax
// 00526490  8d4c2440             lea ecx, [esp + 0x40]
// 00526494  53                   push ebx
// 00526495  51                   push ecx
// 00526496  e8f5faffff           call 0x525f90
// 0052649b  83c410               add esp, 0x10
// 0052649e  84c0                 test al, al
// 005264a0  0f84a0010000         je 0x526646
// 005264a6  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 005264aa  8b442444             mov eax, dword ptr [esp + 0x44]
// 005264ae  8bcf                 mov ecx, edi
// 005264b0  2bc7                 sub eax, edi
// 005264b2  ba01000000           mov edx, 1
// 005264b7  d3e2                 shl edx, cl
// 005264b9  8beb                 mov ebp, ebx
// 005264bb  8bc8                 mov ecx, eax
// 005264bd  d3fd                 sar ebp, cl
// 005264bf  83ea01               sub edx, 1
// 005264c2  23d5                 and edx, ebp
// 005264c4  3b14bda8447a00       cmp edx, dword ptr [edi*4 + 0x7a44a8]
// 005264cb  7d0b                 jge 0x5264d8
// 005264cd  8b3cbde8447a00       mov edi, dword ptr [edi*4 + 0x7a44e8]
// 005264d4  03fa                 add edi, edx
// 005264d6  eb02                 jmp 0x5264da
// 005264d8  8bfa                 mov edi, edx
// 005264da  8b14b500337a00       mov edx, dword ptr [esi*4 + 0x7a3300]
// 005264e1  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005264e5  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 005264e9  66893c51             mov word ptr [ecx + edx*2], di
// 005264ed  eb0b                 jmp 0x5264fa
// 005264ef  83f90f               cmp ecx, 0xf
// 005264f2  0f85dd000000         jne 0x5265d5
// 005264f8  03f1                 add esi, ecx
// 005264fa  83c601               add esi, 1
// 005264fd  83fe40               cmp esi, 0x40
// 00526500  0f8cfafeffff         jl 0x526400
// 00526506  e9ca000000           jmp 0x5265d5
// 0052650b  eb03                 jmp 0x526510
// 0052650d  8d4900               lea ecx, [ecx]
// 00526510  83f808               cmp eax, 8
// 00526513  7d2d                 jge 0x526542
// 00526515  6a00                 push 0
// 00526517  50                   push eax
// 00526518  8d542440             lea edx, [esp + 0x40]
// 0052651c  53                   push ebx
// 0052651d  52                   push edx
// 0052651e  e86dfaffff           call 0x525f90
// 00526523  83c410               add esp, 0x10
// 00526526  84c0                 test al, al
// 00526528  0f8418010000         je 0x526646
// 0052652e  8b442444             mov eax, dword ptr [esp + 0x44]
// 00526532  83f808               cmp eax, 8
// 00526535  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 00526539  7d07                 jge 0x526542
// 0052653b  b901000000           mov ecx, 1
// 00526540  eb29                 jmp 0x52656b
// 00526542  8d48f8               lea ecx, [eax - 8]
// 00526545  8bd3                 mov edx, ebx
// 00526547  d3fa                 sar edx, cl
// 00526549  81e2ff000000         and edx, 0xff
// 0052654f  8b8c9590000000       mov ecx, dword ptr [ebp + edx*4 + 0x90]
// 00526556  85c9                 test ecx, ecx
// 00526558  740c                 je 0x526566
// 0052655a  0fb6bc2a90040000     movzx edi, byte ptr [edx + ebp + 0x490]
// 00526562  2bc1                 sub eax, ecx
// 00526564  eb28                 jmp 0x52658e
// 00526566  b909000000           mov ecx, 9
// 0052656b  51                   push ecx
// 0052656c  55                   push ebp
// 0052656d  50                   push eax
// 0052656e  8d442444             lea eax, [esp + 0x44]
// 00526572  53                   push ebx
// 00526573  50                   push eax
// 00526574  e847fbffff           call 0x5260c0
// 00526579  8bf8                 mov edi, eax
// 0052657b  83c414               add esp, 0x14
// 0052657e  85ff                 test edi, edi
// 00526580  0f8cc0000000         jl 0x526646
// 00526586  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 0052658a  8b442444             mov eax, dword ptr [esp + 0x44]
// 0052658e  8bcf                 mov ecx, edi
// 00526590  c1f904               sar ecx, 4
// 00526593  83e70f               and edi, 0xf
// 00526596  742a                 je 0x5265c2
// 00526598  03f1                 add esi, ecx
// 0052659a  3bc7                 cmp eax, edi
// 0052659c  7d20                 jge 0x5265be
// 0052659e  57                   push edi
// 0052659f  50                   push eax
// 005265a0  8d4c2440             lea ecx, [esp + 0x40]
// 005265a4  53                   push ebx
// 005265a5  51                   push ecx
// 005265a6  e8e5f9ffff           call 0x525f90
// 005265ab  83c410               add esp, 0x10
// 005265ae  84c0                 test al, al
// 005265b0  0f8490000000         je 0x526646
// 005265b6  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 005265ba  8b442444             mov eax, dword ptr [esp + 0x44]
// 005265be  2bc7                 sub eax, edi
// 005265c0  eb07                 jmp 0x5265c9
// 005265c2  83f90f               cmp ecx, 0xf
// 005265c5  750e                 jne 0x5265d5
// 005265c7  03f1                 add esi, ecx
// 005265c9  83c601               add esi, 1
// 005265cc  83fe40               cmp esi, 0x40
// 005265cf  0f8c3bffffff         jl 0x526510
// 005265d5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005265d9  ba04000000           mov edx, 4
// 005265de  01542418             add dword ptr [esp + 0x18], edx
// 005265e2  0154241c             add dword ptr [esp + 0x1c], edx
// 005265e6  8b542450             mov edx, dword ptr [esp + 0x50]
// 005265ea  83c101               add ecx, 1
// 005265ed  3b8a40010000         cmp ecx, dword ptr [edx + 0x140]
// 005265f3  894c2410             mov dword ptr [esp + 0x10], ecx
// 005265f7  0f8cd3fcffff         jl 0x5262d0
// 005265fd  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00526601  8bf2                 mov esi, edx
// 00526603  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00526606  8b542438             mov edx, dword ptr [esp + 0x38]
// 0052660a  8911                 mov dword ptr [ecx], edx
// 0052660c  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0052660f  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00526613  895104               mov dword ptr [ecx + 4], edx
// 00526616  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0052661a  8b542430             mov edx, dword ptr [esp + 0x30]
// 0052661e  894710               mov dword ptr [edi + 0x10], eax
// 00526621  8b442428             mov eax, dword ptr [esp + 0x28]
// 00526625  894714               mov dword ptr [edi + 0x14], eax
// 00526628  8b442434             mov eax, dword ptr [esp + 0x34]
// 0052662c  894f18               mov dword ptr [edi + 0x18], ecx
// 0052662f  89571c               mov dword ptr [edi + 0x1c], edx
// 00526632  895f0c               mov dword ptr [edi + 0xc], ebx
// 00526635  894720               mov dword ptr [edi + 0x20], eax
// 00526638  834724ff             add dword ptr [edi + 0x24], -1
// 0052663c  5d                   pop ebp
// 0052663d  5b                   pop ebx
// 0052663e  5f                   pop edi
// 0052663f  b001                 mov al, 1
// 00526641  5e                   pop esi
// 00526642  83c43c               add esp, 0x3c
// 00526645  c3                   ret 
// 00526646  5d                   pop ebp
// 00526647  5b                   pop ebx
// 00526648  5f                   pop edi
// 00526649  32c0                 xor al, al
// 0052664b  5e                   pop esi
// 0052664c  83c43c               add esp, 0x3c
// 0052664f  c3                   ret 
// library jpeg-6b/jdhuff.c (function _decode_mcu)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdhuff.c
