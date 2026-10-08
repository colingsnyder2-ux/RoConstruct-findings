// from server: 100% by auto
// roc 2011-06 007f2ea0  unit: RBX::AdvLuaDragTool  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007f2ea0
//
// 007f2ea0  8b442408             mov eax, dword ptr [esp + 8]
// 007f2ea4  8b4810               mov ecx, dword ptr [eax + 0x10]
// 007f2ea7  89442408             mov dword ptr [esp + 8], eax
// 007f2eab  3b4814               cmp ecx, dword ptr [eax + 0x14]
// 007f2eae  7405                 je 0x7f2eb5
// 007f2eb0  e99bffffff           jmp 0x7f2e50
// 007f2eb5  e976fbffff           jmp 0x7f2a30
// library lua-5.1.4/lcode.c (function _luaK_exp2val)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
