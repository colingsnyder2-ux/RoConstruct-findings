// from server: 100% by auto
// roc 2008-06 0066b900  unit: RBX::GroupDragTool  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0066b900
//
// 0066b900  8b442408             mov eax, dword ptr [esp + 8]
// 0066b904  8b4810               mov ecx, dword ptr [eax + 0x10]
// 0066b907  89442408             mov dword ptr [esp + 8], eax
// 0066b90b  3b4814               cmp ecx, dword ptr [eax + 0x14]
// 0066b90e  7405                 je 0x66b915
// 0066b910  e99bffffff           jmp 0x66b8b0
// 0066b915  e986fbffff           jmp 0x66b4a0
// library lua-5.1.4/lcode.c (function _luaK_exp2val)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
