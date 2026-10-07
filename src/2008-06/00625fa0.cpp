// roc 2008-06 00625fa0  unit: seg_00620000  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00625fa0
//
// 00625fa0  56                   push esi
// 00625fa1  8b742408             mov esi, dword ptr [esp + 8]
// 00625fa5  6a01                 push 1
// 00625fa7  56                   push esi
// 00625fa8  e8d3b7feff           call 0x611780
// 00625fad  dc0db84f8400         fmul qword ptr [0x844fb8]
// 00625fb3  dd1c24               fstp qword ptr [esp]
// 00625fb6  56                   push esi
// 00625fb7  e844c2feff           call 0x612200
// 00625fbc  83c40c               add esp, 0xc
// 00625fbf  b801000000           mov eax, 1
// 00625fc4  5e                   pop esi
// 00625fc5  c3                   ret 
// library lua-5.1.4/lmathlib.c (function _math_rad)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmathlib.c
