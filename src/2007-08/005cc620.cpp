// roc 2007-08 005cc620  unit: seg_005c0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005cc620
//
// 005cc620  56                   push esi
// 005cc621  8b742408             mov esi, dword ptr [esp + 8]
// 005cc625  56                   push esi
// 005cc626  e8550fffff           call 0x5bd580
// 005cc62b  50                   push eax
// 005cc62c  56                   push esi
// 005cc62d  e85e98ffff           call 0x5c5e90
// 005cc632  83c40c               add esp, 0xc
// 005cc635  5e                   pop esi
// 005cc636  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_yield)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
