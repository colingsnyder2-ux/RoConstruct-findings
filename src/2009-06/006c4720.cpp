// roc 2009-06 006c4720  unit: lua_exception  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c4720
//
// 006c4720  56                   push esi
// 006c4721  8b742408             mov esi, dword ptr [esp + 8]
// 006c4725  6a01                 push 1
// 006c4727  56                   push esi
// 006c4728  e85366ffff           call 0x6bad80
// 006c472d  d9e1                 fabs 
// 006c472f  dd1c24               fstp qword ptr [esp]
// 006c4732  56                   push esi
// 006c4733  e8084cffff           call 0x6b9340
// 006c4738  83c40c               add esp, 0xc
// 006c473b  b801000000           mov eax, 1
// 006c4740  5e                   pop esi
// 006c4741  c3                   ret 
// library lua-5.1.4/lmathlib.c (function _math_abs)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmathlib.c
