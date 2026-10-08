// from server: 100% by auto
// roc 2009-06 006c6c90  unit: seg_006c0000  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c6c90
//
// 006c6c90  56                   push esi
// 006c6c91  8b742408             mov esi, dword ptr [esp + 8]
// 006c6c95  6a01                 push 1
// 006c6c97  56                   push esi
// 006c6c98  e8f33fffff           call 0x6bac90
// 006c6c9d  6a01                 push 1
// 006c6c9f  56                   push esi
// 006c6ca0  e86b2affff           call 0x6b9710
// 006c6ca5  83c410               add esp, 0x10
// 006c6ca8  85c0                 test eax, eax
// 006c6caa  7510                 jne 0x6c6cbc
// 006c6cac  56                   push esi
// 006c6cad  e86e26ffff           call 0x6b9320
// 006c6cb2  83c404               add esp, 4
// 006c6cb5  b801000000           mov eax, 1
// 006c6cba  5e                   pop esi
// 006c6cbb  c3                   ret 
// 006c6cbc  6894bf8e00           push 0x8ebf94
// 006c6cc1  6a01                 push 1
// 006c6cc3  56                   push esi
// 006c6cc4  e83736ffff           call 0x6ba300
// 006c6cc9  83c40c               add esp, 0xc
// 006c6ccc  b801000000           mov eax, 1
// 006c6cd1  5e                   pop esi
// 006c6cd2  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_getmetatable)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
