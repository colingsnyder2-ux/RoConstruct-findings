// from server: 100% by auto
// roc 2007-08 005c94c0  unit: lua_exception  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c94c0
//
// 005c94c0  56                   push esi
// 005c94c1  8b742408             mov esi, dword ptr [esp + 8]
// 005c94c5  6a01                 push 1
// 005c94c7  56                   push esi
// 005c94c8  e8435fffff           call 0x5bf410
// 005c94cd  83c408               add esp, 8
// 005c94d0  e87d7e0600           call 0x631352
// 005c94d5  83ec08               sub esp, 8
// 005c94d8  dd1c24               fstp qword ptr [esp]
// 005c94db  56                   push esi
// 005c94dc  e88f46ffff           call 0x5bdb70
// 005c94e1  83c40c               add esp, 0xc
// 005c94e4  b801000000           mov eax, 1
// 005c94e9  5e                   pop esi
// 005c94ea  c3                   ret 
// library lua-5.1.4/lmathlib.c (function _math_sin)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmathlib.c
