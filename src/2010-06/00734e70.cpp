// roc 2010-06 00734e70  unit: seg_00730000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00734e70
//
// 00734e70  56                   push esi
// 00734e71  8b742408             mov esi, dword ptr [esp + 8]
// 00734e75  6a01                 push 1
// 00734e77  56                   push esi
// 00734e78  e863e1feff           call 0x722fe0
// 00734e7d  83c408               add esp, 8
// 00734e80  e843460700           call 0x7a94c8
// 00734e85  83ec08               sub esp, 8
// 00734e88  dd1c24               fstp qword ptr [esp]
// 00734e8b  56                   push esi
// 00734e8c  e87fc6feff           call 0x721510
// 00734e91  83c40c               add esp, 0xc
// 00734e94  b801000000           mov eax, 1
// 00734e99  5e                   pop esi
// 00734e9a  c3                   ret 
// library lua-5.1.4/lmathlib.c (function _math_sin)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmathlib.c
