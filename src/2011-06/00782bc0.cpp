// roc 2011-06 00782bc0  unit: seg_00780000  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00782bc0
//
// 00782bc0  56                   push esi
// 00782bc1  8b742408             mov esi, dword ptr [esp + 8]
// 00782bc5  6a02                 push 2
// 00782bc7  56                   push esi
// 00782bc8  e89315feff           call 0x764160
// 00782bcd  6a02                 push 2
// 00782bcf  56                   push esi
// 00782bd0  e89bf7fdff           call 0x762370
// 00782bd5  6a01                 push 1
// 00782bd7  56                   push esi
// 00782bd8  e833f8fdff           call 0x762410
// 00782bdd  6a01                 push 1
// 00782bdf  6aff                 push -1
// 00782be1  6a00                 push 0
// 00782be3  56                   push esi
// 00782be4  e8f704feff           call 0x7630e0
// 00782be9  33c9                 xor ecx, ecx
// 00782beb  85c0                 test eax, eax
// 00782bed  0f94c1               sete cl
// 00782bf0  51                   push ecx
// 00782bf1  56                   push esi
// 00782bf2  e819fffdff           call 0x762b10
// 00782bf7  6a01                 push 1
// 00782bf9  56                   push esi
// 00782bfa  e861f8fdff           call 0x762460
// 00782bff  56                   push esi
// 00782c00  e85bf7fdff           call 0x762360
// 00782c05  83c43c               add esp, 0x3c
// 00782c08  5e                   pop esi
// 00782c09  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_xpcall)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
