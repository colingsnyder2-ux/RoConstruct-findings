// roc 2007-08 005cc020  unit: seg_005c0000  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005cc020
//
// 005cc020  56                   push esi
// 005cc021  8b742408             mov esi, dword ptr [esp + 8]
// 005cc025  6a01                 push 1
// 005cc027  56                   push esi
// 005cc028  e8f332ffff           call 0x5bf320
// 005cc02d  6a01                 push 1
// 005cc02f  56                   push esi
// 005cc030  e81b19ffff           call 0x5bd950
// 005cc035  83c410               add esp, 0x10
// 005cc038  85c0                 test eax, eax
// 005cc03a  751f                 jne 0x5cc05b
// 005cc03c  50                   push eax
// 005cc03d  6834a47b00           push 0x7ba434
// 005cc042  6a02                 push 2
// 005cc044  56                   push esi
// 005cc045  e86633ffff           call 0x5bf3b0
// 005cc04a  50                   push eax
// 005cc04b  685ca07800           push 0x78a05c
// 005cc050  56                   push esi
// 005cc051  e88a28ffff           call 0x5be8e0
// 005cc056  83c41c               add esp, 0x1c
// 005cc059  5e                   pop esi
// 005cc05a  c3                   ret 
// 005cc05b  56                   push esi
// 005cc05c  e81f15ffff           call 0x5bd580
// 005cc061  83c404               add esp, 4
// 005cc064  5e                   pop esi
// 005cc065  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_assert)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
