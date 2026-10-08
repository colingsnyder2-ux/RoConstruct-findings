// roc 2007-03 005707b0  unit: seg_00570000  size: 437 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005707b0
//
// 005707b0  8b442410             mov eax, dword ptr [esp + 0x10]
// 005707b4  53                   push ebx
// 005707b5  56                   push esi
// 005707b6  8bf1                 mov esi, ecx
// 005707b8  8b08                 mov ecx, dword ptr [eax]
// 005707ba  894c2418             mov dword ptr [esp + 0x18], ecx
// 005707be  8b4e04               mov ecx, dword ptr [esi + 4]
// 005707c1  85c9                 test ecx, ecx
// 005707c3  57                   push edi
// 005707c4  7504                 jne 0x5707ca
// 005707c6  33ff                 xor edi, edi
// 005707c8  eb08                 jmp 0x5707d2
// 005707ca  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 005707cd  2bf9                 sub edi, ecx
// 005707cf  c1ff02               sar edi, 2
// 005707d2  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 005707d6  85db                 test ebx, ebx
// 005707d8  0f8481010000         je 0x57095f
// 005707de  85c9                 test ecx, ecx
// 005707e0  7504                 jne 0x5707e6
// 005707e2  33c0                 xor eax, eax
// 005707e4  eb08                 jmp 0x5707ee
// 005707e6  8b4608               mov eax, dword ptr [esi + 8]
// 005707e9  2bc1                 sub eax, ecx
// 005707eb  c1f802               sar eax, 2
// 005707ee  baffffff3f           mov edx, 0x3fffffff
// 005707f3  2bd0                 sub edx, eax
// 005707f5  3bd3                 cmp edx, ebx
// 005707f7  7305                 jae 0x5707fe
// 005707f9  e8d2780400           call 0x5b80d0
// 005707fe  85c9                 test ecx, ecx
// 00570800  7504                 jne 0x570806
// 00570802  33c0                 xor eax, eax
// 00570804  eb08                 jmp 0x57080e
// 00570806  8b4608               mov eax, dword ptr [esi + 8]
// 00570809  2bc1                 sub eax, ecx
// 0057080b  c1f802               sar eax, 2
// 0057080e  03c3                 add eax, ebx
// 00570810  3bf8                 cmp edi, eax
// 00570812  55                   push ebp
// 00570813  0f83b4000000         jae 0x5708cd
// 00570819  8bc7                 mov eax, edi
// 0057081b  d1e8                 shr eax, 1
// 0057081d  baffffff3f           mov edx, 0x3fffffff
// 00570822  2bd0                 sub edx, eax
// 00570824  3bd7                 cmp edx, edi
// 00570826  7304                 jae 0x57082c
// 00570828  33ff                 xor edi, edi
// 0057082a  eb02                 jmp 0x57082e
// 0057082c  03f8                 add edi, eax
// 0057082e  85c9                 test ecx, ecx
// 00570830  7504                 jne 0x570836
// 00570832  33c0                 xor eax, eax
// 00570834  eb08                 jmp 0x57083e
// 00570836  8b4608               mov eax, dword ptr [esi + 8]
// 00570839  2bc1                 sub eax, ecx
// 0057083b  c1f802               sar eax, 2
// 0057083e  03c3                 add eax, ebx
// 00570840  3bf8                 cmp edi, eax
// 00570842  7312                 jae 0x570856
// 00570844  85c9                 test ecx, ecx
// 00570846  7504                 jne 0x57084c
// 00570848  33ff                 xor edi, edi
// 0057084a  eb08                 jmp 0x570854
// 0057084c  8b7e08               mov edi, dword ptr [esi + 8]
// 0057084f  2bf9                 sub edi, ecx
// 00570851  c1ff02               sar edi, 2
// 00570854  03fb                 add edi, ebx
// 00570856  6a00                 push 0
// 00570858  57                   push edi
// 00570859  e80285eaff           call 0x418d60
// 0057085e  8b4e04               mov ecx, dword ptr [esi + 4]
// 00570861  83c408               add esp, 8
// 00570864  8be8                 mov ebp, eax
// 00570866  8b442418             mov eax, dword ptr [esp + 0x18]
// 0057086a  55                   push ebp
// 0057086b  50                   push eax
// 0057086c  51                   push ecx
// 0057086d  8bce                 mov ecx, esi
// 0057086f  e8fcfeffff           call 0x570770
// 00570874  8d542420             lea edx, [esp + 0x20]
// 00570878  52                   push edx
// 00570879  53                   push ebx
// 0057087a  50                   push eax
// 0057087b  8bce                 mov ecx, esi
// 0057087d  e8be9cecff           call 0x43a540
// 00570882  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00570886  50                   push eax
// 00570887  8b4608               mov eax, dword ptr [esi + 8]
// 0057088a  50                   push eax
// 0057088b  51                   push ecx
// 0057088c  8bce                 mov ecx, esi
// 0057088e  e8ddfeffff           call 0x570770
// 00570893  8b4604               mov eax, dword ptr [esi + 4]
// 00570896  85c0                 test eax, eax
// 00570898  7504                 jne 0x57089e
// 0057089a  33c9                 xor ecx, ecx
// 0057089c  eb08                 jmp 0x5708a6
// 0057089e  8b4e08               mov ecx, dword ptr [esi + 8]
// 005708a1  2bc8                 sub ecx, eax
// 005708a3  c1f902               sar ecx, 2
// 005708a6  03d9                 add ebx, ecx
// 005708a8  85c0                 test eax, eax
// 005708aa  7409                 je 0x5708b5
// 005708ac  50                   push eax
// 005708ad  e83ed80a00           call 0x61e0f0
// 005708b2  83c404               add esp, 4
// 005708b5  8d54bd00             lea edx, [ebp + edi*4]
// 005708b9  8d449d00             lea eax, [ebp + ebx*4]
// 005708bd  896e04               mov dword ptr [esi + 4], ebp
// 005708c0  5d                   pop ebp
// 005708c1  5f                   pop edi
// 005708c2  89560c               mov dword ptr [esi + 0xc], edx
// 005708c5  894608               mov dword ptr [esi + 8], eax
// 005708c8  5e                   pop esi
// 005708c9  5b                   pop ebx
// 005708ca  c21000               ret 0x10
// 005708cd  8b6e08               mov ebp, dword ptr [esi + 8]
// 005708d0  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 005708d4  8bcd                 mov ecx, ebp
// 005708d6  2bcf                 sub ecx, edi
// 005708d8  c1f902               sar ecx, 2
// 005708db  8d049d00000000       lea eax, [ebx*4]
// 005708e2  3bcb                 cmp ecx, ebx
// 005708e4  8944241c             mov dword ptr [esp + 0x1c], eax
// 005708e8  8bce                 mov ecx, esi
// 005708ea  7346                 jae 0x570932
// 005708ec  03c7                 add eax, edi
// 005708ee  50                   push eax
// 005708ef  55                   push ebp
// 005708f0  57                   push edi
// 005708f1  e87afeffff           call 0x570770
// 005708f6  8b4608               mov eax, dword ptr [esi + 8]
// 005708f9  8bc8                 mov ecx, eax
// 005708fb  2bcf                 sub ecx, edi
// 005708fd  c1f902               sar ecx, 2
// 00570900  8d542420             lea edx, [esp + 0x20]
// 00570904  52                   push edx
// 00570905  2bd9                 sub ebx, ecx
// 00570907  53                   push ebx
// 00570908  50                   push eax
// 00570909  8bce                 mov ecx, esi
// 0057090b  e8309cecff           call 0x43a540
// 00570910  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00570914  014608               add dword ptr [esi + 8], eax
// 00570917  8b7608               mov esi, dword ptr [esi + 8]
// 0057091a  8d542420             lea edx, [esp + 0x20]
// 0057091e  52                   push edx
// 0057091f  2bf0                 sub esi, eax
// 00570921  56                   push esi
// 00570922  57                   push edi
// 00570923  e8d88decff           call 0x439700
// 00570928  83c40c               add esp, 0xc
// 0057092b  5d                   pop ebp
// 0057092c  5f                   pop edi
// 0057092d  5e                   pop esi
// 0057092e  5b                   pop ebx
// 0057092f  c21000               ret 0x10
// 00570932  55                   push ebp
// 00570933  8bdd                 mov ebx, ebp
// 00570935  2bd8                 sub ebx, eax
// 00570937  55                   push ebp
// 00570938  53                   push ebx
// 00570939  e832feffff           call 0x570770
// 0057093e  55                   push ebp
// 0057093f  53                   push ebx
// 00570940  57                   push edi
// 00570941  894608               mov dword ptr [esi + 8], eax
// 00570944  e8377a0700           call 0x5e8380
// 00570949  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0057094d  8d44242c             lea eax, [esp + 0x2c]
// 00570951  50                   push eax
// 00570952  03cf                 add ecx, edi
// 00570954  51                   push ecx
// 00570955  57                   push edi
// 00570956  e8a58decff           call 0x439700
// 0057095b  83c418               add esp, 0x18
// 0057095e  5d                   pop ebp
// 0057095f  5f                   pop edi
// 00570960  5e                   pop esi
// 00570961  5b                   pop ebx
// 00570962  c21000               ret 0x10
// library rbxgs/humanoid\Humanoid.cpp (function ?_Insert_n@?$vector@PAVPrimitive@RBX@@V?$allocator@PAVPrimitive@RBX@@@std@@@std@@IAEXV?$_Vector_iterator@PAVPrimitive@RBX@@V?$allocator@PAVPrimitive@RBX@@@std@@@2@IABQAVPrimitive@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
