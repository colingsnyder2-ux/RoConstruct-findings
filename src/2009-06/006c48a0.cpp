// from server: 100% by auto
// roc 2009-06 006c48a0  unit: lua_exception  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c48a0
//
// 006c48a0  56                   push esi
// 006c48a1  8b742408             mov esi, dword ptr [esp + 8]
// 006c48a5  6a01                 push 1
// 006c48a7  56                   push esi
// 006c48a8  e8d364ffff           call 0x6bad80
// 006c48ad  83c408               add esp, 8
// 006c48b0  e8a75b0500           call 0x71a45c
// 006c48b5  83ec08               sub esp, 8
// 006c48b8  dd1c24               fstp qword ptr [esp]
// 006c48bb  56                   push esi
// 006c48bc  e87f4affff           call 0x6b9340
// 006c48c1  83c40c               add esp, 0xc
// 006c48c4  b801000000           mov eax, 1
// 006c48c9  5e                   pop esi
// 006c48ca  c3                   ret 
// library lua-5.1.4/lmathlib.c (function _math_sin)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmathlib.c
