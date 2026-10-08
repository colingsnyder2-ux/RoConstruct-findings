// from server: 100% by auto
// roc 2009-06 006c6100  unit: lua_exception  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c6100
//
// 006c6100  8b442404             mov eax, dword ptr [esp + 4]
// 006c6104  6868bc8e00           push 0x8ebc68
// 006c6109  50                   push eax
// 006c610a  e83141ffff           call 0x6ba240
// 006c610f  83c408               add esp, 8
// 006c6112  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _gfind_nodef)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
