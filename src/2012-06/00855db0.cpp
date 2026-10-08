// from server: 100% by auto
// roc 2012-06 00855db0  unit: lua_exception  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00855db0
//
// 00855db0  56                   push esi
// 00855db1  8b742408             mov esi, dword ptr [esp + 8]
// 00855db5  6a01                 push 1
// 00855db7  56                   push esi
// 00855db8  e823dcfdff           call 0x8339e0
// 00855dbd  dd1c24               fstp qword ptr [esp]
// 00855dc0  e871dd1200           call 0x983b36
// 00855dc5  dd1c24               fstp qword ptr [esp]
// 00855dc8  56                   push esi
// 00855dc9  e8e2c2fdff           call 0x8320b0
// 00855dce  83c40c               add esp, 0xc
// 00855dd1  b801000000           mov eax, 1
// 00855dd6  5e                   pop esi
// 00855dd7  c3                   ret 
// library lua-5.1.4/lmathlib.c (function _math_ceil)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmathlib.c
