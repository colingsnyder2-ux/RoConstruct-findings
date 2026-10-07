// roc 2008-06 00625b90  unit: seg_00620000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00625b90
//
// 00625b90  56                   push esi
// 00625b91  8b742408             mov esi, dword ptr [esp + 8]
// 00625b95  6a01                 push 1
// 00625b97  56                   push esi
// 00625b98  e8e3bbfeff           call 0x611780
// 00625b9d  83c408               add esp, 8
// 00625ba0  e8cdc30700           call 0x6a1f72
// 00625ba5  83ec08               sub esp, 8
// 00625ba8  dd1c24               fstp qword ptr [esp]
// 00625bab  56                   push esi
// 00625bac  e84fc6feff           call 0x612200
// 00625bb1  83c40c               add esp, 0xc
// 00625bb4  b801000000           mov eax, 1
// 00625bb9  5e                   pop esi
// 00625bba  c3                   ret 
// library lua-5.1.4/lmathlib.c (function _math_sin)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmathlib.c
