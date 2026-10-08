// from server: 100% by auto
// roc 2009-06 006c4970  unit: lua_exception  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c4970
//
// 006c4970  56                   push esi
// 006c4971  8b742408             mov esi, dword ptr [esp + 8]
// 006c4975  6a01                 push 1
// 006c4977  56                   push esi
// 006c4978  e80364ffff           call 0x6bad80
// 006c497d  dd1c24               fstp qword ptr [esp]
// 006c4980  e8fb580500           call 0x71a280
// 006c4985  dd1c24               fstp qword ptr [esp]
// 006c4988  56                   push esi
// 006c4989  e8b249ffff           call 0x6b9340
// 006c498e  83c40c               add esp, 0xc
// 006c4991  b801000000           mov eax, 1
// 006c4996  5e                   pop esi
// 006c4997  c3                   ret 
// library lua-5.1.4/lmathlib.c (function _math_ceil)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmathlib.c
