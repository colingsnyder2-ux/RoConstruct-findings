// roc 2008-06 00661900  unit: RBX::FilterStairs  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00661900
//
// 00661900  53                   push ebx
// 00661901  56                   push esi
// 00661902  8bf1                 mov esi, ecx
// 00661904  8bd8                 mov ebx, eax
// 00661906  8b4610               mov eax, dword ptr [esi + 0x10]
// 00661909  83f828               cmp eax, 0x28
// 0066190c  7422                 je 0x661930
// 0066190e  3d1d010000           cmp eax, 0x11d
// 00661913  7411                 je 0x661926
// 00661915  6848c68400           push 0x84c648
// 0066191a  56                   push esi
// 0066191b  e8f0280000           call 0x664210
// 00661920  83c408               add esp, 8
// 00661923  5e                   pop esi
// 00661924  5b                   pop ebx
// 00661925  c3                   ret 
// 00661926  8bc6                 mov eax, esi
// 00661928  e823f3ffff           call 0x660c50
// 0066192d  5e                   pop esi
// 0066192e  5b                   pop ebx
// 0066192f  c3                   ret 
// 00661930  57                   push edi
// 00661931  8b7e04               mov edi, dword ptr [esi + 4]
// 00661934  56                   push esi
// 00661935  e8c63c0000           call 0x665600
// 0066193a  6a00                 push 0
// 0066193c  53                   push ebx
// 0066193d  56                   push esi
// 0066193e  e8ad060000           call 0x661ff0
// 00661943  8bc7                 mov eax, edi
// 00661945  6a28                 push 0x28
// 00661947  bf29000000           mov edi, 0x29
// 0066194c  e8cfeeffff           call 0x660820
// 00661951  8b4630               mov eax, dword ptr [esi + 0x30]
// 00661954  53                   push ebx
// 00661955  50                   push eax
// 00661956  e8459b0000           call 0x66b4a0
// 0066195b  83c41c               add esp, 0x1c
// 0066195e  5f                   pop edi
// 0066195f  5e                   pop esi
// 00661960  5b                   pop ebx
// 00661961  c3                   ret 
// library lua-5.1.4/lparser.c (function _prefixexp)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
