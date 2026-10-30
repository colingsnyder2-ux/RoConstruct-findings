// roc 2010-06 0088d2a0  unit: CXTSplitterWndThemeFactory  size: 196 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0088d2a0
//
// 0088d2a0  6aff                 push -1
// 0088d2a2  68f1be9b00           push 0x9bbef1
// 0088d2a7  64a100000000         mov eax, dword ptr fs:[0]
// 0088d2ad  50                   push eax
// 0088d2ae  56                   push esi
// 0088d2af  57                   push edi
// 0088d2b0  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 0088d2b5  33c4                 xor eax, esp
// 0088d2b7  50                   push eax
// 0088d2b8  8d44240c             lea eax, [esp + 0xc]
// 0088d2bc  64a300000000         mov dword ptr fs:[0], eax
// 0088d2c2  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0088d2c6  8bc7                 mov eax, edi
// 0088d2c8  83e801               sub eax, 1
// 0088d2cb  6a1c                 push 0x1c
// 0088d2cd  7451                 je 0x88d320
// 0088d2cf  83e801               sub eax, 1
// 0088d2d2  7421                 je 0x88d2f5
// 0088d2d4  e8c7a6f1ff           call 0x7a79a0
// 0088d2d9  83c404               add esp, 4
// 0088d2dc  8944241c             mov dword ptr [esp + 0x1c], eax
// 0088d2e0  c744241402000000     mov dword ptr [esp + 0x14], 2
// 0088d2e8  85c0                 test eax, eax
// 0088d2ea  745f                 je 0x88d34b
// 0088d2ec  8bc8                 mov ecx, eax
// 0088d2ee  e87dfeffff           call 0x88d170
// 0088d2f3  eb58                 jmp 0x88d34d
// 0088d2f5  e8a6a6f1ff           call 0x7a79a0
// 0088d2fa  8bf0                 mov esi, eax
// 0088d2fc  83c404               add esp, 4
// 0088d2ff  8974241c             mov dword ptr [esp + 0x1c], esi
// 0088d303  c744241401000000     mov dword ptr [esp + 0x14], 1
// 0088d30b  85f6                 test esi, esi
// 0088d30d  743c                 je 0x88d34b
// 0088d30f  8bce                 mov ecx, esi
// 0088d311  e85afeffff           call 0x88d170
// 0088d316  c7068cefa600         mov dword ptr [esi], 0xa6ef8c
// 0088d31c  8bc6                 mov eax, esi
// 0088d31e  eb2d                 jmp 0x88d34d
// 0088d320  e87ba6f1ff           call 0x7a79a0
// 0088d325  8bf0                 mov esi, eax
// 0088d327  83c404               add esp, 4
// 0088d32a  8974241c             mov dword ptr [esp + 0x1c], esi
// 0088d32e  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0088d336  85f6                 test esi, esi
// 0088d338  7411                 je 0x88d34b
// 0088d33a  8bce                 mov ecx, esi
// 0088d33c  e82ffeffff           call 0x88d170
// 0088d341  c70678efa600         mov dword ptr [esi], 0xa6ef78
// 0088d347  8bc6                 mov eax, esi
// 0088d349  eb02                 jmp 0x88d34d
// 0088d34b  33c0                 xor eax, eax
// 0088d34d  897808               mov dword ptr [eax + 8], edi
// 0088d350  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0088d354  64890d00000000       mov dword ptr fs:[0], ecx
// 0088d35b  59                   pop ecx
// 0088d35c  5f                   pop edi
// 0088d35d  5e                   pop esi
// 0088d35e  83c40c               add esp, 0xc
// 0088d361  c20400               ret 4
// copied from an identical function in another client (function ?CreateTheme@CXTSplitterWndThemeFactory@@UAEPAVCXTThemeManagerStyle@@W4XTThemeStyle@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTSplitterWndTheme.cpp