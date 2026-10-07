// roc 2011-06 007801f0  unit: lua_exception  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007801f0
//
// 007801f0  56                   push esi
// 007801f1  8b742408             mov esi, dword ptr [esp + 8]
// 007801f5  6a01                 push 1
// 007801f7  56                   push esi
// 007801f8  e85340feff           call 0x764250
// 007801fd  dc0da07bab00         fmul qword ptr [0xab7ba0]
// 00780203  dd1c24               fstp qword ptr [esp]
// 00780206  56                   push esi
// 00780207  e81427feff           call 0x762920
// 0078020c  83c40c               add esp, 0xc
// 0078020f  b801000000           mov eax, 1
// 00780214  5e                   pop esi
// 00780215  c3                   ret 
// library lua-5.1.4/lmathlib.c (function _math_rad)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmathlib.c
