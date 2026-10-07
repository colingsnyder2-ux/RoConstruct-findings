// roc 2011-06 007dd530  unit: seg_007d0000  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007dd530
//
// 007dd530  83ec18               sub esp, 0x18
// 007dd533  56                   push esi
// 007dd534  e8e7260000           call 0x7dfc20
// 007dd539  6a00                 push 0
// 007dd53b  8d442408             lea eax, [esp + 8]
// 007dd53f  50                   push eax
// 007dd540  56                   push esi
// 007dd541  e83af2ffff           call 0x7dc780
// 007dd546  83c410               add esp, 0x10
// 007dd549  833c2401             cmp dword ptr [esp], 1
// 007dd54d  7507                 jne 0x7dd556
// 007dd54f  c7042403000000       mov dword ptr [esp], 3
// 007dd556  8b5630               mov edx, dword ptr [esi + 0x30]
// 007dd559  8d0c24               lea ecx, [esp]
// 007dd55c  51                   push ecx
// 007dd55d  52                   push edx
// 007dd55e  e8bd5c0100           call 0x7f3220
// 007dd563  83c408               add esp, 8
// 007dd566  817e1012010000       cmp dword ptr [esi + 0x10], 0x112
// 007dd56d  7424                 je 0x7dd593
// 007dd56f  6812010000           push 0x112
// 007dd574  56                   push esi
// 007dd575  e8f6130000           call 0x7de970
// 007dd57a  50                   push eax
// 007dd57b  8b4634               mov eax, dword ptr [esi + 0x34]
// 007dd57e  682ce1ab00           push 0xabe12c
// 007dd583  50                   push eax
// 007dd584  e897f8f9ff           call 0x77ce20
// 007dd589  50                   push eax
// 007dd58a  56                   push esi
// 007dd58b  e8e0140000           call 0x7dea70
// 007dd590  83c41c               add esp, 0x1c
// 007dd593  56                   push esi
// 007dd594  e887260000           call 0x7dfc20
// 007dd599  8bc6                 mov eax, esi
// 007dd59b  e800f3ffff           call 0x7dc8a0
// 007dd5a0  8b442418             mov eax, dword ptr [esp + 0x18]
// 007dd5a4  83c41c               add esp, 0x1c
// 007dd5a7  c3                   ret 
// library lua-5.1.4/lparser.c (function _test_then_block)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
