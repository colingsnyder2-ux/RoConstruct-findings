// roc 2008-06 006110a0  unit: RBX::BlockBlockContact  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006110a0
//
// 006110a0  8b442408             mov eax, dword ptr [esp + 8]
// 006110a4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006110a8  8d500c               lea edx, [eax + 0xc]
// 006110ab  894808               mov dword ptr [eax + 8], ecx
// 006110ae  8910                 mov dword ptr [eax], edx
// 006110b0  c7400400000000       mov dword ptr [eax + 4], 0
// 006110b7  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_buffinit)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
