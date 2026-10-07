// roc 2012-06 00966fb0  unit: RBX::CellContact  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00966fb0
//
// 00966fb0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00966fb4  8b4118               mov eax, dword ptr [ecx + 0x18]
// 00966fb7  89411c               mov dword ptr [ecx + 0x1c], eax
// 00966fba  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_getlabel)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
