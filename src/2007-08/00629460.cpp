// roc 2007-08 00629460  unit: RBX::AssemblyStage  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00629460
//
// 00629460  8b442408             mov eax, dword ptr [esp + 8]
// 00629464  8b4810               mov ecx, dword ptr [eax + 0x10]
// 00629467  3b4814               cmp ecx, dword ptr [eax + 0x14]
// 0062946a  89442408             mov dword ptr [esp + 8], eax
// 0062946e  7405                 je 0x629475
// 00629470  e99bffffff           jmp 0x629410
// 00629475  e986fbffff           jmp 0x629000
// library lua-5.1.4/lcode.c (function _luaK_exp2val)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
