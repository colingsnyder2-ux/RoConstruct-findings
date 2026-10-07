// roc 2009-06 006fa200  unit: RBX::GroupDragTool  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006fa200
//
// 006fa200  8b542410             mov edx, dword ptr [esp + 0x10]
// 006fa204  c1e208               shl edx, 8
// 006fa207  0b54240c             or edx, dword ptr [esp + 0xc]
// 006fa20b  56                   push esi
// 006fa20c  8b742408             mov esi, dword ptr [esp + 8]
// 006fa210  8b460c               mov eax, dword ptr [esi + 0xc]
// 006fa213  8b4808               mov ecx, dword ptr [eax + 8]
// 006fa216  c1e206               shl edx, 6
// 006fa219  0b54240c             or edx, dword ptr [esp + 0xc]
// 006fa21d  51                   push ecx
// 006fa21e  52                   push edx
// 006fa21f  e80cffffff           call 0x6fa130
// 006fa224  83c408               add esp, 8
// 006fa227  5e                   pop esi
// 006fa228  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_codeABx)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
