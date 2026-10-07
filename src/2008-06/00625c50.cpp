// roc 2008-06 00625c50  unit: seg_00620000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00625c50
//
// 00625c50  56                   push esi
// 00625c51  8b742408             mov esi, dword ptr [esp + 8]
// 00625c55  6a01                 push 1
// 00625c57  56                   push esi
// 00625c58  e823bbfeff           call 0x611780
// 00625c5d  83c408               add esp, 8
// 00625c60  e819c30700           call 0x6a1f7e
// 00625c65  83ec08               sub esp, 8
// 00625c68  dd1c24               fstp qword ptr [esp]
// 00625c6b  56                   push esi
// 00625c6c  e88fc5feff           call 0x612200
// 00625c71  83c40c               add esp, 0xc
// 00625c74  b801000000           mov eax, 1
// 00625c79  5e                   pop esi
// 00625c7a  c3                   ret 
// library lua-5.1.4/lmathlib.c (function _math_sin)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmathlib.c
