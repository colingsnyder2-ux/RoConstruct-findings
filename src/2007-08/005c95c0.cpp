// roc 2007-08 005c95c0  unit: lua_exception  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c95c0
//
// 005c95c0  56                   push esi
// 005c95c1  8b742408             mov esi, dword ptr [esp + 8]
// 005c95c5  6a01                 push 1
// 005c95c7  56                   push esi
// 005c95c8  e8435effff           call 0x5bf410
// 005c95cd  dd1c24               fstp qword ptr [esp]
// 005c95d0  e8537b0600           call 0x631128
// 005c95d5  dd1c24               fstp qword ptr [esp]
// 005c95d8  56                   push esi
// 005c95d9  e89245ffff           call 0x5bdb70
// 005c95de  83c40c               add esp, 0xc
// 005c95e1  b801000000           mov eax, 1
// 005c95e6  5e                   pop esi
// 005c95e7  c3                   ret 
// library lua-5.1.4/lmathlib.c (function _math_ceil)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmathlib.c
