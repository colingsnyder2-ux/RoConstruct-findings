// from server: 100% by auto
// roc 2008-06 00622ac0  unit: lua_exception  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00622ac0
//
// 00622ac0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00622ac4  8b542404             mov edx, dword ptr [esp + 4]
// 00622ac8  8d44240c             lea eax, [esp + 0xc]
// 00622acc  50                   push eax
// 00622acd  51                   push ecx
// 00622ace  52                   push edx
// 00622acf  e8fcfcffff           call 0x6227d0
// 00622ad4  83c40c               add esp, 0xc
// 00622ad7  c3                   ret 
// library lua-5.1.4/lobject.c (function _luaO_pushfstring)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lobject.c
