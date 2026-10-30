// from server: 100% by auto
// roc 2009-06 006c4a70  unit: lua_exception  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c4a70
//
// 006c4a70  83ec08               sub esp, 8
// 006c4a73  56                   push esi
// 006c4a74  8b742410             mov esi, dword ptr [esp + 0x10]
// 006c4a78  6a01                 push 1
// 006c4a7a  56                   push esi
// 006c4a7b  e80063ffff           call 0x6bad80
// 006c4a80  dd5c240c             fstp qword ptr [esp + 0xc]
// 006c4a84  6a02                 push 2
// 006c4a86  56                   push esi
// 006c4a87  e8f462ffff           call 0x6bad80
// 006c4a8c  dd442414             fld qword ptr [esp + 0x14]
// 006c4a90  83c410               add esp, 0x10
// 006c4a93  d9c9                 fxch st(1)
// 006c4a95  e856580500           call 0x71a2f0
// 006c4a9a  83ec08               sub esp, 8
// 006c4a9d  dd1c24               fstp qword ptr [esp]
// 006c4aa0  56                   push esi
// 006c4aa1  e89a48ffff           call 0x6b9340
// 006c4aa6  83c40c               add esp, 0xc
// 006c4aa9  b801000000           mov eax, 1
// 006c4aae  5e                   pop esi
// 006c4aaf  83c408               add esp, 8
// 006c4ab2  c3                   ret 
// library lua-5.1.4/lmathlib.c (function _math_atan2)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmathlib.c
