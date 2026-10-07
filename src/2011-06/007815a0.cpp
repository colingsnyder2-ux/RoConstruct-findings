// roc 2011-06 007815a0  unit: lua_exception  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007815a0
//
// 007815a0  8b442404             mov eax, dword ptr [esp + 4]
// 007815a4  6a00                 push 0
// 007815a6  50                   push eax
// 007815a7  e824feffff           call 0x7813d0
// 007815ac  83c408               add esp, 8
// 007815af  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _str_match)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
