// roc 2011-06 00780000  unit: lua_exception  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00780000
//
// 00780000  83ec08               sub esp, 8
// 00780003  56                   push esi
// 00780004  8b742410             mov esi, dword ptr [esp + 0x10]
// 00780008  6a01                 push 1
// 0078000a  56                   push esi
// 0078000b  e84042feff           call 0x764250
// 00780010  dd5c240c             fstp qword ptr [esp + 0xc]
// 00780014  6a02                 push 2
// 00780016  56                   push esi
// 00780017  e83442feff           call 0x764250
// 0078001c  dd442414             fld qword ptr [esp + 0x14]
// 00780020  83c410               add esp, 0x10
// 00780023  d9c9                 fxch st(1)
// 00780025  e868bb0800           call 0x80bb92
// 0078002a  83ec08               sub esp, 8
// 0078002d  dd1c24               fstp qword ptr [esp]
// 00780030  56                   push esi
// 00780031  e8ea28feff           call 0x762920
// 00780036  83c40c               add esp, 0xc
// 00780039  b801000000           mov eax, 1
// 0078003e  5e                   pop esi
// 0078003f  83c408               add esp, 8
// 00780042  c3                   ret 
// library lua-5.1.4/lmathlib.c (function _math_atan2)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmathlib.c
