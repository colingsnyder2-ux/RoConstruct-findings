// from server: 100% by auto
// roc 2010-06 00732960  unit: lua_exception  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00732960
//
// 00732960  8b442404             mov eax, dword ptr [esp + 4]
// 00732964  83c9ff               or ecx, 0xffffffff
// 00732967  3d00010000           cmp eax, 0x100
// 0073296c  720f                 jb 0x73297d
// 0073296e  8bff                 mov edi, edi
// 00732970  c1e808               shr eax, 8
// 00732973  83c108               add ecx, 8
// 00732976  3d00010000           cmp eax, 0x100
// 0073297b  73f3                 jae 0x732970
// 0073297d  0fb68088dca400       movzx eax, byte ptr [eax + 0xa4dc88]
// 00732984  03c1                 add eax, ecx
// 00732986  c3                   ret 
// library lua-5.1.4/lobject.c (function _luaO_log2)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lobject.c
