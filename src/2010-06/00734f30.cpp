// from server: 100% by auto
// roc 2010-06 00734f30  unit: seg_00730000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00734f30
//
// 00734f30  56                   push esi
// 00734f31  8b742408             mov esi, dword ptr [esp + 8]
// 00734f35  6a01                 push 1
// 00734f37  56                   push esi
// 00734f38  e8a3e0feff           call 0x722fe0
// 00734f3d  83c408               add esp, 8
// 00734f40  e88d440700           call 0x7a93d2
// 00734f45  83ec08               sub esp, 8
// 00734f48  dd1c24               fstp qword ptr [esp]
// 00734f4b  56                   push esi
// 00734f4c  e8bfc5feff           call 0x721510
// 00734f51  83c40c               add esp, 0xc
// 00734f54  b801000000           mov eax, 1
// 00734f59  5e                   pop esi
// 00734f5a  c3                   ret 
// library lua-5.1.4/lmathlib.c (function _math_sin)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmathlib.c
