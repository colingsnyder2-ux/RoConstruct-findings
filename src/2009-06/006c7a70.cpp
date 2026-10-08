// from server: 100% by auto
// roc 2009-06 006c7a70  unit: seg_006c0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c7a70
//
// 006c7a70  56                   push esi
// 006c7a71  8b742408             mov esi, dword ptr [esp + 8]
// 006c7a75  56                   push esi
// 006c7a76  e80513ffff           call 0x6b8d80
// 006c7a7b  50                   push eax
// 006c7a7c  56                   push esi
// 006c7a7d  e8beb6ffff           call 0x6c3140
// 006c7a82  83c40c               add esp, 0xc
// 006c7a85  5e                   pop esi
// 006c7a86  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_yield)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
