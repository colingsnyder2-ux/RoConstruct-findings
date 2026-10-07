// roc 2007-08 005cc1d0  unit: seg_005c0000  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005cc1d0
//
// 005cc1d0  56                   push esi
// 005cc1d1  8b742408             mov esi, dword ptr [esp + 8]
// 005cc1d5  6a02                 push 2
// 005cc1d7  56                   push esi
// 005cc1d8  e84331ffff           call 0x5bf320
// 005cc1dd  6a02                 push 2
// 005cc1df  56                   push esi
// 005cc1e0  e8ab13ffff           call 0x5bd590
// 005cc1e5  6a01                 push 1
// 005cc1e7  56                   push esi
// 005cc1e8  e84314ffff           call 0x5bd630
// 005cc1ed  6a01                 push 1
// 005cc1ef  6aff                 push -1
// 005cc1f1  6a00                 push 0
// 005cc1f3  56                   push esi
// 005cc1f4  e8f720ffff           call 0x5be2f0
// 005cc1f9  33c9                 xor ecx, ecx
// 005cc1fb  85c0                 test eax, eax
// 005cc1fd  0f94c1               sete cl
// 005cc200  51                   push ecx
// 005cc201  56                   push esi
// 005cc202  e8591bffff           call 0x5bdd60
// 005cc207  6a01                 push 1
// 005cc209  56                   push esi
// 005cc20a  e87114ffff           call 0x5bd680
// 005cc20f  56                   push esi
// 005cc210  e86b13ffff           call 0x5bd580
// 005cc215  83c43c               add esp, 0x3c
// 005cc218  5e                   pop esi
// 005cc219  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_xpcall)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
