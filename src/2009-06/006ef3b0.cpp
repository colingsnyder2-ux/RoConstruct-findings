// roc 2009-06 006ef3b0  unit: seg_006e0000  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ef3b0
//
// 006ef3b0  53                   push ebx
// 006ef3b1  8b5830               mov ebx, dword ptr [eax + 0x30]
// 006ef3b4  56                   push esi
// 006ef3b5  8b7314               mov esi, dword ptr [ebx + 0x14]
// 006ef3b8  57                   push edi
// 006ef3b9  33ff                 xor edi, edi
// 006ef3bb  85f6                 test esi, esi
// 006ef3bd  7413                 je 0x6ef3d2
// 006ef3bf  90                   nop 
// 006ef3c0  807e0a00             cmp byte ptr [esi + 0xa], 0
// 006ef3c4  751a                 jne 0x6ef3e0
// 006ef3c6  0fb64e09             movzx ecx, byte ptr [esi + 9]
// 006ef3ca  8b36                 mov esi, dword ptr [esi]
// 006ef3cc  0bf9                 or edi, ecx
// 006ef3ce  85f6                 test esi, esi
// 006ef3d0  75ee                 jne 0x6ef3c0
// 006ef3d2  68a8df8e00           push 0x8edfa8
// 006ef3d7  50                   push eax
// 006ef3d8  e8131f0000           call 0x6f12f0
// 006ef3dd  83c408               add esp, 8
// 006ef3e0  85ff                 test edi, edi
// 006ef3e2  7414                 je 0x6ef3f8
// 006ef3e4  0fb65608             movzx edx, byte ptr [esi + 8]
// 006ef3e8  6a00                 push 0
// 006ef3ea  6a00                 push 0
// 006ef3ec  52                   push edx
// 006ef3ed  6a23                 push 0x23
// 006ef3ef  53                   push ebx
// 006ef3f0  e8dbad0000           call 0x6fa1d0
// 006ef3f5  83c414               add esp, 0x14
// 006ef3f8  53                   push ebx
// 006ef3f9  e862af0000           call 0x6fa360
// 006ef3fe  50                   push eax
// 006ef3ff  83c604               add esi, 4
// 006ef402  56                   push esi
// 006ef403  53                   push ebx
// 006ef404  e8a7a80000           call 0x6f9cb0
// 006ef409  83c410               add esp, 0x10
// 006ef40c  5f                   pop edi
// 006ef40d  5e                   pop esi
// 006ef40e  5b                   pop ebx
// 006ef40f  c3                   ret 
// library lua-5.1.4/lparser.c (function _breakstat)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
