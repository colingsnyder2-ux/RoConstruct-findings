// roc 2009-12 007ff170  unit: CXTPPaintManager  size: 1508 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007ff170
//
// 007ff170  6aff                 push -1
// 007ff172  6846929500           push 0x959246
// 007ff177  64a100000000         mov eax, dword ptr fs:[0]
// 007ff17d  50                   push eax
// 007ff17e  83ec44               sub esp, 0x44
// 007ff181  53                   push ebx
// 007ff182  55                   push ebp
// 007ff183  56                   push esi
// 007ff184  57                   push edi
// 007ff185  a10052b600           mov eax, dword ptr [0xb65200]
// 007ff18a  33c4                 xor eax, esp
// 007ff18c  50                   push eax
// 007ff18d  8d442458             lea eax, [esp + 0x58]
// 007ff191  64a300000000         mov dword ptr fs:[0], eax
// 007ff197  8be9                 mov ebp, ecx
// 007ff199  8b742470             mov esi, dword ptr [esp + 0x70]
// 007ff19d  8b06                 mov eax, dword ptr [esi]
// 007ff19f  8b5058               mov edx, dword ptr [eax + 0x58]
// 007ff1a2  8d4c2424             lea ecx, [esp + 0x24]
// 007ff1a6  51                   push ecx
// 007ff1a7  8bce                 mov ecx, esi
// 007ff1a9  ffd2                 call edx
// 007ff1ab  8d442424             lea eax, [esp + 0x24]
// 007ff1af  50                   push eax
// 007ff1b0  8d4c2424             lea ecx, [esp + 0x24]
// 007ff1b4  c744246400000000     mov dword ptr [esp + 0x64], 0
// 007ff1bc  ff1594de9800         call dword ptr [0x98de94]
// 007ff1c2  8d4c2420             lea ecx, [esp + 0x20]
// 007ff1c6  51                   push ecx
// 007ff1c7  c644246401           mov byte ptr [esp + 0x64], 1
// 007ff1cc  e8ffe6ffff           call 0x7fd8d0
// 007ff1d1  83c404               add esp, 4
// 007ff1d4  8d4c241c             lea ecx, [esp + 0x1c]
// 007ff1d8  ff1574de9800         call dword ptr [0x98de74]
// 007ff1de  8d4c2418             lea ecx, [esp + 0x18]
// 007ff1e2  ff1574de9800         call dword ptr [0x98de74]
// 007ff1e8  83bd9400000000       cmp dword ptr [ebp + 0x94], 0
// 007ff1ef  c644246003           mov byte ptr [esp + 0x60], 3
// 007ff1f4  7418                 je 0x7ff20e
// 007ff1f6  8d542418             lea edx, [esp + 0x18]
// 007ff1fa  52                   push edx
// 007ff1fb  8d442420             lea eax, [esp + 0x20]
// 007ff1ff  50                   push eax
// 007ff200  8d4c242c             lea ecx, [esp + 0x2c]
// 007ff204  51                   push ecx
// 007ff205  8bcd                 mov ecx, ebp
// 007ff207  e8d4e6ffff           call 0x7fd8e0
// 007ff20c  eb0f                 jmp 0x7ff21d
// 007ff20e  8d542424             lea edx, [esp + 0x24]
// 007ff212  52                   push edx
// 007ff213  8d4c2420             lea ecx, [esp + 0x20]
// 007ff217  ff1538d59800         call dword ptr [0x98d538]
// 007ff21d  8d44241c             lea eax, [esp + 0x1c]
// 007ff221  50                   push eax
// 007ff222  8d4c2418             lea ecx, [esp + 0x18]
// 007ff226  ff1594de9800         call dword ptr [0x98de94]
// 007ff22c  8d4c2418             lea ecx, [esp + 0x18]
// 007ff230  51                   push ecx
// 007ff231  8d4c2474             lea ecx, [esp + 0x74]
// 007ff235  c644246404           mov byte ptr [esp + 0x64], 4
// 007ff23a  ff1594de9800         call dword ptr [0x98de94]
// 007ff240  8d542414             lea edx, [esp + 0x14]
// 007ff244  52                   push edx
// 007ff245  c644246405           mov byte ptr [esp + 0x64], 5
// 007ff24a  e881e6ffff           call 0x7fd8d0
// 007ff24f  8d442474             lea eax, [esp + 0x74]
// 007ff253  50                   push eax
// 007ff254  e877e6ffff           call 0x7fd8d0
// 007ff259  83c408               add esp, 8
// 007ff25c  83bc248400000000     cmp dword ptr [esp + 0x84], 0
// 007ff264  0f8530010000         jne 0x7ff39a
// 007ff26a  8d4c2420             lea ecx, [esp + 0x20]
// 007ff26e  ff15bcdd9800         call dword ptr [0x98ddbc]
// 007ff274  84c0                 test al, al
// 007ff276  7407                 je 0x7ff27f
// 007ff278  b868619a00           mov eax, 0x9a6168
// 007ff27d  eb0a                 jmp 0x7ff289
// 007ff27f  8d4c2414             lea ecx, [esp + 0x14]
// 007ff283  ff1580de9800         call dword ptr [0x98de80]
// 007ff289  50                   push eax
// 007ff28a  8d8c2488000000       lea ecx, [esp + 0x88]
// 007ff291  ff15b8de9800         call dword ptr [0x98deb8]
// 007ff297  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 007ff29b  8d4c2438             lea ecx, [esp + 0x38]
// 007ff29f  51                   push ecx
// 007ff2a0  8d8c2488000000       lea ecx, [esp + 0x88]
// 007ff2a7  ff15b4dd9800         call dword ptr [0x98ddb4]
// 007ff2ad  50                   push eax
// 007ff2ae  8d8c248c000000       lea ecx, [esp + 0x8c]
// 007ff2b5  ff1580de9800         call dword ptr [0x98de80]
// 007ff2bb  8b5608               mov edx, dword ptr [esi + 8]
// 007ff2be  8b3d6cb19800         mov edi, dword ptr [0x98b16c]
// 007ff2c4  50                   push eax
// 007ff2c5  52                   push edx
// 007ff2c6  ffd7                 call edi
// 007ff2c8  8d8c2484000000       lea ecx, [esp + 0x84]
// 007ff2cf  ff15c0de9800         call dword ptr [0x98dec0]
// 007ff2d5  8d4c2420             lea ecx, [esp + 0x20]
// 007ff2d9  ff15bcdd9800         call dword ptr [0x98ddbc]
// 007ff2df  84c0                 test al, al
// 007ff2e1  7407                 je 0x7ff2ea
// 007ff2e3  b868619a00           mov eax, 0x9a6168
// 007ff2e8  eb0a                 jmp 0x7ff2f4
// 007ff2ea  8d4c2470             lea ecx, [esp + 0x70]
// 007ff2ee  ff1580de9800         call dword ptr [0x98de80]
// 007ff2f4  50                   push eax
// 007ff2f5  8d4c2470             lea ecx, [esp + 0x70]
// 007ff2f9  ff15b8de9800         call dword ptr [0x98deb8]
// 007ff2ff  8d442428             lea eax, [esp + 0x28]
// 007ff303  50                   push eax
// 007ff304  8d4c2470             lea ecx, [esp + 0x70]
// 007ff308  ff15b4dd9800         call dword ptr [0x98ddb4]
// 007ff30e  50                   push eax
// 007ff30f  8d4c2474             lea ecx, [esp + 0x74]
// 007ff313  ff1580de9800         call dword ptr [0x98de80]
// 007ff319  8b4e08               mov ecx, dword ptr [esi + 8]
// 007ff31c  50                   push eax
// 007ff31d  51                   push ecx
// 007ff31e  ffd7                 call edi
// 007ff320  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 007ff324  8b742428             mov esi, dword ptr [esp + 0x28]
// 007ff328  8d4c246c             lea ecx, [esp + 0x6c]
// 007ff32c  8954242c             mov dword ptr [esp + 0x2c], edx
// 007ff330  ff15c0de9800         call dword ptr [0x98dec0]
// 007ff336  83bc248c00000000     cmp dword ptr [esp + 0x8c], 0
// 007ff33e  7403                 je 0x7ff343
// 007ff340  83c608               add esi, 8
// 007ff343  8b442438             mov eax, dword ptr [esp + 0x38]
// 007ff347  3bc6                 cmp eax, esi
// 007ff349  7e02                 jle 0x7ff34d
// 007ff34b  8bf0                 mov esi, eax
// 007ff34d  83bc248800000000     cmp dword ptr [esp + 0x88], 0
// 007ff355  b818000000           mov eax, 0x18
// 007ff35a  89742438             mov dword ptr [esp + 0x38], esi
// 007ff35e  8944243c             mov dword ptr [esp + 0x3c], eax
// 007ff362  741f                 je 0x7ff383
// 007ff364  89442428             mov dword ptr [esp + 0x28], eax
// 007ff368  8974242c             mov dword ptr [esp + 0x2c], esi
// 007ff36c  8b742468             mov esi, dword ptr [esp + 0x68]
// 007ff370  8d442428             lea eax, [esp + 0x28]
// 007ff374  8b08                 mov ecx, dword ptr [eax]
// 007ff376  8b5004               mov edx, dword ptr [eax + 4]
// 007ff379  890e                 mov dword ptr [esi], ecx
// 007ff37b  895604               mov dword ptr [esi + 4], edx
// 007ff37e  e97d030000           jmp 0x7ff700
// 007ff383  8b742468             mov esi, dword ptr [esp + 0x68]
// 007ff387  8d442438             lea eax, [esp + 0x38]
// 007ff38b  8b08                 mov ecx, dword ptr [eax]
// 007ff38d  8b5004               mov edx, dword ptr [eax + 4]
// 007ff390  890e                 mov dword ptr [esi], ecx
// 007ff392  895604               mov dword ptr [esi + 4], edx
// 007ff395  e966030000           jmp 0x7ff700
// 007ff39a  83bc248800000000     cmp dword ptr [esp + 0x88], 0
// 007ff3a2  8b7c2478             mov edi, dword ptr [esp + 0x78]
// 007ff3a6  0f8573010000         jne 0x7ff51f
// 007ff3ac  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 007ff3b3  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 007ff3b7  03c7                 add eax, edi
// 007ff3b9  99                   cdq 
// 007ff3ba  2bc2                 sub eax, edx
// 007ff3bc  8bd8                 mov ebx, eax
// 007ff3be  8b44247c             mov eax, dword ptr [esp + 0x7c]
// 007ff3c2  6a01                 push 1
// 007ff3c4  6a00                 push 0
// 007ff3c6  89442438             mov dword ptr [esp + 0x38], eax
// 007ff3ca  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 007ff3d1  83ec10               sub esp, 0x10
// 007ff3d4  8944244c             mov dword ptr [esp + 0x4c], eax
// 007ff3d8  8bc4                 mov eax, esp
// 007ff3da  8908                 mov dword ptr [eax], ecx
// 007ff3dc  894c2440             mov dword ptr [esp + 0x40], ecx
// 007ff3e0  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 007ff3e7  897804               mov dword ptr [eax + 4], edi
// 007ff3ea  8bbc2484000000       mov edi, dword ptr [esp + 0x84]
// 007ff3f1  d1fb                 sar ebx, 1
// 007ff3f3  894808               mov dword ptr [eax + 8], ecx
// 007ff3f6  8d5301               lea edx, [ebx + 1]
// 007ff3f9  89500c               mov dword ptr [eax + 0xc], edx
// 007ff3fc  8d54242c             lea edx, [esp + 0x2c]
// 007ff400  52                   push edx
// 007ff401  8d442438             lea eax, [esp + 0x38]
// 007ff405  50                   push eax
// 007ff406  56                   push esi
// 007ff407  57                   push edi
// 007ff408  8bcd                 mov ecx, ebp
// 007ff40a  e891faffff           call 0x7feea0
// 007ff40f  8d4c2470             lea ecx, [esp + 0x70]
// 007ff413  51                   push ecx
// 007ff414  8d54243c             lea edx, [esp + 0x3c]
// 007ff418  52                   push edx
// 007ff419  8bcf                 mov ecx, edi
// 007ff41b  e890bfc6ff           call 0x46b3b0
// 007ff420  8bbc248c000000       mov edi, dword ptr [esp + 0x8c]
// 007ff427  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007ff42b  f7df                 neg edi
// 007ff42d  1bff                 sbb edi, edi
// 007ff42f  83e709               and edi, 9
// 007ff432  0338                 add edi, dword ptr [eax]
// 007ff434  8b44247c             mov eax, dword ptr [esp + 0x7c]
// 007ff438  2bc7                 sub eax, edi
// 007ff43a  2b442474             sub eax, dword ptr [esp + 0x74]
// 007ff43e  6a00                 push 0
// 007ff440  99                   cdq 
// 007ff441  2bc2                 sub eax, edx
// 007ff443  8b542438             mov edx, dword ptr [esp + 0x38]
// 007ff447  6a00                 push 0
// 007ff449  83ec10               sub esp, 0x10
// 007ff44c  d1f8                 sar eax, 1
// 007ff44e  03c8                 add ecx, eax
// 007ff450  8bc4                 mov eax, esp
// 007ff452  8908                 mov dword ptr [eax], ecx
// 007ff454  894c2440             mov dword ptr [esp + 0x40], ecx
// 007ff458  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 007ff45c  895804               mov dword ptr [eax + 4], ebx
// 007ff45f  894808               mov dword ptr [eax + 8], ecx
// 007ff462  89500c               mov dword ptr [eax + 0xc], edx
// 007ff465  8b942484000000       mov edx, dword ptr [esp + 0x84]
// 007ff46c  8d842488000000       lea eax, [esp + 0x88]
// 007ff473  50                   push eax
// 007ff474  8d4c2434             lea ecx, [esp + 0x34]
// 007ff478  51                   push ecx
// 007ff479  56                   push esi
// 007ff47a  52                   push edx
// 007ff47b  8bcd                 mov ecx, ebp
// 007ff47d  e81efaffff           call 0x7feea0
// 007ff482  83bc248c00000000     cmp dword ptr [esp + 0x8c], 0
// 007ff48a  0f845f020000         je 0x7ff6ef
// 007ff490  8d4c2418             lea ecx, [esp + 0x18]
// 007ff494  ff15bcdd9800         call dword ptr [0x98ddbc]
// 007ff49a  84c0                 test al, al
// 007ff49c  7414                 je 0x7ff4b2
// 007ff49e  8b44247c             mov eax, dword ptr [esp + 0x7c]
// 007ff4a2  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 007ff4a6  03c1                 add eax, ecx
// 007ff4a8  99                   cdq 
// 007ff4a9  2bc2                 sub eax, edx
// 007ff4ab  8bf8                 mov edi, eax
// 007ff4ad  d1ff                 sar edi, 1
// 007ff4af  4f                   dec edi
// 007ff4b0  eb08                 jmp 0x7ff4ba
// 007ff4b2  8b542428             mov edx, dword ptr [esp + 0x28]
// 007ff4b6  8d7c3afc             lea edi, [edx + edi - 4]
// 007ff4ba  8b442434             mov eax, dword ptr [esp + 0x34]
// 007ff4be  03c3                 add eax, ebx
// 007ff4c0  99                   cdq 
// 007ff4c1  2bc2                 sub eax, edx
// 007ff4c3  8bd8                 mov ebx, eax
// 007ff4c5  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 007ff4cb  d1fb                 sar ebx, 1
// 007ff4cd  83f8ff               cmp eax, -1
// 007ff4d0  750f                 jne 0x7ff4e1
// 007ff4d2  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 007ff4d8  85c9                 test ecx, ecx
// 007ff4da  7405                 je 0x7ff4e1
// 007ff4dc  e8cf70ffff           call 0x7f65b0
// 007ff4e1  8b4d00               mov ecx, dword ptr [ebp]
// 007ff4e4  8b16                 mov edx, dword ptr [esi]
// 007ff4e6  6a00                 push 0
// 007ff4e8  898c2490000000       mov dword ptr [esp + 0x90], ecx
// 007ff4ef  50                   push eax
// 007ff4f0  8b82b4000000         mov eax, dword ptr [edx + 0xb4]
// 007ff4f6  8bce                 mov ecx, esi
// 007ff4f8  ffd0                 call eax
// 007ff4fa  8b16                 mov edx, dword ptr [esi]
// 007ff4fc  50                   push eax
// 007ff4fd  8b426c               mov eax, dword ptr [edx + 0x6c]
// 007ff500  8bce                 mov ecx, esi
// 007ff502  ffd0                 call eax
// 007ff504  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 007ff508  8b942498000000       mov edx, dword ptr [esp + 0x98]
// 007ff50f  50                   push eax
// 007ff510  8b82f4000000         mov eax, dword ptr [edx + 0xf4]
// 007ff516  53                   push ebx
// 007ff517  57                   push edi
// 007ff518  56                   push esi
// 007ff519  51                   push ecx
// 007ff51a  e9cc010000           jmp 0x7ff6eb
// 007ff51f  8b442474             mov eax, dword ptr [esp + 0x74]
// 007ff523  8d4801               lea ecx, [eax + 1]
// 007ff526  894c2448             mov dword ptr [esp + 0x48], ecx
// 007ff52a  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 007ff52e  03c1                 add eax, ecx
// 007ff530  99                   cdq 
// 007ff531  2bc2                 sub eax, edx
// 007ff533  d1f8                 sar eax, 1
// 007ff535  89842484000000       mov dword ptr [esp + 0x84], eax
// 007ff53c  8d5801               lea ebx, [eax + 1]
// 007ff53f  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 007ff546  49                   dec ecx
// 007ff547  8d542414             lea edx, [esp + 0x14]
// 007ff54b  89442454             mov dword ptr [esp + 0x54], eax
// 007ff54f  89442444             mov dword ptr [esp + 0x44], eax
// 007ff553  52                   push edx
// 007ff554  8d44242c             lea eax, [esp + 0x2c]
// 007ff558  894c2444             mov dword ptr [esp + 0x44], ecx
// 007ff55c  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 007ff560  50                   push eax
// 007ff561  897c2444             mov dword ptr [esp + 0x44], edi
// 007ff565  e846bec6ff           call 0x46b3b0
// 007ff56a  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 007ff56e  8bc1                 mov eax, ecx
// 007ff570  2b842484000000       sub eax, dword ptr [esp + 0x84]
// 007ff577  6a00                 push 0
// 007ff579  2b442430             sub eax, dword ptr [esp + 0x30]
// 007ff57d  40                   inc eax
// 007ff57e  99                   cdq 
// 007ff57f  2bc2                 sub eax, edx
// 007ff581  d1f8                 sar eax, 1
// 007ff583  2bc8                 sub ecx, eax
// 007ff585  8b442448             mov eax, dword ptr [esp + 0x48]
// 007ff589  2b44242c             sub eax, dword ptr [esp + 0x2c]
// 007ff58d  2bc7                 sub eax, edi
// 007ff58f  40                   inc eax
// 007ff590  99                   cdq 
// 007ff591  2bc2                 sub eax, edx
// 007ff593  d1f8                 sar eax, 1
// 007ff595  8bd7                 mov edx, edi
// 007ff597  03d0                 add edx, eax
// 007ff599  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 007ff5a0  50                   push eax
// 007ff5a1  83ec10               sub esp, 0x10
// 007ff5a4  8bc4                 mov eax, esp
// 007ff5a6  8908                 mov dword ptr [eax], ecx
// 007ff5a8  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 007ff5ac  895004               mov dword ptr [eax + 4], edx
// 007ff5af  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 007ff5b3  894808               mov dword ptr [eax + 8], ecx
// 007ff5b6  89500c               mov dword ptr [eax + 0xc], edx
// 007ff5b9  8b942484000000       mov edx, dword ptr [esp + 0x84]
// 007ff5c0  8d44242c             lea eax, [esp + 0x2c]
// 007ff5c4  50                   push eax
// 007ff5c5  8d4c2438             lea ecx, [esp + 0x38]
// 007ff5c9  51                   push ecx
// 007ff5ca  56                   push esi
// 007ff5cb  52                   push edx
// 007ff5cc  8bcd                 mov ecx, ebp
// 007ff5ce  e8cdf8ffff           call 0x7feea0
// 007ff5d3  8d442470             lea eax, [esp + 0x70]
// 007ff5d7  50                   push eax
// 007ff5d8  8d4c243c             lea ecx, [esp + 0x3c]
// 007ff5dc  51                   push ecx
// 007ff5dd  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 007ff5e1  e8cabdc6ff           call 0x46b3b0
// 007ff5e6  8b10                 mov edx, dword ptr [eax]
// 007ff5e8  8b4804               mov ecx, dword ptr [eax + 4]
// 007ff5eb  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 007ff5f2  f7d8                 neg eax
// 007ff5f4  1bc0                 sbb eax, eax
// 007ff5f6  83e008               and eax, 8
// 007ff5f9  03d0                 add edx, eax
// 007ff5fb  8b442454             mov eax, dword ptr [esp + 0x54]
// 007ff5ff  89542428             mov dword ptr [esp + 0x28], edx
// 007ff603  8b542448             mov edx, dword ptr [esp + 0x48]
// 007ff607  89442444             mov dword ptr [esp + 0x44], eax
// 007ff60b  89542438             mov dword ptr [esp + 0x38], edx
// 007ff60f  897c243c             mov dword ptr [esp + 0x3c], edi
// 007ff613  895c2440             mov dword ptr [esp + 0x40], ebx
// 007ff617  8bc3                 mov eax, ebx
// 007ff619  2bc2                 sub eax, edx
// 007ff61b  2bc1                 sub eax, ecx
// 007ff61d  40                   inc eax
// 007ff61e  99                   cdq 
// 007ff61f  2bc2                 sub eax, edx
// 007ff621  d1f8                 sar eax, 1
// 007ff623  8bcb                 mov ecx, ebx
// 007ff625  2bc8                 sub ecx, eax
// 007ff627  8b442454             mov eax, dword ptr [esp + 0x54]
// 007ff62b  2bc7                 sub eax, edi
// 007ff62d  2b442428             sub eax, dword ptr [esp + 0x28]
// 007ff631  6a00                 push 0
// 007ff633  40                   inc eax
// 007ff634  99                   cdq 
// 007ff635  2bc2                 sub eax, edx
// 007ff637  8b94248c000000       mov edx, dword ptr [esp + 0x8c]
// 007ff63e  52                   push edx
// 007ff63f  83ec10               sub esp, 0x10
// 007ff642  d1f8                 sar eax, 1
// 007ff644  03f8                 add edi, eax
// 007ff646  8bc4                 mov eax, esp
// 007ff648  8908                 mov dword ptr [eax], ecx
// 007ff64a  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 007ff64e  897804               mov dword ptr [eax + 4], edi
// 007ff651  895808               mov dword ptr [eax + 8], ebx
// 007ff654  89480c               mov dword ptr [eax + 0xc], ecx
// 007ff657  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 007ff65e  8d942488000000       lea edx, [esp + 0x88]
// 007ff665  52                   push edx
// 007ff666  8d442434             lea eax, [esp + 0x34]
// 007ff66a  50                   push eax
// 007ff66b  56                   push esi
// 007ff66c  51                   push ecx
// 007ff66d  8bcd                 mov ecx, ebp
// 007ff66f  e82cf8ffff           call 0x7feea0
// 007ff674  83bc248c00000000     cmp dword ptr [esp + 0x8c], 0
// 007ff67c  7471                 je 0x7ff6ef
// 007ff67e  8b542438             mov edx, dword ptr [esp + 0x38]
// 007ff682  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007ff686  8bc3                 mov eax, ebx
// 007ff688  03c2                 add eax, edx
// 007ff68a  99                   cdq 
// 007ff68b  2bc2                 sub eax, edx
// 007ff68d  8bd8                 mov ebx, eax
// 007ff68f  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 007ff695  d1fb                 sar ebx, 1
// 007ff697  83eb02               sub ebx, 2
// 007ff69a  8d540ffc             lea edx, [edi + ecx - 4]
// 007ff69e  8954243c             mov dword ptr [esp + 0x3c], edx
// 007ff6a2  83f8ff               cmp eax, -1
// 007ff6a5  750f                 jne 0x7ff6b6
// 007ff6a7  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 007ff6ad  85c9                 test ecx, ecx
// 007ff6af  7405                 je 0x7ff6b6
// 007ff6b1  e8fa6effff           call 0x7f65b0
// 007ff6b6  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 007ff6bd  8b16                 mov edx, dword ptr [esi]
// 007ff6bf  8b7d00               mov edi, dword ptr [ebp]
// 007ff6c2  51                   push ecx
// 007ff6c3  50                   push eax
// 007ff6c4  8b82b4000000         mov eax, dword ptr [edx + 0xb4]
// 007ff6ca  8bce                 mov ecx, esi
// 007ff6cc  ffd0                 call eax
// 007ff6ce  8b16                 mov edx, dword ptr [esi]
// 007ff6d0  50                   push eax
// 007ff6d1  8b426c               mov eax, dword ptr [edx + 0x6c]
// 007ff6d4  8bce                 mov ecx, esi
// 007ff6d6  ffd0                 call eax
// 007ff6d8  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 007ff6dc  8b542478             mov edx, dword ptr [esp + 0x78]
// 007ff6e0  50                   push eax
// 007ff6e1  8b87f4000000         mov eax, dword ptr [edi + 0xf4]
// 007ff6e7  51                   push ecx
// 007ff6e8  53                   push ebx
// 007ff6e9  56                   push esi
// 007ff6ea  52                   push edx
// 007ff6eb  8bcd                 mov ecx, ebp
// 007ff6ed  ffd0                 call eax
// 007ff6ef  8b742468             mov esi, dword ptr [esp + 0x68]
// 007ff6f3  c70600000000         mov dword ptr [esi], 0
// 007ff6f9  c7460400000000       mov dword ptr [esi + 4], 0
// 007ff700  8d4c2470             lea ecx, [esp + 0x70]
// 007ff704  ff15c0de9800         call dword ptr [0x98dec0]
// 007ff70a  8d4c2414             lea ecx, [esp + 0x14]
// 007ff70e  ff15c0de9800         call dword ptr [0x98dec0]
// 007ff714  8d4c2418             lea ecx, [esp + 0x18]
// 007ff718  ff15c0de9800         call dword ptr [0x98dec0]
// 007ff71e  8d4c241c             lea ecx, [esp + 0x1c]
// 007ff722  ff15c0de9800         call dword ptr [0x98dec0]
// 007ff728  8d4c2420             lea ecx, [esp + 0x20]
// 007ff72c  ff15c0de9800         call dword ptr [0x98dec0]
// 007ff732  8d4c2424             lea ecx, [esp + 0x24]
// 007ff736  ff15c0de9800         call dword ptr [0x98dec0]
// 007ff73c  8bc6                 mov eax, esi
// 007ff73e  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 007ff742  64890d00000000       mov dword ptr fs:[0], ecx
// 007ff749  59                   pop ecx
// 007ff74a  5f                   pop edi
// 007ff74b  5e                   pop esi
// 007ff74c  5d                   pop ebp
// 007ff74d  5b                   pop ebx
// 007ff74e  83c450               add esp, 0x50
// 007ff751  c22800               ret 0x28
// copied from an identical function in another client (function ?DrawControlText2@CXTPPaintManager@@IAE?AVCSize@@PAVCDC@@PAVCXTPControl@@VCRect@@HHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPPaintManager.cpp