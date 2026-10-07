// roc 2011-06 00782310  unit: seg_00780000  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00782310
//
// 00782310  56                   push esi
// 00782311  8b742408             mov esi, dword ptr [esp + 8]
// 00782315  6a01                 push 1
// 00782317  56                   push esi
// 00782318  e8431efeff           call 0x764160
// 0078231d  6a01                 push 1
// 0078231f  56                   push esi
// 00782320  e8cb09feff           call 0x762cf0
// 00782325  83c410               add esp, 0x10
// 00782328  85c0                 test eax, eax
// 0078232a  7510                 jne 0x78233c
// 0078232c  56                   push esi
// 0078232d  e8ce05feff           call 0x762900
// 00782332  83c404               add esp, 4
// 00782335  b801000000           mov eax, 1
// 0078233a  5e                   pop esi
// 0078233b  c3                   ret 
// 0078233c  689445a900           push 0xa94594
// 00782341  6a01                 push 1
// 00782343  56                   push esi
// 00782344  e88714feff           call 0x7637d0
// 00782349  83c40c               add esp, 0xc
// 0078234c  b801000000           mov eax, 1
// 00782351  5e                   pop esi
// 00782352  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_getmetatable)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
