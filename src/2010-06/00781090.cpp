// from server: 100% by auto
// roc 2010-06 00781090  unit: seg_00780000  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00781090
//
// 00781090  83ec18               sub esp, 0x18
// 00781093  56                   push esi
// 00781094  e8e7280000           call 0x783980
// 00781099  6a00                 push 0
// 0078109b  8d442408             lea eax, [esp + 8]
// 0078109f  50                   push eax
// 007810a0  56                   push esi
// 007810a1  e85af2ffff           call 0x780300
// 007810a6  83c410               add esp, 0x10
// 007810a9  833c2401             cmp dword ptr [esp], 1
// 007810ad  7507                 jne 0x7810b6
// 007810af  c7042403000000       mov dword ptr [esp], 3
// 007810b6  8b5630               mov edx, dword ptr [esi + 0x30]
// 007810b9  8d0c24               lea ecx, [esp]
// 007810bc  51                   push ecx
// 007810bd  52                   push edx
// 007810be  e8cdf40000           call 0x790590
// 007810c3  83c408               add esp, 8
// 007810c6  817e1012010000       cmp dword ptr [esi + 0x10], 0x112
// 007810cd  7424                 je 0x7810f3
// 007810cf  6812010000           push 0x112
// 007810d4  56                   push esi
// 007810d5  e8b6130000           call 0x782490
// 007810da  50                   push eax
// 007810db  8b4634               mov eax, dword ptr [esi + 0x34]
// 007810de  683830a500           push 0xa53038
// 007810e3  50                   push eax
// 007810e4  e8f71cfbff           call 0x732de0
// 007810e9  50                   push eax
// 007810ea  56                   push esi
// 007810eb  e8a0140000           call 0x782590
// 007810f0  83c41c               add esp, 0x1c
// 007810f3  56                   push esi
// 007810f4  e887280000           call 0x783980
// 007810f9  8bc6                 mov eax, esi
// 007810fb  e810f3ffff           call 0x780410
// 00781100  8b442418             mov eax, dword ptr [esp + 0x18]
// 00781104  83c41c               add esp, 0x1c
// 00781107  c3                   ret 
// library lua-5.1.4/lparser.c (function _test_then_block)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
