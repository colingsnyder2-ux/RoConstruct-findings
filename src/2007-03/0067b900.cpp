// roc 2007-03 0067b900  unit: seg_00670000  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0067b900
//
// 0067b900  83ec08               sub esp, 8
// 0067b903  56                   push esi
// 0067b904  57                   push edi
// 0067b905  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0067b909  8bf1                 mov esi, ecx
// 0067b90b  397e20               cmp dword ptr [esi + 0x20], edi
// 0067b90e  7447                 je 0x67b957
// 0067b910  897e20               mov dword ptr [esi + 0x20], edi
// 0067b913  e8b8b1fdff           call 0x656ad0
// 0067b918  8b4610               mov eax, dword ptr [esi + 0x10]
// 0067b91b  f7d8                 neg eax
// 0067b91d  1bc0                 sbb eax, eax
// 0067b91f  89442408             mov dword ptr [esp + 8], eax
// 0067b923  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0067b92b  742a                 je 0x67b957
// 0067b92d  83c604               add esi, 4
// 0067b930  8d442414             lea eax, [esp + 0x14]
// 0067b934  50                   push eax
// 0067b935  8d4c2410             lea ecx, [esp + 0x10]
// 0067b939  51                   push ecx
// 0067b93a  8d542410             lea edx, [esp + 0x10]
// 0067b93e  52                   push edx
// 0067b93f  8bce                 mov ecx, esi
// 0067b941  e832f90b00           call 0x73b278
// 0067b946  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0067b94a  57                   push edi
// 0067b94b  e890feffff           call 0x67b7e0
// 0067b950  837c240800           cmp dword ptr [esp + 8], 0
// 0067b955  75d9                 jne 0x67b930
// 0067b957  5f                   pop edi
// 0067b958  5e                   pop esi
// 0067b959  83c408               add esp, 8
// 0067b95c  c20400               ret 4
// copied from an identical function in another client (function ?SetTheme@CXTThemeManager@@QAEXW4XTThemeStyle@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTThemeManager.cpp