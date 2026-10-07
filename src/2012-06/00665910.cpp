// roc 2012-06 00665910  unit: seg_00660000  size: 278 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00665910
//
// 00665910  56                   push esi
// 00665911  8b742408             mov esi, dword ptr [esp + 8]
// 00665915  837e4c00             cmp dword ptr [esi + 0x4c], 0
// 00665919  57                   push edi
// 0066591a  8bbea8010000         mov edi, dword ptr [esi + 0x1a8]
// 00665920  8b4718               mov eax, dword ptr [edi + 0x18]
// 00665923  8944240c             mov dword ptr [esp + 0xc], eax
// 00665927  7407                 je 0x665930
// 00665929  c7464c02000000       mov dword ptr [esi + 0x4c], 2
// 00665930  807c241000           cmp byte ptr [esp + 0x10], 0
// 00665935  7417                 je 0x66594e
// 00665937  c7470460486600       mov dword ptr [edi + 4], 0x664860
// 0066593e  c74708e0586600       mov dword ptr [edi + 8], 0x6658e0
// 00665945  c6471c01             mov byte ptr [edi + 0x1c], 1
// 00665949  e9ae000000           jmp 0x6659fc
// 0066594e  837e4c02             cmp dword ptr [esi + 0x4c], 2
// 00665952  7509                 jne 0x66595d
// 00665954  c7470480556600       mov dword ptr [edi + 4], 0x665580
// 0066595b  eb07                 jmp 0x665964
// 0066595d  c74704c0546600       mov dword ptr [edi + 4], 0x6654c0
// 00665964  55                   push ebp
// 00665965  c7470890a75900       mov dword ptr [edi + 8], 0x59a790
// 0066596c  8b6e70               mov ebp, dword ptr [esi + 0x70]
// 0066596f  83fd01               cmp ebp, 1
// 00665972  7d1c                 jge 0x665990
// 00665974  8b0e                 mov ecx, dword ptr [esi]
// 00665976  c7411438000000       mov dword ptr [ecx + 0x14], 0x38
// 0066597d  8b16                 mov edx, dword ptr [esi]
// 0066597f  c7421801000000       mov dword ptr [edx + 0x18], 1
// 00665986  8b06                 mov eax, dword ptr [esi]
// 00665988  8b08                 mov ecx, dword ptr [eax]
// 0066598a  56                   push esi
// 0066598b  ffd1                 call ecx
// 0066598d  83c404               add esp, 4
// 00665990  81fd00010000         cmp ebp, 0x100
// 00665996  7e1c                 jle 0x6659b4
// 00665998  8b16                 mov edx, dword ptr [esi]
// 0066599a  c7421439000000       mov dword ptr [edx + 0x14], 0x39
// 006659a1  8b06                 mov eax, dword ptr [esi]
// 006659a3  c7401800010000       mov dword ptr [eax + 0x18], 0x100
// 006659aa  8b0e                 mov ecx, dword ptr [esi]
// 006659ac  8b11                 mov edx, dword ptr [ecx]
// 006659ae  56                   push esi
// 006659af  ffd2                 call edx
// 006659b1  83c404               add esp, 4
// 006659b4  837e4c02             cmp dword ptr [esi + 0x4c], 2
// 006659b8  7541                 jne 0x6659fb
// 006659ba  8b465c               mov eax, dword ptr [esi + 0x5c]
// 006659bd  83c002               add eax, 2
// 006659c0  8d2c40               lea ebp, [eax + eax*2]
// 006659c3  03ed                 add ebp, ebp
// 006659c5  837f2000             cmp dword ptr [edi + 0x20], 0
// 006659c9  7512                 jne 0x6659dd
// 006659cb  8b4604               mov eax, dword ptr [esi + 4]
// 006659ce  8b4804               mov ecx, dword ptr [eax + 4]
// 006659d1  55                   push ebp
// 006659d2  6a01                 push 1
// 006659d4  56                   push esi
// 006659d5  ffd1                 call ecx
// 006659d7  83c40c               add esp, 0xc
// 006659da  894720               mov dword ptr [edi + 0x20], eax
// 006659dd  8b5720               mov edx, dword ptr [edi + 0x20]
// 006659e0  55                   push ebp
// 006659e1  52                   push edx
// 006659e2  e869dbfeff           call 0x653550
// 006659e7  83c408               add esp, 8
// 006659ea  837f2800             cmp dword ptr [edi + 0x28], 0
// 006659ee  7507                 jne 0x6659f7
// 006659f0  8bc6                 mov eax, esi
// 006659f2  e849feffff           call 0x665840
// 006659f7  c6472400             mov byte ptr [edi + 0x24], 0
// 006659fb  5d                   pop ebp
// 006659fc  807f1c00             cmp byte ptr [edi + 0x1c], 0
// 00665a00  7421                 je 0x665a23
// 00665a02  33f6                 xor esi, esi
// 00665a04  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00665a08  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 00665a0b  6800100000           push 0x1000
// 00665a10  51                   push ecx
// 00665a11  e83adbfeff           call 0x653550
// 00665a16  46                   inc esi
// 00665a17  83c408               add esp, 8
// 00665a1a  83fe20               cmp esi, 0x20
// 00665a1d  7ce5                 jl 0x665a04
// 00665a1f  c6471c00             mov byte ptr [edi + 0x1c], 0
// 00665a23  5f                   pop edi
// 00665a24  5e                   pop esi
// 00665a25  c3                   ret 
// library jpeg-6b/jquant2.c (function _start_pass_2_quant)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
