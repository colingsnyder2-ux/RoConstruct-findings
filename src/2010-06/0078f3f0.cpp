// roc 2010-06 0078f3f0  unit: RBX::GroupDragTool  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0078f3f0
//
// 0078f3f0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0078f3f4  8b4118               mov eax, dword ptr [ecx + 0x18]
// 0078f3f7  89411c               mov dword ptr [ecx + 0x1c], eax
// 0078f3fa  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_getlabel)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
