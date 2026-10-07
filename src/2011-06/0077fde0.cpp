// roc 2011-06 0077fde0  unit: lua_exception  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0077fde0
//
// 0077fde0  56                   push esi
// 0077fde1  8b742408             mov esi, dword ptr [esp + 8]
// 0077fde5  6a01                 push 1
// 0077fde7  56                   push esi
// 0077fde8  e86344feff           call 0x764250
// 0077fded  83c408               add esp, 8
// 0077fdf0  e8d3bd0800           call 0x80bbc8
// 0077fdf5  83ec08               sub esp, 8
// 0077fdf8  dd1c24               fstp qword ptr [esp]
// 0077fdfb  56                   push esi
// 0077fdfc  e81f2bfeff           call 0x762920
// 0077fe01  83c40c               add esp, 0xc
// 0077fe04  b801000000           mov eax, 1
// 0077fe09  5e                   pop esi
// 0077fe0a  c3                   ret 
// library lua-5.1.4/lmathlib.c (function _math_sin)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmathlib.c
