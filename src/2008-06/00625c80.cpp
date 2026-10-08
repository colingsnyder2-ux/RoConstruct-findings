// from server: 100% by auto
// roc 2008-06 00625c80  unit: seg_00620000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00625c80
//
// 00625c80  56                   push esi
// 00625c81  8b742408             mov esi, dword ptr [esp + 8]
// 00625c85  6a01                 push 1
// 00625c87  56                   push esi
// 00625c88  e8f3bafeff           call 0x611780
// 00625c8d  83c408               add esp, 8
// 00625c90  e82bc10700           call 0x6a1dc0
// 00625c95  83ec08               sub esp, 8
// 00625c98  dd1c24               fstp qword ptr [esp]
// 00625c9b  56                   push esi
// 00625c9c  e85fc5feff           call 0x612200
// 00625ca1  83c40c               add esp, 0xc
// 00625ca4  b801000000           mov eax, 1
// 00625ca9  5e                   pop esi
// 00625caa  c3                   ret 
// library lua-5.1.4/lmathlib.c (function _math_sin)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmathlib.c
