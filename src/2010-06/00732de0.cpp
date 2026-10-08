// from server: 100% by auto
// roc 2010-06 00732de0  unit: lua_exception  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00732de0
//
// 00732de0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00732de4  8b542404             mov edx, dword ptr [esp + 4]
// 00732de8  8d44240c             lea eax, [esp + 0xc]
// 00732dec  50                   push eax
// 00732ded  51                   push ecx
// 00732dee  52                   push edx
// 00732def  e8fcfcffff           call 0x732af0
// 00732df4  83c40c               add esp, 0xc
// 00732df7  c3                   ret 
// library lua-5.1.4/lobject.c (function _luaO_pushfstring)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lobject.c
