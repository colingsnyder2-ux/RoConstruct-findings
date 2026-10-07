// roc 2007-08 00614c30  unit: seg_00610000  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00614c30
//
// 00614c30  53                   push ebx
// 00614c31  56                   push esi
// 00614c32  8bf1                 mov esi, ecx
// 00614c34  8bd8                 mov ebx, eax
// 00614c36  8b4610               mov eax, dword ptr [esi + 0x10]
// 00614c39  83f828               cmp eax, 0x28
// 00614c3c  7422                 je 0x614c60
// 00614c3e  3d1d010000           cmp eax, 0x11d
// 00614c43  7411                 je 0x614c56
// 00614c45  68f8347c00           push 0x7c34f8
// 00614c4a  56                   push esi
// 00614c4b  e870290000           call 0x6175c0
// 00614c50  83c408               add esp, 8
// 00614c53  5e                   pop esi
// 00614c54  5b                   pop ebx
// 00614c55  c3                   ret 
// 00614c56  8bc6                 mov eax, esi
// 00614c58  e813f3ffff           call 0x613f70
// 00614c5d  5e                   pop esi
// 00614c5e  5b                   pop ebx
// 00614c5f  c3                   ret 
// 00614c60  57                   push edi
// 00614c61  8b7e04               mov edi, dword ptr [esi + 4]
// 00614c64  56                   push esi
// 00614c65  e8863d0000           call 0x6189f0
// 00614c6a  6a00                 push 0
// 00614c6c  53                   push ebx
// 00614c6d  56                   push esi
// 00614c6e  e8ad060000           call 0x615320
// 00614c73  8bc7                 mov eax, edi
// 00614c75  6a28                 push 0x28
// 00614c77  bf29000000           mov edi, 0x29
// 00614c7c  e89feeffff           call 0x613b20
// 00614c81  8b4630               mov eax, dword ptr [esi + 0x30]
// 00614c84  53                   push ebx
// 00614c85  50                   push eax
// 00614c86  e875430100           call 0x629000
// 00614c8b  83c41c               add esp, 0x1c
// 00614c8e  5f                   pop edi
// 00614c8f  5e                   pop esi
// 00614c90  5b                   pop ebx
// 00614c91  c3                   ret 
// library lua-5.1.4/lparser.c (function _prefixexp)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
