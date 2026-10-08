// from server: 100% by auto
// roc 2008-06 00625b30  unit: seg_00620000  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00625b30
//
// 00625b30  56                   push esi
// 00625b31  8b742408             mov esi, dword ptr [esp + 8]
// 00625b35  6a01                 push 1
// 00625b37  56                   push esi
// 00625b38  e843bcfeff           call 0x611780
// 00625b3d  d9e1                 fabs 
// 00625b3f  dd1c24               fstp qword ptr [esp]
// 00625b42  56                   push esi
// 00625b43  e8b8c6feff           call 0x612200
// 00625b48  83c40c               add esp, 0xc
// 00625b4b  b801000000           mov eax, 1
// 00625b50  5e                   pop esi
// 00625b51  c3                   ret 
// library lua-5.1.4/lmathlib.c (function _math_abs)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmathlib.c
