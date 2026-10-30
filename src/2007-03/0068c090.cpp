// roc 2007-03 0068c090  unit: seg_00680000  size: 363 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0068c090
//
// 0068c090  6aff                 push -1
// 0068c092  6808487600           push 0x764808
// 0068c097  64a100000000         mov eax, dword ptr fs:[0]
// 0068c09d  50                   push eax
// 0068c09e  81ec84000000         sub esp, 0x84
// 0068c0a4  53                   push ebx
// 0068c0a5  56                   push esi
// 0068c0a6  57                   push edi
// 0068c0a7  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 0068c0ac  33c4                 xor eax, esp
// 0068c0ae  50                   push eax
// 0068c0af  8d842494000000       lea eax, [esp + 0x94]
// 0068c0b6  64a300000000         mov dword ptr fs:[0], eax
// 0068c0bc  8bf1                 mov esi, ecx
// 0068c0be  8dbed0000000         lea edi, [esi + 0xd0]
// 0068c0c4  8bcf                 mov ecx, edi
// 0068c0c6  ff1528db7700         call dword ptr [0x77db28]
// 0068c0cc  84c0                 test al, al
// 0068c0ce  742d                 je 0x68c0fd
// 0068c0d0  8d4c244c             lea ecx, [esp + 0x4c]
// 0068c0d4  e8b7f6fdff           call 0x66b790
// 0068c0d9  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 0068c0e0  8b10                 mov edx, dword ptr [eax]
// 0068c0e2  8911                 mov dword ptr [ecx], edx
// 0068c0e4  8b5004               mov edx, dword ptr [eax + 4]
// 0068c0e7  895104               mov dword ptr [ecx + 4], edx
// 0068c0ea  8b5008               mov edx, dword ptr [eax + 8]
// 0068c0ed  8b400c               mov eax, dword ptr [eax + 0xc]
// 0068c0f0  895108               mov dword ptr [ecx + 8], edx
// 0068c0f3  89410c               mov dword ptr [ecx + 0xc], eax
// 0068c0f6  8bc1                 mov eax, ecx
// 0068c0f8  e9e3000000           jmp 0x68c1e0
// 0068c0fd  56                   push esi
// 0068c0fe  8d4c2414             lea ecx, [esp + 0x14]
// 0068c102  e859f7fdff           call 0x66b860
// 0068c107  6a00                 push 0
// 0068c109  8d4c2424             lea ecx, [esp + 0x24]
// 0068c10d  e88ce90a00           call 0x73aa9e
// 0068c112  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0068c115  6a00                 push 0
// 0068c117  6a00                 push 0
// 0068c119  6a31                 push 0x31
// 0068c11b  51                   push ecx
// 0068c11c  c78424ac00000000000000 mov dword ptr [esp + 0xac], 0
// 0068c127  ff1550ee7700         call dword ptr [0x77ee50]
// 0068c12d  50                   push eax
// 0068c12e  e89925f9ff           call 0x61e6cc
// 0068c133  50                   push eax
// 0068c134  8d542424             lea edx, [esp + 0x24]
// 0068c138  52                   push edx
// 0068c139  8d4c2444             lea ecx, [esp + 0x44]
// 0068c13d  e8aefcfdff           call 0x66bdf0
// 0068c142  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0068c146  8d44245c             lea eax, [esp + 0x5c]
// 0068c14a  50                   push eax
// 0068c14b  51                   push ecx
// 0068c14c  ff151cd17700         call dword ptr [0x77d11c]
// 0068c152  8bcf                 mov ecx, edi
// 0068c154  ff1520db7700         call dword ptr [0x77db20]
// 0068c15a  8bcf                 mov ecx, edi
// 0068c15c  8bd8                 mov ebx, eax
// 0068c15e  ff1554dd7700         call dword ptr [0x77dd54]
// 0068c164  8d542434             lea edx, [esp + 0x34]
// 0068c168  52                   push edx
// 0068c169  53                   push ebx
// 0068c16a  50                   push eax
// 0068c16b  8b442434             mov eax, dword ptr [esp + 0x34]
// 0068c16f  50                   push eax
// 0068c170  ff15bcd07700         call dword ptr [0x77d0bc]
// 0068c176  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 0068c17a  8b542434             mov edx, dword ptr [esp + 0x34]
// 0068c17e  8bbecc000000         mov edi, dword ptr [esi + 0xcc]
// 0068c184  8b442418             mov eax, dword ptr [esp + 0x18]
// 0068c188  8d540a0c             lea edx, [edx + ecx + 0xc]
// 0068c18c  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0068c190  2b4c2414             sub ecx, dword ptr [esp + 0x14]
// 0068c194  f7df                 neg edi
// 0068c196  1bff                 sbb edi, edi
// 0068c198  83e712               and edi, 0x12
// 0068c19b  2bc7                 sub eax, edi
// 0068c19d  2b442410             sub eax, dword ptr [esp + 0x10]
// 0068c1a1  3bd0                 cmp edx, eax
// 0068c1a3  7e02                 jle 0x68c1a7
// 0068c1a5  8bd0                 mov edx, eax
// 0068c1a7  8b766c               mov esi, dword ptr [esi + 0x6c]
// 0068c1aa  8bbc24a4000000       mov edi, dword ptr [esp + 0xa4]
// 0068c1b1  2bce                 sub ecx, esi
// 0068c1b3  8d0416               lea eax, [esi + edx]
// 0068c1b6  894f0c               mov dword ptr [edi + 0xc], ecx
// 0068c1b9  8d4c243c             lea ecx, [esp + 0x3c]
// 0068c1bd  8937                 mov dword ptr [edi], esi
// 0068c1bf  897704               mov dword ptr [edi + 4], esi
// 0068c1c2  894708               mov dword ptr [edi + 8], eax
// 0068c1c5  e8a6fcfdff           call 0x66be70
// 0068c1ca  8d4c2420             lea ecx, [esp + 0x20]
// 0068c1ce  c784249c000000ffffffff mov dword ptr [esp + 0x9c], 0xffffffff
// 0068c1d9  e8bae80a00           call 0x73aa98
// 0068c1de  8bc7                 mov eax, edi
// 0068c1e0  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 0068c1e7  64890d00000000       mov dword ptr fs:[0], ecx
// 0068c1ee  59                   pop ecx
// 0068c1ef  5f                   pop edi
// 0068c1f0  5e                   pop esi
// 0068c1f1  5b                   pop ebx
// 0068c1f2  81c490000000         add esp, 0x90
// 0068c1f8  c20400               ret 4
// copied from an identical function in another client (function ?GetTextRect@CXTCaption@@UBE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTCaption.cpp