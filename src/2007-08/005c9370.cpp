// roc 2007-08 005c9370  unit: lua_exception  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c9370
//
// 005c9370  56                   push esi
// 005c9371  8b742408             mov esi, dword ptr [esp + 8]
// 005c9375  6a01                 push 1
// 005c9377  56                   push esi
// 005c9378  e89360ffff           call 0x5bf410
// 005c937d  d9e1                 fabs 
// 005c937f  dd1c24               fstp qword ptr [esp]
// 005c9382  56                   push esi
// 005c9383  e8e847ffff           call 0x5bdb70
// 005c9388  83c40c               add esp, 0xc
// 005c938b  b801000000           mov eax, 1
// 005c9390  5e                   pop esi
// 005c9391  c3                   ret 
// library lua-5.1.4/lmathlib.c (function _math_abs)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmathlib.c
