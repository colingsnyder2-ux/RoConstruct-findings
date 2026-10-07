// roc 2007-08 005c97e0  unit: lua_exception  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c97e0
//
// 005c97e0  56                   push esi
// 005c97e1  8b742408             mov esi, dword ptr [esp + 8]
// 005c97e5  6a01                 push 1
// 005c97e7  56                   push esi
// 005c97e8  e8235cffff           call 0x5bf410
// 005c97ed  dc0d309d7b00         fmul qword ptr [0x7b9d30]
// 005c97f3  dd1c24               fstp qword ptr [esp]
// 005c97f6  56                   push esi
// 005c97f7  e87443ffff           call 0x5bdb70
// 005c97fc  83c40c               add esp, 0xc
// 005c97ff  b801000000           mov eax, 1
// 005c9804  5e                   pop esi
// 005c9805  c3                   ret 
// library lua-5.1.4/lmathlib.c (function _math_rad)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmathlib.c
