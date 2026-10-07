// roc 2010-06 00735100  unit: seg_00730000  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00735100
//
// 00735100  83ec08               sub esp, 8
// 00735103  56                   push esi
// 00735104  8b742410             mov esi, dword ptr [esp + 0x10]
// 00735108  6a01                 push 1
// 0073510a  56                   push esi
// 0073510b  e8d0defeff           call 0x722fe0
// 00735110  dd5c240c             fstp qword ptr [esp + 0xc]
// 00735114  6a02                 push 2
// 00735116  56                   push esi
// 00735117  e8c4defeff           call 0x722fe0
// 0073511c  dd442414             fld qword ptr [esp + 0x14]
// 00735120  83c410               add esp, 0x10
// 00735123  d9c9                 fxch st(1)
// 00735125  e836410700           call 0x7a9260
// 0073512a  83ec08               sub esp, 8
// 0073512d  dd1c24               fstp qword ptr [esp]
// 00735130  56                   push esi
// 00735131  e8dac3feff           call 0x721510
// 00735136  83c40c               add esp, 0xc
// 00735139  b801000000           mov eax, 1
// 0073513e  5e                   pop esi
// 0073513f  83c408               add esp, 8
// 00735142  c3                   ret 
// library lua-5.1.4/lmathlib.c (function _math_atan2)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmathlib.c
