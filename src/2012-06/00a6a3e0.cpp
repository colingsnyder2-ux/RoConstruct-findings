// roc 2012-06 00a6a3e0  unit: CXTCaptionThemeFactory  size: 186 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6a3e0
//
// 00a6a3e0  6aff                 push -1
// 00a6a3e2  684186ae00           push 0xae8641
// 00a6a3e7  64a100000000         mov eax, dword ptr fs:[0]
// 00a6a3ed  50                   push eax
// 00a6a3ee  56                   push esi
// 00a6a3ef  57                   push edi
// 00a6a3f0  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a6a3f5  33c4                 xor eax, esp
// 00a6a3f7  50                   push eax
// 00a6a3f8  8d44240c             lea eax, [esp + 0xc]
// 00a6a3fc  64a300000000         mov dword ptr fs:[0], eax
// 00a6a402  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00a6a406  8bc7                 mov eax, edi
// 00a6a408  83e801               sub eax, 1
// 00a6a40b  6a2c                 push 0x2c
// 00a6a40d  7447                 je 0xa6a456
// 00a6a40f  83e801               sub eax, 1
// 00a6a412  7421                 je 0xa6a435
// 00a6a414  e8017df1ff           call 0x98211a
// 00a6a419  83c404               add esp, 4
// 00a6a41c  8944241c             mov dword ptr [esp + 0x1c], eax
// 00a6a420  c744241402000000     mov dword ptr [esp + 0x14], 2
// 00a6a428  85c0                 test eax, eax
// 00a6a42a  7455                 je 0xa6a481
// 00a6a42c  8bc8                 mov ecx, eax
// 00a6a42e  e86df2ffff           call 0xa696a0
// 00a6a433  eb4e                 jmp 0xa6a483
// 00a6a435  e8e07cf1ff           call 0x98211a
// 00a6a43a  83c404               add esp, 4
// 00a6a43d  8944241c             mov dword ptr [esp + 0x1c], eax
// 00a6a441  c744241401000000     mov dword ptr [esp + 0x14], 1
// 00a6a449  85c0                 test eax, eax
// 00a6a44b  7434                 je 0xa6a481
// 00a6a44d  8bc8                 mov ecx, eax
// 00a6a44f  e8dcf2ffff           call 0xa69730
// 00a6a454  eb2d                 jmp 0xa6a483
// 00a6a456  e8bf7cf1ff           call 0x98211a
// 00a6a45b  8bf0                 mov esi, eax
// 00a6a45d  83c404               add esp, 4
// 00a6a460  8974241c             mov dword ptr [esp + 0x1c], esi
// 00a6a464  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00a6a46c  85f6                 test esi, esi
// 00a6a46e  7411                 je 0xa6a481
// 00a6a470  8bce                 mov ecx, esi
// 00a6a472  e829f2ffff           call 0xa696a0
// 00a6a477  c706f459c200         mov dword ptr [esi], 0xc259f4
// 00a6a47d  8bc6                 mov eax, esi
// 00a6a47f  eb02                 jmp 0xa6a483
// 00a6a481  33c0                 xor eax, eax
// 00a6a483  897808               mov dword ptr [eax + 8], edi
// 00a6a486  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00a6a48a  64890d00000000       mov dword ptr fs:[0], ecx
// 00a6a491  59                   pop ecx
// 00a6a492  5f                   pop edi
// 00a6a493  5e                   pop esi
// 00a6a494  83c40c               add esp, 0xc
// 00a6a497  c20400               ret 4
// copied from an identical function in another client (function ?CreateTheme@CXTCaptionThemeFactory@@UAEPAVCXTThemeManagerStyle@@W4XTThemeStyle@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTCaptionTheme.cpp