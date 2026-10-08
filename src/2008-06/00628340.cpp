// from server: 100% by auto
// roc 2008-06 00628340  unit: seg_00620000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00628340
//
// 00628340  56                   push esi
// 00628341  8b742408             mov esi, dword ptr [esp + 8]
// 00628345  6a05                 push 5
// 00628347  6a01                 push 1
// 00628349  56                   push esi
// 0062834a  e8f192feff           call 0x611640
// 0062834f  6a02                 push 2
// 00628351  56                   push esi
// 00628352  e83993feff           call 0x611690
// 00628357  6a03                 push 3
// 00628359  56                   push esi
// 0062835a  e83193feff           call 0x611690
// 0062835f  6a03                 push 3
// 00628361  56                   push esi
// 00628362  e8b998feff           call 0x611c20
// 00628367  6a01                 push 1
// 00628369  56                   push esi
// 0062836a  e8a1a3feff           call 0x612710
// 0062836f  83c42c               add esp, 0x2c
// 00628372  b801000000           mov eax, 1
// 00628377  5e                   pop esi
// 00628378  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_rawset)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
