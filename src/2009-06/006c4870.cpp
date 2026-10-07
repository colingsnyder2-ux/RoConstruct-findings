// roc 2009-06 006c4870  unit: lua_exception  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c4870
//
// 006c4870  56                   push esi
// 006c4871  8b742408             mov esi, dword ptr [esp + 8]
// 006c4875  6a01                 push 1
// 006c4877  56                   push esi
// 006c4878  e80365ffff           call 0x6bad80
// 006c487d  83c408               add esp, 8
// 006c4880  e8dd5b0500           call 0x71a462
// 006c4885  83ec08               sub esp, 8
// 006c4888  dd1c24               fstp qword ptr [esp]
// 006c488b  56                   push esi
// 006c488c  e8af4affff           call 0x6b9340
// 006c4891  83c40c               add esp, 0xc
// 006c4894  b801000000           mov eax, 1
// 006c4899  5e                   pop esi
// 006c489a  c3                   ret 
// library lua-5.1.4/lmathlib.c (function _math_sin)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmathlib.c
