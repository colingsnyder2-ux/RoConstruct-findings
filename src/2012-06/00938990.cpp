// from server: 100% by auto
// roc 2012-06 00938990  unit: seg_00930000  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00938990
//
// 00938990  57                   push edi
// 00938991  8b7e14               mov edi, dword ptr [esi + 0x14]
// 00938994  8b07                 mov eax, dword ptr [edi]
// 00938996  894614               mov dword ptr [esi + 0x14], eax
// 00938999  0fb65708             movzx edx, byte ptr [edi + 8]
// 0093899d  8b460c               mov eax, dword ptr [esi + 0xc]
// 009389a0  e8abfcffff           call 0x938650
// 009389a5  807f0900             cmp byte ptr [edi + 9], 0
// 009389a9  7414                 je 0x9389bf
// 009389ab  0fb64f08             movzx ecx, byte ptr [edi + 8]
// 009389af  6a00                 push 0
// 009389b1  6a00                 push 0
// 009389b3  51                   push ecx
// 009389b4  6a23                 push 0x23
// 009389b6  56                   push esi
// 009389b7  e894ed0200           call 0x967750
// 009389bc  83c414               add esp, 0x14
// 009389bf  0fb65632             movzx edx, byte ptr [esi + 0x32]
// 009389c3  895624               mov dword ptr [esi + 0x24], edx
// 009389c6  8b4704               mov eax, dword ptr [edi + 4]
// 009389c9  50                   push eax
// 009389ca  56                   push esi
// 009389cb  e8e0ef0200           call 0x9679b0
// 009389d0  83c408               add esp, 8
// 009389d3  5f                   pop edi
// 009389d4  c3                   ret 
// library lua-5.1.4/lparser.c (function _leaveblock)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
