// from server: 100% by auto
// roc 2008-06 00661630  unit: RBX::FilterStairs  size: 323 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00661630
//
// 00661630  81ec3c020000         sub esp, 0x23c
// 00661636  53                   push ebx
// 00661637  55                   push ebp
// 00661638  8bac2450020000       mov ebp, dword ptr [esp + 0x250]
// 0066163f  56                   push esi
// 00661640  8bd8                 mov ebx, eax
// 00661642  57                   push edi
// 00661643  8d442410             lea eax, [esp + 0x10]
// 00661647  e824f8ffff           call 0x660e70
// 0066164c  8b442410             mov eax, dword ptr [esp + 0x10]
// 00661650  89683c               mov dword ptr [eax + 0x3c], ebp
// 00661653  837b1028             cmp dword ptr [ebx + 0x10], 0x28
// 00661657  7421                 je 0x66167a
// 00661659  6a28                 push 0x28
// 0066165b  53                   push ebx
// 0066165c  e8af2a0000           call 0x664110
// 00661661  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 00661664  50                   push eax
// 00661665  68c0c48400           push 0x84c4c0
// 0066166a  51                   push ecx
// 0066166b  e85014fcff           call 0x622ac0
// 00661670  50                   push eax
// 00661671  53                   push ebx
// 00661672  e8992b0000           call 0x664210
// 00661677  83c41c               add esp, 0x1c
// 0066167a  53                   push ebx
// 0066167b  e8803f0000           call 0x665600
// 00661680  83c404               add esp, 4
// 00661683  83bc245402000000     cmp dword ptr [esp + 0x254], 0
// 0066168b  7468                 je 0x6616f5
// 0066168d  6a04                 push 4
// 0066168f  68f0c58400           push 0x84c5f0
// 00661694  53                   push ebx
// 00661695  e8962b0000           call 0x664230
// 0066169a  8b7330               mov esi, dword ptr [ebx + 0x30]
// 0066169d  0fb65632             movzx edx, byte ptr [esi + 0x32]
// 006616a1  42                   inc edx
// 006616a2  83c40c               add esp, 0xc
// 006616a5  81fac8000000         cmp edx, 0xc8
// 006616ab  8bf8                 mov edi, eax
// 006616ad  7e0f                 jle 0x6616be
// 006616af  b964c58400           mov ecx, 0x84c564
// 006616b4  bac8000000           mov edx, 0xc8
// 006616b9  e812f1ffff           call 0x6607d0
// 006616be  57                   push edi
// 006616bf  53                   push ebx
// 006616c0  e84bf2ffff           call 0x660910
// 006616c5  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 006616c9  6689844eac000000     mov word ptr [esi + ecx*2 + 0xac], ax
// 006616d1  8b4330               mov eax, dword ptr [ebx + 0x30]
// 006616d4  83c408               add esp, 8
// 006616d7  fe4032               inc byte ptr [eax + 0x32]
// 006616da  0fb65032             movzx edx, byte ptr [eax + 0x32]
// 006616de  0fb78c50aa000000     movzx ecx, word ptr [eax + edx*2 + 0xaa]
// 006616e6  8b10                 mov edx, dword ptr [eax]
// 006616e8  8b5218               mov edx, dword ptr [edx + 0x18]
// 006616eb  8b4018               mov eax, dword ptr [eax + 0x18]
// 006616ee  8d0c49               lea ecx, [ecx + ecx*2]
// 006616f1  89448a04             mov dword ptr [edx + ecx*4 + 4], eax
// 006616f5  8bfb                 mov edi, ebx
// 006616f7  e8f4fdffff           call 0x6614f0
// 006616fc  837b1029             cmp dword ptr [ebx + 0x10], 0x29
// 00661700  7421                 je 0x661723
// 00661702  6a29                 push 0x29
// 00661704  53                   push ebx
// 00661705  e8062a0000           call 0x664110
// 0066170a  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 0066170d  50                   push eax
// 0066170e  68c0c48400           push 0x84c4c0
// 00661713  51                   push ecx
// 00661714  e8a713fcff           call 0x622ac0
// 00661719  50                   push eax
// 0066171a  53                   push ebx
// 0066171b  e8f02a0000           call 0x664210
// 00661720  83c41c               add esp, 0x1c
// 00661723  53                   push ebx
// 00661724  e8d73e0000           call 0x665600
// 00661729  53                   push ebx
// 0066172a  e8811d0000           call 0x6634b0
// 0066172f  8b442418             mov eax, dword ptr [esp + 0x18]
// 00661733  8b5304               mov edx, dword ptr [ebx + 4]
// 00661736  895040               mov dword ptr [eax + 0x40], edx
// 00661739  6809010000           push 0x109
// 0066173e  8bc5                 mov eax, ebp
// 00661740  bf06010000           mov edi, 0x106
// 00661745  8bf3                 mov esi, ebx
// 00661747  e8d4f0ffff           call 0x660820
// 0066174c  53                   push ebx
// 0066174d  e8cef7ffff           call 0x660f20
// 00661752  8b8c2460020000       mov ecx, dword ptr [esp + 0x260]
// 00661759  51                   push ecx
// 0066175a  8d542424             lea edx, [esp + 0x24]
// 0066175e  52                   push edx
// 0066175f  53                   push ebx
// 00661760  e80bf6ffff           call 0x660d70
// 00661765  83c41c               add esp, 0x1c
// 00661768  5f                   pop edi
// 00661769  5e                   pop esi
// 0066176a  5d                   pop ebp
// 0066176b  5b                   pop ebx
// 0066176c  81c43c020000         add esp, 0x23c
// 00661772  c3                   ret 
// library lua-5.1.4/lparser.c (function _body)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
