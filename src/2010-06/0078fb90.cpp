// roc 2010-06 0078fb90  unit: RBX::GroupDragTool  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0078fb90
//
// 0078fb90  8b542410             mov edx, dword ptr [esp + 0x10]
// 0078fb94  c1e208               shl edx, 8
// 0078fb97  0b54240c             or edx, dword ptr [esp + 0xc]
// 0078fb9b  56                   push esi
// 0078fb9c  8b742408             mov esi, dword ptr [esp + 8]
// 0078fba0  8b460c               mov eax, dword ptr [esi + 0xc]
// 0078fba3  8b4808               mov ecx, dword ptr [eax + 8]
// 0078fba6  c1e206               shl edx, 6
// 0078fba9  0b54240c             or edx, dword ptr [esp + 0xc]
// 0078fbad  51                   push ecx
// 0078fbae  52                   push edx
// 0078fbaf  e80cffffff           call 0x78fac0
// 0078fbb4  83c408               add esp, 8
// 0078fbb7  5e                   pop esi
// 0078fbb8  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_codeABx)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
