// from server: 100% by auto
// roc 2008-06 006281f0  unit: seg_00620000  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006281f0
//
// 006281f0  56                   push esi
// 006281f1  8b742408             mov esi, dword ptr [esp + 8]
// 006281f5  e856ffffff           call 0x628150
// 006281fa  6aff                 push -1
// 006281fc  56                   push esi
// 006281fd  e83e9cfeff           call 0x611e40
// 00628202  83c408               add esp, 8
// 00628205  85c0                 test eax, eax
// 00628207  7415                 je 0x62821e
// 00628209  68eed8ffff           push 0xffffd8ee
// 0062820e  56                   push esi
// 0062820f  e8bc9bfeff           call 0x611dd0
// 00628214  83c408               add esp, 8
// 00628217  b801000000           mov eax, 1
// 0062821c  5e                   pop esi
// 0062821d  c3                   ret 
// 0062821e  6aff                 push -1
// 00628220  56                   push esi
// 00628221  e8eaa3feff           call 0x612610
// 00628226  83c408               add esp, 8
// 00628229  b801000000           mov eax, 1
// 0062822e  5e                   pop esi
// 0062822f  c3                   ret 
// library lua-5.1.1/lbaselib.c (function _luaB_getfenv)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.1 lbaselib.c
