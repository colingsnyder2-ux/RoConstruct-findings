// from server: 100% by auto
// roc 2012-06 00855eb0  unit: lua_exception  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00855eb0
//
// 00855eb0  83ec08               sub esp, 8
// 00855eb3  56                   push esi
// 00855eb4  8b742410             mov esi, dword ptr [esp + 0x10]
// 00855eb8  6a01                 push 1
// 00855eba  56                   push esi
// 00855ebb  e820dbfdff           call 0x8339e0
// 00855ec0  dd5c240c             fstp qword ptr [esp + 0xc]
// 00855ec4  6a02                 push 2
// 00855ec6  56                   push esi
// 00855ec7  e814dbfdff           call 0x8339e0
// 00855ecc  dd442414             fld qword ptr [esp + 0x14]
// 00855ed0  83c410               add esp, 0x10
// 00855ed3  d9c9                 fxch st(1)
// 00855ed5  e856dc1200           call 0x983b30
// 00855eda  83ec08               sub esp, 8
// 00855edd  dd1c24               fstp qword ptr [esp]
// 00855ee0  56                   push esi
// 00855ee1  e8cac1fdff           call 0x8320b0
// 00855ee6  83c40c               add esp, 0xc
// 00855ee9  b801000000           mov eax, 1
// 00855eee  5e                   pop esi
// 00855eef  83c408               add esp, 8
// 00855ef2  c3                   ret 
// library lua-5.1.4/lmathlib.c (function _math_atan2)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmathlib.c
