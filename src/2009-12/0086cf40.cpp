// roc 2009-12 0086cf40  unit: CSelectionCaption  size: 363 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086cf40
//
// 0086cf40  6aff                 push -1
// 0086cf42  68a8f89500           push 0x95f8a8
// 0086cf47  64a100000000         mov eax, dword ptr fs:[0]
// 0086cf4d  50                   push eax
// 0086cf4e  81ec84000000         sub esp, 0x84
// 0086cf54  53                   push ebx
// 0086cf55  56                   push esi
// 0086cf56  57                   push edi
// 0086cf57  a10052b600           mov eax, dword ptr [0xb65200]
// 0086cf5c  33c4                 xor eax, esp
// 0086cf5e  50                   push eax
// 0086cf5f  8d842494000000       lea eax, [esp + 0x94]
// 0086cf66  64a300000000         mov dword ptr fs:[0], eax
// 0086cf6c  8bf1                 mov esi, ecx
// 0086cf6e  8dbed0000000         lea edi, [esi + 0xd0]
// 0086cf74  8bcf                 mov ecx, edi
// 0086cf76  ff15bcdd9800         call dword ptr [0x98ddbc]
// 0086cf7c  84c0                 test al, al
// 0086cf7e  742d                 je 0x86cfad
// 0086cf80  8d4c244c             lea ecx, [esp + 0x4c]
// 0086cf84  e8a7e2fdff           call 0x84b230
// 0086cf89  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 0086cf90  8b10                 mov edx, dword ptr [eax]
// 0086cf92  8911                 mov dword ptr [ecx], edx
// 0086cf94  8b5004               mov edx, dword ptr [eax + 4]
// 0086cf97  895104               mov dword ptr [ecx + 4], edx
// 0086cf9a  8b5008               mov edx, dword ptr [eax + 8]
// 0086cf9d  8b400c               mov eax, dword ptr [eax + 0xc]
// 0086cfa0  895108               mov dword ptr [ecx + 8], edx
// 0086cfa3  89410c               mov dword ptr [ecx + 0xc], eax
// 0086cfa6  8bc1                 mov eax, ecx
// 0086cfa8  e9e3000000           jmp 0x86d090
// 0086cfad  56                   push esi
// 0086cfae  8d4c2414             lea ecx, [esp + 0x14]
// 0086cfb2  e819e3fdff           call 0x84b2d0
// 0086cfb7  6a00                 push 0
// 0086cfb9  8d4c2424             lea ecx, [esp + 0x24]
// 0086cfbd  e8c8940b00           call 0x92648a
// 0086cfc2  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0086cfc5  6a00                 push 0
// 0086cfc7  6a00                 push 0
// 0086cfc9  6a31                 push 0x31
// 0086cfcb  51                   push ecx
// 0086cfcc  c78424ac00000000000000 mov dword ptr [esp + 0xac], 0
// 0086cfd7  ff15c4cb9800         call dword ptr [0x98cbc4]
// 0086cfdd  50                   push eax
// 0086cfde  e88173f8ff           call 0x7f4364
// 0086cfe3  50                   push eax
// 0086cfe4  8d542424             lea edx, [esp + 0x24]
// 0086cfe8  52                   push edx
// 0086cfe9  8d4c2444             lea ecx, [esp + 0x44]
// 0086cfed  e86ee6fdff           call 0x84b660
// 0086cff2  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0086cff6  8d44245c             lea eax, [esp + 0x5c]
// 0086cffa  50                   push eax
// 0086cffb  51                   push ecx
// 0086cffc  ff15dcb09800         call dword ptr [0x98b0dc]
// 0086d002  8bcf                 mov ecx, edi
// 0086d004  ff15b4dd9800         call dword ptr [0x98ddb4]
// 0086d00a  8bcf                 mov ecx, edi
// 0086d00c  8bd8                 mov ebx, eax
// 0086d00e  ff1580de9800         call dword ptr [0x98de80]
// 0086d014  8d542434             lea edx, [esp + 0x34]
// 0086d018  52                   push edx
// 0086d019  53                   push ebx
// 0086d01a  50                   push eax
// 0086d01b  8b442434             mov eax, dword ptr [esp + 0x34]
// 0086d01f  50                   push eax
// 0086d020  ff156cb19800         call dword ptr [0x98b16c]
// 0086d026  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 0086d02a  8b542434             mov edx, dword ptr [esp + 0x34]
// 0086d02e  8bbecc000000         mov edi, dword ptr [esi + 0xcc]
// 0086d034  8b442418             mov eax, dword ptr [esp + 0x18]
// 0086d038  8d540a0c             lea edx, [edx + ecx + 0xc]
// 0086d03c  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0086d040  2b4c2414             sub ecx, dword ptr [esp + 0x14]
// 0086d044  f7df                 neg edi
// 0086d046  1bff                 sbb edi, edi
// 0086d048  83e712               and edi, 0x12
// 0086d04b  2bc7                 sub eax, edi
// 0086d04d  2b442410             sub eax, dword ptr [esp + 0x10]
// 0086d051  3bd0                 cmp edx, eax
// 0086d053  7e02                 jle 0x86d057
// 0086d055  8bd0                 mov edx, eax
// 0086d057  8b766c               mov esi, dword ptr [esi + 0x6c]
// 0086d05a  8bbc24a4000000       mov edi, dword ptr [esp + 0xa4]
// 0086d061  2bce                 sub ecx, esi
// 0086d063  8d0416               lea eax, [esi + edx]
// 0086d066  894f0c               mov dword ptr [edi + 0xc], ecx
// 0086d069  8d4c243c             lea ecx, [esp + 0x3c]
// 0086d06d  8937                 mov dword ptr [edi], esi
// 0086d06f  897704               mov dword ptr [edi + 4], esi
// 0086d072  894708               mov dword ptr [edi + 8], eax
// 0086d075  e866e6fdff           call 0x84b6e0
// 0086d07a  8d4c2420             lea ecx, [esp + 0x20]
// 0086d07e  c784249c000000ffffffff mov dword ptr [esp + 0x9c], 0xffffffff
// 0086d089  e8f6930b00           call 0x926484
// 0086d08e  8bc7                 mov eax, edi
// 0086d090  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 0086d097  64890d00000000       mov dword ptr fs:[0], ecx
// 0086d09e  59                   pop ecx
// 0086d09f  5f                   pop edi
// 0086d0a0  5e                   pop esi
// 0086d0a1  5b                   pop ebx
// 0086d0a2  81c490000000         add esp, 0x90
// 0086d0a8  c20400               ret 4
// copied from an identical function in another client (function ?GetTextRect@CXTCaption@@UBE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTCaption.cpp