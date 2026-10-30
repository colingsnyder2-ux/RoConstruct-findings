// from server: 100% by auto
// roc 2010-06 00734db0  unit: seg_00730000  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00734db0
//
// 00734db0  56                   push esi
// 00734db1  8b742408             mov esi, dword ptr [esp + 8]
// 00734db5  6a01                 push 1
// 00734db7  56                   push esi
// 00734db8  e823e2feff           call 0x722fe0
// 00734dbd  d9e1                 fabs 
// 00734dbf  dd1c24               fstp qword ptr [esp]
// 00734dc2  56                   push esi
// 00734dc3  e848c7feff           call 0x721510
// 00734dc8  83c40c               add esp, 0xc
// 00734dcb  b801000000           mov eax, 1
// 00734dd0  5e                   pop esi
// 00734dd1  c3                   ret 
// library lua-5.1.4/lmathlib.c (function _math_abs)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmathlib.c
