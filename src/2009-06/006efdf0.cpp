// roc 2009-06 006efdf0  unit: seg_006e0000  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006efdf0
//
// 006efdf0  83ec18               sub esp, 0x18
// 006efdf3  56                   push esi
// 006efdf4  e8e7280000           call 0x6f26e0
// 006efdf9  6a00                 push 0
// 006efdfb  8d442408             lea eax, [esp + 8]
// 006efdff  50                   push eax
// 006efe00  56                   push esi
// 006efe01  e85af2ffff           call 0x6ef060
// 006efe06  83c410               add esp, 0x10
// 006efe09  833c2401             cmp dword ptr [esp], 1
// 006efe0d  7507                 jne 0x6efe16
// 006efe0f  c7042403000000       mov dword ptr [esp], 3
// 006efe16  8b5630               mov edx, dword ptr [esi + 0x30]
// 006efe19  8d0c24               lea ecx, [esp]
// 006efe1c  51                   push ecx
// 006efe1d  52                   push edx
// 006efe1e  e8ddad0000           call 0x6fac00
// 006efe23  83c408               add esp, 8
// 006efe26  817e1012010000       cmp dword ptr [esi + 0x10], 0x112
// 006efe2d  7424                 je 0x6efe53
// 006efe2f  6812010000           push 0x112
// 006efe34  56                   push esi
// 006efe35  e8b6130000           call 0x6f11f0
// 006efe3a  50                   push eax
// 006efe3b  8b4634               mov eax, dword ptr [esi + 0x34]
// 006efe3e  68b8dd8e00           push 0x8eddb8
// 006efe43  50                   push eax
// 006efe44  e85792fdff           call 0x6c90a0
// 006efe49  50                   push eax
// 006efe4a  56                   push esi
// 006efe4b  e8a0140000           call 0x6f12f0
// 006efe50  83c41c               add esp, 0x1c
// 006efe53  56                   push esi
// 006efe54  e887280000           call 0x6f26e0
// 006efe59  8bc6                 mov eax, esi
// 006efe5b  e810f3ffff           call 0x6ef170
// 006efe60  8b442418             mov eax, dword ptr [esp + 0x18]
// 006efe64  83c41c               add esp, 0x1c
// 006efe67  c3                   ret 
// library lua-5.1.4/lparser.c (function _test_then_block)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
