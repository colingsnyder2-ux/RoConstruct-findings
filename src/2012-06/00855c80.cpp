// roc 2012-06 00855c80  unit: lua_exception  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00855c80
//
// 00855c80  56                   push esi
// 00855c81  8b742408             mov esi, dword ptr [esp + 8]
// 00855c85  6a01                 push 1
// 00855c87  56                   push esi
// 00855c88  e853ddfdff           call 0x8339e0
// 00855c8d  83c408               add esp, 8
// 00855c90  e8c3df1200           call 0x983c58
// 00855c95  83ec08               sub esp, 8
// 00855c98  dd1c24               fstp qword ptr [esp]
// 00855c9b  56                   push esi
// 00855c9c  e80fc4fdff           call 0x8320b0
// 00855ca1  83c40c               add esp, 0xc
// 00855ca4  b801000000           mov eax, 1
// 00855ca9  5e                   pop esi
// 00855caa  c3                   ret 
// library lua-5.1.4/lmathlib.c (function _math_sin)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmathlib.c
