// roc 2010-06 007380e0  unit: seg_00730000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007380e0
//
// 007380e0  56                   push esi
// 007380e1  8b742408             mov esi, dword ptr [esp + 8]
// 007380e5  56                   push esi
// 007380e6  e8658efeff           call 0x720f50
// 007380eb  50                   push eax
// 007380ec  56                   push esi
// 007380ed  e81e7effff           call 0x72ff10
// 007380f2  83c40c               add esp, 0xc
// 007380f5  5e                   pop esi
// 007380f6  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_yield)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
