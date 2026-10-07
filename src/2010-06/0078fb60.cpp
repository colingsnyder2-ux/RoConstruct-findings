// roc 2010-06 0078fb60  unit: RBX::GroupDragTool  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0078fb60
//
// 0078fb60  8b542410             mov edx, dword ptr [esp + 0x10]
// 0078fb64  c1e209               shl edx, 9
// 0078fb67  0b542414             or edx, dword ptr [esp + 0x14]
// 0078fb6b  56                   push esi
// 0078fb6c  8b742408             mov esi, dword ptr [esp + 8]
// 0078fb70  8b460c               mov eax, dword ptr [esi + 0xc]
// 0078fb73  8b4808               mov ecx, dword ptr [eax + 8]
// 0078fb76  c1e208               shl edx, 8
// 0078fb79  0b542410             or edx, dword ptr [esp + 0x10]
// 0078fb7d  51                   push ecx
// 0078fb7e  c1e206               shl edx, 6
// 0078fb81  0b542410             or edx, dword ptr [esp + 0x10]
// 0078fb85  52                   push edx
// 0078fb86  e835ffffff           call 0x78fac0
// 0078fb8b  83c408               add esp, 8
// 0078fb8e  5e                   pop esi
// 0078fb8f  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_codeABC)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
