// from server: 100% by auto
// roc 2009-06 006c4700  unit: lua_exception  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c4700
//
// 006c4700  8b442404             mov eax, dword ptr [esp + 4]
// 006c4704  6888b78e00           push 0x8eb788
// 006c4709  68a0128b00           push 0x8b12a0
// 006c470e  50                   push eax
// 006c470f  e85c69ffff           call 0x6bb070
// 006c4714  83c40c               add esp, 0xc
// 006c4717  b801000000           mov eax, 1
// 006c471c  c3                   ret 
// library lua-5.1.4/ltablib.c (function _luaopen_table)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltablib.c
