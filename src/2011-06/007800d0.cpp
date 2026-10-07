// roc 2011-06 007800d0  unit: lua_exception  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007800d0
//
// 007800d0  83ec08               sub esp, 8
// 007800d3  56                   push esi
// 007800d4  8b742410             mov esi, dword ptr [esp + 0x10]
// 007800d8  6a01                 push 1
// 007800da  56                   push esi
// 007800db  e87041feff           call 0x764250
// 007800e0  dd5c240c             fstp qword ptr [esp + 0xc]
// 007800e4  6a02                 push 2
// 007800e6  56                   push esi
// 007800e7  e86441feff           call 0x764250
// 007800ec  dd442414             fld qword ptr [esp + 0x14]
// 007800f0  83c410               add esp, 0x10
// 007800f3  d9c9                 fxch st(1)
// 007800f5  e898b90800           call 0x80ba92
// 007800fa  83ec08               sub esp, 8
// 007800fd  dd1c24               fstp qword ptr [esp]
// 00780100  56                   push esi
// 00780101  e81a28feff           call 0x762920
// 00780106  83c40c               add esp, 0xc
// 00780109  b801000000           mov eax, 1
// 0078010e  5e                   pop esi
// 0078010f  83c408               add esp, 8
// 00780112  c3                   ret 
// library lua-5.1.4/lmathlib.c (function _math_atan2)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmathlib.c
