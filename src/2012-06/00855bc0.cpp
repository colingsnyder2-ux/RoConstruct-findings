// from server: 100% by auto
// roc 2012-06 00855bc0  unit: lua_exception  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00855bc0
//
// 00855bc0  56                   push esi
// 00855bc1  8b742408             mov esi, dword ptr [esp + 8]
// 00855bc5  6a01                 push 1
// 00855bc7  56                   push esi
// 00855bc8  e813defdff           call 0x8339e0
// 00855bcd  83c408               add esp, 8
// 00855bd0  e877e01200           call 0x983c4c
// 00855bd5  83ec08               sub esp, 8
// 00855bd8  dd1c24               fstp qword ptr [esp]
// 00855bdb  56                   push esi
// 00855bdc  e8cfc4fdff           call 0x8320b0
// 00855be1  83c40c               add esp, 0xc
// 00855be4  b801000000           mov eax, 1
// 00855be9  5e                   pop esi
// 00855bea  c3                   ret 
// library lua-5.1.4/lmathlib.c (function _math_sin)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmathlib.c
