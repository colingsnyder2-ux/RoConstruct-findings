// roc 2007-08 005c9350  unit: lua_exception  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c9350
//
// 005c9350  8b442404             mov eax, dword ptr [esp + 4]
// 005c9354  68c09a7b00           push 0x7b9ac0
// 005c9359  68e8ab7800           push 0x78abe8
// 005c935e  50                   push eax
// 005c935f  e89c63ffff           call 0x5bf700
// 005c9364  83c40c               add esp, 0xc
// 005c9367  b801000000           mov eax, 1
// 005c936c  c3                   ret 
// library lua-5.1.4/ltablib.c (function _luaopen_table)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltablib.c
