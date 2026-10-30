// roc 2009-12 00624830  unit: seg_00620000  size: 387 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00624830
//
// 00624830  83ec08               sub esp, 8
// 00624833  807c241000           cmp byte ptr [esp + 0x10], 0
// 00624838  56                   push esi
// 00624839  8b742410             mov esi, dword ptr [esp + 0x10]
// 0062483d  57                   push edi
// 0062483e  8bbe5c010000         mov edi, dword ptr [esi + 0x15c]
// 00624844  7410                 je 0x624856
// 00624846  c7470450446200       mov dword ptr [edi + 4], 0x624450
// 0062484d  c7470850476200       mov dword ptr [edi + 8], 0x624750
// 00624854  eb0e                 jmp 0x624864
// 00624856  c7470440416200       mov dword ptr [edi + 4], 0x624140
// 0062485d  c74708a0426200       mov dword ptr [edi + 8], 0x6242a0
// 00624864  83bee400000000       cmp dword ptr [esi + 0xe4], 0
// 0062486b  c744240800000000     mov dword ptr [esp + 8], 0
// 00624873  0f8e20010000         jle 0x624999
// 00624879  8d4714               lea eax, [edi + 0x14]
// 0062487c  8d8ee8000000         lea ecx, [esi + 0xe8]
// 00624882  53                   push ebx
// 00624883  89442410             mov dword ptr [esp + 0x10], eax
// 00624887  894c2418             mov dword ptr [esp + 0x18], ecx
// 0062488b  55                   push ebp
// 0062488c  8d642400             lea esp, [esp]
// 00624890  807c242000           cmp byte ptr [esp + 0x20], 0
// 00624895  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00624899  8b02                 mov eax, dword ptr [edx]
// 0062489b  8b6814               mov ebp, dword ptr [eax + 0x14]
// 0062489e  8b5818               mov ebx, dword ptr [eax + 0x18]
// 006248a1  0f84a6000000         je 0x62494d
// 006248a7  85ed                 test ebp, ebp
// 006248a9  7c05                 jl 0x6248b0
// 006248ab  83fd04               cmp ebp, 4
// 006248ae  7c18                 jl 0x6248c8
// 006248b0  8b06                 mov eax, dword ptr [esi]
// 006248b2  c7401432000000       mov dword ptr [eax + 0x14], 0x32
// 006248b9  8b0e                 mov ecx, dword ptr [esi]
// 006248bb  896918               mov dword ptr [ecx + 0x18], ebp
// 006248be  8b16                 mov edx, dword ptr [esi]
// 006248c0  8b02                 mov eax, dword ptr [edx]
// 006248c2  56                   push esi
// 006248c3  ffd0                 call eax
// 006248c5  83c404               add esp, 4
// 006248c8  85db                 test ebx, ebx
// 006248ca  7c05                 jl 0x6248d1
// 006248cc  83fb04               cmp ebx, 4
// 006248cf  7c18                 jl 0x6248e9
// 006248d1  8b0e                 mov ecx, dword ptr [esi]
// 006248d3  c7411432000000       mov dword ptr [ecx + 0x14], 0x32
// 006248da  8b16                 mov edx, dword ptr [esi]
// 006248dc  895a18               mov dword ptr [edx + 0x18], ebx
// 006248df  8b06                 mov eax, dword ptr [esi]
// 006248e1  8b08                 mov ecx, dword ptr [eax]
// 006248e3  56                   push esi
// 006248e4  ffd1                 call ecx
// 006248e6  83c404               add esp, 4
// 006248e9  837caf4c00           cmp dword ptr [edi + ebp*4 + 0x4c], 0
// 006248ee  7516                 jne 0x624906
// 006248f0  8b5604               mov edx, dword ptr [esi + 4]
// 006248f3  8b02                 mov eax, dword ptr [edx]
// 006248f5  6804040000           push 0x404
// 006248fa  6a01                 push 1
// 006248fc  56                   push esi
// 006248fd  ffd0                 call eax
// 006248ff  83c40c               add esp, 0xc
// 00624902  8944af4c             mov dword ptr [edi + ebp*4 + 0x4c], eax
// 00624906  8b4caf4c             mov ecx, dword ptr [edi + ebp*4 + 0x4c]
// 0062490a  6804040000           push 0x404
// 0062490f  6a00                 push 0
// 00624911  51                   push ecx
// 00624912  e88d011d00           call 0x7f4aa4
// 00624917  83c40c               add esp, 0xc
// 0062491a  837c9f5c00           cmp dword ptr [edi + ebx*4 + 0x5c], 0
// 0062491f  7516                 jne 0x624937
// 00624921  8b5604               mov edx, dword ptr [esi + 4]
// 00624924  8b02                 mov eax, dword ptr [edx]
// 00624926  6804040000           push 0x404
// 0062492b  6a01                 push 1
// 0062492d  56                   push esi
// 0062492e  ffd0                 call eax
// 00624930  83c40c               add esp, 0xc
// 00624933  89449f5c             mov dword ptr [edi + ebx*4 + 0x5c], eax
// 00624937  8b4c9f5c             mov ecx, dword ptr [edi + ebx*4 + 0x5c]
// 0062493b  6804040000           push 0x404
// 00624940  6a00                 push 0
// 00624942  51                   push ecx
// 00624943  e85c011d00           call 0x7f4aa4
// 00624948  83c40c               add esp, 0xc
// 0062494b  eb1f                 jmp 0x62496c
// 0062494d  8d54af2c             lea edx, [edi + ebp*4 + 0x2c]
// 00624951  52                   push edx
// 00624952  55                   push ebp
// 00624953  6a01                 push 1
// 00624955  56                   push esi
// 00624956  e8c5f2ffff           call 0x623c20
// 0062495b  8d449f3c             lea eax, [edi + ebx*4 + 0x3c]
// 0062495f  50                   push eax
// 00624960  53                   push ebx
// 00624961  6a00                 push 0
// 00624963  56                   push esi
// 00624964  e8b7f2ffff           call 0x623c20
// 00624969  83c420               add esp, 0x20
// 0062496c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00624970  8b442410             mov eax, dword ptr [esp + 0x10]
// 00624974  8344241c04           add dword ptr [esp + 0x1c], 4
// 00624979  c70100000000         mov dword ptr [ecx], 0
// 0062497f  40                   inc eax
// 00624980  83c104               add ecx, 4
// 00624983  3b86e4000000         cmp eax, dword ptr [esi + 0xe4]
// 00624989  89442410             mov dword ptr [esp + 0x10], eax
// 0062498d  894c2414             mov dword ptr [esp + 0x14], ecx
// 00624991  0f8cf9feffff         jl 0x624890
// 00624997  5d                   pop ebp
// 00624998  5b                   pop ebx
// 00624999  33c0                 xor eax, eax
// 0062499b  89470c               mov dword ptr [edi + 0xc], eax
// 0062499e  894710               mov dword ptr [edi + 0x10], eax
// 006249a1  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 006249a7  894f24               mov dword ptr [edi + 0x24], ecx
// 006249aa  894728               mov dword ptr [edi + 0x28], eax
// 006249ad  5f                   pop edi
// 006249ae  5e                   pop esi
// 006249af  83c408               add esp, 8
// 006249b2  c3                   ret 
// library jpeg-6b/jchuff.c (function _start_pass_huff)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jchuff.c
