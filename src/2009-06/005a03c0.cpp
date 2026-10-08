// from server: 100% by auto
// roc 2009-06 005a03c0  unit: seg_005a0000  size: 278 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a03c0
//
// 005a03c0  56                   push esi
// 005a03c1  8b742408             mov esi, dword ptr [esp + 8]
// 005a03c5  837e4c00             cmp dword ptr [esi + 0x4c], 0
// 005a03c9  57                   push edi
// 005a03ca  8bbea8010000         mov edi, dword ptr [esi + 0x1a8]
// 005a03d0  8b4718               mov eax, dword ptr [edi + 0x18]
// 005a03d3  8944240c             mov dword ptr [esp + 0xc], eax
// 005a03d7  7407                 je 0x5a03e0
// 005a03d9  c7464c02000000       mov dword ptr [esi + 0x4c], 2
// 005a03e0  807c241000           cmp byte ptr [esp + 0x10], 0
// 005a03e5  7417                 je 0x5a03fe
// 005a03e7  c7470410f35900       mov dword ptr [edi + 4], 0x59f310
// 005a03ee  c7470890035a00       mov dword ptr [edi + 8], 0x5a0390
// 005a03f5  c6471c01             mov byte ptr [edi + 0x1c], 1
// 005a03f9  e9ae000000           jmp 0x5a04ac
// 005a03fe  837e4c02             cmp dword ptr [esi + 0x4c], 2
// 005a0402  7509                 jne 0x5a040d
// 005a0404  c7470430005a00       mov dword ptr [edi + 4], 0x5a0030
// 005a040b  eb07                 jmp 0x5a0414
// 005a040d  c7470470ff5900       mov dword ptr [edi + 4], 0x59ff70
// 005a0414  55                   push ebp
// 005a0415  c74708e0496700       mov dword ptr [edi + 8], 0x6749e0
// 005a041c  8b6e70               mov ebp, dword ptr [esi + 0x70]
// 005a041f  83fd01               cmp ebp, 1
// 005a0422  7d1c                 jge 0x5a0440
// 005a0424  8b0e                 mov ecx, dword ptr [esi]
// 005a0426  c7411438000000       mov dword ptr [ecx + 0x14], 0x38
// 005a042d  8b16                 mov edx, dword ptr [esi]
// 005a042f  c7421801000000       mov dword ptr [edx + 0x18], 1
// 005a0436  8b06                 mov eax, dword ptr [esi]
// 005a0438  8b08                 mov ecx, dword ptr [eax]
// 005a043a  56                   push esi
// 005a043b  ffd1                 call ecx
// 005a043d  83c404               add esp, 4
// 005a0440  81fd00010000         cmp ebp, 0x100
// 005a0446  7e1c                 jle 0x5a0464
// 005a0448  8b16                 mov edx, dword ptr [esi]
// 005a044a  c7421439000000       mov dword ptr [edx + 0x14], 0x39
// 005a0451  8b06                 mov eax, dword ptr [esi]
// 005a0453  c7401800010000       mov dword ptr [eax + 0x18], 0x100
// 005a045a  8b0e                 mov ecx, dword ptr [esi]
// 005a045c  8b11                 mov edx, dword ptr [ecx]
// 005a045e  56                   push esi
// 005a045f  ffd2                 call edx
// 005a0461  83c404               add esp, 4
// 005a0464  837e4c02             cmp dword ptr [esi + 0x4c], 2
// 005a0468  7541                 jne 0x5a04ab
// 005a046a  8b465c               mov eax, dword ptr [esi + 0x5c]
// 005a046d  83c002               add eax, 2
// 005a0470  8d2c40               lea ebp, [eax + eax*2]
// 005a0473  03ed                 add ebp, ebp
// 005a0475  837f2000             cmp dword ptr [edi + 0x20], 0
// 005a0479  7512                 jne 0x5a048d
// 005a047b  8b4604               mov eax, dword ptr [esi + 4]
// 005a047e  8b4804               mov ecx, dword ptr [eax + 4]
// 005a0481  55                   push ebp
// 005a0482  6a01                 push 1
// 005a0484  56                   push esi
// 005a0485  ffd1                 call ecx
// 005a0487  83c40c               add esp, 0xc
// 005a048a  894720               mov dword ptr [edi + 0x20], eax
// 005a048d  8b5720               mov edx, dword ptr [edi + 0x20]
// 005a0490  55                   push ebp
// 005a0491  52                   push edx
// 005a0492  e8199afeff           call 0x589eb0
// 005a0497  83c408               add esp, 8
// 005a049a  837f2800             cmp dword ptr [edi + 0x28], 0
// 005a049e  7507                 jne 0x5a04a7
// 005a04a0  8bc6                 mov eax, esi
// 005a04a2  e849feffff           call 0x5a02f0
// 005a04a7  c6472400             mov byte ptr [edi + 0x24], 0
// 005a04ab  5d                   pop ebp
// 005a04ac  807f1c00             cmp byte ptr [edi + 0x1c], 0
// 005a04b0  7421                 je 0x5a04d3
// 005a04b2  33f6                 xor esi, esi
// 005a04b4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005a04b8  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 005a04bb  6800100000           push 0x1000
// 005a04c0  51                   push ecx
// 005a04c1  e8ea99feff           call 0x589eb0
// 005a04c6  46                   inc esi
// 005a04c7  83c408               add esp, 8
// 005a04ca  83fe20               cmp esi, 0x20
// 005a04cd  7ce5                 jl 0x5a04b4
// 005a04cf  c6471c00             mov byte ptr [edi + 0x1c], 0
// 005a04d3  5f                   pop edi
// 005a04d4  5e                   pop esi
// 005a04d5  c3                   ret 
// library jpeg-6b/jquant2.c (function _start_pass_2_quant)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
