// roc 2009-06 0077f3f0  unit: CXTThemeManager  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0077f3f0
//
// 0077f3f0  83ec08               sub esp, 8
// 0077f3f3  56                   push esi
// 0077f3f4  57                   push edi
// 0077f3f5  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0077f3f9  8bf1                 mov esi, ecx
// 0077f3fb  397e20               cmp dword ptr [esi + 0x20], edi
// 0077f3fe  7447                 je 0x77f447
// 0077f400  897e20               mov dword ptr [esi + 0x20], edi
// 0077f403  e8e872fdff           call 0x7566f0
// 0077f408  8b4610               mov eax, dword ptr [esi + 0x10]
// 0077f40b  f7d8                 neg eax
// 0077f40d  1bc0                 sbb eax, eax
// 0077f40f  89442408             mov dword ptr [esp + 8], eax
// 0077f413  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0077f41b  742a                 je 0x77f447
// 0077f41d  83c604               add esi, 4
// 0077f420  8d442414             lea eax, [esp + 0x14]
// 0077f424  50                   push eax
// 0077f425  8d4c2410             lea ecx, [esp + 0x10]
// 0077f429  51                   push ecx
// 0077f42a  8d542410             lea edx, [esp + 0x10]
// 0077f42e  52                   push edx
// 0077f42f  8bce                 mov ecx, esi
// 0077f431  e848d10c00           call 0x84c57e
// 0077f436  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0077f43a  57                   push edi
// 0077f43b  e890feffff           call 0x77f2d0
// 0077f440  837c240800           cmp dword ptr [esp + 8], 0
// 0077f445  75d9                 jne 0x77f420
// 0077f447  5f                   pop edi
// 0077f448  5e                   pop esi
// 0077f449  83c408               add esp, 8
// 0077f44c  c20400               ret 4
// copied from an identical function in another client (function ?SetTheme@CXTThemeManager@@QAEXW4XTThemeStyle@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTThemeManager.cpp