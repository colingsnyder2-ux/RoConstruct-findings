// roc 2012-06 00967780  unit: RBX::CellContact  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00967780
//
// 00967780  8b542410             mov edx, dword ptr [esp + 0x10]
// 00967784  c1e208               shl edx, 8
// 00967787  0b54240c             or edx, dword ptr [esp + 0xc]
// 0096778b  56                   push esi
// 0096778c  8b742408             mov esi, dword ptr [esp + 8]
// 00967790  8b460c               mov eax, dword ptr [esi + 0xc]
// 00967793  8b4808               mov ecx, dword ptr [eax + 8]
// 00967796  c1e206               shl edx, 6
// 00967799  0b54240c             or edx, dword ptr [esp + 0xc]
// 0096779d  51                   push ecx
// 0096779e  52                   push edx
// 0096779f  e80cffffff           call 0x9676b0
// 009677a4  83c408               add esp, 8
// 009677a7  5e                   pop esi
// 009677a8  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_codeABx)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
