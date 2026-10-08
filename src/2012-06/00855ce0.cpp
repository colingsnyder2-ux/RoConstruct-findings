// from server: 100% by auto
// roc 2012-06 00855ce0  unit: lua_exception  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00855ce0
//
// 00855ce0  56                   push esi
// 00855ce1  8b742408             mov esi, dword ptr [esp + 8]
// 00855ce5  6a01                 push 1
// 00855ce7  56                   push esi
// 00855ce8  e8f3dcfdff           call 0x8339e0
// 00855ced  83c408               add esp, 8
// 00855cf0  e8c3de1200           call 0x983bb8
// 00855cf5  83ec08               sub esp, 8
// 00855cf8  dd1c24               fstp qword ptr [esp]
// 00855cfb  56                   push esi
// 00855cfc  e8afc3fdff           call 0x8320b0
// 00855d01  83c40c               add esp, 0xc
// 00855d04  b801000000           mov eax, 1
// 00855d09  5e                   pop esi
// 00855d0a  c3                   ret 
// library lua-5.1.4/lmathlib.c (function _math_sin)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmathlib.c
