// from server: 100% by auto
// roc 2008-06 00625460  unit: lua_exception  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00625460
//
// 00625460  56                   push esi
// 00625461  8b742408             mov esi, dword ptr [esp + 8]
// 00625465  6a05                 push 5
// 00625467  6a01                 push 1
// 00625469  56                   push esi
// 0062546a  e8d1c1feff           call 0x611640
// 0062546f  68984d8400           push 0x844d98
// 00625474  56                   push esi
// 00625475  e8e6b7feff           call 0x610c60
// 0062547a  6a01                 push 1
// 0062547c  56                   push esi
// 0062547d  e84ec9feff           call 0x611dd0
// 00625482  83c41c               add esp, 0x1c
// 00625485  b801000000           mov eax, 1
// 0062548a  5e                   pop esi
// 0062548b  c3                   ret 
// library lua-5.1.4/ltablib.c (function _setn)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltablib.c
