// from server: 100% by auto
// roc 2012-06 00661610  unit: seg_00660000  size: 327 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00661610
//
// 00661610  53                   push ebx
// 00661611  55                   push ebp
// 00661612  56                   push esi
// 00661613  8b742410             mov esi, dword ptr [esp + 0x10]
// 00661617  8b4604               mov eax, dword ptr [esi + 4]
// 0066161a  8b08                 mov ecx, dword ptr [eax]
// 0066161c  6a74                 push 0x74
// 0066161e  6a01                 push 1
// 00661620  56                   push esi
// 00661621  ffd1                 call ecx
// 00661623  8be8                 mov ebp, eax
// 00661625  33db                 xor ebx, ebx
// 00661627  89ae88010000         mov dword ptr [esi + 0x188], ebp
// 0066162d  83c40c               add esp, 0xc
// 00661630  c74500d0076600       mov dword ptr [ebp], 0x6607d0
// 00661637  c74508c0156600       mov dword ptr [ebp + 8], 0x6615c0
// 0066163e  895d70               mov dword ptr [ebp + 0x70], ebx
// 00661641  385c2414             cmp byte ptr [esp + 0x14], bl
// 00661645  0f8491000000         je 0x6616dc
// 0066164b  395e24               cmp dword ptr [esi + 0x24], ebx
// 0066164e  57                   push edi
// 0066164f  8bbec4000000         mov edi, dword ptr [esi + 0xc4]
// 00661655  895c2418             mov dword ptr [esp + 0x18], ebx
// 00661659  7e68                 jle 0x6616c3
// 0066165b  8d5548               lea edx, [ebp + 0x48]
// 0066165e  83c70c               add edi, 0xc
// 00661661  89542414             mov dword ptr [esp + 0x14], edx
// 00661665  80bec800000000       cmp byte ptr [esi + 0xc8], 0
// 0066166c  8b07                 mov eax, dword ptr [edi]
// 0066166e  8bc8                 mov ecx, eax
// 00661670  7403                 je 0x661675
// 00661672  8d0c49               lea ecx, [ecx + ecx*2]
// 00661675  8b5e04               mov ebx, dword ptr [esi + 4]
// 00661678  51                   push ecx
// 00661679  50                   push eax
// 0066167a  8b4714               mov eax, dword ptr [edi + 0x14]
// 0066167d  50                   push eax
// 0066167e  e83d1effff           call 0x6534c0
// 00661683  8b4ffc               mov ecx, dword ptr [edi - 4]
// 00661686  8b5710               mov edx, dword ptr [edi + 0x10]
// 00661689  83c408               add esp, 8
// 0066168c  50                   push eax
// 0066168d  51                   push ecx
// 0066168e  52                   push edx
// 0066168f  e82c1effff           call 0x6534c0
// 00661694  83c408               add esp, 8
// 00661697  50                   push eax
// 00661698  8b4314               mov eax, dword ptr [ebx + 0x14]
// 0066169b  6a01                 push 1
// 0066169d  6a01                 push 1
// 0066169f  56                   push esi
// 006616a0  ffd0                 call eax
// 006616a2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006616a6  8901                 mov dword ptr [ecx], eax
// 006616a8  8b442430             mov eax, dword ptr [esp + 0x30]
// 006616ac  40                   inc eax
// 006616ad  83c104               add ecx, 4
// 006616b0  83c418               add esp, 0x18
// 006616b3  83c754               add edi, 0x54
// 006616b6  3b4624               cmp eax, dword ptr [esi + 0x24]
// 006616b9  89442418             mov dword ptr [esp + 0x18], eax
// 006616bd  894c2414             mov dword ptr [esp + 0x14], ecx
// 006616c1  7ca2                 jl 0x661665
// 006616c3  5f                   pop edi
// 006616c4  8d4d48               lea ecx, [ebp + 0x48]
// 006616c7  5e                   pop esi
// 006616c8  c74504b00a6600       mov dword ptr [ebp + 4], 0x660ab0
// 006616cf  c7450cd00c6600       mov dword ptr [ebp + 0xc], 0x660cd0
// 006616d6  894d10               mov dword ptr [ebp + 0x10], ecx
// 006616d9  5d                   pop ebp
// 006616da  5b                   pop ebx
// 006616db  c3                   ret 
// 006616dc  8b5604               mov edx, dword ptr [esi + 4]
// 006616df  8b4204               mov eax, dword ptr [edx + 4]
// 006616e2  6800050000           push 0x500
// 006616e7  6a01                 push 1
// 006616e9  56                   push esi
// 006616ea  ffd0                 call eax
// 006616ec  8d8880000000         lea ecx, [eax + 0x80]
// 006616f2  894d24               mov dword ptr [ebp + 0x24], ecx
// 006616f5  8d9000010000         lea edx, [eax + 0x100]
// 006616fb  895528               mov dword ptr [ebp + 0x28], edx
// 006616fe  8d8880010000         lea ecx, [eax + 0x180]
// 00661704  894d2c               mov dword ptr [ebp + 0x2c], ecx
// 00661707  8d9000020000         lea edx, [eax + 0x200]
// 0066170d  895530               mov dword ptr [ebp + 0x30], edx
// 00661710  8d8880020000         lea ecx, [eax + 0x280]
// 00661716  894d34               mov dword ptr [ebp + 0x34], ecx
// 00661719  8d9000030000         lea edx, [eax + 0x300]
// 0066171f  895538               mov dword ptr [ebp + 0x38], edx
// 00661722  894520               mov dword ptr [ebp + 0x20], eax
// 00661725  83c40c               add esp, 0xc
// 00661728  8d8880030000         lea ecx, [eax + 0x380]
// 0066172e  8d9000040000         lea edx, [eax + 0x400]
// 00661734  894d3c               mov dword ptr [ebp + 0x3c], ecx
// 00661737  895540               mov dword ptr [ebp + 0x40], edx
// 0066173a  0580040000           add eax, 0x480
// 0066173f  894544               mov dword ptr [ebp + 0x44], eax
// 00661742  5e                   pop esi
// 00661743  895d10               mov dword ptr [ebp + 0x10], ebx
// 00661746  c7450460795a00       mov dword ptr [ebp + 4], 0x5a7960
// 0066174d  c7450c30086600       mov dword ptr [ebp + 0xc], 0x660830
// 00661754  5d                   pop ebp
// 00661755  5b                   pop ebx
// 00661756  c3                   ret 
// library jpeg-6b/jdcoefct.c (function _jinit_d_coef_controller)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcoefct.c
