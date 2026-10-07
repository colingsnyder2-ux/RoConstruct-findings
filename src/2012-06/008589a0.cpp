// roc 2012-06 008589a0  unit: seg_00850000  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008589a0
//
// 008589a0  56                   push esi
// 008589a1  8b742408             mov esi, dword ptr [esp + 8]
// 008589a5  6a02                 push 2
// 008589a7  56                   push esi
// 008589a8  e843affdff           call 0x8338f0
// 008589ad  6a02                 push 2
// 008589af  56                   push esi
// 008589b0  e84b91fdff           call 0x831b00
// 008589b5  6a01                 push 1
// 008589b7  56                   push esi
// 008589b8  e8e391fdff           call 0x831ba0
// 008589bd  6a01                 push 1
// 008589bf  6aff                 push -1
// 008589c1  6a00                 push 0
// 008589c3  56                   push esi
// 008589c4  e8a79efdff           call 0x832870
// 008589c9  33c9                 xor ecx, ecx
// 008589cb  85c0                 test eax, eax
// 008589cd  0f94c1               sete cl
// 008589d0  51                   push ecx
// 008589d1  56                   push esi
// 008589d2  e8c998fdff           call 0x8322a0
// 008589d7  6a01                 push 1
// 008589d9  56                   push esi
// 008589da  e81192fdff           call 0x831bf0
// 008589df  56                   push esi
// 008589e0  e80b91fdff           call 0x831af0
// 008589e5  83c43c               add esp, 0x3c
// 008589e8  5e                   pop esi
// 008589e9  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_xpcall)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
