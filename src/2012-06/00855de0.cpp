// from server: 100% by auto
// roc 2012-06 00855de0  unit: lua_exception  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00855de0
//
// 00855de0  83ec08               sub esp, 8
// 00855de3  56                   push esi
// 00855de4  8b742410             mov esi, dword ptr [esp + 0x10]
// 00855de8  6a01                 push 1
// 00855dea  56                   push esi
// 00855deb  e8f0dbfdff           call 0x8339e0
// 00855df0  dd5c240c             fstp qword ptr [esp + 0xc]
// 00855df4  6a02                 push 2
// 00855df6  56                   push esi
// 00855df7  e8e4dbfdff           call 0x8339e0
// 00855dfc  dd442414             fld qword ptr [esp + 0x14]
// 00855e00  83c410               add esp, 0x10
// 00855e03  d9c9                 fxch st(1)
// 00855e05  e83cde1200           call 0x983c46
// 00855e0a  83ec08               sub esp, 8
// 00855e0d  dd1c24               fstp qword ptr [esp]
// 00855e10  56                   push esi
// 00855e11  e89ac2fdff           call 0x8320b0
// 00855e16  83c40c               add esp, 0xc
// 00855e19  b801000000           mov eax, 1
// 00855e1e  5e                   pop esi
// 00855e1f  83c408               add esp, 8
// 00855e22  c3                   ret 
// library lua-5.1.4/lmathlib.c (function _math_atan2)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmathlib.c
