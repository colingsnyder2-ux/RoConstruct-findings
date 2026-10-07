// roc 2008-06 00625db0  unit: seg_00620000  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00625db0
//
// 00625db0  83ec08               sub esp, 8
// 00625db3  56                   push esi
// 00625db4  8b742410             mov esi, dword ptr [esp + 0x10]
// 00625db8  6a01                 push 1
// 00625dba  56                   push esi
// 00625dbb  e8c0b9feff           call 0x611780
// 00625dc0  dd5c240c             fstp qword ptr [esp + 0xc]
// 00625dc4  6a02                 push 2
// 00625dc6  56                   push esi
// 00625dc7  e8b4b9feff           call 0x611780
// 00625dcc  dd442414             fld qword ptr [esp + 0x14]
// 00625dd0  83c410               add esp, 0x10
// 00625dd3  d9c9                 fxch st(1)
// 00625dd5  e8aac10700           call 0x6a1f84
// 00625dda  83ec08               sub esp, 8
// 00625ddd  dd1c24               fstp qword ptr [esp]
// 00625de0  56                   push esi
// 00625de1  e81ac4feff           call 0x612200
// 00625de6  83c40c               add esp, 0xc
// 00625de9  b801000000           mov eax, 1
// 00625dee  5e                   pop esi
// 00625def  83c408               add esp, 8
// 00625df2  c3                   ret 
// library lua-5.1.4/lmathlib.c (function _math_atan2)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmathlib.c
