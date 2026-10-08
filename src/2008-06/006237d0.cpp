// from server: 100% by auto
// roc 2008-06 006237d0  unit: lua_exception  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006237d0
//
// 006237d0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006237d4  57                   push edi
// 006237d5  8b7c2408             mov edi, dword ptr [esp + 8]
// 006237d9  8d442410             lea eax, [esp + 0x10]
// 006237dd  50                   push eax
// 006237de  51                   push ecx
// 006237df  57                   push edi
// 006237e0  e8ebefffff           call 0x6227d0
// 006237e5  50                   push eax
// 006237e6  e8e5feffff           call 0x6236d0
// 006237eb  57                   push edi
// 006237ec  e84fffffff           call 0x623740
// 006237f1  83c414               add esp, 0x14
// 006237f4  5f                   pop edi
// 006237f5  c3                   ret 
// library lua-5.1.4/ldebug.c (function _luaG_runerror)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
