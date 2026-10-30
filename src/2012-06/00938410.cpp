// from server: 100% by auto
// roc 2012-06 00938410  unit: seg_00930000  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00938410
//
// 00938410  56                   push esi
// 00938411  8b742408             mov esi, dword ptr [esp + 8]
// 00938415  8d4628               lea eax, [esi + 0x28]
// 00938418  50                   push eax
// 00938419  8bc6                 mov eax, esi
// 0093841b  e800f9ffff           call 0x937d20
// 00938420  83c404               add esp, 4
// 00938423  894620               mov dword ptr [esi + 0x20], eax
// 00938426  5e                   pop esi
// 00938427  c3                   ret 
// library lua-5.1.4/llex.c (function _luaX_lookahead)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 llex.c
