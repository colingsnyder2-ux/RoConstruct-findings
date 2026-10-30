// roc 2010-06 00821c10  unit: CSelectionCaption  size: 363 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00821c10
//
// 00821c10  6aff                 push -1
// 00821c12  68d8589b00           push 0x9b58d8
// 00821c17  64a100000000         mov eax, dword ptr fs:[0]
// 00821c1d  50                   push eax
// 00821c1e  81ec84000000         sub esp, 0x84
// 00821c24  53                   push ebx
// 00821c25  56                   push esi
// 00821c26  57                   push edi
// 00821c27  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 00821c2c  33c4                 xor eax, esp
// 00821c2e  50                   push eax
// 00821c2f  8d842494000000       lea eax, [esp + 0x94]
// 00821c36  64a300000000         mov dword ptr fs:[0], eax
// 00821c3c  8bf1                 mov esi, ecx
// 00821c3e  8dbed0000000         lea edi, [esi + 0xd0]
// 00821c44  8bcf                 mov ecx, edi
// 00821c46  ff15eccd9e00         call dword ptr [0x9ecdec]
// 00821c4c  84c0                 test al, al
// 00821c4e  742d                 je 0x821c7d
// 00821c50  8d4c244c             lea ecx, [esp + 0x4c]
// 00821c54  e817d6fdff           call 0x7ff270
// 00821c59  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 00821c60  8b10                 mov edx, dword ptr [eax]
// 00821c62  8911                 mov dword ptr [ecx], edx
// 00821c64  8b5004               mov edx, dword ptr [eax + 4]
// 00821c67  895104               mov dword ptr [ecx + 4], edx
// 00821c6a  8b5008               mov edx, dword ptr [eax + 8]
// 00821c6d  8b400c               mov eax, dword ptr [eax + 0xc]
// 00821c70  895108               mov dword ptr [ecx + 8], edx
// 00821c73  89410c               mov dword ptr [ecx + 0xc], eax
// 00821c76  8bc1                 mov eax, ecx
// 00821c78  e9e3000000           jmp 0x821d60
// 00821c7d  56                   push esi
// 00821c7e  8d4c2414             lea ecx, [esp + 0x14]
// 00821c82  e889d6fdff           call 0x7ff310
// 00821c87  6a00                 push 0
// 00821c89  8d4c2424             lea ecx, [esp + 0x24]
// 00821c8d  e80ab11500           call 0x97cd9c
// 00821c92  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00821c95  6a00                 push 0
// 00821c97  6a00                 push 0
// 00821c99  6a31                 push 0x31
// 00821c9b  51                   push ecx
// 00821c9c  c78424ac00000000000000 mov dword ptr [esp + 0xac], 0
// 00821ca7  ff1554ba9e00         call dword ptr [0x9eba54]
// 00821cad  50                   push eax
// 00821cae  e8f167f8ff           call 0x7a84a4
// 00821cb3  50                   push eax
// 00821cb4  8d542424             lea edx, [esp + 0x24]
// 00821cb8  52                   push edx
// 00821cb9  8d4c2444             lea ecx, [esp + 0x44]
// 00821cbd  e8ded9fdff           call 0x7ff6a0
// 00821cc2  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00821cc6  8d44245c             lea eax, [esp + 0x5c]
// 00821cca  50                   push eax
// 00821ccb  51                   push ecx
// 00821ccc  ff1524a19e00         call dword ptr [0x9ea124]
// 00821cd2  8bcf                 mov ecx, edi
// 00821cd4  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 00821cda  8bcf                 mov ecx, edi
// 00821cdc  8bd8                 mov ebx, eax
// 00821cde  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 00821ce4  8d542434             lea edx, [esp + 0x34]
// 00821ce8  52                   push edx
// 00821ce9  53                   push ebx
// 00821cea  50                   push eax
// 00821ceb  8b442434             mov eax, dword ptr [esp + 0x34]
// 00821cef  50                   push eax
// 00821cf0  ff1594a19e00         call dword ptr [0x9ea194]
// 00821cf6  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00821cfa  8b542434             mov edx, dword ptr [esp + 0x34]
// 00821cfe  8bbecc000000         mov edi, dword ptr [esi + 0xcc]
// 00821d04  8b442418             mov eax, dword ptr [esp + 0x18]
// 00821d08  8d540a0c             lea edx, [edx + ecx + 0xc]
// 00821d0c  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00821d10  2b4c2414             sub ecx, dword ptr [esp + 0x14]
// 00821d14  f7df                 neg edi
// 00821d16  1bff                 sbb edi, edi
// 00821d18  83e712               and edi, 0x12
// 00821d1b  2bc7                 sub eax, edi
// 00821d1d  2b442410             sub eax, dword ptr [esp + 0x10]
// 00821d21  3bd0                 cmp edx, eax
// 00821d23  7e02                 jle 0x821d27
// 00821d25  8bd0                 mov edx, eax
// 00821d27  8b766c               mov esi, dword ptr [esi + 0x6c]
// 00821d2a  8bbc24a4000000       mov edi, dword ptr [esp + 0xa4]
// 00821d31  2bce                 sub ecx, esi
// 00821d33  8d0416               lea eax, [esi + edx]
// 00821d36  894f0c               mov dword ptr [edi + 0xc], ecx
// 00821d39  8d4c243c             lea ecx, [esp + 0x3c]
// 00821d3d  8937                 mov dword ptr [edi], esi
// 00821d3f  897704               mov dword ptr [edi + 4], esi
// 00821d42  894708               mov dword ptr [edi + 8], eax
// 00821d45  e8d6d9fdff           call 0x7ff720
// 00821d4a  8d4c2420             lea ecx, [esp + 0x20]
// 00821d4e  c784249c000000ffffffff mov dword ptr [esp + 0x9c], 0xffffffff
// 00821d59  e838b01500           call 0x97cd96
// 00821d5e  8bc7                 mov eax, edi
// 00821d60  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 00821d67  64890d00000000       mov dword ptr fs:[0], ecx
// 00821d6e  59                   pop ecx
// 00821d6f  5f                   pop edi
// 00821d70  5e                   pop esi
// 00821d71  5b                   pop ebx
// 00821d72  81c490000000         add esp, 0x90
// 00821d78  c20400               ret 4
// copied from an identical function in another client (function ?GetTextRect@CXTCaption@@UBE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTCaption.cpp