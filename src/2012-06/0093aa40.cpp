// from server: 100% by auto
// roc 2012-06 0093aa40  unit: seg_00930000  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0093aa40
//
// 0093aa40  83ec18               sub esp, 0x18
// 0093aa43  56                   push esi
// 0093aa44  e877d9ffff           call 0x9383c0
// 0093aa49  6a00                 push 0
// 0093aa4b  8d442408             lea eax, [esp + 8]
// 0093aa4f  50                   push eax
// 0093aa50  56                   push esi
// 0093aa51  e83af2ffff           call 0x939c90
// 0093aa56  83c410               add esp, 0x10
// 0093aa59  833c2401             cmp dword ptr [esp], 1
// 0093aa5d  7507                 jne 0x93aa66
// 0093aa5f  c7042403000000       mov dword ptr [esp], 3
// 0093aa66  8b5630               mov edx, dword ptr [esi + 0x30]
// 0093aa69  8d0c24               lea ecx, [esp]
// 0093aa6c  51                   push ecx
// 0093aa6d  52                   push edx
// 0093aa6e  e84dd70200           call 0x9681c0
// 0093aa73  83c408               add esp, 8
// 0093aa76  817e1012010000       cmp dword ptr [esi + 0x10], 0x112
// 0093aa7d  7424                 je 0x93aaa3
// 0093aa7f  6812010000           push 0x112
// 0093aa84  56                   push esi
// 0093aa85  e886c6ffff           call 0x937110
// 0093aa8a  50                   push eax
// 0093aa8b  8b4634               mov eax, dword ptr [esi + 0x34]
// 0093aa8e  682cfbbf00           push 0xbffb2c
// 0093aa93  50                   push eax
// 0093aa94  e8a756f1ff           call 0x850140
// 0093aa99  50                   push eax
// 0093aa9a  56                   push esi
// 0093aa9b  e870c7ffff           call 0x937210
// 0093aaa0  83c41c               add esp, 0x1c
// 0093aaa3  56                   push esi
// 0093aaa4  e817d9ffff           call 0x9383c0
// 0093aaa9  8bc6                 mov eax, esi
// 0093aaab  e800f3ffff           call 0x939db0
// 0093aab0  8b442418             mov eax, dword ptr [esp + 0x18]
// 0093aab4  83c41c               add esp, 0x1c
// 0093aab7  c3                   ret 
// library lua-5.1.4/lparser.c (function _test_then_block)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
