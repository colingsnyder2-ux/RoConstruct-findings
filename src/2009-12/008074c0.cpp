// roc 2009-12 008074c0  unit: CXTPCommandBar  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008074c0
//
// 008074c0  56                   push esi
// 008074c1  57                   push edi
// 008074c2  8bf9                 mov edi, ecx
// 008074c4  e807d0ffff           call 0x8044d0
// 008074c9  8bf0                 mov esi, eax
// 008074cb  85f6                 test esi, esi
// 008074cd  7408                 je 0x8074d7
// 008074cf  8bbea0000000         mov edi, dword ptr [esi + 0xa0]
// 008074d5  eb09                 jmp 0x8074e0
// 008074d7  8bcf                 mov ecx, edi
// 008074d9  e8b2fbffff           call 0x807090
// 008074de  8bf8                 mov edi, eax
// 008074e0  85f6                 test esi, esi
// 008074e2  7409                 je 0x8074ed
// 008074e4  8b4674               mov eax, dword ptr [esi + 0x74]
// 008074e7  83786000             cmp dword ptr [eax + 0x60], 0
// 008074eb  744a                 je 0x807537
// 008074ed  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008074f1  8bce                 mov ecx, esi
// 008074f3  ff15bcdd9800         call dword ptr [0x98ddbc]
// 008074f9  84c0                 test al, al
// 008074fb  7420                 je 0x80751d
// 008074fd  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 00807500  6a00                 push 0
// 00807502  6801e00000           push 0xe001
// 00807507  6875030000           push 0x375
// 0080750c  51                   push ecx
// 0080750d  ff15c4cb9800         call dword ptr [0x98cbc4]
// 00807513  5f                   pop edi
// 00807514  b801000000           mov eax, 1
// 00807519  5e                   pop esi
// 0080751a  c20400               ret 4
// 0080751d  8bce                 mov ecx, esi
// 0080751f  ff1580de9800         call dword ptr [0x98de80]
// 00807525  8b5720               mov edx, dword ptr [edi + 0x20]
// 00807528  50                   push eax
// 00807529  6a00                 push 0
// 0080752b  6862030000           push 0x362
// 00807530  52                   push edx
// 00807531  ff15c4cb9800         call dword ptr [0x98cbc4]
// 00807537  5f                   pop edi
// 00807538  b801000000           mov eax, 1
// 0080753d  5e                   pop esi
// 0080753e  c20400               ret 4
// copied from an identical function in another client (function ?SetStatusText@CXTPCommandBar@@QAEHABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals-string-calls Source\CommandBars\XTPCommandBar.cpp