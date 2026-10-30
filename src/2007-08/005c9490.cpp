// from server: 100% by auto
// roc 2007-08 005c9490  unit: lua_exception  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c9490
//
// 005c9490  56                   push esi
// 005c9491  8b742408             mov esi, dword ptr [esp + 8]
// 005c9495  6a01                 push 1
// 005c9497  56                   push esi
// 005c9498  e8735fffff           call 0x5bf410
// 005c949d  83c408               add esp, 8
// 005c94a0  e8b97f0600           call 0x63145e
// 005c94a5  83ec08               sub esp, 8
// 005c94a8  dd1c24               fstp qword ptr [esp]
// 005c94ab  56                   push esi
// 005c94ac  e8bf46ffff           call 0x5bdb70
// 005c94b1  83c40c               add esp, 0xc
// 005c94b4  b801000000           mov eax, 1
// 005c94b9  5e                   pop esi
// 005c94ba  c3                   ret 
// library lua-5.1.4/lmathlib.c (function _math_sin)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmathlib.c
