// from server: 100% by auto
// roc 2009-06 006c7c80  unit: seg_006c0000  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c7c80
//
// 006c7c80  8b442404             mov eax, dword ptr [esp + 4]
// 006c7c84  0fb64038             movzx eax, byte ptr [eax + 0x38]
// 006c7c88  c3                   ret 
// library lua-5.1.4/ldebug.c (function _lua_gethookmask)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
