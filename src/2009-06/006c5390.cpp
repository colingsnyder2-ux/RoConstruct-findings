// roc 2009-06 006c5390  unit: lua_exception  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c5390
//
// 006c5390  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006c5394  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006c5398  8b542410             mov edx, dword ptr [esp + 0x10]
// 006c539c  50                   push eax
// 006c539d  51                   push ecx
// 006c539e  52                   push edx
// 006c539f  e8bc51ffff           call 0x6ba560
// 006c53a4  83c40c               add esp, 0xc
// 006c53a7  33c0                 xor eax, eax
// 006c53a9  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _writer)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
