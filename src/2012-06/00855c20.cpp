// roc 2012-06 00855c20  unit: lua_exception  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00855c20
//
// 00855c20  56                   push esi
// 00855c21  8b742408             mov esi, dword ptr [esp + 8]
// 00855c25  6a01                 push 1
// 00855c27  56                   push esi
// 00855c28  e8b3ddfdff           call 0x8339e0
// 00855c2d  83c408               add esp, 8
// 00855c30  e81de01200           call 0x983c52
// 00855c35  83ec08               sub esp, 8
// 00855c38  dd1c24               fstp qword ptr [esp]
// 00855c3b  56                   push esi
// 00855c3c  e86fc4fdff           call 0x8320b0
// 00855c41  83c40c               add esp, 0xc
// 00855c44  b801000000           mov eax, 1
// 00855c49  5e                   pop esi
// 00855c4a  c3                   ret 
// library lua-5.1.4/lmathlib.c (function _math_sin)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmathlib.c
