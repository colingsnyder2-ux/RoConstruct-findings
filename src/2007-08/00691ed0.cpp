// roc 2007-08 00691ed0  unit: CXTThemeManager  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00691ed0
//
// 00691ed0  83ec08               sub esp, 8
// 00691ed3  56                   push esi
// 00691ed4  57                   push edi
// 00691ed5  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00691ed9  8bf1                 mov esi, ecx
// 00691edb  397e20               cmp dword ptr [esi + 0x20], edi
// 00691ede  7447                 je 0x691f27
// 00691ee0  897e20               mov dword ptr [esi + 0x20], edi
// 00691ee3  e8b88bfdff           call 0x66aaa0
// 00691ee8  8b4610               mov eax, dword ptr [esi + 0x10]
// 00691eeb  f7d8                 neg eax
// 00691eed  1bc0                 sbb eax, eax
// 00691eef  89442408             mov dword ptr [esp + 8], eax
// 00691ef3  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00691efb  742a                 je 0x691f27
// 00691efd  83c604               add esi, 4
// 00691f00  8d442414             lea eax, [esp + 0x14]
// 00691f04  50                   push eax
// 00691f05  8d4c2410             lea ecx, [esp + 0x10]
// 00691f09  51                   push ecx
// 00691f0a  8d542410             lea edx, [esp + 0x10]
// 00691f0e  52                   push edx
// 00691f0f  8bce                 mov ecx, esi
// 00691f11  e8286c0a00           call 0x738b3e
// 00691f16  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00691f1a  57                   push edi
// 00691f1b  e890feffff           call 0x691db0
// 00691f20  837c240800           cmp dword ptr [esp + 8], 0
// 00691f25  75d9                 jne 0x691f00
// 00691f27  5f                   pop edi
// 00691f28  5e                   pop esi
// 00691f29  83c408               add esp, 8
// 00691f2c  c20400               ret 4
// copied from an identical function in another client (function ?SetTheme@CXTThemeManager@@QAEXW4XTThemeStyle@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTThemeManager.cpp