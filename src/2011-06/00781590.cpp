// from server: 100% by auto
// roc 2011-06 00781590  unit: lua_exception  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00781590
//
// 00781590  8b442404             mov eax, dword ptr [esp + 4]
// 00781594  6a01                 push 1
// 00781596  50                   push eax
// 00781597  e834feffff           call 0x7813d0
// 0078159c  83c408               add esp, 8
// 0078159f  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _str_find)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
