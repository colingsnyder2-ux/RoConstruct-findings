// from server: 100% by auto
// roc 2012-06 008332e0  unit: RBX::PAVPrimitive::$$A6AXU?$pair::?$signal::Vslot::?$callable  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008332e0
//
// 008332e0  8b442408             mov eax, dword ptr [esp + 8]
// 008332e4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008332e8  8d500c               lea edx, [eax + 0xc]
// 008332eb  894808               mov dword ptr [eax + 8], ecx
// 008332ee  8910                 mov dword ptr [eax], edx
// 008332f0  c7400400000000       mov dword ptr [eax + 4], 0
// 008332f7  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_buffinit)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
