// from server: 100% by auto
// roc 2011-06 0077fed0  unit: lua_exception  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0077fed0
//
// 0077fed0  56                   push esi
// 0077fed1  8b742408             mov esi, dword ptr [esp + 8]
// 0077fed5  6a01                 push 1
// 0077fed7  56                   push esi
// 0077fed8  e87343feff           call 0x764250
// 0077fedd  83c408               add esp, 8
// 0077fee0  e8a1bb0800           call 0x80ba86
// 0077fee5  83ec08               sub esp, 8
// 0077fee8  dd1c24               fstp qword ptr [esp]
// 0077feeb  56                   push esi
// 0077feec  e82f2afeff           call 0x762920
// 0077fef1  83c40c               add esp, 0xc
// 0077fef4  b801000000           mov eax, 1
// 0077fef9  5e                   pop esi
// 0077fefa  c3                   ret 
// library lua-5.1.4/lmathlib.c (function _math_sin)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmathlib.c
