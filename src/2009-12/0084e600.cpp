// roc 2009-12 0084e600  unit: CXTPPropertyGrid  size: 438 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084e600
//
// 0084e600  6aff                 push -1
// 0084e602  6888d69500           push 0x95d688
// 0084e607  64a100000000         mov eax, dword ptr fs:[0]
// 0084e60d  50                   push eax
// 0084e60e  83ec44               sub esp, 0x44
// 0084e611  53                   push ebx
// 0084e612  55                   push ebp
// 0084e613  56                   push esi
// 0084e614  57                   push edi
// 0084e615  a10052b600           mov eax, dword ptr [0xb65200]
// 0084e61a  33c4                 xor eax, esp
// 0084e61c  50                   push eax
// 0084e61d  8d442458             lea eax, [esp + 0x58]
// 0084e621  64a300000000         mov dword ptr fs:[0], eax
// 0084e627  8bf1                 mov esi, ecx
// 0084e629  56                   push esi
// 0084e62a  8d4c2418             lea ecx, [esp + 0x18]
// 0084e62e  e89dccffff           call 0x84b2d0
// 0084e633  837e6000             cmp dword ptr [esi + 0x60], 0
// 0084e637  8b2d5cca9800         mov ebp, dword ptr [0x98ca5c]
// 0084e63d  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0084e641  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0084e645  8b542420             mov edx, dword ptr [esp + 0x20]
// 0084e649  7460                 je 0x84e6ab
// 0084e64b  8bc2                 mov eax, edx
// 0084e64d  2b4654               sub eax, dword ptr [esi + 0x54]
// 0084e650  8bfb                 mov edi, ebx
// 0084e652  83e803               sub eax, 3
// 0084e655  2bf9                 sub edi, ecx
// 0084e657  03f9                 add edi, ecx
// 0084e659  89442428             mov dword ptr [esp + 0x28], eax
// 0084e65d  83c003               add eax, 3
// 0084e660  837e6800             cmp dword ptr [esi + 0x68], 0
// 0084e664  894c2424             mov dword ptr [esp + 0x24], ecx
// 0084e668  897c242c             mov dword ptr [esp + 0x2c], edi
// 0084e66c  89442430             mov dword ptr [esp + 0x30], eax
// 0084e670  742b                 je 0x84e69d
// 0084e672  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 0084e676  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 0084e67a  50                   push eax
// 0084e67b  51                   push ecx
// 0084e67c  8d54242c             lea edx, [esp + 0x2c]
// 0084e680  52                   push edx
// 0084e681  ffd5                 call ebp
// 0084e683  85c0                 test eax, eax
// 0084e685  740a                 je 0x84e691
// 0084e687  b801000000           mov eax, 1
// 0084e68c  e90f010000           jmp 0x84e7a0
// 0084e691  8b542420             mov edx, dword ptr [esp + 0x20]
// 0084e695  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0084e699  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0084e69d  b8fdffffff           mov eax, 0xfffffffd
// 0084e6a2  2b4654               sub eax, dword ptr [esi + 0x54]
// 0084e6a5  03d0                 add edx, eax
// 0084e6a7  89542420             mov dword ptr [esp + 0x20], edx
// 0084e6ab  8b8638010000         mov eax, dword ptr [esi + 0x138]
// 0084e6b1  8b4028               mov eax, dword ptr [eax + 0x28]
// 0084e6b4  83cfff               or edi, 0xffffffff
// 0084e6b7  85c0                 test eax, eax
// 0084e6b9  0f84df000000         je 0x84e79e
// 0084e6bf  2b5658               sub edx, dword ptr [esi + 0x58]
// 0084e6c2  2bd9                 sub ebx, ecx
// 0084e6c4  83ea03               sub edx, 3
// 0084e6c7  89542438             mov dword ptr [esp + 0x38], edx
// 0084e6cb  03d9                 add ebx, ecx
// 0084e6cd  83c203               add edx, 3
// 0084e6d0  894c2434             mov dword ptr [esp + 0x34], ecx
// 0084e6d4  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 0084e6d8  89542440             mov dword ptr [esp + 0x40], edx
// 0084e6dc  8b542468             mov edx, dword ptr [esp + 0x68]
// 0084e6e0  51                   push ecx
// 0084e6e1  52                   push edx
// 0084e6e2  8d44243c             lea eax, [esp + 0x3c]
// 0084e6e6  50                   push eax
// 0084e6e7  895c2448             mov dword ptr [esp + 0x48], ebx
// 0084e6eb  ffd5                 call ebp
// 0084e6ed  85c0                 test eax, eax
// 0084e6ef  7408                 je 0x84e6f9
// 0084e6f1  8d4703               lea eax, [edi + 3]
// 0084e6f4  e9a7000000           jmp 0x84e7a0
// 0084e6f9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0084e6fd  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0084e701  8b542418             mov edx, dword ptr [esp + 0x18]
// 0084e705  8944242c             mov dword ptr [esp + 0x2c], eax
// 0084e709  8b442420             mov eax, dword ptr [esp + 0x20]
// 0084e70d  89442430             mov dword ptr [esp + 0x30], eax
// 0084e711  2b4658               sub eax, dword ptr [esi + 0x58]
// 0084e714  894c2424             mov dword ptr [esp + 0x24], ecx
// 0084e718  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 0084e71c  89542428             mov dword ptr [esp + 0x28], edx
// 0084e720  8b542468             mov edx, dword ptr [esp + 0x68]
// 0084e724  51                   push ecx
// 0084e725  8944242c             mov dword ptr [esp + 0x2c], eax
// 0084e729  52                   push edx
// 0084e72a  8d44242c             lea eax, [esp + 0x2c]
// 0084e72e  50                   push eax
// 0084e72f  ffd5                 call ebp
// 0084e731  85c0                 test eax, eax
// 0084e733  7469                 je 0x84e79e
// 0084e735  56                   push esi
// 0084e736  8d4c2448             lea ecx, [esp + 0x48]
// 0084e73a  e84b7d0d00           call 0x92648a
// 0084e73f  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 0084e743  8b542468             mov edx, dword ptr [esp + 0x68]
// 0084e747  51                   push ecx
// 0084e748  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0084e74c  52                   push edx
// 0084e74d  8b542430             mov edx, dword ptr [esp + 0x30]
// 0084e751  83ec10               sub esp, 0x10
// 0084e754  8bc4                 mov eax, esp
// 0084e756  8908                 mov dword ptr [eax], ecx
// 0084e758  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0084e75c  895004               mov dword ptr [eax + 4], edx
// 0084e75f  8b542448             mov edx, dword ptr [esp + 0x48]
// 0084e763  894808               mov dword ptr [eax + 8], ecx
// 0084e766  8b8e44010000         mov ecx, dword ptr [esi + 0x144]
// 0084e76c  89500c               mov dword ptr [eax + 0xc], edx
// 0084e76f  8d44245c             lea eax, [esp + 0x5c]
// 0084e773  50                   push eax
// 0084e774  c744247c00000000     mov dword ptr [esp + 0x7c], 0
// 0084e77c  e8bfb60700           call 0x8c9e40
// 0084e781  897c2460             mov dword ptr [esp + 0x60], edi
// 0084e785  8d4c2444             lea ecx, [esp + 0x44]
// 0084e789  3bc7                 cmp eax, edi
// 0084e78b  740c                 je 0x84e799
// 0084e78d  8d7003               lea esi, [eax + 3]
// 0084e790  e8ef7c0d00           call 0x926484
// 0084e795  8bc6                 mov eax, esi
// 0084e797  eb07                 jmp 0x84e7a0
// 0084e799  e8e67c0d00           call 0x926484
// 0084e79e  8bc7                 mov eax, edi
// 0084e7a0  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0084e7a4  64890d00000000       mov dword ptr fs:[0], ecx
// 0084e7ab  59                   pop ecx
// 0084e7ac  5f                   pop edi
// 0084e7ad  5e                   pop esi
// 0084e7ae  5d                   pop ebp
// 0084e7af  5b                   pop ebx
// 0084e7b0  83c450               add esp, 0x50
// 0084e7b3  c20800               ret 8
// copied from an identical function in another client (function ?HitTest@CXTPPropertyGrid@@MAEHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGrid.cpp