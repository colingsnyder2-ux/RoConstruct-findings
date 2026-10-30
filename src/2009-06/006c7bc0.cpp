// from server: 100% by auto
// roc 2009-06 006c7bc0  unit: seg_006c0000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c7bc0
//
// 006c7bc0  56                   push esi
// 006c7bc1  8b742408             mov esi, dword ptr [esp + 8]
// 006c7bc5  e8f6feffff           call 0x6c7ac0
// 006c7bca  6848bf8e00           push 0x8ebf48
// 006c7bcf  685cc28e00           push 0x8ec25c
// 006c7bd4  56                   push esi
// 006c7bd5  e89634ffff           call 0x6bb070
// 006c7bda  83c40c               add esp, 0xc
// 006c7bdd  b802000000           mov eax, 2
// 006c7be2  5e                   pop esi
// 006c7be3  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaopen_base)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
