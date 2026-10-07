// roc 2008-06 00625d80  unit: seg_00620000  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00625d80
//
// 00625d80  56                   push esi
// 00625d81  8b742408             mov esi, dword ptr [esp + 8]
// 00625d85  6a01                 push 1
// 00625d87  56                   push esi
// 00625d88  e8f3b9feff           call 0x611780
// 00625d8d  dd1c24               fstp qword ptr [esp]
// 00625d90  e81bbe0700           call 0x6a1bb0
// 00625d95  dd1c24               fstp qword ptr [esp]
// 00625d98  56                   push esi
// 00625d99  e862c4feff           call 0x612200
// 00625d9e  83c40c               add esp, 0xc
// 00625da1  b801000000           mov eax, 1
// 00625da6  5e                   pop esi
// 00625da7  c3                   ret 
// library lua-5.1.4/lmathlib.c (function _math_ceil)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmathlib.c
