// roc 2012-06 00a6b0f0  unit: CXTCaptionButton  size: 295 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6b0f0
//
// 00a6b0f0  6aff                 push -1
// 00a6b0f2  680a87ae00           push 0xae870a
// 00a6b0f7  64a100000000         mov eax, dword ptr fs:[0]
// 00a6b0fd  50                   push eax
// 00a6b0fe  83ec0c               sub esp, 0xc
// 00a6b101  56                   push esi
// 00a6b102  57                   push edi
// 00a6b103  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a6b108  33c4                 xor eax, esp
// 00a6b10a  50                   push eax
// 00a6b10b  8d442418             lea eax, [esp + 0x18]
// 00a6b10f  64a300000000         mov dword ptr fs:[0], eax
// 00a6b115  8bf9                 mov edi, ecx
// 00a6b117  837c242800           cmp dword ptr [esp + 0x28], 0
// 00a6b11c  c744242001000000     mov dword ptr [esp + 0x20], 1
// 00a6b124  7507                 jne 0xa6b12d
// 00a6b126  837c242c00           cmp dword ptr [esp + 0x2c], 0
// 00a6b12b  7406                 je 0xa6b133
// 00a6b12d  8d442428             lea eax, [esp + 0x28]
// 00a6b131  eb0e                 jmp 0xa6b141
// 00a6b133  8d442410             lea eax, [esp + 0x10]
// 00a6b137  50                   push eax
// 00a6b138  8d4c2434             lea ecx, [esp + 0x34]
// 00a6b13c  e8afc8f2ff           call 0x9979f0
// 00a6b141  8b08                 mov ecx, dword ptr [eax]
// 00a6b143  894c2428             mov dword ptr [esp + 0x28], ecx
// 00a6b147  8b5004               mov edx, dword ptr [eax + 4]
// 00a6b14a  6858010000           push 0x158
// 00a6b14f  89542430             mov dword ptr [esp + 0x30], edx
// 00a6b153  e8c26ff1ff           call 0x98211a
// 00a6b158  83c404               add esp, 4
// 00a6b15b  8944240c             mov dword ptr [esp + 0xc], eax
// 00a6b15f  c644242002           mov byte ptr [esp + 0x20], 2
// 00a6b164  85c0                 test eax, eax
// 00a6b166  7419                 je 0xa6b181
// 00a6b168  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00a6b16c  8b542428             mov edx, dword ptr [esp + 0x28]
// 00a6b170  6a00                 push 0
// 00a6b172  51                   push ecx
// 00a6b173  52                   push edx
// 00a6b174  6a00                 push 0
// 00a6b176  8bc8                 mov ecx, eax
// 00a6b178  e8c304f3ff           call 0x99b640
// 00a6b17d  8bf0                 mov esi, eax
// 00a6b17f  eb02                 jmp 0xa6b183
// 00a6b181  33f6                 xor esi, esi
// 00a6b183  83ec24               sub esp, 0x24
// 00a6b186  8d442454             lea eax, [esp + 0x54]
// 00a6b18a  8bcc                 mov ecx, esp
// 00a6b18c  89642430             mov dword ptr [esp + 0x30], esp
// 00a6b190  50                   push eax
// 00a6b191  c644244801           mov byte ptr [esp + 0x48], 1
// 00a6b196  e825dff2ff           call 0x9990c0
// 00a6b19b  8bce                 mov ecx, esi
// 00a6b19d  e88e10f3ff           call 0x99c230
// 00a6b1a2  8d4c2454             lea ecx, [esp + 0x54]
// 00a6b1a6  e875dff2ff           call 0x999120
// 00a6b1ab  85c0                 test eax, eax
// 00a6b1ad  751a                 jne 0xa6b1c9
// 00a6b1af  83ec24               sub esp, 0x24
// 00a6b1b2  8d542478             lea edx, [esp + 0x78]
// 00a6b1b6  8bcc                 mov ecx, esp
// 00a6b1b8  89642430             mov dword ptr [esp + 0x30], esp
// 00a6b1bc  52                   push edx
// 00a6b1bd  e8fedef2ff           call 0x9990c0
// 00a6b1c2  8bce                 mov ecx, esi
// 00a6b1c4  e80711f3ff           call 0x99c2d0
// 00a6b1c9  8b442478             mov eax, dword ptr [esp + 0x78]
// 00a6b1cd  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00a6b1d1  8b542428             mov edx, dword ptr [esp + 0x28]
// 00a6b1d5  50                   push eax
// 00a6b1d6  56                   push esi
// 00a6b1d7  51                   push ecx
// 00a6b1d8  52                   push edx
// 00a6b1d9  8bcf                 mov ecx, edi
// 00a6b1db  e8a0feffff           call 0xa6b080
// 00a6b1e0  8d4c2430             lea ecx, [esp + 0x30]
// 00a6b1e4  8bf0                 mov esi, eax
// 00a6b1e6  c644242000           mov byte ptr [esp + 0x20], 0
// 00a6b1eb  e87001f3ff           call 0x99b360
// 00a6b1f0  8d4c2454             lea ecx, [esp + 0x54]
// 00a6b1f4  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 00a6b1fc  e85f01f3ff           call 0x99b360
// 00a6b201  8bc6                 mov eax, esi
// 00a6b203  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a6b207  64890d00000000       mov dword ptr fs:[0], ecx
// 00a6b20e  59                   pop ecx
// 00a6b20f  5f                   pop edi
// 00a6b210  5e                   pop esi
// 00a6b211  83c418               add esp, 0x18
// 00a6b214  c25400               ret 0x54
// copied from an identical function in another client (function ?SetIcon@CXTButton@@UAEHVCSize@@VCXTPImageManagerIconHandle@@1H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp