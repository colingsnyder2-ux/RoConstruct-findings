// roc 2011-06 007dfc70  unit: seg_007d0000  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007dfc70
//
// 007dfc70  56                   push esi
// 007dfc71  8b742408             mov esi, dword ptr [esp + 8]
// 007dfc75  8d4628               lea eax, [esi + 0x28]
// 007dfc78  50                   push eax
// 007dfc79  8bc6                 mov eax, esi
// 007dfc7b  e800f9ffff           call 0x7df580
// 007dfc80  83c404               add esp, 4
// 007dfc83  894620               mov dword ptr [esi + 0x20], eax
// 007dfc86  5e                   pop esi
// 007dfc87  c3                   ret 
// library lua-5.1.4/llex.c (function _luaX_lookahead)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 llex.c
