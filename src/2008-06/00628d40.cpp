// from server: 100% by auto
// roc 2008-06 00628d40  unit: seg_00620000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00628d40
//
// 00628d40  56                   push esi
// 00628d41  8b742408             mov esi, dword ptr [esp + 8]
// 00628d45  56                   push esi
// 00628d46  e8c58efeff           call 0x611c10
// 00628d4b  50                   push eax
// 00628d4c  56                   push esi
// 00628d4d  e86e91ffff           call 0x621ec0
// 00628d52  83c40c               add esp, 0xc
// 00628d55  5e                   pop esi
// 00628d56  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_yield)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
