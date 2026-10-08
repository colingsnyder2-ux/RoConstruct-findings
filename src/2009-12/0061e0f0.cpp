// roc 2009-12 0061e0f0  unit: seg_00610000  size: 327 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0061e0f0
//
// 0061e0f0  53                   push ebx
// 0061e0f1  55                   push ebp
// 0061e0f2  56                   push esi
// 0061e0f3  8b742410             mov esi, dword ptr [esp + 0x10]
// 0061e0f7  8b4604               mov eax, dword ptr [esi + 4]
// 0061e0fa  8b08                 mov ecx, dword ptr [eax]
// 0061e0fc  6a74                 push 0x74
// 0061e0fe  6a01                 push 1
// 0061e100  56                   push esi
// 0061e101  ffd1                 call ecx
// 0061e103  8be8                 mov ebp, eax
// 0061e105  33db                 xor ebx, ebx
// 0061e107  89ae88010000         mov dword ptr [esi + 0x188], ebp
// 0061e10d  83c40c               add esp, 0xc
// 0061e110  c74500b0d26100       mov dword ptr [ebp], 0x61d2b0
// 0061e117  c74508a0e06100       mov dword ptr [ebp + 8], 0x61e0a0
// 0061e11e  895d70               mov dword ptr [ebp + 0x70], ebx
// 0061e121  385c2414             cmp byte ptr [esp + 0x14], bl
// 0061e125  0f8491000000         je 0x61e1bc
// 0061e12b  395e24               cmp dword ptr [esi + 0x24], ebx
// 0061e12e  57                   push edi
// 0061e12f  8bbec4000000         mov edi, dword ptr [esi + 0xc4]
// 0061e135  895c2418             mov dword ptr [esp + 0x18], ebx
// 0061e139  7e68                 jle 0x61e1a3
// 0061e13b  8d5548               lea edx, [ebp + 0x48]
// 0061e13e  83c70c               add edi, 0xc
// 0061e141  89542414             mov dword ptr [esp + 0x14], edx
// 0061e145  80bec800000000       cmp byte ptr [esi + 0xc8], 0
// 0061e14c  8b07                 mov eax, dword ptr [edi]
// 0061e14e  8bc8                 mov ecx, eax
// 0061e150  7403                 je 0x61e155
// 0061e152  8d0c49               lea ecx, [ecx + ecx*2]
// 0061e155  8b5e04               mov ebx, dword ptr [esi + 4]
// 0061e158  51                   push ecx
// 0061e159  50                   push eax
// 0061e15a  8b4714               mov eax, dword ptr [edi + 0x14]
// 0061e15d  50                   push eax
// 0061e15e  e80ddbfeff           call 0x60bc70
// 0061e163  8b4ffc               mov ecx, dword ptr [edi - 4]
// 0061e166  8b5710               mov edx, dword ptr [edi + 0x10]
// 0061e169  83c408               add esp, 8
// 0061e16c  50                   push eax
// 0061e16d  51                   push ecx
// 0061e16e  52                   push edx
// 0061e16f  e8fcdafeff           call 0x60bc70
// 0061e174  83c408               add esp, 8
// 0061e177  50                   push eax
// 0061e178  8b4314               mov eax, dword ptr [ebx + 0x14]
// 0061e17b  6a01                 push 1
// 0061e17d  6a01                 push 1
// 0061e17f  56                   push esi
// 0061e180  ffd0                 call eax
// 0061e182  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0061e186  8901                 mov dword ptr [ecx], eax
// 0061e188  8b442430             mov eax, dword ptr [esp + 0x30]
// 0061e18c  40                   inc eax
// 0061e18d  83c104               add ecx, 4
// 0061e190  83c418               add esp, 0x18
// 0061e193  83c754               add edi, 0x54
// 0061e196  3b4624               cmp eax, dword ptr [esi + 0x24]
// 0061e199  89442418             mov dword ptr [esp + 0x18], eax
// 0061e19d  894c2414             mov dword ptr [esp + 0x14], ecx
// 0061e1a1  7ca2                 jl 0x61e145
// 0061e1a3  5f                   pop edi
// 0061e1a4  8d4d48               lea ecx, [ebp + 0x48]
// 0061e1a7  5e                   pop esi
// 0061e1a8  c7450490d56100       mov dword ptr [ebp + 4], 0x61d590
// 0061e1af  c7450cb0d76100       mov dword ptr [ebp + 0xc], 0x61d7b0
// 0061e1b6  894d10               mov dword ptr [ebp + 0x10], ecx
// 0061e1b9  5d                   pop ebp
// 0061e1ba  5b                   pop ebx
// 0061e1bb  c3                   ret 
// 0061e1bc  8b5604               mov edx, dword ptr [esi + 4]
// 0061e1bf  8b4204               mov eax, dword ptr [edx + 4]
// 0061e1c2  6800050000           push 0x500
// 0061e1c7  6a01                 push 1
// 0061e1c9  56                   push esi
// 0061e1ca  ffd0                 call eax
// 0061e1cc  8d8880000000         lea ecx, [eax + 0x80]
// 0061e1d2  894d24               mov dword ptr [ebp + 0x24], ecx
// 0061e1d5  8d9000010000         lea edx, [eax + 0x100]
// 0061e1db  895528               mov dword ptr [ebp + 0x28], edx
// 0061e1de  8d8880010000         lea ecx, [eax + 0x180]
// 0061e1e4  894d2c               mov dword ptr [ebp + 0x2c], ecx
// 0061e1e7  8d9000020000         lea edx, [eax + 0x200]
// 0061e1ed  895530               mov dword ptr [ebp + 0x30], edx
// 0061e1f0  8d8880020000         lea ecx, [eax + 0x280]
// 0061e1f6  894d34               mov dword ptr [ebp + 0x34], ecx
// 0061e1f9  8d9000030000         lea edx, [eax + 0x300]
// 0061e1ff  895538               mov dword ptr [ebp + 0x38], edx
// 0061e202  894520               mov dword ptr [ebp + 0x20], eax
// 0061e205  83c40c               add esp, 0xc
// 0061e208  8d8880030000         lea ecx, [eax + 0x380]
// 0061e20e  8d9000040000         lea edx, [eax + 0x400]
// 0061e214  894d3c               mov dword ptr [ebp + 0x3c], ecx
// 0061e217  895540               mov dword ptr [ebp + 0x40], edx
// 0061e21a  0580040000           add eax, 0x480
// 0061e21f  894544               mov dword ptr [ebp + 0x44], eax
// 0061e222  5e                   pop esi
// 0061e223  895d10               mov dword ptr [ebp + 0x10], ebx
// 0061e226  c7450470937b00       mov dword ptr [ebp + 4], 0x7b9370
// 0061e22d  c7450c10d36100       mov dword ptr [ebp + 0xc], 0x61d310
// 0061e234  5d                   pop ebp
// 0061e235  5b                   pop ebx
// 0061e236  c3                   ret 
// library jpeg-6b/jdcoefct.c (function _jinit_d_coef_controller)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcoefct.c
