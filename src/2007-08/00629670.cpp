// from server: 100% by auto
// roc 2007-08 00629670  unit: RBX::AssemblyStage  size: 187 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00629670
//
// 00629670  53                   push ebx
// 00629671  55                   push ebp
// 00629672  56                   push esi
// 00629673  8b742410             mov esi, dword ptr [esp + 0x10]
// 00629677  57                   push edi
// 00629678  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0062967c  57                   push edi
// 0062967d  56                   push esi
// 0062967e  e88dfdffff           call 0x629410
// 00629683  83c408               add esp, 8
// 00629686  833f0c               cmp dword ptr [edi], 0xc
// 00629689  7516                 jne 0x6296a1
// 0062968b  8b4708               mov eax, dword ptr [edi + 8]
// 0062968e  a900010000           test eax, 0x100
// 00629693  750c                 jne 0x6296a1
// 00629695  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 00629699  3bc1                 cmp eax, ecx
// 0062969b  7c04                 jl 0x6296a1
// 0062969d  834624ff             add dword ptr [esi + 0x24], -1
// 006296a1  8b16                 mov edx, dword ptr [esi]
// 006296a3  8b6e24               mov ebp, dword ptr [esi + 0x24]
// 006296a6  0fb6424b             movzx eax, byte ptr [edx + 0x4b]
// 006296aa  8d5d02               lea ebx, [ebp + 2]
// 006296ad  3bd8                 cmp ebx, eax
// 006296af  7e1e                 jle 0x6296cf
// 006296b1  81fbfa000000         cmp ebx, 0xfa
// 006296b7  7c11                 jl 0x6296ca
// 006296b9  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 006296bc  68fc4b7c00           push 0x7c4bfc
// 006296c1  51                   push ecx
// 006296c2  e8f9defeff           call 0x6175c0
// 006296c7  83c408               add esp, 8
// 006296ca  8b16                 mov edx, dword ptr [esi]
// 006296cc  885a4b               mov byte ptr [edx + 0x4b], bl
// 006296cf  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 006296d3  83462402             add dword ptr [esi + 0x24], 2
// 006296d7  53                   push ebx
// 006296d8  56                   push esi
// 006296d9  e8a2fdffff           call 0x629480
// 006296de  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 006296e1  8b5108               mov edx, dword ptr [ecx + 8]
// 006296e4  8b4f08               mov ecx, dword ptr [edi + 8]
// 006296e7  c1e109               shl ecx, 9
// 006296ea  0bc8                 or ecx, eax
// 006296ec  c1e108               shl ecx, 8
// 006296ef  0bcd                 or ecx, ebp
// 006296f1  c1e106               shl ecx, 6
// 006296f4  52                   push edx
// 006296f5  83c90b               or ecx, 0xb
// 006296f8  51                   push ecx
// 006296f9  e8e2f5ffff           call 0x628ce0
// 006296fe  83c410               add esp, 0x10
// 00629701  833b0c               cmp dword ptr [ebx], 0xc
// 00629704  7517                 jne 0x62971d
// 00629706  8b5b08               mov ebx, dword ptr [ebx + 8]
// 00629709  f7c300010000         test ebx, 0x100
// 0062970f  750c                 jne 0x62971d
// 00629711  0fb65632             movzx edx, byte ptr [esi + 0x32]
// 00629715  3bda                 cmp ebx, edx
// 00629717  7c04                 jl 0x62971d
// 00629719  834624ff             add dword ptr [esi + 0x24], -1
// 0062971d  896f08               mov dword ptr [edi + 8], ebp
// 00629720  c7070c000000         mov dword ptr [edi], 0xc
// 00629726  5f                   pop edi
// 00629727  5e                   pop esi
// 00629728  5d                   pop ebp
// 00629729  5b                   pop ebx
// 0062972a  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_self)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
