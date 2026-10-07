// roc 2009-06 006f2730  unit: seg_006f0000  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f2730
//
// 006f2730  56                   push esi
// 006f2731  8b742408             mov esi, dword ptr [esp + 8]
// 006f2735  8d4628               lea eax, [esi + 0x28]
// 006f2738  50                   push eax
// 006f2739  8bc6                 mov eax, esi
// 006f273b  e8f0f8ffff           call 0x6f2030
// 006f2740  83c404               add esp, 4
// 006f2743  894620               mov dword ptr [esi + 0x20], eax
// 006f2746  5e                   pop esi
// 006f2747  c3                   ret 
// library lua-5.1.4/llex.c (function _luaX_lookahead)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 llex.c
