// from server: 100% by auto
// roc 2011-06 0077ffd0  unit: lua_exception  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0077ffd0
//
// 0077ffd0  56                   push esi
// 0077ffd1  8b742408             mov esi, dword ptr [esp + 8]
// 0077ffd5  6a01                 push 1
// 0077ffd7  56                   push esi
// 0077ffd8  e87342feff           call 0x764250
// 0077ffdd  dd1c24               fstp qword ptr [esp]
// 0077ffe0  e821b90800           call 0x80b906
// 0077ffe5  dd1c24               fstp qword ptr [esp]
// 0077ffe8  56                   push esi
// 0077ffe9  e83229feff           call 0x762920
// 0077ffee  83c40c               add esp, 0xc
// 0077fff1  b801000000           mov eax, 1
// 0077fff6  5e                   pop esi
// 0077fff7  c3                   ret 
// library lua-5.1.4/lmathlib.c (function _math_ceil)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmathlib.c
