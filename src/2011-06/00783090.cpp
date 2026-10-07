// roc 2011-06 00783090  unit: seg_00780000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00783090
//
// 00783090  56                   push esi
// 00783091  8b742408             mov esi, dword ptr [esp + 8]
// 00783095  56                   push esi
// 00783096  e8c5f2fdff           call 0x762360
// 0078309b  50                   push eax
// 0078309c  56                   push esi
// 0078309d  e8aeb5ffff           call 0x77e650
// 007830a2  83c40c               add esp, 0xc
// 007830a5  5e                   pop esi
// 007830a6  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_yield)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
