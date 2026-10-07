// roc 2012-06 00855b40  unit: lua_exception  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00855b40
//
// 00855b40  8b442404             mov eax, dword ptr [esp + 4]
// 00855b44  68d039bd00           push 0xbd39d0
// 00855b49  68d800b500           push 0xb500d8
// 00855b4e  50                   push eax
// 00855b4f  e87ce1fdff           call 0x833cd0
// 00855b54  83c40c               add esp, 0xc
// 00855b57  b801000000           mov eax, 1
// 00855b5c  c3                   ret 
// library lua-5.1.4/ltablib.c (function _luaopen_table)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltablib.c
