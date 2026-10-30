// from server: 100% by auto
// roc 2008-06 00622640  unit: lua_exception  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00622640
//
// 00622640  8b442404             mov eax, dword ptr [esp + 4]
// 00622644  83c9ff               or ecx, 0xffffffff
// 00622647  3d00010000           cmp eax, 0x100
// 0062264c  720f                 jb 0x62265d
// 0062264e  8bff                 mov edi, edi
// 00622650  c1e808               shr eax, 8
// 00622653  83c108               add ecx, 8
// 00622656  3d00010000           cmp eax, 0x100
// 0062265b  73f3                 jae 0x622650
// 0062265d  0fb68090488400       movzx eax, byte ptr [eax + 0x844890]
// 00622664  03c1                 add eax, ecx
// 00622666  c3                   ret 
// library lua-5.1.4/lobject.c (function _luaO_log2)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lobject.c
