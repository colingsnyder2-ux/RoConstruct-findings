// roc 2012-06 00857370  unit: lua_exception  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00857370
//
// 00857370  8b442404             mov eax, dword ptr [esp + 4]
// 00857374  6a01                 push 1
// 00857376  50                   push eax
// 00857377  e834feffff           call 0x8571b0
// 0085737c  83c408               add esp, 8
// 0085737f  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _str_find)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
