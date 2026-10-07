// roc 2008-06 00628d10  unit: seg_00620000  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00628d10
//
// 00628d10  56                   push esi
// 00628d11  8b742408             mov esi, dword ptr [esp + 8]
// 00628d15  56                   push esi
// 00628d16  e895ffffff           call 0x628cb0
// 00628d1b  6a01                 push 1
// 00628d1d  68508c6200           push 0x628c50
// 00628d22  56                   push esi
// 00628d23  e82896feff           call 0x612350
// 00628d28  83c410               add esp, 0x10
// 00628d2b  b801000000           mov eax, 1
// 00628d30  5e                   pop esi
// 00628d31  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_cowrap)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
