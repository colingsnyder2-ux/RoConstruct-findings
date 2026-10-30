// roc 2009-06 0080b420  unit: CXTCaptionButton  size: 295 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0080b420
//
// 0080b420  6aff                 push -1
// 0080b422  68ca1e8800           push 0x881eca
// 0080b427  64a100000000         mov eax, dword ptr fs:[0]
// 0080b42d  50                   push eax
// 0080b42e  83ec0c               sub esp, 0xc
// 0080b431  56                   push esi
// 0080b432  57                   push edi
// 0080b433  a1304fa200           mov eax, dword ptr [0xa24f30]
// 0080b438  33c4                 xor eax, esp
// 0080b43a  50                   push eax
// 0080b43b  8d442418             lea eax, [esp + 0x18]
// 0080b43f  64a300000000         mov dword ptr fs:[0], eax
// 0080b445  8bf9                 mov edi, ecx
// 0080b447  837c242800           cmp dword ptr [esp + 0x28], 0
// 0080b44c  c744242001000000     mov dword ptr [esp + 0x20], 1
// 0080b454  7507                 jne 0x80b45d
// 0080b456  837c242c00           cmp dword ptr [esp + 0x2c], 0
// 0080b45b  7406                 je 0x80b463
// 0080b45d  8d442428             lea eax, [esp + 0x28]
// 0080b461  eb0e                 jmp 0x80b471
// 0080b463  8d442410             lea eax, [esp + 0x10]
// 0080b467  50                   push eax
// 0080b468  8d4c2434             lea ecx, [esp + 0x34]
// 0080b46c  e81f6bf2ff           call 0x731f90
// 0080b471  8b08                 mov ecx, dword ptr [eax]
// 0080b473  894c2428             mov dword ptr [esp + 0x28], ecx
// 0080b477  8b5004               mov edx, dword ptr [eax + 4]
// 0080b47a  6858010000           push 0x158
// 0080b47f  89542430             mov dword ptr [esp + 0x30], edx
// 0080b483  e8b0d5f0ff           call 0x718a38
// 0080b488  83c404               add esp, 4
// 0080b48b  8944240c             mov dword ptr [esp + 0xc], eax
// 0080b48f  c644242002           mov byte ptr [esp + 0x20], 2
// 0080b494  85c0                 test eax, eax
// 0080b496  7419                 je 0x80b4b1
// 0080b498  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0080b49c  8b542428             mov edx, dword ptr [esp + 0x28]
// 0080b4a0  6a00                 push 0
// 0080b4a2  51                   push ecx
// 0080b4a3  52                   push edx
// 0080b4a4  6a00                 push 0
// 0080b4a6  8bc8                 mov ecx, eax
// 0080b4a8  e863abf2ff           call 0x736010
// 0080b4ad  8bf0                 mov esi, eax
// 0080b4af  eb02                 jmp 0x80b4b3
// 0080b4b1  33f6                 xor esi, esi
// 0080b4b3  83ec24               sub esp, 0x24
// 0080b4b6  8d442454             lea eax, [esp + 0x54]
// 0080b4ba  8bcc                 mov ecx, esp
// 0080b4bc  89642430             mov dword ptr [esp + 0x30], esp
// 0080b4c0  50                   push eax
// 0080b4c1  c644244801           mov byte ptr [esp + 0x48], 1
// 0080b4c6  e8d582f2ff           call 0x7337a0
// 0080b4cb  8bce                 mov ecx, esi
// 0080b4cd  e82eb7f2ff           call 0x736c00
// 0080b4d2  8d4c2454             lea ecx, [esp + 0x54]
// 0080b4d6  e82583f2ff           call 0x733800
// 0080b4db  85c0                 test eax, eax
// 0080b4dd  751a                 jne 0x80b4f9
// 0080b4df  83ec24               sub esp, 0x24
// 0080b4e2  8d542478             lea edx, [esp + 0x78]
// 0080b4e6  8bcc                 mov ecx, esp
// 0080b4e8  89642430             mov dword ptr [esp + 0x30], esp
// 0080b4ec  52                   push edx
// 0080b4ed  e8ae82f2ff           call 0x7337a0
// 0080b4f2  8bce                 mov ecx, esi
// 0080b4f4  e8a7b7f2ff           call 0x736ca0
// 0080b4f9  8b442478             mov eax, dword ptr [esp + 0x78]
// 0080b4fd  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0080b501  8b542428             mov edx, dword ptr [esp + 0x28]
// 0080b505  50                   push eax
// 0080b506  56                   push esi
// 0080b507  51                   push ecx
// 0080b508  52                   push edx
// 0080b509  8bcf                 mov ecx, edi
// 0080b50b  e8a0feffff           call 0x80b3b0
// 0080b510  8d4c2430             lea ecx, [esp + 0x30]
// 0080b514  8bf0                 mov esi, eax
// 0080b516  c644242000           mov byte ptr [esp + 0x20], 0
// 0080b51b  e810a8f2ff           call 0x735d30
// 0080b520  8d4c2454             lea ecx, [esp + 0x54]
// 0080b524  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 0080b52c  e8ffa7f2ff           call 0x735d30
// 0080b531  8bc6                 mov eax, esi
// 0080b533  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0080b537  64890d00000000       mov dword ptr fs:[0], ecx
// 0080b53e  59                   pop ecx
// 0080b53f  5f                   pop edi
// 0080b540  5e                   pop esi
// 0080b541  83c418               add esp, 0x18
// 0080b544  c25400               ret 0x54
// copied from an identical function in another client (function ?SetIcon@CXTButton@@UAEHVCSize@@VCXTPImageManagerIconHandle@@1H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp