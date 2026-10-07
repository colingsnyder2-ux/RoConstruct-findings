// roc 2009-06 006ee970  unit: seg_006e0000  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ee970
//
// 006ee970  53                   push ebx
// 006ee971  56                   push esi
// 006ee972  8bf1                 mov esi, ecx
// 006ee974  8bd8                 mov ebx, eax
// 006ee976  8b4610               mov eax, dword ptr [esi + 0x10]
// 006ee979  83f828               cmp eax, 0x28
// 006ee97c  7422                 je 0x6ee9a0
// 006ee97e  3d1d010000           cmp eax, 0x11d
// 006ee983  7411                 je 0x6ee996
// 006ee985  6840df8e00           push 0x8edf40
// 006ee98a  56                   push esi
// 006ee98b  e860290000           call 0x6f12f0
// 006ee990  83c408               add esp, 8
// 006ee993  5e                   pop esi
// 006ee994  5b                   pop ebx
// 006ee995  c3                   ret 
// 006ee996  8bc6                 mov eax, esi
// 006ee998  e823f3ffff           call 0x6edcc0
// 006ee99d  5e                   pop esi
// 006ee99e  5b                   pop ebx
// 006ee99f  c3                   ret 
// 006ee9a0  57                   push edi
// 006ee9a1  8b7e04               mov edi, dword ptr [esi + 4]
// 006ee9a4  56                   push esi
// 006ee9a5  e8363d0000           call 0x6f26e0
// 006ee9aa  6a00                 push 0
// 006ee9ac  53                   push ebx
// 006ee9ad  56                   push esi
// 006ee9ae  e8ad060000           call 0x6ef060
// 006ee9b3  8bc7                 mov eax, edi
// 006ee9b5  6a28                 push 0x28
// 006ee9b7  bf29000000           mov edi, 0x29
// 006ee9bc  e8cfeeffff           call 0x6ed890
// 006ee9c1  8b4630               mov eax, dword ptr [esi + 0x30]
// 006ee9c4  53                   push ebx
// 006ee9c5  50                   push eax
// 006ee9c6  e885ba0000           call 0x6fa450
// 006ee9cb  83c41c               add esp, 0x1c
// 006ee9ce  5f                   pop edi
// 006ee9cf  5e                   pop esi
// 006ee9d0  5b                   pop ebx
// 006ee9d1  c3                   ret 
// library lua-5.1.4/lparser.c (function _prefixexp)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
