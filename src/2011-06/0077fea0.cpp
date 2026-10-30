// from server: 100% by auto
// roc 2011-06 0077fea0  unit: lua_exception  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0077fea0
//
// 0077fea0  56                   push esi
// 0077fea1  8b742408             mov esi, dword ptr [esp + 8]
// 0077fea5  6a01                 push 1
// 0077fea7  56                   push esi
// 0077fea8  e8a343feff           call 0x764250
// 0077fead  83c408               add esp, 8
// 0077feb0  e81fbd0800           call 0x80bbd4
// 0077feb5  83ec08               sub esp, 8
// 0077feb8  dd1c24               fstp qword ptr [esp]
// 0077febb  56                   push esi
// 0077febc  e85f2afeff           call 0x762920
// 0077fec1  83c40c               add esp, 0xc
// 0077fec4  b801000000           mov eax, 1
// 0077fec9  5e                   pop esi
// 0077feca  c3                   ret 
// library lua-5.1.4/lmathlib.c (function _math_sin)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmathlib.c
