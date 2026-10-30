// roc 2010-06 00898490  unit: CXTShadowHook  size: 505 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00898490
//
// 00898490  6aff                 push -1
// 00898492  6814be9b00           push 0x9bbe14
// 00898497  64a100000000         mov eax, dword ptr fs:[0]
// 0089849d  50                   push eax
// 0089849e  51                   push ecx
// 0089849f  53                   push ebx
// 008984a0  55                   push ebp
// 008984a1  56                   push esi
// 008984a2  57                   push edi
// 008984a3  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 008984a8  33c4                 xor eax, esp
// 008984aa  50                   push eax
// 008984ab  8d442418             lea eax, [esp + 0x18]
// 008984af  64a300000000         mov dword ptr fs:[0], eax
// 008984b5  8be9                 mov ebp, ecx
// 008984b7  837d2800             cmp dword ptr [ebp + 0x28], 0
// 008984bb  753a                 jne 0x8984f7
// 008984bd  6884000000           push 0x84
// 008984c2  e8d9f4f0ff           call 0x7a79a0
// 008984c7  83c404               add esp, 4
// 008984ca  89442414             mov dword ptr [esp + 0x14], eax
// 008984ce  c744242000000000     mov dword ptr [esp + 0x20], 0
// 008984d6  85c0                 test eax, eax
// 008984d8  7411                 je 0x8984eb
// 008984da  8bc8                 mov ecx, eax
// 008984dc  e8afedffff           call 0x897290
// 008984e1  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 008984e9  eb14                 jmp 0x8984ff
// 008984eb  33c0                 xor eax, eax
// 008984ed  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 008984f5  eb08                 jmp 0x8984ff
// 008984f7  8d4d1c               lea ecx, [ebp + 0x1c]
// 008984fa  e841f3ffff           call 0x897840
// 008984ff  8b5c244c             mov ebx, dword ptr [esp + 0x4c]
// 00898503  8bf0                 mov esi, eax
// 00898505  895e68               mov dword ptr [esi + 0x68], ebx
// 00898508  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0089850c  89466c               mov dword ptr [esi + 0x6c], eax
// 0089850f  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00898513  894e70               mov dword ptr [esi + 0x70], ecx
// 00898516  8b542444             mov edx, dword ptr [esp + 0x44]
// 0089851a  895674               mov dword ptr [esi + 0x74], edx
// 0089851d  8b442448             mov eax, dword ptr [esp + 0x48]
// 00898521  894678               mov dword ptr [esi + 0x78], eax
// 00898524  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00898528  8b542430             mov edx, dword ptr [esp + 0x30]
// 0089852c  83ec10               sub esp, 0x10
// 0089852f  8bc4                 mov eax, esp
// 00898531  8908                 mov dword ptr [eax], ecx
// 00898533  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00898537  895004               mov dword ptr [eax + 4], edx
// 0089853a  8b542448             mov edx, dword ptr [esp + 0x48]
// 0089853e  894808               mov dword ptr [eax + 8], ecx
// 00898541  89500c               mov dword ptr [eax + 0xc], edx
// 00898544  8b442438             mov eax, dword ptr [esp + 0x38]
// 00898548  50                   push eax
// 00898549  8bce                 mov ecx, esi
// 0089854b  e850f8ffff           call 0x897da0
// 00898550  6a14                 push 0x14
// 00898552  e849f4f0ff           call 0x7a79a0
// 00898557  8bf8                 mov edi, eax
// 00898559  83c404               add esp, 4
// 0089855c  897c244c             mov dword ptr [esp + 0x4c], edi
// 00898560  c744242001000000     mov dword ptr [esp + 0x20], 1
// 00898568  85ff                 test edi, edi
// 0089856a  7414                 je 0x898580
// 0089856c  8bcf                 mov ecx, edi
// 0089856e  e8adf40000           call 0x8a7a20
// 00898573  c707ec03a700         mov dword ptr [edi], 0xa703ec
// 00898579  897710               mov dword ptr [edi + 0x10], esi
// 0089857c  8bcf                 mov ecx, edi
// 0089857e  eb02                 jmp 0x898582
// 00898580  33c9                 xor ecx, ecx
// 00898582  898e80000000         mov dword ptr [esi + 0x80], ecx
// 00898588  8b11                 mov edx, dword ptr [ecx]
// 0089858a  8b421c               mov eax, dword ptr [edx + 0x1c]
// 0089858d  53                   push ebx
// 0089858e  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 00898596  ffd0                 call eax
// 00898598  56                   push esi
// 00898599  8bcd                 mov ecx, ebp
// 0089859b  e8a0f4ffff           call 0x897a40
// 008985a0  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008985a4  8b542440             mov edx, dword ptr [esp + 0x40]
// 008985a8  83ec10               sub esp, 0x10
// 008985ab  8bc4                 mov eax, esp
// 008985ad  8908                 mov dword ptr [eax], ecx
// 008985af  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 008985b3  895004               mov dword ptr [eax + 4], edx
// 008985b6  8b542458             mov edx, dword ptr [esp + 0x58]
// 008985ba  894808               mov dword ptr [eax + 8], ecx
// 008985bd  8bce                 mov ecx, esi
// 008985bf  89500c               mov dword ptr [eax + 0xc], edx
// 008985c2  e8a9f0ffff           call 0x897670
// 008985c7  8b4620               mov eax, dword ptr [esi + 0x20]
// 008985ca  8b3d00bc9e00         mov edi, dword ptr [0x9ebc00]
// 008985d0  6a00                 push 0
// 008985d2  6af8                 push -8
// 008985d4  50                   push eax
// 008985d5  ffd7                 call edi
// 008985d7  837e6400             cmp dword ptr [esi + 0x64], 0
// 008985db  745b                 je 0x898638
// 008985dd  8b0d78c79e00         mov ecx, dword ptr [0x9ec778]
// 008985e3  6a13                 push 0x13
// 008985e5  6a00                 push 0
// 008985e7  6a00                 push 0
// 008985e9  6a00                 push 0
// 008985eb  6a00                 push 0
// 008985ed  51                   push ecx
// 008985ee  8bce                 mov ecx, esi
// 008985f0  e877f7f0ff           call 0x7a7d6c
// 008985f5  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 008985f8  85c9                 test ecx, ecx
// 008985fa  7410                 je 0x89860c
// 008985fc  8b11                 mov edx, dword ptr [ecx]
// 008985fe  8b4204               mov eax, dword ptr [edx + 4]
// 00898601  6a01                 push 1
// 00898603  ffd0                 call eax
// 00898605  c7467c00000000       mov dword ptr [esi + 0x7c], 0
// 0089860c  ff1574ba9e00         call dword ptr [0x9eba74]
// 00898612  50                   push eax
// 00898613  e852f6f0ff           call 0x7a7c6a
// 00898618  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0089861b  6a00                 push 0
// 0089861d  6a00                 push 0
// 0089861f  51                   push ecx
// 00898620  ff1578ba9e00         call dword ptr [0x9eba78]
// 00898626  8b5620               mov edx, dword ptr [esi + 0x20]
// 00898629  6a00                 push 0
// 0089862b  6a01                 push 1
// 0089862d  6a01                 push 1
// 0089862f  52                   push edx
// 00898630  ff1554bc9e00         call dword ptr [0x9ebc54]
// 00898636  eb17                 jmp 0x89864f
// 00898638  a178c79e00           mov eax, dword ptr [0x9ec778]
// 0089863d  6a53                 push 0x53
// 0089863f  6a00                 push 0
// 00898641  6a00                 push 0
// 00898643  6a00                 push 0
// 00898645  6a00                 push 0
// 00898647  50                   push eax
// 00898648  8bce                 mov ecx, esi
// 0089864a  e81df7f0ff           call 0x7a7d6c
// 0089864f  e802fbf0ff           call 0x7a8156
// 00898654  85c0                 test eax, eax
// 00898656  740b                 je 0x898663
// 00898658  8b10                 mov edx, dword ptr [eax]
// 0089865a  8bc8                 mov ecx, eax
// 0089865c  8b427c               mov eax, dword ptr [edx + 0x7c]
// 0089865f  ffd0                 call eax
// 00898661  eb02                 jmp 0x898665
// 00898663  33c0                 xor eax, eax
// 00898665  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00898668  8b5620               mov edx, dword ptr [esi + 0x20]
// 0089866b  51                   push ecx
// 0089866c  6af8                 push -8
// 0089866e  52                   push edx
// 0089866f  ffd7                 call edi
// 00898671  8bc6                 mov eax, esi
// 00898673  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00898677  64890d00000000       mov dword ptr fs:[0], ecx
// 0089867e  59                   pop ecx
// 0089867f  5f                   pop edi
// 00898680  5e                   pop esi
// 00898681  5d                   pop ebp
// 00898682  5b                   pop ebx
// 00898683  83c410               add esp, 0x10
// 00898686  c22800               ret 0x28
// copied from an identical function in another client (function ?CreateShadow@CXTShadowsManager@@AAEPAVCXTShadowWnd@@HVCRect@@0PAUHWND__@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTWndShadow.cpp