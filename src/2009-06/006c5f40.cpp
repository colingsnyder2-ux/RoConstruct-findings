// roc 2009-06 006c5f40  unit: lua_exception  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c5f40
//
// 006c5f40  8b442404             mov eax, dword ptr [esp + 4]
// 006c5f44  6a00                 push 0
// 006c5f46  50                   push eax
// 006c5f47  e834feffff           call 0x6c5d80
// 006c5f4c  83c408               add esp, 8
// 006c5f4f  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _str_match)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
