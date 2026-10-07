// roc 2007-08 005cbc40  unit: seg_005c0000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005cbc40
//
// 005cbc40  56                   push esi
// 005cbc41  8b742408             mov esi, dword ptr [esp + 8]
// 005cbc45  6a00                 push 0
// 005cbc47  6a03                 push 3
// 005cbc49  56                   push esi
// 005cbc4a  e8a127ffff           call 0x5be3f0
// 005cbc4f  50                   push eax
// 005cbc50  56                   push esi
// 005cbc51  e83a1fffff           call 0x5bdb90
// 005cbc56  83c414               add esp, 0x14
// 005cbc59  b801000000           mov eax, 1
// 005cbc5e  5e                   pop esi
// 005cbc5f  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_gcinfo)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
