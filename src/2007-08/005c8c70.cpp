// from server: 100% by auto
// roc 2007-08 005c8c70  unit: lua_exception  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c8c70
//
// 005c8c70  56                   push esi
// 005c8c71  8b742408             mov esi, dword ptr [esp + 8]
// 005c8c75  6a05                 push 5
// 005c8c77  6a01                 push 1
// 005c8c79  56                   push esi
// 005c8c7a  e85166ffff           call 0x5bf2d0
// 005c8c7f  6a01                 push 1
// 005c8c81  56                   push esi
// 005c8c82  e8694dffff           call 0x5bd9f0
// 005c8c87  50                   push eax
// 005c8c88  56                   push esi
// 005c8c89  e8024fffff           call 0x5bdb90
// 005c8c8e  83c41c               add esp, 0x1c
// 005c8c91  b801000000           mov eax, 1
// 005c8c96  5e                   pop esi
// 005c8c97  c3                   ret 
// library lua-5.1.4/ltablib.c (function _getn)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltablib.c
