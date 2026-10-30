// from server: 100% by auto
// roc 2009-06 006c4b90  unit: lua_exception  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c4b90
//
// 006c4b90  56                   push esi
// 006c4b91  8b742408             mov esi, dword ptr [esp + 8]
// 006c4b95  6a01                 push 1
// 006c4b97  56                   push esi
// 006c4b98  e8e361ffff           call 0x6bad80
// 006c4b9d  dc0d10ba8e00         fmul qword ptr [0x8eba10]
// 006c4ba3  dd1c24               fstp qword ptr [esp]
// 006c4ba6  56                   push esi
// 006c4ba7  e89447ffff           call 0x6b9340
// 006c4bac  83c40c               add esp, 0xc
// 006c4baf  b801000000           mov eax, 1
// 006c4bb4  5e                   pop esi
// 006c4bb5  c3                   ret 
// library lua-5.1.4/lmathlib.c (function _math_rad)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmathlib.c
