// roc 2010-06 007af270  unit: CXTPPaintManager  size: 903 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007af270
//
// 007af270  6aff                 push -1
// 007af272  68c2eb9a00           push 0x9aebc2
// 007af277  64a100000000         mov eax, dword ptr fs:[0]
// 007af27d  50                   push eax
// 007af27e  83ec1c               sub esp, 0x1c
// 007af281  53                   push ebx
// 007af282  55                   push ebp
// 007af283  56                   push esi
// 007af284  57                   push edi
// 007af285  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 007af28a  33c4                 xor eax, esp
// 007af28c  50                   push eax
// 007af28d  8d442430             lea eax, [esp + 0x30]
// 007af291  64a300000000         mov dword ptr fs:[0], eax
// 007af297  8bd9                 mov ebx, ecx
// 007af299  8b742448             mov esi, dword ptr [esp + 0x48]
// 007af29d  8b06                 mov eax, dword ptr [esi]
// 007af29f  8b5058               mov edx, dword ptr [eax + 0x58]
// 007af2a2  8d4c2414             lea ecx, [esp + 0x14]
// 007af2a6  51                   push ecx
// 007af2a7  8bce                 mov ecx, esi
// 007af2a9  ffd2                 call edx
// 007af2ab  8d442414             lea eax, [esp + 0x14]
// 007af2af  50                   push eax
// 007af2b0  8d4c244c             lea ecx, [esp + 0x4c]
// 007af2b4  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 007af2bc  ff15c4ce9e00         call dword ptr [0x9ecec4]
// 007af2c2  8d4c2448             lea ecx, [esp + 0x48]
// 007af2c6  51                   push ecx
// 007af2c7  c644243c01           mov byte ptr [esp + 0x3c], 1
// 007af2cc  e8cfe0ffff           call 0x7ad3a0
// 007af2d1  83c404               add esp, 4
// 007af2d4  837c245c00           cmp dword ptr [esp + 0x5c], 0
// 007af2d9  0f85c6000000         jne 0x7af3a5
// 007af2df  8d4c2448             lea ecx, [esp + 0x48]
// 007af2e3  ff15eccd9e00         call dword ptr [0x9ecdec]
// 007af2e9  84c0                 test al, al
// 007af2eb  7407                 je 0x7af2f4
// 007af2ed  b8e86ea000           mov eax, 0xa06ee8
// 007af2f2  eb0a                 jmp 0x7af2fe
// 007af2f4  8d4c2448             lea ecx, [esp + 0x48]
// 007af2f8  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 007af2fe  50                   push eax
// 007af2ff  8d4c2468             lea ecx, [esp + 0x68]
// 007af303  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 007af309  8d542420             lea edx, [esp + 0x20]
// 007af30d  52                   push edx
// 007af30e  8d4c2468             lea ecx, [esp + 0x68]
// 007af312  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 007af318  50                   push eax
// 007af319  8d4c246c             lea ecx, [esp + 0x6c]
// 007af31d  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 007af323  50                   push eax
// 007af324  8b442450             mov eax, dword ptr [esp + 0x50]
// 007af328  8b4808               mov ecx, dword ptr [eax + 8]
// 007af32b  51                   push ecx
// 007af32c  ff1594a19e00         call dword ptr [0x9ea194]
// 007af332  8b742420             mov esi, dword ptr [esp + 0x20]
// 007af336  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 007af33a  8d4c2464             lea ecx, [esp + 0x64]
// 007af33e  89742418             mov dword ptr [esp + 0x18], esi
// 007af342  897c241c             mov dword ptr [esp + 0x1c], edi
// 007af346  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007af34c  837c246800           cmp dword ptr [esp + 0x68], 0
// 007af351  7415                 je 0x7af368
// 007af353  33d2                 xor edx, edx
// 007af355  39938c000000         cmp dword ptr [ebx + 0x8c], edx
// 007af35b  0f94c2               sete dl
// 007af35e  8d541208             lea edx, [edx + edx + 8]
// 007af362  03f2                 add esi, edx
// 007af364  89742418             mov dword ptr [esp + 0x18], esi
// 007af368  837c246000           cmp dword ptr [esp + 0x60], 0
// 007af36d  741f                 je 0x7af38e
// 007af36f  89742424             mov dword ptr [esp + 0x24], esi
// 007af373  8b742440             mov esi, dword ptr [esp + 0x40]
// 007af377  8d442420             lea eax, [esp + 0x20]
// 007af37b  897c2420             mov dword ptr [esp + 0x20], edi
// 007af37f  8b08                 mov ecx, dword ptr [eax]
// 007af381  8b5004               mov edx, dword ptr [eax + 4]
// 007af384  890e                 mov dword ptr [esi], ecx
// 007af386  895604               mov dword ptr [esi + 4], edx
// 007af389  e93d020000           jmp 0x7af5cb
// 007af38e  8b742440             mov esi, dword ptr [esp + 0x40]
// 007af392  8d442418             lea eax, [esp + 0x18]
// 007af396  8b08                 mov ecx, dword ptr [eax]
// 007af398  8b5004               mov edx, dword ptr [eax + 4]
// 007af39b  890e                 mov dword ptr [esi], ecx
// 007af39d  895604               mov dword ptr [esi + 4], edx
// 007af3a0  e926020000           jmp 0x7af5cb
// 007af3a5  837c246000           cmp dword ptr [esp + 0x60], 0
// 007af3aa  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 007af3ae  0f85e0000000         jne 0x7af494
// 007af3b4  8d442448             lea eax, [esp + 0x48]
// 007af3b8  50                   push eax
// 007af3b9  8d4c2424             lea ecx, [esp + 0x24]
// 007af3bd  51                   push ecx
// 007af3be  8bcd                 mov ecx, ebp
// 007af3c0  e8ebfacbff           call 0x46eeb0
// 007af3c5  8b7c2468             mov edi, dword ptr [esp + 0x68]
// 007af3c9  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 007af3cd  f7df                 neg edi
// 007af3cf  1bff                 sbb edi, edi
// 007af3d1  83e705               and edi, 5
// 007af3d4  0338                 add edi, dword ptr [eax]
// 007af3d6  837c246400           cmp dword ptr [esp + 0x64], 0
// 007af3db  7411                 je 0x7af3ee
// 007af3dd  8bc1                 mov eax, ecx
// 007af3df  2b44244c             sub eax, dword ptr [esp + 0x4c]
// 007af3e3  2bc7                 sub eax, edi
// 007af3e5  99                   cdq 
// 007af3e6  2bc2                 sub eax, edx
// 007af3e8  d1f8                 sar eax, 1
// 007af3ea  0144244c             add dword ptr [esp + 0x4c], eax
// 007af3ee  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 007af3f2  6a00                 push 0
// 007af3f4  6a00                 push 0
// 007af3f6  83ec10               sub esp, 0x10
// 007af3f9  8bc4                 mov eax, esp
// 007af3fb  8910                 mov dword ptr [eax], edx
// 007af3fd  8b542468             mov edx, dword ptr [esp + 0x68]
// 007af401  895004               mov dword ptr [eax + 4], edx
// 007af404  894808               mov dword ptr [eax + 8], ecx
// 007af407  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 007af40b  89480c               mov dword ptr [eax + 0xc], ecx
// 007af40e  8d542460             lea edx, [esp + 0x60]
// 007af412  52                   push edx
// 007af413  8d442430             lea eax, [esp + 0x30]
// 007af417  50                   push eax
// 007af418  56                   push esi
// 007af419  55                   push ebp
// 007af41a  8bcb                 mov ecx, ebx
// 007af41c  e88ff5ffff           call 0x7ae9b0
// 007af421  837c246800           cmp dword ptr [esp + 0x68], 0
// 007af426  0f848e010000         je 0x7af5ba
// 007af42c  8b542450             mov edx, dword ptr [esp + 0x50]
// 007af430  8b442458             mov eax, dword ptr [esp + 0x58]
// 007af434  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 007af438  03c2                 add eax, edx
// 007af43a  99                   cdq 
// 007af43b  03cf                 add ecx, edi
// 007af43d  2bc2                 sub eax, edx
// 007af43f  8bf8                 mov edi, eax
// 007af441  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 007af447  d1ff                 sar edi, 1
// 007af449  894c2420             mov dword ptr [esp + 0x20], ecx
// 007af44d  83f8ff               cmp eax, -1
// 007af450  750f                 jne 0x7af461
// 007af452  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 007af458  85c9                 test ecx, ecx
// 007af45a  7405                 je 0x7af461
// 007af45c  e82fb2ffff           call 0x7aa690
// 007af461  8b16                 mov edx, dword ptr [esi]
// 007af463  8b2b                 mov ebp, dword ptr [ebx]
// 007af465  6a00                 push 0
// 007af467  50                   push eax
// 007af468  8b82b4000000         mov eax, dword ptr [edx + 0xb4]
// 007af46e  8bce                 mov ecx, esi
// 007af470  ffd0                 call eax
// 007af472  8b16                 mov edx, dword ptr [esi]
// 007af474  50                   push eax
// 007af475  8b426c               mov eax, dword ptr [edx + 0x6c]
// 007af478  8bce                 mov ecx, esi
// 007af47a  ffd0                 call eax
// 007af47c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007af480  8b542450             mov edx, dword ptr [esp + 0x50]
// 007af484  50                   push eax
// 007af485  8b85f4000000         mov eax, dword ptr [ebp + 0xf4]
// 007af48b  57                   push edi
// 007af48c  51                   push ecx
// 007af48d  56                   push esi
// 007af48e  52                   push edx
// 007af48f  e922010000           jmp 0x7af5b6
// 007af494  8b542450             mov edx, dword ptr [esp + 0x50]
// 007af498  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 007af49c  8b442454             mov eax, dword ptr [esp + 0x54]
// 007af4a0  894c2420             mov dword ptr [esp + 0x20], ecx
// 007af4a4  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 007af4a8  89542424             mov dword ptr [esp + 0x24], edx
// 007af4ac  8d542448             lea edx, [esp + 0x48]
// 007af4b0  89442428             mov dword ptr [esp + 0x28], eax
// 007af4b4  52                   push edx
// 007af4b5  8d44241c             lea eax, [esp + 0x1c]
// 007af4b9  894c2430             mov dword ptr [esp + 0x30], ecx
// 007af4bd  50                   push eax
// 007af4be  8bcd                 mov ecx, ebp
// 007af4c0  e8ebf9cbff           call 0x46eeb0
// 007af4c5  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 007af4c9  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 007af4cd  f7d9                 neg ecx
// 007af4cf  1bc9                 sbb ecx, ecx
// 007af4d1  8bc7                 mov eax, edi
// 007af4d3  2b44241c             sub eax, dword ptr [esp + 0x1c]
// 007af4d7  83e105               and ecx, 5
// 007af4da  2b44244c             sub eax, dword ptr [esp + 0x4c]
// 007af4de  014c2418             add dword ptr [esp + 0x18], ecx
// 007af4e2  40                   inc eax
// 007af4e3  99                   cdq 
// 007af4e4  2bc2                 sub eax, edx
// 007af4e6  d1f8                 sar eax, 1
// 007af4e8  8bcf                 mov ecx, edi
// 007af4ea  2bc8                 sub ecx, eax
// 007af4ec  837c246400           cmp dword ptr [esp + 0x64], 0
// 007af4f1  894c244c             mov dword ptr [esp + 0x4c], ecx
// 007af4f5  7416                 je 0x7af50d
// 007af4f7  8b442458             mov eax, dword ptr [esp + 0x58]
// 007af4fb  2b442450             sub eax, dword ptr [esp + 0x50]
// 007af4ff  2b442418             sub eax, dword ptr [esp + 0x18]
// 007af503  40                   inc eax
// 007af504  99                   cdq 
// 007af505  2bc2                 sub eax, edx
// 007af507  d1f8                 sar eax, 1
// 007af509  01442450             add dword ptr [esp + 0x50], eax
// 007af50d  8b542460             mov edx, dword ptr [esp + 0x60]
// 007af511  6a00                 push 0
// 007af513  52                   push edx
// 007af514  8b542460             mov edx, dword ptr [esp + 0x60]
// 007af518  83ec10               sub esp, 0x10
// 007af51b  8bc4                 mov eax, esp
// 007af51d  8908                 mov dword ptr [eax], ecx
// 007af51f  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 007af523  894804               mov dword ptr [eax + 4], ecx
// 007af526  897808               mov dword ptr [eax + 8], edi
// 007af529  89500c               mov dword ptr [eax + 0xc], edx
// 007af52c  8d442460             lea eax, [esp + 0x60]
// 007af530  50                   push eax
// 007af531  8d4c2430             lea ecx, [esp + 0x30]
// 007af535  51                   push ecx
// 007af536  56                   push esi
// 007af537  55                   push ebp
// 007af538  8bcb                 mov ecx, ebx
// 007af53a  e871f4ffff           call 0x7ae9b0
// 007af53f  837c246800           cmp dword ptr [esp + 0x68], 0
// 007af544  7474                 je 0x7af5ba
// 007af546  8b542428             mov edx, dword ptr [esp + 0x28]
// 007af54a  8b442420             mov eax, dword ptr [esp + 0x20]
// 007af54e  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 007af552  03c2                 add eax, edx
// 007af554  99                   cdq 
// 007af555  2bc2                 sub eax, edx
// 007af557  8b542418             mov edx, dword ptr [esp + 0x18]
// 007af55b  8bf8                 mov edi, eax
// 007af55d  8d4411ff             lea eax, [ecx + edx - 1]
// 007af561  89442424             mov dword ptr [esp + 0x24], eax
// 007af565  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 007af56b  d1ff                 sar edi, 1
// 007af56d  83f8ff               cmp eax, -1
// 007af570  750f                 jne 0x7af581
// 007af572  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 007af578  85c9                 test ecx, ecx
// 007af57a  7405                 je 0x7af581
// 007af57c  e80fb1ffff           call 0x7aa690
// 007af581  8b542460             mov edx, dword ptr [esp + 0x60]
// 007af585  8b0b                 mov ecx, dword ptr [ebx]
// 007af587  52                   push edx
// 007af588  50                   push eax
// 007af589  8b06                 mov eax, dword ptr [esi]
// 007af58b  8b90b4000000         mov edx, dword ptr [eax + 0xb4]
// 007af591  894c2470             mov dword ptr [esp + 0x70], ecx
// 007af595  8bce                 mov ecx, esi
// 007af597  ffd2                 call edx
// 007af599  50                   push eax
// 007af59a  8b06                 mov eax, dword ptr [esi]
// 007af59c  8b506c               mov edx, dword ptr [eax + 0x6c]
// 007af59f  8bce                 mov ecx, esi
// 007af5a1  ffd2                 call edx
// 007af5a3  8b542474             mov edx, dword ptr [esp + 0x74]
// 007af5a7  50                   push eax
// 007af5a8  8b442434             mov eax, dword ptr [esp + 0x34]
// 007af5ac  50                   push eax
// 007af5ad  8b82f4000000         mov eax, dword ptr [edx + 0xf4]
// 007af5b3  57                   push edi
// 007af5b4  56                   push esi
// 007af5b5  55                   push ebp
// 007af5b6  8bcb                 mov ecx, ebx
// 007af5b8  ffd0                 call eax
// 007af5ba  8b742440             mov esi, dword ptr [esp + 0x40]
// 007af5be  c70600000000         mov dword ptr [esi], 0
// 007af5c4  c7460400000000       mov dword ptr [esi + 4], 0
// 007af5cb  8d4c2448             lea ecx, [esp + 0x48]
// 007af5cf  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007af5d5  8d4c2414             lea ecx, [esp + 0x14]
// 007af5d9  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007af5df  8bc6                 mov eax, esi
// 007af5e1  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007af5e5  64890d00000000       mov dword ptr fs:[0], ecx
// 007af5ec  59                   pop ecx
// 007af5ed  5f                   pop edi
// 007af5ee  5e                   pop esi
// 007af5ef  5d                   pop ebp
// 007af5f0  5b                   pop ebx
// 007af5f1  83c428               add esp, 0x28
// 007af5f4  c22c00               ret 0x2c
// copied from an identical function in another client (function ?DrawControlText@CXTPPaintManager@@QAE?AVCSize@@PAVCDC@@PAVCXTPControl@@VCRect@@HHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPPaintManager.cpp