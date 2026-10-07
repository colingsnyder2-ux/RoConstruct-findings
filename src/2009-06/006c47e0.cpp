// roc 2009-06 006c47e0  unit: lua_exception  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c47e0
//
// 006c47e0  56                   push esi
// 006c47e1  8b742408             mov esi, dword ptr [esp + 8]
// 006c47e5  6a01                 push 1
// 006c47e7  56                   push esi
// 006c47e8  e89365ffff           call 0x6bad80
// 006c47ed  83c408               add esp, 8
// 006c47f0  e8735d0500           call 0x71a568
// 006c47f5  83ec08               sub esp, 8
// 006c47f8  dd1c24               fstp qword ptr [esp]
// 006c47fb  56                   push esi
// 006c47fc  e83f4bffff           call 0x6b9340
// 006c4801  83c40c               add esp, 0xc
// 006c4804  b801000000           mov eax, 1
// 006c4809  5e                   pop esi
// 006c480a  c3                   ret 
// library lua-5.1.4/lmathlib.c (function _math_sin)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmathlib.c
