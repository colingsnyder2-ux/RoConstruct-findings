// from server: 100% by auto
// roc 2009-06 006fa1d0  unit: RBX::GroupDragTool  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006fa1d0
//
// 006fa1d0  8b542410             mov edx, dword ptr [esp + 0x10]
// 006fa1d4  c1e209               shl edx, 9
// 006fa1d7  0b542414             or edx, dword ptr [esp + 0x14]
// 006fa1db  56                   push esi
// 006fa1dc  8b742408             mov esi, dword ptr [esp + 8]
// 006fa1e0  8b460c               mov eax, dword ptr [esi + 0xc]
// 006fa1e3  8b4808               mov ecx, dword ptr [eax + 8]
// 006fa1e6  c1e208               shl edx, 8
// 006fa1e9  0b542410             or edx, dword ptr [esp + 0x10]
// 006fa1ed  51                   push ecx
// 006fa1ee  c1e206               shl edx, 6
// 006fa1f1  0b542410             or edx, dword ptr [esp + 0x10]
// 006fa1f5  52                   push edx
// 006fa1f6  e835ffffff           call 0x6fa130
// 006fa1fb  83c408               add esp, 8
// 006fa1fe  5e                   pop esi
// 006fa1ff  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_codeABC)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
