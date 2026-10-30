// from server: 100% by auto
// roc 2007-08 006285e0  unit: RBX::AssemblyStage  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006285e0
//
// 006285e0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006285e4  8b4118               mov eax, dword ptr [ecx + 0x18]
// 006285e7  89411c               mov dword ptr [ecx + 0x1c], eax
// 006285ea  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_getlabel)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
