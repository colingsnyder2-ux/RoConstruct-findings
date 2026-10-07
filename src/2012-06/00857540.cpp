// roc 2012-06 00857540  unit: lua_exception  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00857540
//
// 00857540  8b442404             mov eax, dword ptr [esp + 4]
// 00857544  68a83ebd00           push 0xbd3ea8
// 00857549  50                   push eax
// 0085754a  e851b9fdff           call 0x832ea0
// 0085754f  83c408               add esp, 8
// 00857552  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _gfind_nodef)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
