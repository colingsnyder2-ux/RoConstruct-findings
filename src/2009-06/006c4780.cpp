// roc 2009-06 006c4780  unit: lua_exception  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c4780
//
// 006c4780  56                   push esi
// 006c4781  8b742408             mov esi, dword ptr [esp + 8]
// 006c4785  6a01                 push 1
// 006c4787  56                   push esi
// 006c4788  e8f365ffff           call 0x6bad80
// 006c478d  83c408               add esp, 8
// 006c4790  e8cd5d0500           call 0x71a562
// 006c4795  83ec08               sub esp, 8
// 006c4798  dd1c24               fstp qword ptr [esp]
// 006c479b  56                   push esi
// 006c479c  e89f4bffff           call 0x6b9340
// 006c47a1  83c40c               add esp, 0xc
// 006c47a4  b801000000           mov eax, 1
// 006c47a9  5e                   pop esi
// 006c47aa  c3                   ret 
// library lua-5.1.4/lmathlib.c (function _math_sin)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmathlib.c
