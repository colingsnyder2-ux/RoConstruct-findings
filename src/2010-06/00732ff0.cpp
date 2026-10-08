// from server: 100% by auto
// roc 2010-06 00732ff0  unit: lua_exception  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00732ff0
//
// 00732ff0  8b442404             mov eax, dword ptr [esp + 4]
// 00732ff4  8b403c               mov eax, dword ptr [eax + 0x3c]
// 00732ff7  c3                   ret 
// library lua-5.1.4/ldebug.c (function _lua_gethookcount)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
