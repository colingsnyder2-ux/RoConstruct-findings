// from server: 100% by auto
// roc 2007-08 005c96c0  unit: lua_exception  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c96c0
//
// 005c96c0  83ec08               sub esp, 8
// 005c96c3  56                   push esi
// 005c96c4  8b742410             mov esi, dword ptr [esp + 0x10]
// 005c96c8  6a01                 push 1
// 005c96ca  56                   push esi
// 005c96cb  e8405dffff           call 0x5bf410
// 005c96d0  dd5c240c             fstp qword ptr [esp + 0xc]
// 005c96d4  6a02                 push 2
// 005c96d6  56                   push esi
// 005c96d7  e8345dffff           call 0x5bf410
// 005c96dc  dd442414             fld qword ptr [esp + 0x14]
// 005c96e0  83c410               add esp, 0x10
// 005c96e3  d9c9                 fxch st(1)
// 005c96e5  e8b47a0600           call 0x63119e
// 005c96ea  83ec08               sub esp, 8
// 005c96ed  dd1c24               fstp qword ptr [esp]
// 005c96f0  56                   push esi
// 005c96f1  e87a44ffff           call 0x5bdb70
// 005c96f6  83c40c               add esp, 0xc
// 005c96f9  b801000000           mov eax, 1
// 005c96fe  5e                   pop esi
// 005c96ff  83c408               add esp, 8
// 005c9702  c3                   ret 
// library lua-5.1.4/lmathlib.c (function _math_atan2)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmathlib.c
