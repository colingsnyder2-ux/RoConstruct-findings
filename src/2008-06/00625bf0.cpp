// roc 2008-06 00625bf0  unit: seg_00620000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00625bf0
//
// 00625bf0  56                   push esi
// 00625bf1  8b742408             mov esi, dword ptr [esp + 8]
// 00625bf5  6a01                 push 1
// 00625bf7  56                   push esi
// 00625bf8  e883bbfeff           call 0x611780
// 00625bfd  83c408               add esp, 8
// 00625c00  e873c30700           call 0x6a1f78
// 00625c05  83ec08               sub esp, 8
// 00625c08  dd1c24               fstp qword ptr [esp]
// 00625c0b  56                   push esi
// 00625c0c  e8efc5feff           call 0x612200
// 00625c11  83c40c               add esp, 0xc
// 00625c14  b801000000           mov eax, 1
// 00625c19  5e                   pop esi
// 00625c1a  c3                   ret 
// library lua-5.1.4/lmathlib.c (function _math_sin)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmathlib.c
