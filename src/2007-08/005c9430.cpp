// from server: 100% by auto
// roc 2007-08 005c9430  unit: lua_exception  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c9430
//
// 005c9430  56                   push esi
// 005c9431  8b742408             mov esi, dword ptr [esp + 8]
// 005c9435  6a01                 push 1
// 005c9437  56                   push esi
// 005c9438  e8d35fffff           call 0x5bf410
// 005c943d  83c408               add esp, 8
// 005c9440  e813800600           call 0x631458
// 005c9445  83ec08               sub esp, 8
// 005c9448  dd1c24               fstp qword ptr [esp]
// 005c944b  56                   push esi
// 005c944c  e81f47ffff           call 0x5bdb70
// 005c9451  83c40c               add esp, 0xc
// 005c9454  b801000000           mov eax, 1
// 005c9459  5e                   pop esi
// 005c945a  c3                   ret 
// library lua-5.1.4/lmathlib.c (function _math_sin)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmathlib.c
