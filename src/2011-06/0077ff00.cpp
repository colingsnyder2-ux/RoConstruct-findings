// from server: 100% by auto
// roc 2011-06 0077ff00  unit: lua_exception  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0077ff00
//
// 0077ff00  56                   push esi
// 0077ff01  8b742408             mov esi, dword ptr [esp + 8]
// 0077ff05  6a01                 push 1
// 0077ff07  56                   push esi
// 0077ff08  e84343feff           call 0x764250
// 0077ff0d  83c408               add esp, 8
// 0077ff10  e877bb0800           call 0x80ba8c
// 0077ff15  83ec08               sub esp, 8
// 0077ff18  dd1c24               fstp qword ptr [esp]
// 0077ff1b  56                   push esi
// 0077ff1c  e8ff29feff           call 0x762920
// 0077ff21  83c40c               add esp, 0xc
// 0077ff24  b801000000           mov eax, 1
// 0077ff29  5e                   pop esi
// 0077ff2a  c3                   ret 
// library lua-5.1.4/lmathlib.c (function _math_sin)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmathlib.c
