// roc 2007-08 0069ff90  unit: CSelectionCaption  size: 363 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069ff90
//
// 0069ff90  6aff                 push -1
// 0069ff92  6858427600           push 0x764258
// 0069ff97  64a100000000         mov eax, dword ptr fs:[0]
// 0069ff9d  50                   push eax
// 0069ff9e  81ec84000000         sub esp, 0x84
// 0069ffa4  53                   push ebx
// 0069ffa5  56                   push esi
// 0069ffa6  57                   push edi
// 0069ffa7  a188518b00           mov eax, dword ptr [0x8b5188]
// 0069ffac  33c4                 xor eax, esp
// 0069ffae  50                   push eax
// 0069ffaf  8d842494000000       lea eax, [esp + 0x94]
// 0069ffb6  64a300000000         mov dword ptr fs:[0], eax
// 0069ffbc  8bf1                 mov esi, ecx
// 0069ffbe  8dbed0000000         lea edi, [esi + 0xd0]
// 0069ffc4  8bcf                 mov ecx, edi
// 0069ffc6  ff15d0dc7700         call dword ptr [0x77dcd0]
// 0069ffcc  84c0                 test al, al
// 0069ffce  742d                 je 0x69fffd
// 0069ffd0  8d4c244c             lea ecx, [esp + 0x4c]
// 0069ffd4  e887fffdff           call 0x67ff60
// 0069ffd9  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 0069ffe0  8b10                 mov edx, dword ptr [eax]
// 0069ffe2  8911                 mov dword ptr [ecx], edx
// 0069ffe4  8b5004               mov edx, dword ptr [eax + 4]
// 0069ffe7  895104               mov dword ptr [ecx + 4], edx
// 0069ffea  8b5008               mov edx, dword ptr [eax + 8]
// 0069ffed  8b400c               mov eax, dword ptr [eax + 0xc]
// 0069fff0  895108               mov dword ptr [ecx + 8], edx
// 0069fff3  89410c               mov dword ptr [ecx + 0xc], eax
// 0069fff6  8bc1                 mov eax, ecx
// 0069fff8  e9e3000000           jmp 0x6a00e0
// 0069fffd  56                   push esi
// 0069fffe  8d4c2414             lea ecx, [esp + 0x14]
// 006a0002  e8f9fffdff           call 0x680000
// 006a0007  6a00                 push 0
// 006a0009  8d4c2424             lea ecx, [esp + 0x24]
// 006a000d  e89a830900           call 0x7383ac
// 006a0012  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 006a0015  6a00                 push 0
// 006a0017  6a00                 push 0
// 006a0019  6a31                 push 0x31
// 006a001b  51                   push ecx
// 006a001c  c78424ac00000000000000 mov dword ptr [esp + 0xac], 0
// 006a0027  ff15d8ec7700         call dword ptr [0x77ecd8]
// 006a002d  50                   push eax
// 006a002e  e8fb05f9ff           call 0x63062e
// 006a0033  50                   push eax
// 006a0034  8d542424             lea edx, [esp + 0x24]
// 006a0038  52                   push edx
// 006a0039  8d4c2444             lea ecx, [esp + 0x44]
// 006a003d  e80e05feff           call 0x680550
// 006a0042  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006a0046  8d44245c             lea eax, [esp + 0x5c]
// 006a004a  50                   push eax
// 006a004b  51                   push ecx
// 006a004c  ff15f0d07700         call dword ptr [0x77d0f0]
// 006a0052  8bcf                 mov ecx, edi
// 006a0054  ff15c8dc7700         call dword ptr [0x77dcc8]
// 006a005a  8bcf                 mov ecx, edi
// 006a005c  8bd8                 mov ebx, eax
// 006a005e  ff1598dd7700         call dword ptr [0x77dd98]
// 006a0064  8d542434             lea edx, [esp + 0x34]
// 006a0068  52                   push edx
// 006a0069  53                   push ebx
// 006a006a  50                   push eax
// 006a006b  8b442434             mov eax, dword ptr [esp + 0x34]
// 006a006f  50                   push eax
// 006a0070  ff15b8d07700         call dword ptr [0x77d0b8]
// 006a0076  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 006a007a  8b542434             mov edx, dword ptr [esp + 0x34]
// 006a007e  8bbecc000000         mov edi, dword ptr [esi + 0xcc]
// 006a0084  8b442418             mov eax, dword ptr [esp + 0x18]
// 006a0088  8d540a0c             lea edx, [edx + ecx + 0xc]
// 006a008c  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006a0090  2b4c2414             sub ecx, dword ptr [esp + 0x14]
// 006a0094  f7df                 neg edi
// 006a0096  1bff                 sbb edi, edi
// 006a0098  83e712               and edi, 0x12
// 006a009b  2bc7                 sub eax, edi
// 006a009d  2b442410             sub eax, dword ptr [esp + 0x10]
// 006a00a1  3bd0                 cmp edx, eax
// 006a00a3  7e02                 jle 0x6a00a7
// 006a00a5  8bd0                 mov edx, eax
// 006a00a7  8b766c               mov esi, dword ptr [esi + 0x6c]
// 006a00aa  8bbc24a4000000       mov edi, dword ptr [esp + 0xa4]
// 006a00b1  2bce                 sub ecx, esi
// 006a00b3  8d0416               lea eax, [esi + edx]
// 006a00b6  894f0c               mov dword ptr [edi + 0xc], ecx
// 006a00b9  8d4c243c             lea ecx, [esp + 0x3c]
// 006a00bd  8937                 mov dword ptr [edi], esi
// 006a00bf  897704               mov dword ptr [edi + 4], esi
// 006a00c2  894708               mov dword ptr [edi + 8], eax
// 006a00c5  e80605feff           call 0x6805d0
// 006a00ca  8d4c2420             lea ecx, [esp + 0x20]
// 006a00ce  c784249c000000ffffffff mov dword ptr [esp + 0x9c], 0xffffffff
// 006a00d9  e8c8820900           call 0x7383a6
// 006a00de  8bc7                 mov eax, edi
// 006a00e0  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 006a00e7  64890d00000000       mov dword ptr fs:[0], ecx
// 006a00ee  59                   pop ecx
// 006a00ef  5f                   pop edi
// 006a00f0  5e                   pop esi
// 006a00f1  5b                   pop ebx
// 006a00f2  81c490000000         add esp, 0x90
// 006a00f8  c20400               ret 4
// copied from an identical function in another client (function ?GetTextRect@CXTCaption@@UBE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTCaption.cpp