// from server: 100% by auto
// roc 2007-08 005c93d0  unit: lua_exception  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c93d0
//
// 005c93d0  56                   push esi
// 005c93d1  8b742408             mov esi, dword ptr [esp + 8]
// 005c93d5  6a01                 push 1
// 005c93d7  56                   push esi
// 005c93d8  e83360ffff           call 0x5bf410
// 005c93dd  83c408               add esp, 8
// 005c93e0  e86d800600           call 0x631452
// 005c93e5  83ec08               sub esp, 8
// 005c93e8  dd1c24               fstp qword ptr [esp]
// 005c93eb  56                   push esi
// 005c93ec  e87f47ffff           call 0x5bdb70
// 005c93f1  83c40c               add esp, 0xc
// 005c93f4  b801000000           mov eax, 1
// 005c93f9  5e                   pop esi
// 005c93fa  c3                   ret 
// library lua-5.1.4/lmathlib.c (function _math_sin)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmathlib.c
