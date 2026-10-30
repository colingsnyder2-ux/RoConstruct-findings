// roc 2012-06 009ae590  unit: CXTPReportControl  size: 446 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ae590
//
// 009ae590  6aff                 push -1
// 009ae592  68b8e2ad00           push 0xade2b8
// 009ae597  64a100000000         mov eax, dword ptr fs:[0]
// 009ae59d  50                   push eax
// 009ae59e  83ec1c               sub esp, 0x1c
// 009ae5a1  53                   push ebx
// 009ae5a2  55                   push ebp
// 009ae5a3  56                   push esi
// 009ae5a4  57                   push edi
// 009ae5a5  a1d027e000           mov eax, dword ptr [0xe027d0]
// 009ae5aa  33c4                 xor eax, esp
// 009ae5ac  50                   push eax
// 009ae5ad  8d442430             lea eax, [esp + 0x30]
// 009ae5b1  64a300000000         mov dword ptr fs:[0], eax
// 009ae5b7  894c2420             mov dword ptr [esp + 0x20], ecx
// 009ae5bb  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 009ae5bf  e8dcc50000           call 0x9baba0
// 009ae5c4  8b742440             mov esi, dword ptr [esp + 0x40]
// 009ae5c8  33db                 xor ebx, ebx
// 009ae5ca  3bf3                 cmp esi, ebx
// 009ae5cc  7455                 je 0x9ae623
// 009ae5ce  395e28               cmp dword ptr [esi + 0x28], ebx
// 009ae5d1  7450                 je 0x9ae623
// 009ae5d3  8b06                 mov eax, dword ptr [esi]
// 009ae5d5  8b5070               mov edx, dword ptr [eax + 0x70]
// 009ae5d8  682004c100           push 0xc10420
// 009ae5dd  8bce                 mov ecx, esi
// 009ae5df  ffd2                 call edx
// 009ae5e1  8bf8                 mov edi, eax
// 009ae5e3  897c2424             mov dword ptr [esp + 0x24], edi
// 009ae5e7  8d442418             lea eax, [esp + 0x18]
// 009ae5eb  50                   push eax
// 009ae5ec  68882eb400           push 0xb42e88
// 009ae5f1  56                   push esi
// 009ae5f2  895c2444             mov dword ptr [esp + 0x44], ebx
// 009ae5f6  895c2424             mov dword ptr [esp + 0x24], ebx
// 009ae5fa  e8519d0200           call 0x9d8350
// 009ae5ff  83c40c               add esp, 0xc
// 009ae602  8bce                 mov ecx, esi
// 009ae604  e8b7ad0200           call 0x9d93c0
// 009ae609  837c241801           cmp dword ptr [esp + 0x18], 1
// 009ae60e  742b                 je 0x9ae63b
// 009ae610  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 009ae618  3bfb                 cmp edi, ebx
// 009ae61a  7407                 je 0x9ae623
// 009ae61c  8bcf                 mov ecx, edi
// 009ae61e  e86740fdff           call 0x98268a
// 009ae623  33c0                 xor eax, eax
// 009ae625  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 009ae629  64890d00000000       mov dword ptr fs:[0], ecx
// 009ae630  59                   pop ecx
// 009ae631  5f                   pop edi
// 009ae632  5e                   pop esi
// 009ae633  5d                   pop ebp
// 009ae634  5b                   pop ebx
// 009ae635  83c428               add esp, 0x28
// 009ae638  c20800               ret 8
// 009ae63b  8b17                 mov edx, dword ptr [edi]
// 009ae63d  8b8294000000         mov eax, dword ptr [edx + 0x94]
// 009ae643  681804c100           push 0xc10418
// 009ae648  8bcf                 mov ecx, edi
// 009ae64a  ffd0                 call eax
// 009ae64c  8be8                 mov ebp, eax
// 009ae64e  896c2428             mov dword ptr [esp + 0x28], ebp
// 009ae652  8b5500               mov edx, dword ptr [ebp]
// 009ae655  8b4204               mov eax, dword ptr [edx + 4]
// 009ae658  6a01                 push 1
// 009ae65a  53                   push ebx
// 009ae65b  8bcd                 mov ecx, ebp
// 009ae65d  c644244001           mov byte ptr [esp + 0x40], 1
// 009ae662  ffd0                 call eax
// 009ae664  8944241c             mov dword ptr [esp + 0x1c], eax
// 009ae668  3bc3                 cmp eax, ebx
// 009ae66a  0f84ae000000         je 0x9ae71e
// 009ae670  8b5500               mov edx, dword ptr [ebp]
// 009ae673  8b5208               mov edx, dword ptr [edx + 8]
// 009ae676  8d44241c             lea eax, [esp + 0x1c]
// 009ae67a  50                   push eax
// 009ae67b  8bcd                 mov ecx, ebp
// 009ae67d  ffd2                 call edx
// 009ae67f  8bf0                 mov esi, eax
// 009ae681  8974242c             mov dword ptr [esp + 0x2c], esi
// 009ae685  c644243802           mov byte ptr [esp + 0x38], 2
// 009ae68a  895c2440             mov dword ptr [esp + 0x40], ebx
// 009ae68e  e8fda60000           call 0x9b8d90
// 009ae693  8b16                 mov edx, dword ptr [esi]
// 009ae695  8b5264               mov edx, dword ptr [edx + 0x64]
// 009ae698  50                   push eax
// 009ae699  8d442444             lea eax, [esp + 0x44]
// 009ae69d  50                   push eax
// 009ae69e  8bce                 mov ecx, esi
// 009ae6a0  ffd2                 call edx
// 009ae6a2  85c0                 test eax, eax
// 009ae6a4  740c                 je 0x9ae6b2
// 009ae6a6  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 009ae6aa  8b01                 mov eax, dword ptr [ecx]
// 009ae6ac  8b5060               mov edx, dword ptr [eax + 0x60]
// 009ae6af  56                   push esi
// 009ae6b0  ffd2                 call edx
// 009ae6b2  8b442440             mov eax, dword ptr [esp + 0x40]
// 009ae6b6  3bc3                 cmp eax, ebx
// 009ae6b8  0f8488000000         je 0x9ae746
// 009ae6be  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 009ae6c2  89442414             mov dword ptr [esp + 0x14], eax
// 009ae6c6  8b01                 mov eax, dword ptr [ecx]
// 009ae6c8  8b8000020000         mov eax, dword ptr [eax + 0x200]
// 009ae6ce  8d542414             lea edx, [esp + 0x14]
// 009ae6d2  52                   push edx
// 009ae6d3  ffd0                 call eax
// 009ae6d5  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 009ae6d9  8bf8                 mov edi, eax
// 009ae6db  3bfb                 cmp edi, ebx
// 009ae6dd  7506                 jne 0x9ae6e5
// 009ae6df  394c2414             cmp dword ptr [esp + 0x14], ecx
// 009ae6e3  7411                 je 0x9ae6f6
// 009ae6e5  3bcb                 cmp ecx, ebx
// 009ae6e7  7409                 je 0x9ae6f2
// 009ae6e9  e89c3ffdff           call 0x98268a
// 009ae6ee  895c2440             mov dword ptr [esp + 0x40], ebx
// 009ae6f2  3bfb                 cmp edi, ebx
// 009ae6f4  750e                 jne 0x9ae704
// 009ae6f6  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 009ae6fa  51                   push ecx
// 009ae6fb  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 009ae6ff  e8fcc80000           call 0x9bb000
// 009ae704  8bce                 mov ecx, esi
// 009ae706  c644243801           mov byte ptr [esp + 0x38], 1
// 009ae70b  e87a3ffdff           call 0x98268a
// 009ae710  395c241c             cmp dword ptr [esp + 0x1c], ebx
// 009ae714  0f8556ffffff         jne 0x9ae670
// 009ae71a  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 009ae71e  8b5500               mov edx, dword ptr [ebp]
// 009ae721  8b02                 mov eax, dword ptr [edx]
// 009ae723  6a01                 push 1
// 009ae725  8bcd                 mov ecx, ebp
// 009ae727  885c243c             mov byte ptr [esp + 0x3c], bl
// 009ae72b  ffd0                 call eax
// 009ae72d  8bcf                 mov ecx, edi
// 009ae72f  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 009ae737  e84e3ffdff           call 0x98268a
// 009ae73c  b801000000           mov eax, 1
// 009ae741  e9dffeffff           jmp 0x9ae625
// 009ae746  53                   push ebx
// 009ae747  6a06                 push 6
// 009ae749  e80c45fdff           call 0x982c5a
// copied from an identical function in another client (function ?_ReadRecodsFromData@CXTPReportControl@@MAEHPAVCXTPPropExchange@@AAVCXTPReportRecords@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportControl.cpp