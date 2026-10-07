// roc 2012-06 00857380  unit: lua_exception  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00857380
//
// 00857380  8b442404             mov eax, dword ptr [esp + 4]
// 00857384  6a00                 push 0
// 00857386  50                   push eax
// 00857387  e824feffff           call 0x8571b0
// 0085738c  83c408               add esp, 8
// 0085738f  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _str_match)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
