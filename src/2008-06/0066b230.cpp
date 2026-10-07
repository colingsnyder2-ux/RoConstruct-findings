// roc 2008-06 0066b230  unit: RBX::GroupDragTool  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0066b230
//
// 0066b230  8b542410             mov edx, dword ptr [esp + 0x10]
// 0066b234  c1e209               shl edx, 9
// 0066b237  0b542414             or edx, dword ptr [esp + 0x14]
// 0066b23b  56                   push esi
// 0066b23c  8b742408             mov esi, dword ptr [esp + 8]
// 0066b240  8b460c               mov eax, dword ptr [esi + 0xc]
// 0066b243  8b4808               mov ecx, dword ptr [eax + 8]
// 0066b246  c1e208               shl edx, 8
// 0066b249  0b542410             or edx, dword ptr [esp + 0x10]
// 0066b24d  51                   push ecx
// 0066b24e  c1e206               shl edx, 6
// 0066b251  0b542410             or edx, dword ptr [esp + 0x10]
// 0066b255  52                   push edx
// 0066b256  e835ffffff           call 0x66b190
// 0066b25b  83c408               add esp, 8
// 0066b25e  5e                   pop esi
// 0066b25f  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_codeABC)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
