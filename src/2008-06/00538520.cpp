// from server: 100% by auto
// roc 2008-06 00538520  unit: seg_00530000  size: 387 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00538520
//
// 00538520  83ec08               sub esp, 8
// 00538523  807c241000           cmp byte ptr [esp + 0x10], 0
// 00538528  56                   push esi
// 00538529  8b742410             mov esi, dword ptr [esp + 0x10]
// 0053852d  57                   push edi
// 0053852e  8bbe5c010000         mov edi, dword ptr [esi + 0x15c]
// 00538534  7410                 je 0x538546
// 00538536  c7470440815300       mov dword ptr [edi + 4], 0x538140
// 0053853d  c7470840845300       mov dword ptr [edi + 8], 0x538440
// 00538544  eb0e                 jmp 0x538554
// 00538546  c74704307e5300       mov dword ptr [edi + 4], 0x537e30
// 0053854d  c74708907f5300       mov dword ptr [edi + 8], 0x537f90
// 00538554  83bee400000000       cmp dword ptr [esi + 0xe4], 0
// 0053855b  c744240800000000     mov dword ptr [esp + 8], 0
// 00538563  0f8e20010000         jle 0x538689
// 00538569  8d4714               lea eax, [edi + 0x14]
// 0053856c  8d8ee8000000         lea ecx, [esi + 0xe8]
// 00538572  53                   push ebx
// 00538573  89442410             mov dword ptr [esp + 0x10], eax
// 00538577  894c2418             mov dword ptr [esp + 0x18], ecx
// 0053857b  55                   push ebp
// 0053857c  8d642400             lea esp, [esp]
// 00538580  807c242000           cmp byte ptr [esp + 0x20], 0
// 00538585  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00538589  8b02                 mov eax, dword ptr [edx]
// 0053858b  8b6814               mov ebp, dword ptr [eax + 0x14]
// 0053858e  8b5818               mov ebx, dword ptr [eax + 0x18]
// 00538591  0f84a6000000         je 0x53863d
// 00538597  85ed                 test ebp, ebp
// 00538599  7c05                 jl 0x5385a0
// 0053859b  83fd04               cmp ebp, 4
// 0053859e  7c18                 jl 0x5385b8
// 005385a0  8b06                 mov eax, dword ptr [esi]
// 005385a2  c7401432000000       mov dword ptr [eax + 0x14], 0x32
// 005385a9  8b0e                 mov ecx, dword ptr [esi]
// 005385ab  896918               mov dword ptr [ecx + 0x18], ebp
// 005385ae  8b16                 mov edx, dword ptr [esi]
// 005385b0  8b02                 mov eax, dword ptr [edx]
// 005385b2  56                   push esi
// 005385b3  ffd0                 call eax
// 005385b5  83c404               add esp, 4
// 005385b8  85db                 test ebx, ebx
// 005385ba  7c05                 jl 0x5385c1
// 005385bc  83fb04               cmp ebx, 4
// 005385bf  7c18                 jl 0x5385d9
// 005385c1  8b0e                 mov ecx, dword ptr [esi]
// 005385c3  c7411432000000       mov dword ptr [ecx + 0x14], 0x32
// 005385ca  8b16                 mov edx, dword ptr [esi]
// 005385cc  895a18               mov dword ptr [edx + 0x18], ebx
// 005385cf  8b06                 mov eax, dword ptr [esi]
// 005385d1  8b08                 mov ecx, dword ptr [eax]
// 005385d3  56                   push esi
// 005385d4  ffd1                 call ecx
// 005385d6  83c404               add esp, 4
// 005385d9  837caf4c00           cmp dword ptr [edi + ebp*4 + 0x4c], 0
// 005385de  7516                 jne 0x5385f6
// 005385e0  8b5604               mov edx, dword ptr [esi + 4]
// 005385e3  8b02                 mov eax, dword ptr [edx]
// 005385e5  6804040000           push 0x404
// 005385ea  6a01                 push 1
// 005385ec  56                   push esi
// 005385ed  ffd0                 call eax
// 005385ef  83c40c               add esp, 0xc
// 005385f2  8944af4c             mov dword ptr [edi + ebp*4 + 0x4c], eax
// 005385f6  8b4caf4c             mov ecx, dword ptr [edi + ebp*4 + 0x4c]
// 005385fa  6804040000           push 0x404
// 005385ff  6a00                 push 0
// 00538601  51                   push ecx
// 00538602  e8fd901600           call 0x6a1704
// 00538607  83c40c               add esp, 0xc
// 0053860a  837c9f5c00           cmp dword ptr [edi + ebx*4 + 0x5c], 0
// 0053860f  7516                 jne 0x538627
// 00538611  8b5604               mov edx, dword ptr [esi + 4]
// 00538614  8b02                 mov eax, dword ptr [edx]
// 00538616  6804040000           push 0x404
// 0053861b  6a01                 push 1
// 0053861d  56                   push esi
// 0053861e  ffd0                 call eax
// 00538620  83c40c               add esp, 0xc
// 00538623  89449f5c             mov dword ptr [edi + ebx*4 + 0x5c], eax
// 00538627  8b4c9f5c             mov ecx, dword ptr [edi + ebx*4 + 0x5c]
// 0053862b  6804040000           push 0x404
// 00538630  6a00                 push 0
// 00538632  51                   push ecx
// 00538633  e8cc901600           call 0x6a1704
// 00538638  83c40c               add esp, 0xc
// 0053863b  eb1f                 jmp 0x53865c
// 0053863d  8d54af2c             lea edx, [edi + ebp*4 + 0x2c]
// 00538641  52                   push edx
// 00538642  55                   push ebp
// 00538643  6a01                 push 1
// 00538645  56                   push esi
// 00538646  e8c5f2ffff           call 0x537910
// 0053864b  8d449f3c             lea eax, [edi + ebx*4 + 0x3c]
// 0053864f  50                   push eax
// 00538650  53                   push ebx
// 00538651  6a00                 push 0
// 00538653  56                   push esi
// 00538654  e8b7f2ffff           call 0x537910
// 00538659  83c420               add esp, 0x20
// 0053865c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00538660  8b442410             mov eax, dword ptr [esp + 0x10]
// 00538664  8344241c04           add dword ptr [esp + 0x1c], 4
// 00538669  c70100000000         mov dword ptr [ecx], 0
// 0053866f  40                   inc eax
// 00538670  83c104               add ecx, 4
// 00538673  3b86e4000000         cmp eax, dword ptr [esi + 0xe4]
// 00538679  89442410             mov dword ptr [esp + 0x10], eax
// 0053867d  894c2414             mov dword ptr [esp + 0x14], ecx
// 00538681  0f8cf9feffff         jl 0x538580
// 00538687  5d                   pop ebp
// 00538688  5b                   pop ebx
// 00538689  33c0                 xor eax, eax
// 0053868b  89470c               mov dword ptr [edi + 0xc], eax
// 0053868e  894710               mov dword ptr [edi + 0x10], eax
// 00538691  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 00538697  894f24               mov dword ptr [edi + 0x24], ecx
// 0053869a  894728               mov dword ptr [edi + 0x28], eax
// 0053869d  5f                   pop edi
// 0053869e  5e                   pop esi
// 0053869f  83c408               add esp, 8
// 005386a2  c3                   ret 
// library jpeg-6b/jchuff.c (function _start_pass_huff)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jchuff.c
