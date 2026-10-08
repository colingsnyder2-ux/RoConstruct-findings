// from server: 100% by auto
// roc 2012-06 00855fd0  unit: lua_exception  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00855fd0
//
// 00855fd0  56                   push esi
// 00855fd1  8b742408             mov esi, dword ptr [esp + 8]
// 00855fd5  6a01                 push 1
// 00855fd7  56                   push esi
// 00855fd8  e803dafdff           call 0x8339e0
// 00855fdd  dc0d503cbd00         fmul qword ptr [0xbd3c50]
// 00855fe3  dd1c24               fstp qword ptr [esp]
// 00855fe6  56                   push esi
// 00855fe7  e8c4c0fdff           call 0x8320b0
// 00855fec  83c40c               add esp, 0xc
// 00855fef  b801000000           mov eax, 1
// 00855ff4  5e                   pop esi
// 00855ff5  c3                   ret 
// library lua-5.1.4/lmathlib.c (function _math_rad)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmathlib.c
