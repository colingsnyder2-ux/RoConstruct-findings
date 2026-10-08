// from server: 100% by auto
// roc 2011-06 00782b70  unit: seg_00780000  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00782b70
//
// 00782b70  56                   push esi
// 00782b71  8b742408             mov esi, dword ptr [esp + 8]
// 00782b75  6a01                 push 1
// 00782b77  56                   push esi
// 00782b78  e8e315feff           call 0x764160
// 00782b7d  83c408               add esp, 8
// 00782b80  6a00                 push 0
// 00782b82  6aff                 push -1
// 00782b84  56                   push esi
// 00782b85  e8d6f7fdff           call 0x762360
// 00782b8a  83c404               add esp, 4
// 00782b8d  48                   dec eax
// 00782b8e  50                   push eax
// 00782b8f  56                   push esi
// 00782b90  e84b05feff           call 0x7630e0
// 00782b95  33c9                 xor ecx, ecx
// 00782b97  85c0                 test eax, eax
// 00782b99  0f94c1               sete cl
// 00782b9c  51                   push ecx
// 00782b9d  56                   push esi
// 00782b9e  e86dfffdff           call 0x762b10
// 00782ba3  6a01                 push 1
// 00782ba5  56                   push esi
// 00782ba6  e865f8fdff           call 0x762410
// 00782bab  56                   push esi
// 00782bac  e8aff7fdff           call 0x762360
// 00782bb1  83c424               add esp, 0x24
// 00782bb4  5e                   pop esi
// 00782bb5  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_pcall)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
