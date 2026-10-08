// from server: 100% by auto
// roc 2012-06 00967e40  unit: RBX::CellContact  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00967e40
//
// 00967e40  8b442408             mov eax, dword ptr [esp + 8]
// 00967e44  8b4810               mov ecx, dword ptr [eax + 0x10]
// 00967e47  89442408             mov dword ptr [esp + 8], eax
// 00967e4b  3b4814               cmp ecx, dword ptr [eax + 0x14]
// 00967e4e  7405                 je 0x967e55
// 00967e50  e99bffffff           jmp 0x967df0
// 00967e55  e976fbffff           jmp 0x9679d0
// library lua-5.1.4/lcode.c (function _luaK_exp2val)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
