// roc 2009-12 00875750  unit: CXTPRibbonTheme  size: 808 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00875750
//
// 00875750  83ec30               sub esp, 0x30
// 00875753  53                   push ebx
// 00875754  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 00875758  55                   push ebp
// 00875759  56                   push esi
// 0087575a  8bb300010000         mov esi, dword ptr [ebx + 0x100]
// 00875760  57                   push edi
// 00875761  8bf9                 mov edi, ecx
// 00875763  8bce                 mov ecx, esi
// 00875765  897c2418             mov dword ptr [esp + 0x18], edi
// 00875769  e8e2f70100           call 0x894f50
// 0087576e  85c0                 test eax, eax
// 00875770  0f84e4020000         je 0x875a5a
// 00875776  8bce                 mov ecx, esi
// 00875778  e813f70100           call 0x894e90
// 0087577d  85c0                 test eax, eax
// 0087577f  0f84d5020000         je 0x875a5a
// 00875785  8b03                 mov eax, dword ptr [ebx]
// 00875787  8b90b4000000         mov edx, dword ptr [eax + 0xb4]
// 0087578d  8bcb                 mov ecx, ebx
// 0087578f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00875797  ffd2                 call edx
// 00875799  85c0                 test eax, eax
// 0087579b  740a                 je 0x8757a7
// 0087579d  c744241004000000     mov dword ptr [esp + 0x10], 4
// 008757a5  eb15                 jmp 0x8757bc
// 008757a7  8b03                 mov eax, dword ptr [ebx]
// 008757a9  8b506c               mov edx, dword ptr [eax + 0x6c]
// 008757ac  8bcb                 mov ecx, ebx
// 008757ae  ffd2                 call edx
// 008757b0  85c0                 test eax, eax
// 008757b2  7408                 je 0x8757bc
// 008757b4  c744241002000000     mov dword ptr [esp + 0x10], 2
// 008757bc  8b03                 mov eax, dword ptr [ebx]
// 008757be  8b90a8000000         mov edx, dword ptr [eax + 0xa8]
// 008757c4  6a20                 push 0x20
// 008757c6  8bcb                 mov ecx, ebx
// 008757c8  ffd2                 call edx
// 008757ca  8bf0                 mov esi, eax
// 008757cc  85f6                 test esi, esi
// 008757ce  0f8482000000         je 0x875856
// 008757d4  8bce                 mov ecx, esi
// 008757d6  e8a584fdff           call 0x84dc80
// 008757db  83f820               cmp eax, 0x20
// 008757de  7e76                 jle 0x875856
// 008757e0  8bce                 mov ecx, esi
// 008757e2  e88900c6ff           call 0x4d5870
// 008757e7  8b542458             mov edx, dword ptr [esp + 0x58]
// 008757eb  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 008757ef  03ca                 add ecx, edx
// 008757f1  2bc8                 sub ecx, eax
// 008757f3  8bc1                 mov eax, ecx
// 008757f5  99                   cdq 
// 008757f6  2bc2                 sub eax, edx
// 008757f8  8bf8                 mov edi, eax
// 008757fa  8bce                 mov ecx, esi
// 008757fc  d1ff                 sar edi, 1
// 008757fe  e87d84fdff           call 0x84dc80
// 00875803  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00875807  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 0087580b  03d1                 add edx, ecx
// 0087580d  2bd0                 sub edx, eax
// 0087580f  8bc2                 mov eax, edx
// 00875811  99                   cdq 
// 00875812  2bc2                 sub eax, edx
// 00875814  8be8                 mov ebp, eax
// 00875816  8bcb                 mov ecx, ebx
// 00875818  d1fd                 sar ebp, 1
// 0087581a  e8a1c5ffff           call 0x871dc0
// 0087581f  894620               mov dword ptr [esi + 0x20], eax
// 00875822  83ec08               sub esp, 8
// 00875825  8bc4                 mov eax, esp
// 00875827  33db                 xor ebx, ebx
// 00875829  8918                 mov dword ptr [eax], ebx
// 0087582b  895804               mov dword ptr [eax + 4], ebx
// 0087582e  8b442418             mov eax, dword ptr [esp + 0x18]
// 00875832  50                   push eax
// 00875833  8bce                 mov ecx, esi
// 00875835  e826acf9ff           call 0x810460
// 0087583a  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0087583e  50                   push eax
// 0087583f  57                   push edi
// 00875840  55                   push ebp
// 00875841  51                   push ecx
// 00875842  8bce                 mov ecx, esi
// 00875844  e867b6f9ff           call 0x810eb0
// 00875849  895e20               mov dword ptr [esi + 0x20], ebx
// 0087584c  5f                   pop edi
// 0087584d  5e                   pop esi
// 0087584e  5d                   pop ebp
// 0087584f  5b                   pop ebx
// 00875850  83c430               add esp, 0x30
// 00875853  c21800               ret 0x18
// 00875856  8b542454             mov edx, dword ptr [esp + 0x54]
// 0087585a  2b54244c             sub edx, dword ptr [esp + 0x4c]
// 0087585e  83fa36               cmp edx, 0x36
// 00875861  7e1f                 jle 0x875882
// 00875863  8b442458             mov eax, dword ptr [esp + 0x58]
// 00875867  2b442450             sub eax, dword ptr [esp + 0x50]
// 0087586b  83f836               cmp eax, 0x36
// 0087586e  7e12                 jle 0x875882
// 00875870  68e416a000           push 0xa016e4
// 00875875  8bcf                 mov ecx, edi
// 00875877  e884940000           call 0x87ed00
// 0087587c  8be8                 mov ebp, eax
// 0087587e  85ed                 test ebp, ebp
// 00875880  7516                 jne 0x875898
// 00875882  68d016a000           push 0xa016d0
// 00875887  8bcf                 mov ecx, edi
// 00875889  e872940000           call 0x87ed00
// 0087588e  8be8                 mov ebp, eax
// 00875890  85ed                 test ebp, ebp
// 00875892  0f84d6010000         je 0x875a6e
// 00875898  8b442450             mov eax, dword ptr [esp + 0x50]
// 0087589c  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008758a4  85c0                 test eax, eax
// 008758a6  7d14                 jge 0x8758bc
// 008758a8  89442414             mov dword ptr [esp + 0x14], eax
// 008758ac  f7d8                 neg eax
// 008758ae  50                   push eax
// 008758af  6a00                 push 0
// 008758b1  8d4c2454             lea ecx, [esp + 0x54]
// 008758b5  51                   push ecx
// 008758b6  ff156ccc9800         call dword ptr [0x98cc6c]
// 008758bc  8b442410             mov eax, dword ptr [esp + 0x10]
// 008758c0  85c0                 test eax, eax
// 008758c2  740b                 je 0x8758cf
// 008758c4  33d2                 xor edx, edx
// 008758c6  83f802               cmp eax, 2
// 008758c9  0f95c2               setne dl
// 008758cc  42                   inc edx
// 008758cd  8bc2                 mov eax, edx
// 008758cf  6a03                 push 3
// 008758d1  50                   push eax
// 008758d2  8d442428             lea eax, [esp + 0x28]
// 008758d6  50                   push eax
// 008758d7  8bcd                 mov ecx, ebp
// 008758d9  e8e2af0600           call 0x8e08c0
// 008758de  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008758e2  2b4c2420             sub ecx, dword ptr [esp + 0x20]
// 008758e6  8b442454             mov eax, dword ptr [esp + 0x54]
// 008758ea  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 008758ee  2b7c2424             sub edi, dword ptr [esp + 0x24]
// 008758f2  2bc1                 sub eax, ecx
// 008758f4  0344244c             add eax, dword ptr [esp + 0x4c]
// 008758f8  83ec10               sub esp, 0x10
// 008758fb  99                   cdq 
// 008758fc  2bc2                 sub eax, edx
// 008758fe  8bd8                 mov ebx, eax
// 00875900  8b442468             mov eax, dword ptr [esp + 0x68]
// 00875904  2bc7                 sub eax, edi
// 00875906  03442460             add eax, dword ptr [esp + 0x60]
// 0087590a  d1fb                 sar ebx, 1
// 0087590c  99                   cdq 
// 0087590d  2bc2                 sub eax, edx
// 0087590f  d1f8                 sar eax, 1
// 00875911  03442424             add eax, dword ptr [esp + 0x24]
// 00875915  895c2440             mov dword ptr [esp + 0x40], ebx
// 00875919  89442444             mov dword ptr [esp + 0x44], eax
// 0087591d  03c7                 add eax, edi
// 0087591f  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 00875923  03d9                 add ebx, ecx
// 00875925  33c9                 xor ecx, ecx
// 00875927  8944244c             mov dword ptr [esp + 0x4c], eax
// 0087592b  8bc4                 mov eax, esp
// 0087592d  8908                 mov dword ptr [eax], ecx
// 0087592f  894804               mov dword ptr [eax + 4], ecx
// 00875932  894808               mov dword ptr [eax + 8], ecx
// 00875935  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00875939  33d2                 xor edx, edx
// 0087593b  89500c               mov dword ptr [eax + 0xc], edx
// 0087593e  8b542434             mov edx, dword ptr [esp + 0x34]
// 00875942  83ec10               sub esp, 0x10
// 00875945  8bc4                 mov eax, esp
// 00875947  8908                 mov dword ptr [eax], ecx
// 00875949  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0087594d  895004               mov dword ptr [eax + 4], edx
// 00875950  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00875954  894808               mov dword ptr [eax + 8], ecx
// 00875957  89500c               mov dword ptr [eax + 0xc], edx
// 0087595a  8d442450             lea eax, [esp + 0x50]
// 0087595e  50                   push eax
// 0087595f  57                   push edi
// 00875960  8bcd                 mov ecx, ebp
// 00875962  895c2460             mov dword ptr [esp + 0x60], ebx
// 00875966  e825a80600           call 0x8e0190
// 0087596b  33ed                 xor ebp, ebp
// 0087596d  3bf5                 cmp esi, ebp
// 0087596f  747b                 je 0x8759ec
// 00875971  8bce                 mov ecx, esi
// 00875973  e8f8fec5ff           call 0x4d5870
// 00875978  8b542450             mov edx, dword ptr [esp + 0x50]
// 0087597c  8bc8                 mov ecx, eax
// 0087597e  8b442458             mov eax, dword ptr [esp + 0x58]
// 00875982  03c2                 add eax, edx
// 00875984  2bc1                 sub eax, ecx
// 00875986  40                   inc eax
// 00875987  99                   cdq 
// 00875988  2bc2                 sub eax, edx
// 0087598a  8bf8                 mov edi, eax
// 0087598c  d1ff                 sar edi, 1
// 0087598e  037c2414             add edi, dword ptr [esp + 0x14]
// 00875992  8bce                 mov ecx, esi
// 00875994  e8e782fdff           call 0x84dc80
// 00875999  8b542454             mov edx, dword ptr [esp + 0x54]
// 0087599d  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008759a1  03ca                 add ecx, edx
// 008759a3  2bc8                 sub ecx, eax
// 008759a5  8bc1                 mov eax, ecx
// 008759a7  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008759ab  99                   cdq 
// 008759ac  2bc2                 sub eax, edx
// 008759ae  8bd8                 mov ebx, eax
// 008759b0  d1fb                 sar ebx, 1
// 008759b2  e809c4ffff           call 0x871dc0
// 008759b7  8b542410             mov edx, dword ptr [esp + 0x10]
// 008759bb  894620               mov dword ptr [esi + 0x20], eax
// 008759be  83ec08               sub esp, 8
// 008759c1  8bc4                 mov eax, esp
// 008759c3  52                   push edx
// 008759c4  8bce                 mov ecx, esi
// 008759c6  8928                 mov dword ptr [eax], ebp
// 008759c8  896804               mov dword ptr [eax + 4], ebp
// 008759cb  e890aaf9ff           call 0x810460
// 008759d0  50                   push eax
// 008759d1  8b442450             mov eax, dword ptr [esp + 0x50]
// 008759d5  57                   push edi
// 008759d6  53                   push ebx
// 008759d7  50                   push eax
// 008759d8  8bce                 mov ecx, esi
// 008759da  e8d1b4f9ff           call 0x810eb0
// 008759df  896e20               mov dword ptr [esi + 0x20], ebp
// 008759e2  5f                   pop edi
// 008759e3  5e                   pop esi
// 008759e4  5d                   pop ebp
// 008759e5  5b                   pop ebx
// 008759e6  83c430               add esp, 0x30
// 008759e9  c21800               ret 0x18
// 008759ec  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008759f0  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 008759f6  e89516f9ff           call 0x807090
// 008759fb  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008759ff  50                   push eax
// 00875a00  e8bbad0000           call 0x8807c0
// 00875a05  8bf0                 mov esi, eax
// 00875a07  3bf5                 cmp esi, ebp
// 00875a09  7463                 je 0x875a6e
// 00875a0b  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00875a0f  8b442454             mov eax, dword ptr [esp + 0x54]
// 00875a13  8d4410df             lea eax, [eax + edx - 0x21]
// 00875a17  99                   cdq 
// 00875a18  2bc2                 sub eax, edx
// 00875a1a  8b542450             mov edx, dword ptr [esp + 0x50]
// 00875a1e  8bc8                 mov ecx, eax
// 00875a20  8b442458             mov eax, dword ptr [esp + 0x58]
// 00875a24  8d4410e1             lea eax, [eax + edx - 0x1f]
// 00875a28  99                   cdq 
// 00875a29  2bc2                 sub eax, edx
// 00875a2b  d1f8                 sar eax, 1
// 00875a2d  03442414             add eax, dword ptr [esp + 0x14]
// 00875a31  d1f9                 sar ecx, 1
// 00875a33  3bfd                 cmp edi, ebp
// 00875a35  7504                 jne 0x875a3b
// 00875a37  33ff                 xor edi, edi
// 00875a39  eb03                 jmp 0x875a3e
// 00875a3b  8b7f04               mov edi, dword ptr [edi + 4]
// 00875a3e  6a03                 push 3
// 00875a40  55                   push ebp
// 00875a41  55                   push ebp
// 00875a42  6a20                 push 0x20
// 00875a44  6a20                 push 0x20
// 00875a46  56                   push esi
// 00875a47  50                   push eax
// 00875a48  51                   push ecx
// 00875a49  57                   push edi
// 00875a4a  ff1514cb9800         call dword ptr [0x98cb14]
// 00875a50  5f                   pop edi
// 00875a51  5e                   pop esi
// 00875a52  5d                   pop ebp
// 00875a53  5b                   pop ebx
// 00875a54  83c430               add esp, 0x30
// 00875a57  c21800               ret 0x18
// 00875a5a  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00875a5e  6a01                 push 1
// 00875a60  53                   push ebx
// 00875a61  51                   push ecx
// 00875a62  8d542424             lea edx, [esp + 0x24]
// 00875a66  52                   push edx
// 00875a67  8bcf                 mov ecx, edi
// 00875a69  e8b2c2f8ff           call 0x801d20
// 00875a6e  5f                   pop edi
// 00875a6f  5e                   pop esi
// 00875a70  5d                   pop ebp
// 00875a71  5b                   pop ebx
// 00875a72  83c430               add esp, 0x30
// 00875a75  c21800               ret 0x18
// copied from an identical function in another client (function ?DrawRibbonFrameSystemButton@CXTPRibbonTheme@@UAEXPAVCDC@@PAVCXTPControlPopup@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Ribbon/XTPRibbonTheme.cpp