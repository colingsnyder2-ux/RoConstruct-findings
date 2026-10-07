// roc 2011-06 007f27b0  unit: RBX::AdvLuaDragTool  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007f27b0
//
// 007f27b0  8b542410             mov edx, dword ptr [esp + 0x10]
// 007f27b4  c1e209               shl edx, 9
// 007f27b7  0b542414             or edx, dword ptr [esp + 0x14]
// 007f27bb  56                   push esi
// 007f27bc  8b742408             mov esi, dword ptr [esp + 8]
// 007f27c0  8b460c               mov eax, dword ptr [esi + 0xc]
// 007f27c3  8b4808               mov ecx, dword ptr [eax + 8]
// 007f27c6  c1e208               shl edx, 8
// 007f27c9  0b542410             or edx, dword ptr [esp + 0x10]
// 007f27cd  51                   push ecx
// 007f27ce  c1e206               shl edx, 6
// 007f27d1  0b542410             or edx, dword ptr [esp + 0x10]
// 007f27d5  52                   push edx
// 007f27d6  e835ffffff           call 0x7f2710
// 007f27db  83c408               add esp, 8
// 007f27de  5e                   pop esi
// 007f27df  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_codeABC)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
