// from server: 100% by auto
// roc 2008-06 0066b260  unit: RBX::GroupDragTool  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0066b260
//
// 0066b260  8b542410             mov edx, dword ptr [esp + 0x10]
// 0066b264  c1e208               shl edx, 8
// 0066b267  0b54240c             or edx, dword ptr [esp + 0xc]
// 0066b26b  56                   push esi
// 0066b26c  8b742408             mov esi, dword ptr [esp + 8]
// 0066b270  8b460c               mov eax, dword ptr [esi + 0xc]
// 0066b273  8b4808               mov ecx, dword ptr [eax + 8]
// 0066b276  c1e206               shl edx, 6
// 0066b279  0b54240c             or edx, dword ptr [esp + 0xc]
// 0066b27d  51                   push ecx
// 0066b27e  52                   push edx
// 0066b27f  e80cffffff           call 0x66b190
// 0066b284  83c408               add esp, 8
// 0066b287  5e                   pop esi
// 0066b288  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_codeABx)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
