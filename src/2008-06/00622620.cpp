// from server: 100% by auto
// roc 2008-06 00622620  unit: lua_exception  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00622620
//
// 00622620  8b442404             mov eax, dword ptr [esp + 4]
// 00622624  8bc8                 mov ecx, eax
// 00622626  c1f903               sar ecx, 3
// 00622629  83e11f               and ecx, 0x1f
// 0062262c  7409                 je 0x622637
// 0062262e  83e007               and eax, 7
// 00622631  83c008               add eax, 8
// 00622634  49                   dec ecx
// 00622635  d3e0                 shl eax, cl
// 00622637  c3                   ret 
// library lua-5.1.4/lobject.c (function _luaO_fb2int)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lobject.c
