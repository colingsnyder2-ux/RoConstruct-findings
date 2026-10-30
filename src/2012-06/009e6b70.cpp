// roc 2012-06 009e6b70  unit: CXTThemeManager  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e6b70
//
// 009e6b70  83ec08               sub esp, 8
// 009e6b73  56                   push esi
// 009e6b74  57                   push edi
// 009e6b75  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 009e6b79  8bf1                 mov esi, ecx
// 009e6b7b  397e20               cmp dword ptr [esi + 0x20], edi
// 009e6b7e  7447                 je 0x9e6bc7
// 009e6b80  897e20               mov dword ptr [esi + 0x20], edi
// 009e6b83  e8a888fdff           call 0x9bf430
// 009e6b88  8b4610               mov eax, dword ptr [esi + 0x10]
// 009e6b8b  f7d8                 neg eax
// 009e6b8d  1bc0                 sbb eax, eax
// 009e6b8f  89442408             mov dword ptr [esp + 8], eax
// 009e6b93  c744241400000000     mov dword ptr [esp + 0x14], 0
// 009e6b9b  742a                 je 0x9e6bc7
// 009e6b9d  83c604               add esi, 4
// 009e6ba0  8d442414             lea eax, [esp + 0x14]
// 009e6ba4  50                   push eax
// 009e6ba5  8d4c2410             lea ecx, [esp + 0x10]
// 009e6ba9  51                   push ecx
// 009e6baa  8d542410             lea edx, [esp + 0x10]
// 009e6bae  52                   push edx
// 009e6baf  8bce                 mov ecx, esi
// 009e6bb1  e8b62f0b00           call 0xa99b6c
// 009e6bb6  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 009e6bba  57                   push edi
// 009e6bbb  e890feffff           call 0x9e6a50
// 009e6bc0  837c240800           cmp dword ptr [esp + 8], 0
// 009e6bc5  75d9                 jne 0x9e6ba0
// 009e6bc7  5f                   pop edi
// 009e6bc8  5e                   pop esi
// 009e6bc9  83c408               add esp, 8
// 009e6bcc  c20400               ret 4
// copied from an identical function in another client (function ?SetTheme@CXTThemeManager@@QAEXW4XTThemeStyle@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTThemeManager.cpp