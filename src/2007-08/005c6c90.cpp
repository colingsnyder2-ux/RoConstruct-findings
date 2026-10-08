// from server: 100% by auto
// roc 2007-08 005c6c90  unit: lua_exception  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c6c90
//
// 005c6c90  8b442404             mov eax, dword ptr [esp + 4]
// 005c6c94  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 005c6c97  68ff000000           push 0xff
// 005c6c9c  51                   push ecx
// 005c6c9d  50                   push eax
// 005c6c9e  e87dfbffff           call 0x5c6820
// 005c6ca3  83c40c               add esp, 0xc
// 005c6ca6  f7d8                 neg eax
// 005c6ca8  1bc0                 sbb eax, eax
// 005c6caa  f7d8                 neg eax
// 005c6cac  c3                   ret 
// library lua-5.1.4/ldebug.c (function _luaG_checkcode)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
