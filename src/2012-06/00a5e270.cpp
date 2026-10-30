// roc 2012-06 00a5e270  unit: CXTSplitterWndThemeFactory  size: 196 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a5e270
//
// 00a5e270  6aff                 push -1
// 00a5e272  684186ae00           push 0xae8641
// 00a5e277  64a100000000         mov eax, dword ptr fs:[0]
// 00a5e27d  50                   push eax
// 00a5e27e  56                   push esi
// 00a5e27f  57                   push edi
// 00a5e280  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a5e285  33c4                 xor eax, esp
// 00a5e287  50                   push eax
// 00a5e288  8d44240c             lea eax, [esp + 0xc]
// 00a5e28c  64a300000000         mov dword ptr fs:[0], eax
// 00a5e292  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00a5e296  8bc7                 mov eax, edi
// 00a5e298  83e801               sub eax, 1
// 00a5e29b  6a1c                 push 0x1c
// 00a5e29d  7451                 je 0xa5e2f0
// 00a5e29f  83e801               sub eax, 1
// 00a5e2a2  7421                 je 0xa5e2c5
// 00a5e2a4  e8713ef2ff           call 0x98211a
// 00a5e2a9  83c404               add esp, 4
// 00a5e2ac  8944241c             mov dword ptr [esp + 0x1c], eax
// 00a5e2b0  c744241402000000     mov dword ptr [esp + 0x14], 2
// 00a5e2b8  85c0                 test eax, eax
// 00a5e2ba  745f                 je 0xa5e31b
// 00a5e2bc  8bc8                 mov ecx, eax
// 00a5e2be  e87dfeffff           call 0xa5e140
// 00a5e2c3  eb58                 jmp 0xa5e31d
// 00a5e2c5  e8503ef2ff           call 0x98211a
// 00a5e2ca  8bf0                 mov esi, eax
// 00a5e2cc  83c404               add esp, 4
// 00a5e2cf  8974241c             mov dword ptr [esp + 0x1c], esi
// 00a5e2d3  c744241401000000     mov dword ptr [esp + 0x14], 1
// 00a5e2db  85f6                 test esi, esi
// 00a5e2dd  743c                 je 0xa5e31b
// 00a5e2df  8bce                 mov ecx, esi
// 00a5e2e1  e85afeffff           call 0xa5e140
// 00a5e2e6  c7064c41c200         mov dword ptr [esi], 0xc2414c
// 00a5e2ec  8bc6                 mov eax, esi
// 00a5e2ee  eb2d                 jmp 0xa5e31d
// 00a5e2f0  e8253ef2ff           call 0x98211a
// 00a5e2f5  8bf0                 mov esi, eax
// 00a5e2f7  83c404               add esp, 4
// 00a5e2fa  8974241c             mov dword ptr [esp + 0x1c], esi
// 00a5e2fe  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00a5e306  85f6                 test esi, esi
// 00a5e308  7411                 je 0xa5e31b
// 00a5e30a  8bce                 mov ecx, esi
// 00a5e30c  e82ffeffff           call 0xa5e140
// 00a5e311  c7063841c200         mov dword ptr [esi], 0xc24138
// 00a5e317  8bc6                 mov eax, esi
// 00a5e319  eb02                 jmp 0xa5e31d
// 00a5e31b  33c0                 xor eax, eax
// 00a5e31d  897808               mov dword ptr [eax + 8], edi
// 00a5e320  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00a5e324  64890d00000000       mov dword ptr fs:[0], ecx
// 00a5e32b  59                   pop ecx
// 00a5e32c  5f                   pop edi
// 00a5e32d  5e                   pop esi
// 00a5e32e  83c40c               add esp, 0xc
// 00a5e331  c20400               ret 4
// copied from an identical function in another client (function ?CreateTheme@CXTSplitterWndThemeFactory@@UAEPAVCXTThemeManagerStyle@@W4XTThemeStyle@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTSplitterWndTheme.cpp