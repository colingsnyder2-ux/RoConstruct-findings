// roc 2008-06 00662d50  unit: RBX::FilterStairs  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00662d50
//
// 00662d50  83ec18               sub esp, 0x18
// 00662d53  56                   push esi
// 00662d54  e8a7280000           call 0x665600
// 00662d59  6a00                 push 0
// 00662d5b  8d442408             lea eax, [esp + 8]
// 00662d5f  50                   push eax
// 00662d60  56                   push esi
// 00662d61  e88af2ffff           call 0x661ff0
// 00662d66  83c410               add esp, 0x10
// 00662d69  833c2401             cmp dword ptr [esp], 1
// 00662d6d  7507                 jne 0x662d76
// 00662d6f  c7042403000000       mov dword ptr [esp], 3
// 00662d76  8b5630               mov edx, dword ptr [esi + 0x30]
// 00662d79  8d0c24               lea ecx, [esp]
// 00662d7c  51                   push ecx
// 00662d7d  52                   push edx
// 00662d7e  e8cd8e0000           call 0x66bc50
// 00662d83  83c408               add esp, 8
// 00662d86  817e1012010000       cmp dword ptr [esi + 0x10], 0x112
// 00662d8d  7424                 je 0x662db3
// 00662d8f  6812010000           push 0x112
// 00662d94  56                   push esi
// 00662d95  e876130000           call 0x664110
// 00662d9a  50                   push eax
// 00662d9b  8b4634               mov eax, dword ptr [esi + 0x34]
// 00662d9e  68c0c48400           push 0x84c4c0
// 00662da3  50                   push eax
// 00662da4  e817fdfbff           call 0x622ac0
// 00662da9  50                   push eax
// 00662daa  56                   push esi
// 00662dab  e860140000           call 0x664210
// 00662db0  83c41c               add esp, 0x1c
// 00662db3  56                   push esi
// 00662db4  e847280000           call 0x665600
// 00662db9  8bc6                 mov eax, esi
// 00662dbb  e840f3ffff           call 0x662100
// 00662dc0  8b442418             mov eax, dword ptr [esp + 0x18]
// 00662dc4  83c41c               add esp, 0x1c
// 00662dc7  c3                   ret 
// library lua-5.1.4/lparser.c (function _test_then_block)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
