// roc 2009-12 007f72d0  unit: CPatchedControlComboBox  size: 477 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f72d0
//
// 007f72d0  6aff                 push -1
// 007f72d2  6865879500           push 0x958765
// 007f72d7  64a100000000         mov eax, dword ptr fs:[0]
// 007f72dd  50                   push eax
// 007f72de  83ec20               sub esp, 0x20
// 007f72e1  53                   push ebx
// 007f72e2  56                   push esi
// 007f72e3  57                   push edi
// 007f72e4  a10052b600           mov eax, dword ptr [0xb65200]
// 007f72e9  33c4                 xor eax, esp
// 007f72eb  50                   push eax
// 007f72ec  8d442430             lea eax, [esp + 0x30]
// 007f72f0  64a300000000         mov dword ptr fs:[0], eax
// 007f72f6  8bf1                 mov esi, ecx
// 007f72f8  8b46fc               mov eax, dword ptr [esi - 4]
// 007f72fb  50                   push eax
// 007f72fc  8d4c2424             lea ecx, [esp + 0x24]
// 007f7300  e82bc8ffff           call 0x7f3b30
// 007f7305  8d4c2440             lea ecx, [esp + 0x40]
// 007f7309  51                   push ecx
// 007f730a  8bce                 mov ecx, esi
// 007f730c  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 007f7314  e887460400           call 0x83b9a0
// 007f7319  85c0                 test eax, eax
// 007f731b  7444                 je 0x7f7361
// 007f731d  8b442424             mov eax, dword ptr [esp + 0x24]
// 007f7321  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 007f7329  85c0                 test eax, eax
// 007f732b  7407                 je 0x7f7334
// 007f732d  8b542420             mov edx, dword ptr [esp + 0x20]
// 007f7331  895004               mov dword ptr [eax + 4], edx
// 007f7334  837c242c00           cmp dword ptr [esp + 0x2c], 0
// 007f7339  740c                 je 0x7f7347
// 007f733b  8b442428             mov eax, dword ptr [esp + 0x28]
// 007f733f  50                   push eax
// 007f7340  6a00                 push 0
// 007f7342  e8ddc7ffff           call 0x7f3b24
// 007f7347  b857000780           mov eax, 0x80070057
// 007f734c  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007f7350  64890d00000000       mov dword ptr fs:[0], ecx
// 007f7357  59                   pop ecx
// 007f7358  5f                   pop edi
// 007f7359  5e                   pop esi
// 007f735a  5b                   pop ebx
// 007f735b  83c42c               add esp, 0x2c
// 007f735e  c21400               ret 0x14
// 007f7361  8b56e0               mov edx, dword ptr [esi - 0x20]
// 007f7364  8b5258               mov edx, dword ptr [edx + 0x58]
// 007f7367  83c6e0               add esi, -0x20
// 007f736a  8d442410             lea eax, [esp + 0x10]
// 007f736e  50                   push eax
// 007f736f  8bce                 mov ecx, esi
// 007f7371  ffd2                 call edx
// 007f7373  8d442410             lea eax, [esp + 0x10]
// 007f7377  50                   push eax
// 007f7378  c644243c01           mov byte ptr [esp + 0x3c], 1
// 007f737d  e84e650000           call 0x7fd8d0
// 007f7382  83c404               add esp, 4
// 007f7385  8d4c2414             lea ecx, [esp + 0x14]
// 007f7389  51                   push ecx
// 007f738a  8bce                 mov ecx, esi
// 007f738c  e8efe6ffff           call 0x7f5a80
// 007f7391  8bc8                 mov ecx, eax
// 007f7393  ff15bcdd9800         call dword ptr [0x98ddbc]
// 007f7399  84c0                 test al, al
// 007f739b  8d4c2414             lea ecx, [esp + 0x14]
// 007f739f  0f94c3               sete bl
// 007f73a2  ff15c0de9800         call dword ptr [0x98dec0]
// 007f73a8  84db                 test bl, bl
// 007f73aa  746b                 je 0x7f7417
// 007f73ac  8d54241c             lea edx, [esp + 0x1c]
// 007f73b0  52                   push edx
// 007f73b1  8bce                 mov ecx, esi
// 007f73b3  e8c8e6ffff           call 0x7f5a80
// 007f73b8  8bf8                 mov edi, eax
// 007f73ba  6a09                 push 9
// 007f73bc  8d442414             lea eax, [esp + 0x14]
// 007f73c0  50                   push eax
// 007f73c1  8d4c2420             lea ecx, [esp + 0x20]
// 007f73c5  51                   push ecx
// 007f73c6  c644244402           mov byte ptr [esp + 0x44], 2
// 007f73cb  e820f0ffff           call 0x7f63f0
// 007f73d0  57                   push edi
// 007f73d1  50                   push eax
// 007f73d2  8d542428             lea edx, [esp + 0x28]
// 007f73d6  52                   push edx
// 007f73d7  c644245003           mov byte ptr [esp + 0x50], 3
// 007f73dc  e85f49c6ff           call 0x45bd40
// 007f73e1  83c418               add esp, 0x18
// 007f73e4  50                   push eax
// 007f73e5  8d4c2414             lea ecx, [esp + 0x14]
// 007f73e9  c644243c04           mov byte ptr [esp + 0x3c], 4
// 007f73ee  ff1538d59800         call dword ptr [0x98d538]
// 007f73f4  8d4c2414             lea ecx, [esp + 0x14]
// 007f73f8  ff15c0de9800         call dword ptr [0x98dec0]
// 007f73fe  8d4c2418             lea ecx, [esp + 0x18]
// 007f7402  ff15c0de9800         call dword ptr [0x98dec0]
// 007f7408  8d4c241c             lea ecx, [esp + 0x1c]
// 007f740c  c644243801           mov byte ptr [esp + 0x38], 1
// 007f7411  ff15c0de9800         call dword ptr [0x98dec0]
// 007f7417  8d4c2410             lea ecx, [esp + 0x10]
// 007f741b  ff15bcdd9800         call dword ptr [0x98ddbc]
// 007f7421  84c0                 test al, al
// 007f7423  742d                 je 0x7f7452
// 007f7425  8b06                 mov eax, dword ptr [esi]
// 007f7427  8b5060               mov edx, dword ptr [eax + 0x60]
// 007f742a  8d4c241c             lea ecx, [esp + 0x1c]
// 007f742e  51                   push ecx
// 007f742f  8bce                 mov ecx, esi
// 007f7431  ffd2                 call edx
// 007f7433  50                   push eax
// 007f7434  8d4c2414             lea ecx, [esp + 0x14]
// 007f7438  c644243c05           mov byte ptr [esp + 0x3c], 5
// 007f743d  ff1538d59800         call dword ptr [0x98d538]
// 007f7443  8d4c241c             lea ecx, [esp + 0x1c]
// 007f7447  c644243801           mov byte ptr [esp + 0x38], 1
// 007f744c  ff15c0de9800         call dword ptr [0x98dec0]
// 007f7452  8d4c2410             lea ecx, [esp + 0x10]
// 007f7456  ff156cd69800         call dword ptr [0x98d66c]
// 007f745c  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 007f7460  8901                 mov dword ptr [ecx], eax
// 007f7462  8d4c2410             lea ecx, [esp + 0x10]
// 007f7466  ff15c0de9800         call dword ptr [0x98dec0]
// 007f746c  8b442424             mov eax, dword ptr [esp + 0x24]
// 007f7470  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 007f7478  85c0                 test eax, eax
// 007f747a  7407                 je 0x7f7483
// 007f747c  8b542420             mov edx, dword ptr [esp + 0x20]
// 007f7480  895004               mov dword ptr [eax + 4], edx
// 007f7483  837c242c00           cmp dword ptr [esp + 0x2c], 0
// 007f7488  740c                 je 0x7f7496
// 007f748a  8b442428             mov eax, dword ptr [esp + 0x28]
// 007f748e  50                   push eax
// 007f748f  6a00                 push 0
// 007f7491  e88ec6ffff           call 0x7f3b24
// 007f7496  33c0                 xor eax, eax
// 007f7498  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007f749c  64890d00000000       mov dword ptr fs:[0], ecx
// 007f74a3  59                   pop ecx
// 007f74a4  5f                   pop edi
// 007f74a5  5e                   pop esi
// 007f74a6  5b                   pop ebx
// 007f74a7  83c42c               add esp, 0x2c
// 007f74aa  c21400               ret 0x14
// copied from an identical function in another client (function ?GetAccessibleName@CXTPControl@@MAEJUtagVARIANT@@PAPA_W@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPControl.cpp