// roc 2010-06 007839d0  unit: seg_00780000  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007839d0
//
// 007839d0  56                   push esi
// 007839d1  8b742408             mov esi, dword ptr [esp + 8]
// 007839d5  8d4628               lea eax, [esi + 0x28]
// 007839d8  50                   push eax
// 007839d9  8bc6                 mov eax, esi
// 007839db  e8f0f8ffff           call 0x7832d0
// 007839e0  83c404               add esp, 4
// 007839e3  894620               mov dword ptr [esi + 0x20], eax
// 007839e6  5e                   pop esi
// 007839e7  c3                   ret 
// library lua-5.1.4/llex.c (function _luaX_lookahead)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 llex.c
