// roc 2007-08 005c94f0  unit: lua_exception  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c94f0
//
// 005c94f0  56                   push esi
// 005c94f1  8b742408             mov esi, dword ptr [esp + 8]
// 005c94f5  6a01                 push 1
// 005c94f7  56                   push esi
// 005c94f8  e8135fffff           call 0x5bf410
// 005c94fd  83c408               add esp, 8
// 005c9500  e8597e0600           call 0x63135e
// 005c9505  83ec08               sub esp, 8
// 005c9508  dd1c24               fstp qword ptr [esp]
// 005c950b  56                   push esi
// 005c950c  e85f46ffff           call 0x5bdb70
// 005c9511  83c40c               add esp, 0xc
// 005c9514  b801000000           mov eax, 1
// 005c9519  5e                   pop esi
// 005c951a  c3                   ret 
// library lua-5.1.4/lmathlib.c (function _math_sin)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmathlib.c
