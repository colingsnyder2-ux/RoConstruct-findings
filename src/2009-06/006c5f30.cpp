// from server: 100% by auto
// roc 2009-06 006c5f30  unit: lua_exception  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c5f30
//
// 006c5f30  8b442404             mov eax, dword ptr [esp + 4]
// 006c5f34  6a01                 push 1
// 006c5f36  50                   push eax
// 006c5f37  e844feffff           call 0x6c5d80
// 006c5f3c  83c408               add esp, 8
// 006c5f3f  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _str_find)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
