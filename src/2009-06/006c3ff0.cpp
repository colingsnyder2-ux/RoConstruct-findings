// roc 2009-06 006c3ff0  unit: lua_exception  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c3ff0
//
// 006c3ff0  56                   push esi
// 006c3ff1  8b742408             mov esi, dword ptr [esp + 8]
// 006c3ff5  6a05                 push 5
// 006c3ff7  6a01                 push 1
// 006c3ff9  56                   push esi
// 006c3ffa  e8416cffff           call 0x6bac40
// 006c3fff  68d8b78e00           push 0x8eb7d8
// 006c4004  56                   push esi
// 006c4005  e83662ffff           call 0x6ba240
// 006c400a  6a01                 push 1
// 006c400c  56                   push esi
// 006c400d  e82e4fffff           call 0x6b8f40
// 006c4012  83c41c               add esp, 0x1c
// 006c4015  b801000000           mov eax, 1
// 006c401a  5e                   pop esi
// 006c401b  c3                   ret 
// library lua-5.1.4/ltablib.c (function _setn)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltablib.c
