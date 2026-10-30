// from server: 100% by auto
// roc 2009-06 006c49a0  unit: lua_exception  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c49a0
//
// 006c49a0  83ec08               sub esp, 8
// 006c49a3  56                   push esi
// 006c49a4  8b742410             mov esi, dword ptr [esp + 0x10]
// 006c49a8  6a01                 push 1
// 006c49aa  56                   push esi
// 006c49ab  e8d063ffff           call 0x6bad80
// 006c49b0  dd5c240c             fstp qword ptr [esp + 0xc]
// 006c49b4  6a02                 push 2
// 006c49b6  56                   push esi
// 006c49b7  e8c463ffff           call 0x6bad80
// 006c49bc  dd442414             fld qword ptr [esp + 0x14]
// 006c49c0  83c410               add esp, 0x10
// 006c49c3  d9c9                 fxch st(1)
// 006c49c5  e8aa5b0500           call 0x71a574
// 006c49ca  83ec08               sub esp, 8
// 006c49cd  dd1c24               fstp qword ptr [esp]
// 006c49d0  56                   push esi
// 006c49d1  e86a49ffff           call 0x6b9340
// 006c49d6  83c40c               add esp, 0xc
// 006c49d9  b801000000           mov eax, 1
// 006c49de  5e                   pop esi
// 006c49df  83c408               add esp, 8
// 006c49e2  c3                   ret 
// library lua-5.1.4/lmathlib.c (function _math_atan2)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmathlib.c
