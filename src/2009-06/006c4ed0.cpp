// roc 2009-06 006c4ed0  unit: lua_exception  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c4ed0
//
// 006c4ed0  51                   push ecx
// 006c4ed1  56                   push esi
// 006c4ed2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006c4ed6  8d442404             lea eax, [esp + 4]
// 006c4eda  50                   push eax
// 006c4edb  6a01                 push 1
// 006c4edd  56                   push esi
// 006c4ede  e8dd5dffff           call 0x6bacc0
// 006c4ee3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006c4ee7  51                   push ecx
// 006c4ee8  56                   push esi
// 006c4ee9  e87244ffff           call 0x6b9360
// 006c4eee  83c414               add esp, 0x14
// 006c4ef1  b801000000           mov eax, 1
// 006c4ef6  5e                   pop esi
// 006c4ef7  59                   pop ecx
// 006c4ef8  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _str_len)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
