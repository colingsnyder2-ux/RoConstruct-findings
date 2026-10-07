// roc 2011-06 007f27e0  unit: RBX::AdvLuaDragTool  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007f27e0
//
// 007f27e0  8b542410             mov edx, dword ptr [esp + 0x10]
// 007f27e4  c1e208               shl edx, 8
// 007f27e7  0b54240c             or edx, dword ptr [esp + 0xc]
// 007f27eb  56                   push esi
// 007f27ec  8b742408             mov esi, dword ptr [esp + 8]
// 007f27f0  8b460c               mov eax, dword ptr [esi + 0xc]
// 007f27f3  8b4808               mov ecx, dword ptr [eax + 8]
// 007f27f6  c1e206               shl edx, 6
// 007f27f9  0b54240c             or edx, dword ptr [esp + 0xc]
// 007f27fd  51                   push ecx
// 007f27fe  52                   push edx
// 007f27ff  e80cffffff           call 0x7f2710
// 007f2804  83c408               add esp, 8
// 007f2807  5e                   pop esi
// 007f2808  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_codeABx)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
