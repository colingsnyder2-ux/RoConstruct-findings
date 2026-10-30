// roc 2010-06 0080e440  unit: CXTThemeManager  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0080e440
//
// 0080e440  83ec08               sub esp, 8
// 0080e443  56                   push esi
// 0080e444  57                   push edi
// 0080e445  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0080e449  8bf1                 mov esi, ecx
// 0080e44b  397e20               cmp dword ptr [esi + 0x20], edi
// 0080e44e  7447                 je 0x80e497
// 0080e450  897e20               mov dword ptr [esi + 0x20], edi
// 0080e453  e89872fdff           call 0x7e56f0
// 0080e458  8b4610               mov eax, dword ptr [esi + 0x10]
// 0080e45b  f7d8                 neg eax
// 0080e45d  1bc0                 sbb eax, eax
// 0080e45f  89442408             mov dword ptr [esp + 8], eax
// 0080e463  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0080e46b  742a                 je 0x80e497
// 0080e46d  83c604               add esi, 4
// 0080e470  8d442414             lea eax, [esp + 0x14]
// 0080e474  50                   push eax
// 0080e475  8d4c2410             lea ecx, [esp + 0x10]
// 0080e479  51                   push ecx
// 0080e47a  8d542410             lea edx, [esp + 0x10]
// 0080e47e  52                   push edx
// 0080e47f  8bce                 mov ecx, esi
// 0080e481  e8a6ef1600           call 0x97d42c
// 0080e486  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0080e48a  57                   push edi
// 0080e48b  e890feffff           call 0x80e320
// 0080e490  837c240800           cmp dword ptr [esp + 8], 0
// 0080e495  75d9                 jne 0x80e470
// 0080e497  5f                   pop edi
// 0080e498  5e                   pop esi
// 0080e499  83c408               add esp, 8
// 0080e49c  c20400               ret 4
// copied from an identical function in another client (function ?SetTheme@CXTThemeManager@@QAEXW4XTThemeStyle@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTThemeManager.cpp