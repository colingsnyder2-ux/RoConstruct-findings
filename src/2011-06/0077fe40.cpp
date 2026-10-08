// from server: 100% by auto
// roc 2011-06 0077fe40  unit: lua_exception  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0077fe40
//
// 0077fe40  56                   push esi
// 0077fe41  8b742408             mov esi, dword ptr [esp + 8]
// 0077fe45  6a01                 push 1
// 0077fe47  56                   push esi
// 0077fe48  e80344feff           call 0x764250
// 0077fe4d  83c408               add esp, 8
// 0077fe50  e879bd0800           call 0x80bbce
// 0077fe55  83ec08               sub esp, 8
// 0077fe58  dd1c24               fstp qword ptr [esp]
// 0077fe5b  56                   push esi
// 0077fe5c  e8bf2afeff           call 0x762920
// 0077fe61  83c40c               add esp, 0xc
// 0077fe64  b801000000           mov eax, 1
// 0077fe69  5e                   pop esi
// 0077fe6a  c3                   ret 
// library lua-5.1.4/lmathlib.c (function _math_sin)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmathlib.c
