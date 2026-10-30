// from server: 100% by auto
// roc 2007-08 005cc180  unit: seg_005c0000  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005cc180
//
// 005cc180  56                   push esi
// 005cc181  8b742408             mov esi, dword ptr [esp + 8]
// 005cc185  6a01                 push 1
// 005cc187  56                   push esi
// 005cc188  e89331ffff           call 0x5bf320
// 005cc18d  83c408               add esp, 8
// 005cc190  6a00                 push 0
// 005cc192  6aff                 push -1
// 005cc194  56                   push esi
// 005cc195  e8e613ffff           call 0x5bd580
// 005cc19a  83c404               add esp, 4
// 005cc19d  83e801               sub eax, 1
// 005cc1a0  50                   push eax
// 005cc1a1  56                   push esi
// 005cc1a2  e84921ffff           call 0x5be2f0
// 005cc1a7  33c9                 xor ecx, ecx
// 005cc1a9  85c0                 test eax, eax
// 005cc1ab  0f94c1               sete cl
// 005cc1ae  51                   push ecx
// 005cc1af  56                   push esi
// 005cc1b0  e8ab1bffff           call 0x5bdd60
// 005cc1b5  6a01                 push 1
// 005cc1b7  56                   push esi
// 005cc1b8  e87314ffff           call 0x5bd630
// 005cc1bd  56                   push esi
// 005cc1be  e8bd13ffff           call 0x5bd580
// 005cc1c3  83c424               add esp, 0x24
// 005cc1c6  5e                   pop esi
// 005cc1c7  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_pcall)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
