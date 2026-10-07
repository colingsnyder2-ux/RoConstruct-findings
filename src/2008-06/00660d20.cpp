// roc 2008-06 00660d20  unit: RBX::FilterStairs  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00660d20
//
// 00660d20  57                   push edi
// 00660d21  8b7e14               mov edi, dword ptr [esi + 0x14]
// 00660d24  8b07                 mov eax, dword ptr [edi]
// 00660d26  894614               mov dword ptr [esi + 0x14], eax
// 00660d29  0fb65708             movzx edx, byte ptr [edi + 8]
// 00660d2d  8b460c               mov eax, dword ptr [esi + 0xc]
// 00660d30  e8bbfcffff           call 0x6609f0
// 00660d35  807f0900             cmp byte ptr [edi + 9], 0
// 00660d39  7414                 je 0x660d4f
// 00660d3b  0fb64f08             movzx ecx, byte ptr [edi + 8]
// 00660d3f  6a00                 push 0
// 00660d41  6a00                 push 0
// 00660d43  51                   push ecx
// 00660d44  6a23                 push 0x23
// 00660d46  56                   push esi
// 00660d47  e8e4a40000           call 0x66b230
// 00660d4c  83c414               add esp, 0x14
// 00660d4f  0fb65632             movzx edx, byte ptr [esi + 0x32]
// 00660d53  895624               mov dword ptr [esi + 0x24], edx
// 00660d56  8b4704               mov eax, dword ptr [edi + 4]
// 00660d59  50                   push eax
// 00660d5a  56                   push esi
// 00660d5b  e820a70000           call 0x66b480
// 00660d60  83c408               add esp, 8
// 00660d63  5f                   pop edi
// 00660d64  c3                   ret 
// library lua-5.1.4/lparser.c (function _leaveblock)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
