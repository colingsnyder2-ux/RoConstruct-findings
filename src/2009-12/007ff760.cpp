// roc 2009-12 007ff760  unit: CXTPPaintManager  size: 903 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007ff760
//
// 007ff760  6aff                 push -1
// 007ff762  6882929500           push 0x959282
// 007ff767  64a100000000         mov eax, dword ptr fs:[0]
// 007ff76d  50                   push eax
// 007ff76e  83ec1c               sub esp, 0x1c
// 007ff771  53                   push ebx
// 007ff772  55                   push ebp
// 007ff773  56                   push esi
// 007ff774  57                   push edi
// 007ff775  a10052b600           mov eax, dword ptr [0xb65200]
// 007ff77a  33c4                 xor eax, esp
// 007ff77c  50                   push eax
// 007ff77d  8d442430             lea eax, [esp + 0x30]
// 007ff781  64a300000000         mov dword ptr fs:[0], eax
// 007ff787  8bd9                 mov ebx, ecx
// 007ff789  8b742448             mov esi, dword ptr [esp + 0x48]
// 007ff78d  8b06                 mov eax, dword ptr [esi]
// 007ff78f  8b5058               mov edx, dword ptr [eax + 0x58]
// 007ff792  8d4c2414             lea ecx, [esp + 0x14]
// 007ff796  51                   push ecx
// 007ff797  8bce                 mov ecx, esi
// 007ff799  ffd2                 call edx
// 007ff79b  8d442414             lea eax, [esp + 0x14]
// 007ff79f  50                   push eax
// 007ff7a0  8d4c244c             lea ecx, [esp + 0x4c]
// 007ff7a4  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 007ff7ac  ff1594de9800         call dword ptr [0x98de94]
// 007ff7b2  8d4c2448             lea ecx, [esp + 0x48]
// 007ff7b6  51                   push ecx
// 007ff7b7  c644243c01           mov byte ptr [esp + 0x3c], 1
// 007ff7bc  e80fe1ffff           call 0x7fd8d0
// 007ff7c1  83c404               add esp, 4
// 007ff7c4  837c245c00           cmp dword ptr [esp + 0x5c], 0
// 007ff7c9  0f85c6000000         jne 0x7ff895
// 007ff7cf  8d4c2448             lea ecx, [esp + 0x48]
// 007ff7d3  ff15bcdd9800         call dword ptr [0x98ddbc]
// 007ff7d9  84c0                 test al, al
// 007ff7db  7407                 je 0x7ff7e4
// 007ff7dd  b868619a00           mov eax, 0x9a6168
// 007ff7e2  eb0a                 jmp 0x7ff7ee
// 007ff7e4  8d4c2448             lea ecx, [esp + 0x48]
// 007ff7e8  ff1580de9800         call dword ptr [0x98de80]
// 007ff7ee  50                   push eax
// 007ff7ef  8d4c2468             lea ecx, [esp + 0x68]
// 007ff7f3  ff15b8de9800         call dword ptr [0x98deb8]
// 007ff7f9  8d542420             lea edx, [esp + 0x20]
// 007ff7fd  52                   push edx
// 007ff7fe  8d4c2468             lea ecx, [esp + 0x68]
// 007ff802  ff15b4dd9800         call dword ptr [0x98ddb4]
// 007ff808  50                   push eax
// 007ff809  8d4c246c             lea ecx, [esp + 0x6c]
// 007ff80d  ff1580de9800         call dword ptr [0x98de80]
// 007ff813  50                   push eax
// 007ff814  8b442450             mov eax, dword ptr [esp + 0x50]
// 007ff818  8b4808               mov ecx, dword ptr [eax + 8]
// 007ff81b  51                   push ecx
// 007ff81c  ff156cb19800         call dword ptr [0x98b16c]
// 007ff822  8b742420             mov esi, dword ptr [esp + 0x20]
// 007ff826  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 007ff82a  8d4c2464             lea ecx, [esp + 0x64]
// 007ff82e  89742418             mov dword ptr [esp + 0x18], esi
// 007ff832  897c241c             mov dword ptr [esp + 0x1c], edi
// 007ff836  ff15c0de9800         call dword ptr [0x98dec0]
// 007ff83c  837c246800           cmp dword ptr [esp + 0x68], 0
// 007ff841  7415                 je 0x7ff858
// 007ff843  33d2                 xor edx, edx
// 007ff845  39938c000000         cmp dword ptr [ebx + 0x8c], edx
// 007ff84b  0f94c2               sete dl
// 007ff84e  8d541208             lea edx, [edx + edx + 8]
// 007ff852  03f2                 add esi, edx
// 007ff854  89742418             mov dword ptr [esp + 0x18], esi
// 007ff858  837c246000           cmp dword ptr [esp + 0x60], 0
// 007ff85d  741f                 je 0x7ff87e
// 007ff85f  89742424             mov dword ptr [esp + 0x24], esi
// 007ff863  8b742440             mov esi, dword ptr [esp + 0x40]
// 007ff867  8d442420             lea eax, [esp + 0x20]
// 007ff86b  897c2420             mov dword ptr [esp + 0x20], edi
// 007ff86f  8b08                 mov ecx, dword ptr [eax]
// 007ff871  8b5004               mov edx, dword ptr [eax + 4]
// 007ff874  890e                 mov dword ptr [esi], ecx
// 007ff876  895604               mov dword ptr [esi + 4], edx
// 007ff879  e93d020000           jmp 0x7ffabb
// 007ff87e  8b742440             mov esi, dword ptr [esp + 0x40]
// 007ff882  8d442418             lea eax, [esp + 0x18]
// 007ff886  8b08                 mov ecx, dword ptr [eax]
// 007ff888  8b5004               mov edx, dword ptr [eax + 4]
// 007ff88b  890e                 mov dword ptr [esi], ecx
// 007ff88d  895604               mov dword ptr [esi + 4], edx
// 007ff890  e926020000           jmp 0x7ffabb
// 007ff895  837c246000           cmp dword ptr [esp + 0x60], 0
// 007ff89a  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 007ff89e  0f85e0000000         jne 0x7ff984
// 007ff8a4  8d442448             lea eax, [esp + 0x48]
// 007ff8a8  50                   push eax
// 007ff8a9  8d4c2424             lea ecx, [esp + 0x24]
// 007ff8ad  51                   push ecx
// 007ff8ae  8bcd                 mov ecx, ebp
// 007ff8b0  e8fbbac6ff           call 0x46b3b0
// 007ff8b5  8b7c2468             mov edi, dword ptr [esp + 0x68]
// 007ff8b9  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 007ff8bd  f7df                 neg edi
// 007ff8bf  1bff                 sbb edi, edi
// 007ff8c1  83e705               and edi, 5
// 007ff8c4  0338                 add edi, dword ptr [eax]
// 007ff8c6  837c246400           cmp dword ptr [esp + 0x64], 0
// 007ff8cb  7411                 je 0x7ff8de
// 007ff8cd  8bc1                 mov eax, ecx
// 007ff8cf  2b44244c             sub eax, dword ptr [esp + 0x4c]
// 007ff8d3  2bc7                 sub eax, edi
// 007ff8d5  99                   cdq 
// 007ff8d6  2bc2                 sub eax, edx
// 007ff8d8  d1f8                 sar eax, 1
// 007ff8da  0144244c             add dword ptr [esp + 0x4c], eax
// 007ff8de  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 007ff8e2  6a00                 push 0
// 007ff8e4  6a00                 push 0
// 007ff8e6  83ec10               sub esp, 0x10
// 007ff8e9  8bc4                 mov eax, esp
// 007ff8eb  8910                 mov dword ptr [eax], edx
// 007ff8ed  8b542468             mov edx, dword ptr [esp + 0x68]
// 007ff8f1  895004               mov dword ptr [eax + 4], edx
// 007ff8f4  894808               mov dword ptr [eax + 8], ecx
// 007ff8f7  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 007ff8fb  89480c               mov dword ptr [eax + 0xc], ecx
// 007ff8fe  8d542460             lea edx, [esp + 0x60]
// 007ff902  52                   push edx
// 007ff903  8d442430             lea eax, [esp + 0x30]
// 007ff907  50                   push eax
// 007ff908  56                   push esi
// 007ff909  55                   push ebp
// 007ff90a  8bcb                 mov ecx, ebx
// 007ff90c  e88ff5ffff           call 0x7feea0
// 007ff911  837c246800           cmp dword ptr [esp + 0x68], 0
// 007ff916  0f848e010000         je 0x7ffaaa
// 007ff91c  8b542450             mov edx, dword ptr [esp + 0x50]
// 007ff920  8b442458             mov eax, dword ptr [esp + 0x58]
// 007ff924  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 007ff928  03c2                 add eax, edx
// 007ff92a  99                   cdq 
// 007ff92b  03cf                 add ecx, edi
// 007ff92d  2bc2                 sub eax, edx
// 007ff92f  8bf8                 mov edi, eax
// 007ff931  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 007ff937  d1ff                 sar edi, 1
// 007ff939  894c2420             mov dword ptr [esp + 0x20], ecx
// 007ff93d  83f8ff               cmp eax, -1
// 007ff940  750f                 jne 0x7ff951
// 007ff942  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 007ff948  85c9                 test ecx, ecx
// 007ff94a  7405                 je 0x7ff951
// 007ff94c  e85f6cffff           call 0x7f65b0
// 007ff951  8b16                 mov edx, dword ptr [esi]
// 007ff953  8b2b                 mov ebp, dword ptr [ebx]
// 007ff955  6a00                 push 0
// 007ff957  50                   push eax
// 007ff958  8b82b4000000         mov eax, dword ptr [edx + 0xb4]
// 007ff95e  8bce                 mov ecx, esi
// 007ff960  ffd0                 call eax
// 007ff962  8b16                 mov edx, dword ptr [esi]
// 007ff964  50                   push eax
// 007ff965  8b426c               mov eax, dword ptr [edx + 0x6c]
// 007ff968  8bce                 mov ecx, esi
// 007ff96a  ffd0                 call eax
// 007ff96c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007ff970  8b542450             mov edx, dword ptr [esp + 0x50]
// 007ff974  50                   push eax
// 007ff975  8b85f4000000         mov eax, dword ptr [ebp + 0xf4]
// 007ff97b  57                   push edi
// 007ff97c  51                   push ecx
// 007ff97d  56                   push esi
// 007ff97e  52                   push edx
// 007ff97f  e922010000           jmp 0x7ffaa6
// 007ff984  8b542450             mov edx, dword ptr [esp + 0x50]
// 007ff988  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 007ff98c  8b442454             mov eax, dword ptr [esp + 0x54]
// 007ff990  894c2420             mov dword ptr [esp + 0x20], ecx
// 007ff994  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 007ff998  89542424             mov dword ptr [esp + 0x24], edx
// 007ff99c  8d542448             lea edx, [esp + 0x48]
// 007ff9a0  89442428             mov dword ptr [esp + 0x28], eax
// 007ff9a4  52                   push edx
// 007ff9a5  8d44241c             lea eax, [esp + 0x1c]
// 007ff9a9  894c2430             mov dword ptr [esp + 0x30], ecx
// 007ff9ad  50                   push eax
// 007ff9ae  8bcd                 mov ecx, ebp
// 007ff9b0  e8fbb9c6ff           call 0x46b3b0
// 007ff9b5  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 007ff9b9  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 007ff9bd  f7d9                 neg ecx
// 007ff9bf  1bc9                 sbb ecx, ecx
// 007ff9c1  8bc7                 mov eax, edi
// 007ff9c3  2b44241c             sub eax, dword ptr [esp + 0x1c]
// 007ff9c7  83e105               and ecx, 5
// 007ff9ca  2b44244c             sub eax, dword ptr [esp + 0x4c]
// 007ff9ce  014c2418             add dword ptr [esp + 0x18], ecx
// 007ff9d2  40                   inc eax
// 007ff9d3  99                   cdq 
// 007ff9d4  2bc2                 sub eax, edx
// 007ff9d6  d1f8                 sar eax, 1
// 007ff9d8  8bcf                 mov ecx, edi
// 007ff9da  2bc8                 sub ecx, eax
// 007ff9dc  837c246400           cmp dword ptr [esp + 0x64], 0
// 007ff9e1  894c244c             mov dword ptr [esp + 0x4c], ecx
// 007ff9e5  7416                 je 0x7ff9fd
// 007ff9e7  8b442458             mov eax, dword ptr [esp + 0x58]
// 007ff9eb  2b442450             sub eax, dword ptr [esp + 0x50]
// 007ff9ef  2b442418             sub eax, dword ptr [esp + 0x18]
// 007ff9f3  40                   inc eax
// 007ff9f4  99                   cdq 
// 007ff9f5  2bc2                 sub eax, edx
// 007ff9f7  d1f8                 sar eax, 1
// 007ff9f9  01442450             add dword ptr [esp + 0x50], eax
// 007ff9fd  8b542460             mov edx, dword ptr [esp + 0x60]
// 007ffa01  6a00                 push 0
// 007ffa03  52                   push edx
// 007ffa04  8b542460             mov edx, dword ptr [esp + 0x60]
// 007ffa08  83ec10               sub esp, 0x10
// 007ffa0b  8bc4                 mov eax, esp
// 007ffa0d  8908                 mov dword ptr [eax], ecx
// 007ffa0f  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 007ffa13  894804               mov dword ptr [eax + 4], ecx
// 007ffa16  897808               mov dword ptr [eax + 8], edi
// 007ffa19  89500c               mov dword ptr [eax + 0xc], edx
// 007ffa1c  8d442460             lea eax, [esp + 0x60]
// 007ffa20  50                   push eax
// 007ffa21  8d4c2430             lea ecx, [esp + 0x30]
// 007ffa25  51                   push ecx
// 007ffa26  56                   push esi
// 007ffa27  55                   push ebp
// 007ffa28  8bcb                 mov ecx, ebx
// 007ffa2a  e871f4ffff           call 0x7feea0
// 007ffa2f  837c246800           cmp dword ptr [esp + 0x68], 0
// 007ffa34  7474                 je 0x7ffaaa
// 007ffa36  8b542428             mov edx, dword ptr [esp + 0x28]
// 007ffa3a  8b442420             mov eax, dword ptr [esp + 0x20]
// 007ffa3e  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 007ffa42  03c2                 add eax, edx
// 007ffa44  99                   cdq 
// 007ffa45  2bc2                 sub eax, edx
// 007ffa47  8b542418             mov edx, dword ptr [esp + 0x18]
// 007ffa4b  8bf8                 mov edi, eax
// 007ffa4d  8d4411ff             lea eax, [ecx + edx - 1]
// 007ffa51  89442424             mov dword ptr [esp + 0x24], eax
// 007ffa55  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 007ffa5b  d1ff                 sar edi, 1
// 007ffa5d  83f8ff               cmp eax, -1
// 007ffa60  750f                 jne 0x7ffa71
// 007ffa62  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 007ffa68  85c9                 test ecx, ecx
// 007ffa6a  7405                 je 0x7ffa71
// 007ffa6c  e83f6bffff           call 0x7f65b0
// 007ffa71  8b542460             mov edx, dword ptr [esp + 0x60]
// 007ffa75  8b0b                 mov ecx, dword ptr [ebx]
// 007ffa77  52                   push edx
// 007ffa78  50                   push eax
// 007ffa79  8b06                 mov eax, dword ptr [esi]
// 007ffa7b  8b90b4000000         mov edx, dword ptr [eax + 0xb4]
// 007ffa81  894c2470             mov dword ptr [esp + 0x70], ecx
// 007ffa85  8bce                 mov ecx, esi
// 007ffa87  ffd2                 call edx
// 007ffa89  50                   push eax
// 007ffa8a  8b06                 mov eax, dword ptr [esi]
// 007ffa8c  8b506c               mov edx, dword ptr [eax + 0x6c]
// 007ffa8f  8bce                 mov ecx, esi
// 007ffa91  ffd2                 call edx
// 007ffa93  8b542474             mov edx, dword ptr [esp + 0x74]
// 007ffa97  50                   push eax
// 007ffa98  8b442434             mov eax, dword ptr [esp + 0x34]
// 007ffa9c  50                   push eax
// 007ffa9d  8b82f4000000         mov eax, dword ptr [edx + 0xf4]
// 007ffaa3  57                   push edi
// 007ffaa4  56                   push esi
// 007ffaa5  55                   push ebp
// 007ffaa6  8bcb                 mov ecx, ebx
// 007ffaa8  ffd0                 call eax
// 007ffaaa  8b742440             mov esi, dword ptr [esp + 0x40]
// 007ffaae  c70600000000         mov dword ptr [esi], 0
// 007ffab4  c7460400000000       mov dword ptr [esi + 4], 0
// 007ffabb  8d4c2448             lea ecx, [esp + 0x48]
// 007ffabf  ff15c0de9800         call dword ptr [0x98dec0]
// 007ffac5  8d4c2414             lea ecx, [esp + 0x14]
// 007ffac9  ff15c0de9800         call dword ptr [0x98dec0]
// 007ffacf  8bc6                 mov eax, esi
// 007ffad1  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007ffad5  64890d00000000       mov dword ptr fs:[0], ecx
// 007ffadc  59                   pop ecx
// 007ffadd  5f                   pop edi
// 007ffade  5e                   pop esi
// 007ffadf  5d                   pop ebp
// 007ffae0  5b                   pop ebx
// 007ffae1  83c428               add esp, 0x28
// 007ffae4  c22c00               ret 0x2c
// copied from an identical function in another client (function ?DrawControlText@CXTPPaintManager@@QAE?AVCSize@@PAVCDC@@PAVCXTPControl@@VCRect@@HHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPPaintManager.cpp