// from server: 100% by auto
// roc 2010-06 00732fe0  unit: lua_exception  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00732fe0
//
// 00732fe0  8b442404             mov eax, dword ptr [esp + 4]
// 00732fe4  0fb64038             movzx eax, byte ptr [eax + 0x38]
// 00732fe8  c3                   ret 
// library lua-5.1.4/ldebug.c (function _lua_gethookmask)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
