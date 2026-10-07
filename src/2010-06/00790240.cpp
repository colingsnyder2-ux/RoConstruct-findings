// roc 2010-06 00790240  unit: RBX::GroupDragTool  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00790240
//
// 00790240  8b442408             mov eax, dword ptr [esp + 8]
// 00790244  8b4810               mov ecx, dword ptr [eax + 0x10]
// 00790247  89442408             mov dword ptr [esp + 8], eax
// 0079024b  3b4814               cmp ecx, dword ptr [eax + 0x14]
// 0079024e  7405                 je 0x790255
// 00790250  e99bffffff           jmp 0x7901f0
// 00790255  e986fbffff           jmp 0x78fde0
// library lua-5.1.4/lcode.c (function _luaK_exp2val)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
