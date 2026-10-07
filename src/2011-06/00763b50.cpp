// roc 2011-06 00763b50  unit: seg_00760000  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00763b50
//
// 00763b50  8b442408             mov eax, dword ptr [esp + 8]
// 00763b54  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00763b58  8d500c               lea edx, [eax + 0xc]
// 00763b5b  894808               mov dword ptr [eax + 8], ecx
// 00763b5e  8910                 mov dword ptr [eax], edx
// 00763b60  c7400400000000       mov dword ptr [eax + 4], 0
// 00763b67  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_buffinit)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
