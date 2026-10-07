// roc 2008-06 00661100  unit: RBX::FilterStairs  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00661100
//
// 00661100  56                   push esi
// 00661101  e8fa440000           call 0x665600
// 00661106  6a00                 push 0
// 00661108  57                   push edi
// 00661109  56                   push esi
// 0066110a  e8e10e0000           call 0x661ff0
// 0066110f  8b4630               mov eax, dword ptr [esi + 0x30]
// 00661112  57                   push edi
// 00661113  50                   push eax
// 00661114  e8e7a70000           call 0x66b900
// 00661119  83c418               add esp, 0x18
// 0066111c  837e105d             cmp dword ptr [esi + 0x10], 0x5d
// 00661120  7421                 je 0x661143
// 00661122  6a5d                 push 0x5d
// 00661124  56                   push esi
// 00661125  e8e62f0000           call 0x664110
// 0066112a  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0066112d  50                   push eax
// 0066112e  68c0c48400           push 0x84c4c0
// 00661133  51                   push ecx
// 00661134  e88719fcff           call 0x622ac0
// 00661139  50                   push eax
// 0066113a  56                   push esi
// 0066113b  e8d0300000           call 0x664210
// 00661140  83c41c               add esp, 0x1c
// 00661143  56                   push esi
// 00661144  e8b7440000           call 0x665600
// 00661149  59                   pop ecx
// 0066114a  c3                   ret 
// library lua-5.1.4/lparser.c (function _yindex)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
