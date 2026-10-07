// roc 2010-06 00735000  unit: seg_00730000  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00735000
//
// 00735000  56                   push esi
// 00735001  8b742408             mov esi, dword ptr [esp + 8]
// 00735005  6a01                 push 1
// 00735007  56                   push esi
// 00735008  e8d3dffeff           call 0x722fe0
// 0073500d  dd1c24               fstp qword ptr [esp]
// 00735010  e8db410700           call 0x7a91f0
// 00735015  dd1c24               fstp qword ptr [esp]
// 00735018  56                   push esi
// 00735019  e8f2c4feff           call 0x721510
// 0073501e  83c40c               add esp, 0xc
// 00735021  b801000000           mov eax, 1
// 00735026  5e                   pop esi
// 00735027  c3                   ret 
// library lua-5.1.4/lmathlib.c (function _math_ceil)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmathlib.c
