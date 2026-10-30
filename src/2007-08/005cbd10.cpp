// from server: 100% by auto
// roc 2007-08 005cbd10  unit: seg_005c0000  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005cbd10
//
// 005cbd10  56                   push esi
// 005cbd11  8b742408             mov esi, dword ptr [esp + 8]
// 005cbd15  6a01                 push 1
// 005cbd17  56                   push esi
// 005cbd18  e80336ffff           call 0x5bf320
// 005cbd1d  6a01                 push 1
// 005cbd1f  56                   push esi
// 005cbd20  e84b1affff           call 0x5bd770
// 005cbd25  50                   push eax
// 005cbd26  56                   push esi
// 005cbd27  e8641affff           call 0x5bd790
// 005cbd2c  50                   push eax
// 005cbd2d  56                   push esi
// 005cbd2e  e8bd1effff           call 0x5bdbf0
// 005cbd33  83c420               add esp, 0x20
// 005cbd36  b801000000           mov eax, 1
// 005cbd3b  5e                   pop esi
// 005cbd3c  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_type)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
