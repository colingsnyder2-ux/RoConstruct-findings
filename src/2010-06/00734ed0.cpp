// from server: 100% by auto
// roc 2010-06 00734ed0  unit: seg_00730000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00734ed0
//
// 00734ed0  56                   push esi
// 00734ed1  8b742408             mov esi, dword ptr [esp + 8]
// 00734ed5  6a01                 push 1
// 00734ed7  56                   push esi
// 00734ed8  e803e1feff           call 0x722fe0
// 00734edd  83c408               add esp, 8
// 00734ee0  e8e9450700           call 0x7a94ce
// 00734ee5  83ec08               sub esp, 8
// 00734ee8  dd1c24               fstp qword ptr [esp]
// 00734eeb  56                   push esi
// 00734eec  e81fc6feff           call 0x721510
// 00734ef1  83c40c               add esp, 0xc
// 00734ef4  b801000000           mov eax, 1
// 00734ef9  5e                   pop esi
// 00734efa  c3                   ret 
// library lua-5.1.4/lmathlib.c (function _math_sin)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmathlib.c
