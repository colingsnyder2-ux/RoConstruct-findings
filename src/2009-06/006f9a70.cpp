// roc 2009-06 006f9a70  unit: RBX::GroupDragTool  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f9a70
//
// 006f9a70  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006f9a74  8b4118               mov eax, dword ptr [ecx + 0x18]
// 006f9a77  89411c               mov dword ptr [ecx + 0x1c], eax
// 006f9a7a  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_getlabel)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
