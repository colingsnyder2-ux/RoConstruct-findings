// roc 2009-12 00622520  unit: seg_00620000  size: 322 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00622520
//
// 00622520  56                   push esi
// 00622521  8b742408             mov esi, dword ptr [esp + 8]
// 00622525  8b4604               mov eax, dword ptr [esi + 4]
// 00622528  8b08                 mov ecx, dword ptr [eax]
// 0062252a  57                   push edi
// 0062252b  6a2c                 push 0x2c
// 0062252d  6a01                 push 1
// 0062252f  56                   push esi
// 00622530  ffd1                 call ecx
// 00622532  8bf8                 mov edi, eax
// 00622534  89bea8010000         mov dword ptr [esi + 0x1a8], edi
// 0062253a  83c40c               add esp, 0xc
// 0062253d  c707f0236200         mov dword ptr [edi], 0x6223f0
// 00622543  c7470c10256200       mov dword ptr [edi + 0xc], 0x622510
// 0062254a  c7472000000000       mov dword ptr [edi + 0x20], 0
// 00622551  c7472800000000       mov dword ptr [edi + 0x28], 0
// 00622558  837e6403             cmp dword ptr [esi + 0x64], 3
// 0062255c  7413                 je 0x622571
// 0062255e  8b16                 mov edx, dword ptr [esi]
// 00622560  c742142f000000       mov dword ptr [edx + 0x14], 0x2f
// 00622567  8b06                 mov eax, dword ptr [esi]
// 00622569  8b08                 mov ecx, dword ptr [eax]
// 0062256b  56                   push esi
// 0062256c  ffd1                 call ecx
// 0062256e  83c404               add esp, 4
// 00622571  8b5604               mov edx, dword ptr [esi + 4]
// 00622574  8b02                 mov eax, dword ptr [edx]
// 00622576  55                   push ebp
// 00622577  6880000000           push 0x80
// 0062257c  6a01                 push 1
// 0062257e  56                   push esi
// 0062257f  ffd0                 call eax
// 00622581  83c40c               add esp, 0xc
// 00622584  894718               mov dword ptr [edi + 0x18], eax
// 00622587  33ed                 xor ebp, ebp
// 00622589  8da42400000000       lea esp, [esp]
// 00622590  8b4e04               mov ecx, dword ptr [esi + 4]
// 00622593  8b5104               mov edx, dword ptr [ecx + 4]
// 00622596  6800100000           push 0x1000
// 0062259b  6a01                 push 1
// 0062259d  56                   push esi
// 0062259e  ffd2                 call edx
// 006225a0  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 006225a3  890429               mov dword ptr [ecx + ebp], eax
// 006225a6  83c504               add ebp, 4
// 006225a9  83c40c               add esp, 0xc
// 006225ac  81fd80000000         cmp ebp, 0x80
// 006225b2  7cdc                 jl 0x622590
// 006225b4  c6471c01             mov byte ptr [edi + 0x1c], 1
// 006225b8  807e5a00             cmp byte ptr [esi + 0x5a], 0
// 006225bc  7461                 je 0x62261f
// 006225be  8b6e54               mov ebp, dword ptr [esi + 0x54]
// 006225c1  83fd08               cmp ebp, 8
// 006225c4  7d1c                 jge 0x6225e2
// 006225c6  8b16                 mov edx, dword ptr [esi]
// 006225c8  c7421438000000       mov dword ptr [edx + 0x14], 0x38
// 006225cf  8b06                 mov eax, dword ptr [esi]
// 006225d1  c7401808000000       mov dword ptr [eax + 0x18], 8
// 006225d8  8b0e                 mov ecx, dword ptr [esi]
// 006225da  8b11                 mov edx, dword ptr [ecx]
// 006225dc  56                   push esi
// 006225dd  ffd2                 call edx
// 006225df  83c404               add esp, 4
// 006225e2  81fd00010000         cmp ebp, 0x100
// 006225e8  7e1c                 jle 0x622606
// 006225ea  8b06                 mov eax, dword ptr [esi]
// 006225ec  c7401439000000       mov dword ptr [eax + 0x14], 0x39
// 006225f3  8b0e                 mov ecx, dword ptr [esi]
// 006225f5  c7411800010000       mov dword ptr [ecx + 0x18], 0x100
// 006225fc  8b16                 mov edx, dword ptr [esi]
// 006225fe  8b02                 mov eax, dword ptr [edx]
// 00622600  56                   push esi
// 00622601  ffd0                 call eax
// 00622603  83c404               add esp, 4
// 00622606  8b4e04               mov ecx, dword ptr [esi + 4]
// 00622609  8b5108               mov edx, dword ptr [ecx + 8]
// 0062260c  6a03                 push 3
// 0062260e  55                   push ebp
// 0062260f  6a01                 push 1
// 00622611  56                   push esi
// 00622612  ffd2                 call edx
// 00622614  83c410               add esp, 0x10
// 00622617  894710               mov dword ptr [edi + 0x10], eax
// 0062261a  896f14               mov dword ptr [edi + 0x14], ebp
// 0062261d  eb07                 jmp 0x622626
// 0062261f  c7471000000000       mov dword ptr [edi + 0x10], 0
// 00622626  837e4c00             cmp dword ptr [esi + 0x4c], 0
// 0062262a  b902000000           mov ecx, 2
// 0062262f  5d                   pop ebp
// 00622630  7403                 je 0x622635
// 00622632  894e4c               mov dword ptr [esi + 0x4c], ecx
// 00622635  394e4c               cmp dword ptr [esi + 0x4c], ecx
// 00622638  7525                 jne 0x62265f
// 0062263a  8b465c               mov eax, dword ptr [esi + 0x5c]
// 0062263d  8b5604               mov edx, dword ptr [esi + 4]
// 00622640  03c1                 add eax, ecx
// 00622642  8b4a04               mov ecx, dword ptr [edx + 4]
// 00622645  8d0440               lea eax, [eax + eax*2]
// 00622648  03c0                 add eax, eax
// 0062264a  50                   push eax
// 0062264b  6a01                 push 1
// 0062264d  56                   push esi
// 0062264e  ffd1                 call ecx
// 00622650  83c40c               add esp, 0xc
// 00622653  894720               mov dword ptr [edi + 0x20], eax
// 00622656  5f                   pop edi
// 00622657  8bc6                 mov eax, esi
// 00622659  5e                   pop esi
// 0062265a  e9c1fcffff           jmp 0x622320
// 0062265f  5f                   pop edi
// 00622660  5e                   pop esi
// 00622661  c3                   ret 
// library jpeg-6b/jquant2.c (function _jinit_2pass_quantizer)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
