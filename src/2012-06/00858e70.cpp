// from server: 100% by auto
// roc 2012-06 00858e70  unit: seg_00850000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00858e70
//
// 00858e70  56                   push esi
// 00858e71  8b742408             mov esi, dword ptr [esp + 8]
// 00858e75  56                   push esi
// 00858e76  e8758cfdff           call 0x831af0
// 00858e7b  50                   push eax
// 00858e7c  56                   push esi
// 00858e7d  e85ebcffff           call 0x854ae0
// 00858e82  83c40c               add esp, 0xc
// 00858e85  5e                   pop esi
// 00858e86  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_yield)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
