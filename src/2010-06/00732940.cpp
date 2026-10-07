// roc 2010-06 00732940  unit: lua_exception  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00732940
//
// 00732940  8b442404             mov eax, dword ptr [esp + 4]
// 00732944  8bc8                 mov ecx, eax
// 00732946  c1f903               sar ecx, 3
// 00732949  83e11f               and ecx, 0x1f
// 0073294c  7409                 je 0x732957
// 0073294e  83e007               and eax, 7
// 00732951  83c008               add eax, 8
// 00732954  49                   dec ecx
// 00732955  d3e0                 shl eax, cl
// 00732957  c3                   ret 
// library lua-5.1.4/lobject.c (function _luaO_fb2int)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lobject.c
