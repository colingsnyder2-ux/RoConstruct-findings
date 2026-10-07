// roc 2008-06 00625e80  unit: seg_00620000  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00625e80
//
// 00625e80  83ec08               sub esp, 8
// 00625e83  56                   push esi
// 00625e84  8b742410             mov esi, dword ptr [esp + 0x10]
// 00625e88  6a01                 push 1
// 00625e8a  56                   push esi
// 00625e8b  e8f0b8feff           call 0x611780
// 00625e90  dd5c240c             fstp qword ptr [esp + 0xc]
// 00625e94  6a02                 push 2
// 00625e96  56                   push esi
// 00625e97  e8e4b8feff           call 0x611780
// 00625e9c  dd442414             fld qword ptr [esp + 0x14]
// 00625ea0  83c410               add esp, 0x10
// 00625ea3  d9c9                 fxch st(1)
// 00625ea5  e876bd0700           call 0x6a1c20
// 00625eaa  83ec08               sub esp, 8
// 00625ead  dd1c24               fstp qword ptr [esp]
// 00625eb0  56                   push esi
// 00625eb1  e84ac3feff           call 0x612200
// 00625eb6  83c40c               add esp, 0xc
// 00625eb9  b801000000           mov eax, 1
// 00625ebe  5e                   pop esi
// 00625ebf  83c408               add esp, 8
// 00625ec2  c3                   ret 
// library lua-5.1.4/lmathlib.c (function _math_atan2)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmathlib.c
