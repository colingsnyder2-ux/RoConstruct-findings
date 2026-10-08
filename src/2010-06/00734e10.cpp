// from server: 100% by auto
// roc 2010-06 00734e10  unit: seg_00730000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00734e10
//
// 00734e10  56                   push esi
// 00734e11  8b742408             mov esi, dword ptr [esp + 8]
// 00734e15  6a01                 push 1
// 00734e17  56                   push esi
// 00734e18  e8c3e1feff           call 0x722fe0
// 00734e1d  83c408               add esp, 8
// 00734e20  e89d460700           call 0x7a94c2
// 00734e25  83ec08               sub esp, 8
// 00734e28  dd1c24               fstp qword ptr [esp]
// 00734e2b  56                   push esi
// 00734e2c  e8dfc6feff           call 0x721510
// 00734e31  83c40c               add esp, 0xc
// 00734e34  b801000000           mov eax, 1
// 00734e39  5e                   pop esi
// 00734e3a  c3                   ret 
// library lua-5.1.4/lmathlib.c (function _math_sin)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmathlib.c
