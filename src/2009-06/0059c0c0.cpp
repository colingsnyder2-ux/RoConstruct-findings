// from server: 100% by auto
// roc 2009-06 0059c0c0  unit: seg_00590000  size: 327 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0059c0c0
//
// 0059c0c0  53                   push ebx
// 0059c0c1  55                   push ebp
// 0059c0c2  56                   push esi
// 0059c0c3  8b742410             mov esi, dword ptr [esp + 0x10]
// 0059c0c7  8b4604               mov eax, dword ptr [esi + 4]
// 0059c0ca  8b08                 mov ecx, dword ptr [eax]
// 0059c0cc  6a74                 push 0x74
// 0059c0ce  6a01                 push 1
// 0059c0d0  56                   push esi
// 0059c0d1  ffd1                 call ecx
// 0059c0d3  8be8                 mov ebp, eax
// 0059c0d5  33db                 xor ebx, ebx
// 0059c0d7  89ae88010000         mov dword ptr [esi + 0x188], ebp
// 0059c0dd  83c40c               add esp, 0xc
// 0059c0e0  c7450080b25900       mov dword ptr [ebp], 0x59b280
// 0059c0e7  c7450870c05900       mov dword ptr [ebp + 8], 0x59c070
// 0059c0ee  895d70               mov dword ptr [ebp + 0x70], ebx
// 0059c0f1  385c2414             cmp byte ptr [esp + 0x14], bl
// 0059c0f5  0f8491000000         je 0x59c18c
// 0059c0fb  395e24               cmp dword ptr [esi + 0x24], ebx
// 0059c0fe  57                   push edi
// 0059c0ff  8bbec4000000         mov edi, dword ptr [esi + 0xc4]
// 0059c105  895c2418             mov dword ptr [esp + 0x18], ebx
// 0059c109  7e68                 jle 0x59c173
// 0059c10b  8d5548               lea edx, [ebp + 0x48]
// 0059c10e  83c70c               add edi, 0xc
// 0059c111  89542414             mov dword ptr [esp + 0x14], edx
// 0059c115  80bec800000000       cmp byte ptr [esi + 0xc8], 0
// 0059c11c  8b07                 mov eax, dword ptr [edi]
// 0059c11e  8bc8                 mov ecx, eax
// 0059c120  7403                 je 0x59c125
// 0059c122  8d0c49               lea ecx, [ecx + ecx*2]
// 0059c125  8b5e04               mov ebx, dword ptr [esi + 4]
// 0059c128  51                   push ecx
// 0059c129  50                   push eax
// 0059c12a  8b4714               mov eax, dword ptr [edi + 0x14]
// 0059c12d  50                   push eax
// 0059c12e  e8eddcfeff           call 0x589e20
// 0059c133  8b4ffc               mov ecx, dword ptr [edi - 4]
// 0059c136  8b5710               mov edx, dword ptr [edi + 0x10]
// 0059c139  83c408               add esp, 8
// 0059c13c  50                   push eax
// 0059c13d  51                   push ecx
// 0059c13e  52                   push edx
// 0059c13f  e8dcdcfeff           call 0x589e20
// 0059c144  83c408               add esp, 8
// 0059c147  50                   push eax
// 0059c148  8b4314               mov eax, dword ptr [ebx + 0x14]
// 0059c14b  6a01                 push 1
// 0059c14d  6a01                 push 1
// 0059c14f  56                   push esi
// 0059c150  ffd0                 call eax
// 0059c152  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0059c156  8901                 mov dword ptr [ecx], eax
// 0059c158  8b442430             mov eax, dword ptr [esp + 0x30]
// 0059c15c  40                   inc eax
// 0059c15d  83c104               add ecx, 4
// 0059c160  83c418               add esp, 0x18
// 0059c163  83c754               add edi, 0x54
// 0059c166  3b4624               cmp eax, dword ptr [esi + 0x24]
// 0059c169  89442418             mov dword ptr [esp + 0x18], eax
// 0059c16d  894c2414             mov dword ptr [esp + 0x14], ecx
// 0059c171  7ca2                 jl 0x59c115
// 0059c173  5f                   pop edi
// 0059c174  8d4d48               lea ecx, [ebp + 0x48]
// 0059c177  5e                   pop esi
// 0059c178  c7450460b55900       mov dword ptr [ebp + 4], 0x59b560
// 0059c17f  c7450c80b75900       mov dword ptr [ebp + 0xc], 0x59b780
// 0059c186  894d10               mov dword ptr [ebp + 0x10], ecx
// 0059c189  5d                   pop ebp
// 0059c18a  5b                   pop ebx
// 0059c18b  c3                   ret 
// 0059c18c  8b5604               mov edx, dword ptr [esi + 4]
// 0059c18f  8b4204               mov eax, dword ptr [edx + 4]
// 0059c192  6800050000           push 0x500
// 0059c197  6a01                 push 1
// 0059c199  56                   push esi
// 0059c19a  ffd0                 call eax
// 0059c19c  8d8880000000         lea ecx, [eax + 0x80]
// 0059c1a2  894d24               mov dword ptr [ebp + 0x24], ecx
// 0059c1a5  8d9000010000         lea edx, [eax + 0x100]
// 0059c1ab  895528               mov dword ptr [ebp + 0x28], edx
// 0059c1ae  8d8880010000         lea ecx, [eax + 0x180]
// 0059c1b4  894d2c               mov dword ptr [ebp + 0x2c], ecx
// 0059c1b7  8d9000020000         lea edx, [eax + 0x200]
// 0059c1bd  895530               mov dword ptr [ebp + 0x30], edx
// 0059c1c0  8d8880020000         lea ecx, [eax + 0x280]
// 0059c1c6  894d34               mov dword ptr [ebp + 0x34], ecx
// 0059c1c9  8d9000030000         lea edx, [eax + 0x300]
// 0059c1cf  895538               mov dword ptr [ebp + 0x38], edx
// 0059c1d2  894520               mov dword ptr [ebp + 0x20], eax
// 0059c1d5  83c40c               add esp, 0xc
// 0059c1d8  8d8880030000         lea ecx, [eax + 0x380]
// 0059c1de  8d9000040000         lea edx, [eax + 0x400]
// 0059c1e4  894d3c               mov dword ptr [ebp + 0x3c], ecx
// 0059c1e7  895540               mov dword ptr [ebp + 0x40], edx
// 0059c1ea  0580040000           add eax, 0x480
// 0059c1ef  894544               mov dword ptr [ebp + 0x44], eax
// 0059c1f2  5e                   pop esi
// 0059c1f3  895d10               mov dword ptr [ebp + 0x10], ebx
// 0059c1f6  c74504e0744200       mov dword ptr [ebp + 4], 0x4274e0
// 0059c1fd  c7450ce0b25900       mov dword ptr [ebp + 0xc], 0x59b2e0
// 0059c204  5d                   pop ebp
// 0059c205  5b                   pop ebx
// 0059c206  c3                   ret 
// library jpeg-6b/jdcoefct.c (function _jinit_d_coef_controller)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcoefct.c
