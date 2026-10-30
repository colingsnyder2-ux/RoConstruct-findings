// from server: 100% by auto
// roc 2010-06 00735220  unit: seg_00730000  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00735220
//
// 00735220  56                   push esi
// 00735221  8b742408             mov esi, dword ptr [esp + 8]
// 00735225  6a01                 push 1
// 00735227  56                   push esi
// 00735228  e8b3ddfeff           call 0x722fe0
// 0073522d  dc0d90e1a400         fmul qword ptr [0xa4e190]
// 00735233  dd1c24               fstp qword ptr [esp]
// 00735236  56                   push esi
// 00735237  e8d4c2feff           call 0x721510
// 0073523c  83c40c               add esp, 0xc
// 0073523f  b801000000           mov eax, 1
// 00735244  5e                   pop esi
// 00735245  c3                   ret 
// library lua-5.1.4/lmathlib.c (function _math_rad)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmathlib.c
