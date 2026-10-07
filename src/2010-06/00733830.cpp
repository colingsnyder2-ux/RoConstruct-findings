// roc 2010-06 00733830  unit: lua_exception  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00733830
//
// 00733830  8b442404             mov eax, dword ptr [esp + 4]
// 00733834  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 00733837  68ff000000           push 0xff
// 0073383c  51                   push ecx
// 0073383d  50                   push eax
// 0073383e  e83dfbffff           call 0x733380
// 00733843  83c40c               add esp, 0xc
// 00733846  f7d8                 neg eax
// 00733848  1bc0                 sbb eax, eax
// 0073384a  f7d8                 neg eax
// 0073384c  c3                   ret 
// library lua-5.1.4/ldebug.c (function _luaG_checkcode)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
