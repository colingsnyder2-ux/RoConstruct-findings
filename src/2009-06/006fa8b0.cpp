// roc 2009-06 006fa8b0  unit: RBX::GroupDragTool  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006fa8b0
//
// 006fa8b0  8b442408             mov eax, dword ptr [esp + 8]
// 006fa8b4  8b4810               mov ecx, dword ptr [eax + 0x10]
// 006fa8b7  89442408             mov dword ptr [esp + 8], eax
// 006fa8bb  3b4814               cmp ecx, dword ptr [eax + 0x14]
// 006fa8be  7405                 je 0x6fa8c5
// 006fa8c0  e99bffffff           jmp 0x6fa860
// 006fa8c5  e986fbffff           jmp 0x6fa450
// library lua-5.1.4/lcode.c (function _luaK_exp2val)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
