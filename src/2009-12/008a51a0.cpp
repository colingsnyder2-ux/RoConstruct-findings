// roc 2009-12 008a51a0  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 945 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a51a0
//
// 008a51a0  6aff                 push -1
// 008a51a2  689d259600           push 0x96259d
// 008a51a7  64a100000000         mov eax, dword ptr fs:[0]
// 008a51ad  50                   push eax
// 008a51ae  83ec74               sub esp, 0x74
// 008a51b1  53                   push ebx
// 008a51b2  55                   push ebp
// 008a51b3  56                   push esi
// 008a51b4  57                   push edi
// 008a51b5  a10052b600           mov eax, dword ptr [0xb65200]
// 008a51ba  33c4                 xor eax, esp
// 008a51bc  50                   push eax
// 008a51bd  8d842488000000       lea eax, [esp + 0x88]
// 008a51c4  64a300000000         mov dword ptr fs:[0], eax
// 008a51ca  8bf1                 mov esi, ecx
// 008a51cc  8b06                 mov eax, dword ptr [esi]
// 008a51ce  8b808c000000         mov eax, dword ptr [eax + 0x8c]
// 008a51d4  8d4c241c             lea ecx, [esp + 0x1c]
// 008a51d8  51                   push ecx
// 008a51d9  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 008a51e0  8d542434             lea edx, [esp + 0x34]
// 008a51e4  52                   push edx
// 008a51e5  8b9424a0000000       mov edx, dword ptr [esp + 0xa0]
// 008a51ec  33db                 xor ebx, ebx
// 008a51ee  51                   push ecx
// 008a51ef  52                   push edx
// 008a51f0  8bce                 mov ecx, esi
// 008a51f2  895c2440             mov dword ptr [esp + 0x40], ebx
// 008a51f6  895c2444             mov dword ptr [esp + 0x44], ebx
// 008a51fa  895c2448             mov dword ptr [esp + 0x48], ebx
// 008a51fe  895c244c             mov dword ptr [esp + 0x4c], ebx
// 008a5202  895c242c             mov dword ptr [esp + 0x2c], ebx
// 008a5206  ffd0                 call eax
// 008a5208  8be8                 mov ebp, eax
// 008a520a  3beb                 cmp ebp, ebx
// 008a520c  0f8412030000         je 0x8a5524
// 008a5212  8b5500               mov edx, dword ptr [ebp]
// 008a5215  8b82c8000000         mov eax, dword ptr [edx + 0xc8]
// 008a521b  8bcd                 mov ecx, ebp
// 008a521d  ffd0                 call eax
// 008a521f  85c0                 test eax, eax
// 008a5221  0f85fd020000         jne 0x8a5524
// 008a5227  395c241c             cmp dword ptr [esp + 0x1c], ebx
// 008a522b  0f84f3020000         je 0x8a5524
// 008a5231  8b4624               mov eax, dword ptr [esi + 0x24]
// 008a5234  3bc3                 cmp eax, ebx
// 008a5236  7504                 jne 0x8a523c
// 008a5238  33c0                 xor eax, eax
// 008a523a  eb03                 jmp 0x8a523f
// 008a523c  8b4020               mov eax, dword ptr [eax + 0x20]
// 008a523f  50                   push eax
// 008a5240  e86b58faff           call 0x84aab0
// 008a5245  83c404               add esp, 4
// 008a5248  85c0                 test eax, eax
// 008a524a  0f84e5020000         je 0x8a5535
// 008a5250  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 008a5253  399920020000         cmp dword ptr [ecx + 0x220], ebx
// 008a5259  0f85d6020000         jne 0x8a5535
// 008a525f  8bbc24a0000000       mov edi, dword ptr [esp + 0xa0]
// 008a5266  3b6f6c               cmp ebp, dword ptr [edi + 0x6c]
// 008a5269  750c                 jne 0x8a5277
// 008a526b  8b5628               mov edx, dword ptr [esi + 0x28]
// 008a526e  3b5770               cmp edx, dword ptr [edi + 0x70]
// 008a5271  0f84be020000         je 0x8a5535
// 008a5277  896f6c               mov dword ptr [edi + 0x6c], ebp
// 008a527a  8b4628               mov eax, dword ptr [esi + 0x28]
// 008a527d  894770               mov dword ptr [edi + 0x70], eax
// 008a5280  8b5500               mov edx, dword ptr [ebp]
// 008a5283  8b928c000000         mov edx, dword ptr [edx + 0x8c]
// 008a5289  8d442418             lea eax, [esp + 0x18]
// 008a528d  50                   push eax
// 008a528e  8bcd                 mov ecx, ebp
// 008a5290  ffd2                 call edx
// 008a5292  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 008a5295  8b01                 mov eax, dword ptr [ecx]
// 008a5297  8b8038020000         mov eax, dword ptr [eax + 0x238]
// 008a529d  8d542418             lea edx, [esp + 0x18]
// 008a52a1  52                   push edx
// 008a52a2  55                   push ebp
// 008a52a3  56                   push esi
// 008a52a4  899c249c000000       mov dword ptr [esp + 0x9c], ebx
// 008a52ab  ffd0                 call eax
// 008a52ad  8d4c2418             lea ecx, [esp + 0x18]
// 008a52b1  ff15bcdd9800         call dword ptr [0x98ddbc]
// 008a52b7  84c0                 test al, al
// 008a52b9  0f84dd000000         je 0x8a539c
// 008a52bf  6868619a00           push 0x9a6168
// 008a52c4  8d4c241c             lea ecx, [esp + 0x1c]
// 008a52c8  ff1584de9800         call dword ptr [0x98de84]
// 008a52ce  85c0                 test eax, eax
// 008a52d0  0f84c6000000         je 0x8a539c
// 008a52d6  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008a52da  e86127f8ff           call 0x827a40
// 008a52df  a810                 test al, 0x10
// 008a52e1  0f85b5000000         jne 0x8a539c
// 008a52e7  6a40                 push 0x40
// 008a52e9  e872e5f4ff           call 0x7f3860
// 008a52ee  83c404               add esp, 4
// 008a52f1  89442420             mov dword ptr [esp + 0x20], eax
// 008a52f5  c684249000000001     mov byte ptr [esp + 0x90], 1
// 008a52fd  3bc3                 cmp eax, ebx
// 008a52ff  7409                 je 0x8a530a
// 008a5301  8bc8                 mov ecx, eax
// 008a5303  e8e852f7ff           call 0x81a5f0
// 008a5308  8bd8                 mov ebx, eax
// 008a530a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008a530e  8b5500               mov edx, dword ptr [ebp]
// 008a5311  8b526c               mov edx, dword ptr [edx + 0x6c]
// 008a5314  50                   push eax
// 008a5315  8d4c2424             lea ecx, [esp + 0x24]
// 008a5319  51                   push ecx
// 008a531a  8bcd                 mov ecx, ebp
// 008a531c  c684249800000000     mov byte ptr [esp + 0x98], 0
// 008a5324  ffd2                 call edx
// 008a5326  8d4b2c               lea ecx, [ebx + 0x2c]
// 008a5329  50                   push eax
// 008a532a  c684249400000002     mov byte ptr [esp + 0x94], 2
// 008a5332  ff1538d59800         call dword ptr [0x98d538]
// 008a5338  8d4c2420             lea ecx, [esp + 0x20]
// 008a533c  c684249000000000     mov byte ptr [esp + 0x90], 0
// 008a5344  ff15c0de9800         call dword ptr [0x98dec0]
// 008a534a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008a534e  8b06                 mov eax, dword ptr [esi]
// 008a5350  8b90f0000000         mov edx, dword ptr [eax + 0xf0]
// 008a5356  53                   push ebx
// 008a5357  55                   push ebp
// 008a5358  51                   push ecx
// 008a5359  8bce                 mov ecx, esi
// 008a535b  ffd2                 call edx
// 008a535d  8d432c               lea eax, [ebx + 0x2c]
// 008a5360  50                   push eax
// 008a5361  8d4c2418             lea ecx, [esp + 0x18]
// 008a5365  ff1594de9800         call dword ptr [0x98de94]
// 008a536b  8d4c2414             lea ecx, [esp + 0x14]
// 008a536f  c684249000000003     mov byte ptr [esp + 0x90], 3
// 008a5377  ff1584dc9800         call dword ptr [0x98dc84]
// 008a537d  8d4c2414             lea ecx, [esp + 0x14]
// 008a5381  ff15bcdd9800         call dword ptr [0x98ddbc]
// 008a5387  84c0                 test al, al
// 008a5389  7420                 je 0x8a53ab
// 008a538b  8bcb                 mov ecx, ebx
// 008a538d  e84aeaf4ff           call 0x7f3ddc
// 008a5392  8d4c2414             lea ecx, [esp + 0x14]
// 008a5396  ff15c0de9800         call dword ptr [0x98dec0]
// 008a539c  8d4c2418             lea ecx, [esp + 0x18]
// 008a53a0  ff15c0de9800         call dword ptr [0x98dec0]
// 008a53a6  e98a010000           jmp 0x8a5535
// 008a53ab  8d4c2464             lea ecx, [esp + 0x64]
// 008a53af  e8ac52f7ff           call 0x81a660
// 008a53b4  8b4624               mov eax, dword ptr [esi + 0x24]
// 008a53b7  8b5500               mov edx, dword ptr [ebp]
// 008a53ba  8b5270               mov edx, dword ptr [edx + 0x70]
// 008a53bd  89442468             mov dword ptr [esp + 0x68], eax
// 008a53c1  8d442430             lea eax, [esp + 0x30]
// 008a53c5  50                   push eax
// 008a53c6  8d4c2468             lea ecx, [esp + 0x68]
// 008a53ca  51                   push ecx
// 008a53cb  8bcd                 mov ecx, ebp
// 008a53cd  c684249800000004     mov byte ptr [esp + 0x98], 4
// 008a53d5  89742474             mov dword ptr [esp + 0x74], esi
// 008a53d9  ffd2                 call edx
// 008a53db  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 008a53de  8d442430             lea eax, [esp + 0x30]
// 008a53e2  50                   push eax
// 008a53e3  e812eaf4ff           call 0x7f3dfa
// 008a53e8  33ed                 xor ebp, ebp
// 008a53ea  396f20               cmp dword ptr [edi + 0x20], ebp
// 008a53ed  7510                 jne 0x8a53ff
// 008a53ef  8b17                 mov edx, dword ptr [edi]
// 008a53f1  8b4624               mov eax, dword ptr [esi + 0x24]
// 008a53f4  8b9244010000         mov edx, dword ptr [edx + 0x144]
// 008a53fa  50                   push eax
// 008a53fb  8bcf                 mov ecx, edi
// 008a53fd  ffd2                 call edx
// 008a53ff  8b4624               mov eax, dword ptr [esi + 0x24]
// 008a5402  50                   push eax
// 008a5403  8d4c2454             lea ecx, [esp + 0x54]
// 008a5407  e87e100800           call 0x92648a
// 008a540c  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 008a540f  51                   push ecx
// 008a5410  8d542454             lea edx, [esp + 0x54]
// 008a5414  52                   push edx
// 008a5415  8d4c2448             lea ecx, [esp + 0x48]
// 008a5419  c684249800000005     mov byte ptr [esp + 0x98], 5
// 008a5421  e83a62faff           call 0x84b660
// 008a5426  8d442414             lea eax, [esp + 0x14]
// 008a542a  50                   push eax
// 008a542b  8d4c2424             lea ecx, [esp + 0x24]
// 008a542f  51                   push ecx
// 008a5430  8d4c2458             lea ecx, [esp + 0x58]
// 008a5434  c684249800000006     mov byte ptr [esp + 0x98], 6
// 008a543c  e86f5fbcff           call 0x46b3b0
// 008a5441  8b542438             mov edx, dword ptr [esp + 0x38]
// 008a5445  2b542430             sub edx, dword ptr [esp + 0x30]
// 008a5449  83ea04               sub edx, 4
// 008a544c  39542420             cmp dword ptr [esp + 0x20], edx
// 008a5450  0f8e8f000000         jle 0x8a54e5
// 008a5456  b801000000           mov eax, 1
// 008a545b  29442430             sub dword ptr [esp + 0x30], eax
// 008a545f  29442434             sub dword ptr [esp + 0x34], eax
// 008a5463  8b4320               mov eax, dword ptr [ebx + 0x20]
// 008a5466  50                   push eax
// 008a5467  8bcf                 mov ecx, edi
// 008a5469  e8f2edffff           call 0x8a4260
// 008a546e  8d4c2414             lea ecx, [esp + 0x14]
// 008a5472  ff1580de9800         call dword ptr [0x98de80]
// 008a5478  50                   push eax
// 008a5479  8d4f68               lea ecx, [edi + 0x68]
// 008a547c  ff155cde9800         call dword ptr [0x98de5c]
// 008a5482  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008a5486  8b542434             mov edx, dword ptr [esp + 0x34]
// 008a548a  83ec10               sub esp, 0x10
// 008a548d  8bc4                 mov eax, esp
// 008a548f  8908                 mov dword ptr [eax], ecx
// 008a5491  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008a5495  895004               mov dword ptr [eax + 4], edx
// 008a5498  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 008a549c  894808               mov dword ptr [eax + 8], ecx
// 008a549f  8bcf                 mov ecx, edi
// 008a54a1  89500c               mov dword ptr [eax + 0xc], edx
// 008a54a4  e817eeffff           call 0x8a42c0
// 008a54a9  6a01                 push 1
// 008a54ab  8bcf                 mov ecx, edi
// 008a54ad  e86e0b0000           call 0x8a6020
// 008a54b2  8b7624               mov esi, dword ptr [esi + 0x24]
// 008a54b5  c744242010000000     mov dword ptr [esp + 0x20], 0x10
// 008a54bd  c744242402000000     mov dword ptr [esp + 0x24], 2
// 008a54c5  3bf5                 cmp esi, ebp
// 008a54c7  7506                 jne 0x8a54cf
// 008a54c9  896c2428             mov dword ptr [esp + 0x28], ebp
// 008a54cd  eb07                 jmp 0x8a54d6
// 008a54cf  8b4620               mov eax, dword ptr [esi + 0x20]
// 008a54d2  89442428             mov dword ptr [esp + 0x28], eax
// 008a54d6  8d4c2420             lea ecx, [esp + 0x20]
// 008a54da  51                   push ecx
// 008a54db  896c2430             mov dword ptr [esp + 0x30], ebp
// 008a54df  ff1564b09800         call dword ptr [0x98b064]
// 008a54e5  8bcb                 mov ecx, ebx
// 008a54e7  e8f0e8f4ff           call 0x7f3ddc
// 008a54ec  8d4c2440             lea ecx, [esp + 0x40]
// 008a54f0  c684249000000005     mov byte ptr [esp + 0x90], 5
// 008a54f8  e8e361faff           call 0x84b6e0
// 008a54fd  8d4c2450             lea ecx, [esp + 0x50]
// 008a5501  c684249000000004     mov byte ptr [esp + 0x90], 4
// 008a5509  e8760f0800           call 0x926484
// 008a550e  8d4c2464             lea ecx, [esp + 0x64]
// 008a5512  c684249000000003     mov byte ptr [esp + 0x90], 3
// 008a551a  e8814bf7ff           call 0x81a0a0
// 008a551f  e96efeffff           jmp 0x8a5392
// 008a5524  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 008a552b  89586c               mov dword ptr [eax + 0x6c], ebx
// 008a552e  c74070ffffffff       mov dword ptr [eax + 0x70], 0xffffffff
// 008a5535  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 008a553c  64890d00000000       mov dword ptr fs:[0], ecx
// 008a5543  59                   pop ecx
// 008a5544  5f                   pop edi
// 008a5545  5e                   pop esi
// 008a5546  5d                   pop ebp
// 008a5547  5b                   pop ebx
// 008a5548  81c480000000         add esp, 0x80
// 008a554e  c20c00               ret 0xc
// copied from an identical function in another client (function ?ShowToolTip@CXTPReportRow@@UAEXVCPoint@@PAVCXTPReportTip@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportRow.cpp