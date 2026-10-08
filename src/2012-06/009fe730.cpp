// roc 2012-06 009fe730  unit: CXTPControlGallery  size: 260 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009fe730
//
// 009fe730  83ec18               sub esp, 0x18
// 009fe733  56                   push esi
// 009fe734  57                   push edi
// 009fe735  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 009fe739  8bf1                 mov esi, ecx
// 009fe73b  85ff                 test edi, edi
// 009fe73d  750d                 jne 0x9fe74c
// 009fe73f  5f                   pop edi
// 009fe740  b857000780           mov eax, 0x80070057
// 009fe745  5e                   pop esi
// 009fe746  83c418               add esp, 0x18
// 009fe749  c20c00               ret 0xc
// 009fe74c  33c0                 xor eax, eax
// 009fe74e  668907               mov word ptr [edi], ax
// 009fe751  8b86e0000000         mov eax, dword ptr [esi + 0xe0]
// 009fe757  85c0                 test eax, eax
// 009fe759  7406                 je 0x9fe761
// 009fe75b  83782000             cmp dword ptr [eax + 0x20], 0
// 009fe75f  750d                 jne 0x9fe76e
// 009fe761  5f                   pop edi
// 009fe762  b801000000           mov eax, 1
// 009fe767  5e                   pop esi
// 009fe768  83c418               add esp, 0x18
// 009fe76b  c20c00               ret 0xc
// 009fe76e  53                   push ebx
// 009fe76f  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 009fe773  55                   push ebp
// 009fe774  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 009fe778  50                   push eax
// 009fe779  8d4c241c             lea ecx, [esp + 0x1c]
// 009fe77d  e8be69fdff           call 0x9d5140
// 009fe782  55                   push ebp
// 009fe783  53                   push ebx
// 009fe784  50                   push eax
// 009fe785  ff15483bb200         call dword ptr [0xb23b48]
// 009fe78b  85c0                 test eax, eax
// 009fe78d  746d                 je 0x9fe7fc
// 009fe78f  b903000000           mov ecx, 3
// 009fe794  66890f               mov word ptr [edi], cx
// 009fe797  c7470800000000       mov dword ptr [edi + 8], 0
// 009fe79e  8b86e0000000         mov eax, dword ptr [esi + 0xe0]
// 009fe7a4  8d542410             lea edx, [esp + 0x10]
// 009fe7a8  895c2410             mov dword ptr [esp + 0x10], ebx
// 009fe7ac  896c2414             mov dword ptr [esp + 0x14], ebp
// 009fe7b0  8b4820               mov ecx, dword ptr [eax + 0x20]
// 009fe7b3  52                   push edx
// 009fe7b4  51                   push ecx
// 009fe7b5  ff15883ab200         call dword ptr [0xb23a88]
// 009fe7bb  8b86a4000000         mov eax, dword ptr [esi + 0xa4]
// 009fe7c1  8b96a0000000         mov edx, dword ptr [esi + 0xa0]
// 009fe7c7  8b8ea8000000         mov ecx, dword ptr [esi + 0xa8]
// 009fe7cd  89542418             mov dword ptr [esp + 0x18], edx
// 009fe7d1  8b96ac000000         mov edx, dword ptr [esi + 0xac]
// 009fe7d7  8944241c             mov dword ptr [esp + 0x1c], eax
// 009fe7db  8b442414             mov eax, dword ptr [esp + 0x14]
// 009fe7df  894c2420             mov dword ptr [esp + 0x20], ecx
// 009fe7e3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 009fe7e7  50                   push eax
// 009fe7e8  89542428             mov dword ptr [esp + 0x28], edx
// 009fe7ec  51                   push ecx
// 009fe7ed  8d542420             lea edx, [esp + 0x20]
// 009fe7f1  52                   push edx
// 009fe7f2  ff15483bb200         call dword ptr [0xb23b48]
// 009fe7f8  85c0                 test eax, eax
// 009fe7fa  750f                 jne 0x9fe80b
// 009fe7fc  5d                   pop ebp
// 009fe7fd  5b                   pop ebx
// 009fe7fe  5f                   pop edi
// 009fe7ff  b801000000           mov eax, 1
// 009fe804  5e                   pop esi
// 009fe805  83c418               add esp, 0x18
// 009fe808  c20c00               ret 0xc
// 009fe80b  8b442414             mov eax, dword ptr [esp + 0x14]
// 009fe80f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 009fe813  6a00                 push 0
// 009fe815  50                   push eax
// 009fe816  51                   push ecx
// 009fe817  8d4ee0               lea ecx, [esi - 0x20]
// 009fe81a  e801eaffff           call 0x9fd220
// 009fe81f  83f8ff               cmp eax, -1
// 009fe822  7404                 je 0x9fe828
// 009fe824  40                   inc eax
// 009fe825  894708               mov dword ptr [edi + 8], eax
// 009fe828  5d                   pop ebp
// 009fe829  5b                   pop ebx
// 009fe82a  5f                   pop edi
// 009fe82b  33c0                 xor eax, eax
// 009fe82d  5e                   pop esi
// 009fe82e  83c418               add esp, 0x18
// 009fe831  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?AccessibleHitTest@CXTPControlGallery@@MAEJJJPAUtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
