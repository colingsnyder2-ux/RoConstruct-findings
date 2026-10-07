// roc 2009-06 006c4840  unit: lua_exception  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c4840
//
// 006c4840  56                   push esi
// 006c4841  8b742408             mov esi, dword ptr [esp + 8]
// 006c4845  6a01                 push 1
// 006c4847  56                   push esi
// 006c4848  e83365ffff           call 0x6bad80
// 006c484d  83c408               add esp, 8
// 006c4850  e8195d0500           call 0x71a56e
// 006c4855  83ec08               sub esp, 8
// 006c4858  dd1c24               fstp qword ptr [esp]
// 006c485b  56                   push esi
// 006c485c  e8df4affff           call 0x6b9340
// 006c4861  83c40c               add esp, 0xc
// 006c4864  b801000000           mov eax, 1
// 006c4869  5e                   pop esi
// 006c486a  c3                   ret 
// library lua-5.1.4/lmathlib.c (function _math_sin)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmathlib.c
