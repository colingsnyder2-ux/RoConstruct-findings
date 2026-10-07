// roc 2007-08 005c7000  unit: lua_exception  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c7000
//
// 005c7000  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005c7004  57                   push edi
// 005c7005  8b7c2408             mov edi, dword ptr [esp + 8]
// 005c7009  8d442410             lea eax, [esp + 0x10]
// 005c700d  50                   push eax
// 005c700e  51                   push ecx
// 005c700f  57                   push edi
// 005c7010  e8cb7b0400           call 0x60ebe0
// 005c7015  50                   push eax
// 005c7016  e8e5feffff           call 0x5c6f00
// 005c701b  57                   push edi
// 005c701c  e84fffffff           call 0x5c6f70
// 005c7021  83c414               add esp, 0x14
// 005c7024  5f                   pop edi
// 005c7025  c3                   ret 
// library lua-5.1.4/ldebug.c (function _luaG_runerror)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
