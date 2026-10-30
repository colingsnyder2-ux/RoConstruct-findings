// roc 2009-12 0085b940  unit: CXTPStatusBarPane  size: 317 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085b940
//
// 0085b940  83ec30               sub esp, 0x30
// 0085b943  56                   push esi
// 0085b944  8bf1                 mov esi, ecx
// 0085b946  837e7800             cmp dword ptr [esi + 0x78], 0
// 0085b94a  0f8426010000         je 0x85ba76
// 0085b950  53                   push ebx
// 0085b951  55                   push ebp
// 0085b952  57                   push edi
// 0085b953  c7467c01000000       mov dword ptr [esi + 0x7c], 1
// 0085b95a  e8a1ffffff           call 0x85b900
// 0085b95f  8b4650               mov eax, dword ptr [esi + 0x50]
// 0085b962  8b4020               mov eax, dword ptr [eax + 0x20]
// 0085b965  50                   push eax
// 0085b966  ff152ccc9800         call dword ptr [0x98cc2c]
// 0085b96c  50                   push eax
// 0085b96d  e8b881f9ff           call 0x7f3b2a
// 0085b972  8d4c2414             lea ecx, [esp + 0x14]
// 0085b976  51                   push ecx
// 0085b977  8bce                 mov ecx, esi
// 0085b979  e8c2feffff           call 0x85b840
// 0085b97e  8b1db0ca9800         mov ebx, dword ptr [0x98cab0]
// 0085b984  8b2d5cca9800         mov ebp, dword ptr [0x98ca5c]
// 0085b98a  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0085b992  8b4650               mov eax, dword ptr [esi + 0x50]
// 0085b995  85c0                 test eax, eax
// 0085b997  7504                 jne 0x85b99d
// 0085b999  33ff                 xor edi, edi
// 0085b99b  eb03                 jmp 0x85b9a0
// 0085b99d  8b7820               mov edi, dword ptr [eax + 0x20]
// 0085b9a0  ff1528cc9800         call dword ptr [0x98cc28]
// 0085b9a6  3bc7                 cmp eax, edi
// 0085b9a8  0f85a1000000         jne 0x85ba4f
// 0085b9ae  8b542448             mov edx, dword ptr [esp + 0x48]
// 0085b9b2  8b442444             mov eax, dword ptr [esp + 0x44]
// 0085b9b6  52                   push edx
// 0085b9b7  50                   push eax
// 0085b9b8  8d4c241c             lea ecx, [esp + 0x1c]
// 0085b9bc  51                   push ecx
// 0085b9bd  ffd5                 call ebp
// 0085b9bf  3b467c               cmp eax, dword ptr [esi + 0x7c]
// 0085b9c2  740a                 je 0x85b9ce
// 0085b9c4  8bce                 mov ecx, esi
// 0085b9c6  89467c               mov dword ptr [esi + 0x7c], eax
// 0085b9c9  e832ffffff           call 0x85b900
// 0085b9ce  6a00                 push 0
// 0085b9d0  6a00                 push 0
// 0085b9d2  6a00                 push 0
// 0085b9d4  6a00                 push 0
// 0085b9d6  8d542434             lea edx, [esp + 0x34]
// 0085b9da  52                   push edx
// 0085b9db  ff1524cc9800         call dword ptr [0x98cc24]
// 0085b9e1  85c0                 test eax, eax
// 0085b9e3  74ad                 je 0x85b992
// 0085b9e5  6a00                 push 0
// 0085b9e7  6a00                 push 0
// 0085b9e9  6a00                 push 0
// 0085b9eb  8d442430             lea eax, [esp + 0x30]
// 0085b9ef  50                   push eax
// 0085b9f0  ffd3                 call ebx
// 0085b9f2  8b442428             mov eax, dword ptr [esp + 0x28]
// 0085b9f6  3d00020000           cmp eax, 0x200
// 0085b9fb  772f                 ja 0x85ba2c
// 0085b9fd  7415                 je 0x85ba14
// 0085b9ff  83f81f               cmp eax, 0x1f
// 0085ba02  744b                 je 0x85ba4f
// 0085ba04  3d00010000           cmp eax, 0x100
// 0085ba09  752d                 jne 0x85ba38
// 0085ba0b  837c242c1b           cmp dword ptr [esp + 0x2c], 0x1b
// 0085ba10  7580                 jne 0x85b992
// 0085ba12  eb3b                 jmp 0x85ba4f
// 0085ba14  8b442430             mov eax, dword ptr [esp + 0x30]
// 0085ba18  0fbfc8               movsx ecx, ax
// 0085ba1b  c1e810               shr eax, 0x10
// 0085ba1e  98                   cwde 
// 0085ba1f  894c2444             mov dword ptr [esp + 0x44], ecx
// 0085ba23  89442448             mov dword ptr [esp + 0x48], eax
// 0085ba27  e966ffffff           jmp 0x85b992
// 0085ba2c  2d02020000           sub eax, 0x202
// 0085ba31  7415                 je 0x85ba48
// 0085ba33  83e802               sub eax, 2
// 0085ba36  7417                 je 0x85ba4f
// 0085ba38  8d4c2424             lea ecx, [esp + 0x24]
// 0085ba3c  51                   push ecx
// 0085ba3d  ff1594ca9800         call dword ptr [0x98ca94]
// 0085ba43  e94affffff           jmp 0x85b992
// 0085ba48  8b567c               mov edx, dword ptr [esi + 0x7c]
// 0085ba4b  89542410             mov dword ptr [esp + 0x10], edx
// 0085ba4f  ff1520cc9800         call dword ptr [0x98cc20]
// 0085ba55  8bce                 mov ecx, esi
// 0085ba57  c7467c00000000       mov dword ptr [esi + 0x7c], 0
// 0085ba5e  e89dfeffff           call 0x85b900
// 0085ba63  837c241000           cmp dword ptr [esp + 0x10], 0
// 0085ba68  5f                   pop edi
// 0085ba69  5d                   pop ebp
// 0085ba6a  5b                   pop ebx
// 0085ba6b  7409                 je 0x85ba76
// 0085ba6d  8b4e50               mov ecx, dword ptr [esi + 0x50]
// 0085ba70  56                   push esi
// 0085ba71  e80af6ffff           call 0x85b080
// 0085ba76  5e                   pop esi
// 0085ba77  83c430               add esp, 0x30
// 0085ba7a  c20800               ret 8
// copied from an identical function in another client (function ?OnLButtonDown@CXTPStatusBarPane@@MAEXVCPoint@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/CommandBars/XTPStatusBar.cpp