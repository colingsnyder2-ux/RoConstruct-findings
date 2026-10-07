// roc 2010-06 00734f00  unit: seg_00730000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00734f00
//
// 00734f00  56                   push esi
// 00734f01  8b742408             mov esi, dword ptr [esp + 8]
// 00734f05  6a01                 push 1
// 00734f07  56                   push esi
// 00734f08  e8d3e0feff           call 0x722fe0
// 00734f0d  83c408               add esp, 8
// 00734f10  e8b7440700           call 0x7a93cc
// 00734f15  83ec08               sub esp, 8
// 00734f18  dd1c24               fstp qword ptr [esp]
// 00734f1b  56                   push esi
// 00734f1c  e8efc5feff           call 0x721510
// 00734f21  83c40c               add esp, 0xc
// 00734f24  b801000000           mov eax, 1
// 00734f29  5e                   pop esi
// 00734f2a  c3                   ret 
// library lua-5.1.4/lmathlib.c (function _math_sin)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmathlib.c
