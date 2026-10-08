// from server: 100% by auto
// roc 2012-06 00855cb0  unit: lua_exception  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00855cb0
//
// 00855cb0  56                   push esi
// 00855cb1  8b742408             mov esi, dword ptr [esp + 8]
// 00855cb5  6a01                 push 1
// 00855cb7  56                   push esi
// 00855cb8  e823ddfdff           call 0x8339e0
// 00855cbd  83c408               add esp, 8
// 00855cc0  e8edde1200           call 0x983bb2
// 00855cc5  83ec08               sub esp, 8
// 00855cc8  dd1c24               fstp qword ptr [esp]
// 00855ccb  56                   push esi
// 00855ccc  e8dfc3fdff           call 0x8320b0
// 00855cd1  83c40c               add esp, 0xc
// 00855cd4  b801000000           mov eax, 1
// 00855cd9  5e                   pop esi
// 00855cda  c3                   ret 
// library lua-5.1.4/lmathlib.c (function _math_sin)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmathlib.c
