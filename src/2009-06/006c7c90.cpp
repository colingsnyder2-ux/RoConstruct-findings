// from server: 100% by auto
// roc 2009-06 006c7c90  unit: seg_006c0000  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c7c90
//
// 006c7c90  8b442404             mov eax, dword ptr [esp + 4]
// 006c7c94  8b403c               mov eax, dword ptr [eax + 0x3c]
// 006c7c97  c3                   ret 
// library lua-5.1.4/ldebug.c (function _lua_gethookcount)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
