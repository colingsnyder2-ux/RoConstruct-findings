// roc 2007-08 005bed40  unit: boost::detail::H::?$sp_counted_impl_p  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005bed40
//
// 005bed40  8b442408             mov eax, dword ptr [esp + 8]
// 005bed44  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005bed48  8d500c               lea edx, [eax + 0xc]
// 005bed4b  894808               mov dword ptr [eax + 8], ecx
// 005bed4e  8910                 mov dword ptr [eax], edx
// 005bed50  c7400400000000       mov dword ptr [eax + 4], 0
// 005bed57  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_buffinit)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
