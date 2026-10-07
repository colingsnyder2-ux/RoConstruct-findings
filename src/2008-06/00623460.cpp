// roc 2008-06 00623460  unit: lua_exception  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00623460
//
// 00623460  8b442404             mov eax, dword ptr [esp + 4]
// 00623464  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 00623467  68ff000000           push 0xff
// 0062346c  51                   push ecx
// 0062346d  50                   push eax
// 0062346e  e88dfbffff           call 0x623000
// 00623473  83c40c               add esp, 0xc
// 00623476  f7d8                 neg eax
// 00623478  1bc0                 sbb eax, eax
// 0062347a  f7d8                 neg eax
// 0062347c  c3                   ret 
// library lua-5.1.4/ldebug.c (function _luaG_checkcode)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
