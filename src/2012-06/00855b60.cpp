// from server: 100% by auto
// roc 2012-06 00855b60  unit: lua_exception  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00855b60
//
// 00855b60  56                   push esi
// 00855b61  8b742408             mov esi, dword ptr [esp + 8]
// 00855b65  6a01                 push 1
// 00855b67  56                   push esi
// 00855b68  e873defdff           call 0x8339e0
// 00855b6d  d9e1                 fabs 
// 00855b6f  dd1c24               fstp qword ptr [esp]
// 00855b72  56                   push esi
// 00855b73  e838c5fdff           call 0x8320b0
// 00855b78  83c40c               add esp, 0xc
// 00855b7b  b801000000           mov eax, 1
// 00855b80  5e                   pop esi
// 00855b81  c3                   ret 
// library lua-5.1.4/lmathlib.c (function _math_abs)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmathlib.c
