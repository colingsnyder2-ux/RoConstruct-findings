// roc 2009-12 0085a4b0  unit: CXTThemeManager  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085a4b0
//
// 0085a4b0  83ec08               sub esp, 8
// 0085a4b3  56                   push esi
// 0085a4b4  57                   push edi
// 0085a4b5  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0085a4b9  8bf1                 mov esi, ecx
// 0085a4bb  397e20               cmp dword ptr [esi + 0x20], edi
// 0085a4be  7447                 je 0x85a507
// 0085a4c0  897e20               mov dword ptr [esi + 0x20], edi
// 0085a4c3  e8d870fdff           call 0x8315a0
// 0085a4c8  8b4610               mov eax, dword ptr [esi + 0x10]
// 0085a4cb  f7d8                 neg eax
// 0085a4cd  1bc0                 sbb eax, eax
// 0085a4cf  89442408             mov dword ptr [esp + 8], eax
// 0085a4d3  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0085a4db  742a                 je 0x85a507
// 0085a4dd  83c604               add esi, 4
// 0085a4e0  8d442414             lea eax, [esp + 0x14]
// 0085a4e4  50                   push eax
// 0085a4e5  8d4c2410             lea ecx, [esp + 0x10]
// 0085a4e9  51                   push ecx
// 0085a4ea  8d542410             lea edx, [esp + 0x10]
// 0085a4ee  52                   push edx
// 0085a4ef  8bce                 mov ecx, esi
// 0085a4f1  e8f4c50c00           call 0x926aea
// 0085a4f6  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0085a4fa  57                   push edi
// 0085a4fb  e890feffff           call 0x85a390
// 0085a500  837c240800           cmp dword ptr [esp + 8], 0
// 0085a505  75d9                 jne 0x85a4e0
// 0085a507  5f                   pop edi
// 0085a508  5e                   pop esi
// 0085a509  83c408               add esp, 8
// 0085a50c  c20400               ret 4
// copied from an identical function in another client (function ?SetTheme@CXTThemeManager@@QAEXW4XTThemeStyle@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTThemeManager.cpp