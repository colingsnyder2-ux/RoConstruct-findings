// from server: 100% by auto
// roc 2009-06 006ba680  unit: RBX::UniversalTool  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ba680
//
// 006ba680  8b442408             mov eax, dword ptr [esp + 8]
// 006ba684  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006ba688  8d500c               lea edx, [eax + 0xc]
// 006ba68b  894808               mov dword ptr [eax + 8], ecx
// 006ba68e  8910                 mov dword ptr [eax], edx
// 006ba690  c7400400000000       mov dword ptr [eax + 4], 0
// 006ba697  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_buffinit)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
