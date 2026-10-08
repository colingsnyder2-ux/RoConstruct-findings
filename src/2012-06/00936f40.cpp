// from server: 100% by auto
// roc 2012-06 00936f40  unit: seg_00930000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00936f40
//
// 00936f40  8b442404             mov eax, dword ptr [esp + 4]
// 00936f44  68ecf8bf00           push 0xbff8ec
// 00936f49  50                   push eax
// 00936f4a  e8c19ff1ff           call 0x850f10
// 00936f4f  83c408               add esp, 8
// 00936f52  33c0                 xor eax, eax
// 00936f54  c3                   ret 
// library lua-5.1.4/lmem.c (function _luaM_toobig)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmem.c
