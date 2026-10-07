// roc 2012-06 00667d50  unit: seg_00660000  size: 387 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00667d50
//
// 00667d50  83ec08               sub esp, 8
// 00667d53  807c241000           cmp byte ptr [esp + 0x10], 0
// 00667d58  56                   push esi
// 00667d59  8b742410             mov esi, dword ptr [esp + 0x10]
// 00667d5d  57                   push edi
// 00667d5e  8bbe5c010000         mov edi, dword ptr [esi + 0x15c]
// 00667d64  7410                 je 0x667d76
// 00667d66  c7470470796600       mov dword ptr [edi + 4], 0x667970
// 00667d6d  c74708707c6600       mov dword ptr [edi + 8], 0x667c70
// 00667d74  eb0e                 jmp 0x667d84
// 00667d76  c7470460766600       mov dword ptr [edi + 4], 0x667660
// 00667d7d  c74708c0776600       mov dword ptr [edi + 8], 0x6677c0
// 00667d84  83bee400000000       cmp dword ptr [esi + 0xe4], 0
// 00667d8b  c744240800000000     mov dword ptr [esp + 8], 0
// 00667d93  0f8e20010000         jle 0x667eb9
// 00667d99  8d4714               lea eax, [edi + 0x14]
// 00667d9c  8d8ee8000000         lea ecx, [esi + 0xe8]
// 00667da2  53                   push ebx
// 00667da3  89442410             mov dword ptr [esp + 0x10], eax
// 00667da7  894c2418             mov dword ptr [esp + 0x18], ecx
// 00667dab  55                   push ebp
// 00667dac  8d642400             lea esp, [esp]
// 00667db0  807c242000           cmp byte ptr [esp + 0x20], 0
// 00667db5  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00667db9  8b02                 mov eax, dword ptr [edx]
// 00667dbb  8b6814               mov ebp, dword ptr [eax + 0x14]
// 00667dbe  8b5818               mov ebx, dword ptr [eax + 0x18]
// 00667dc1  0f84a6000000         je 0x667e6d
// 00667dc7  85ed                 test ebp, ebp
// 00667dc9  7c05                 jl 0x667dd0
// 00667dcb  83fd04               cmp ebp, 4
// 00667dce  7c18                 jl 0x667de8
// 00667dd0  8b06                 mov eax, dword ptr [esi]
// 00667dd2  c7401432000000       mov dword ptr [eax + 0x14], 0x32
// 00667dd9  8b0e                 mov ecx, dword ptr [esi]
// 00667ddb  896918               mov dword ptr [ecx + 0x18], ebp
// 00667dde  8b16                 mov edx, dword ptr [esi]
// 00667de0  8b02                 mov eax, dword ptr [edx]
// 00667de2  56                   push esi
// 00667de3  ffd0                 call eax
// 00667de5  83c404               add esp, 4
// 00667de8  85db                 test ebx, ebx
// 00667dea  7c05                 jl 0x667df1
// 00667dec  83fb04               cmp ebx, 4
// 00667def  7c18                 jl 0x667e09
// 00667df1  8b0e                 mov ecx, dword ptr [esi]
// 00667df3  c7411432000000       mov dword ptr [ecx + 0x14], 0x32
// 00667dfa  8b16                 mov edx, dword ptr [esi]
// 00667dfc  895a18               mov dword ptr [edx + 0x18], ebx
// 00667dff  8b06                 mov eax, dword ptr [esi]
// 00667e01  8b08                 mov ecx, dword ptr [eax]
// 00667e03  56                   push esi
// 00667e04  ffd1                 call ecx
// 00667e06  83c404               add esp, 4
// 00667e09  837caf4c00           cmp dword ptr [edi + ebp*4 + 0x4c], 0
// 00667e0e  7516                 jne 0x667e26
// 00667e10  8b5604               mov edx, dword ptr [esi + 4]
// 00667e13  8b02                 mov eax, dword ptr [edx]
// 00667e15  6804040000           push 0x404
// 00667e1a  6a01                 push 1
// 00667e1c  56                   push esi
// 00667e1d  ffd0                 call eax
// 00667e1f  83c40c               add esp, 0xc
// 00667e22  8944af4c             mov dword ptr [edi + ebp*4 + 0x4c], eax
// 00667e26  8b4caf4c             mov ecx, dword ptr [edi + ebp*4 + 0x4c]
// 00667e2a  6804040000           push 0x404
// 00667e2f  6a00                 push 0
// 00667e31  51                   push ecx
// 00667e32  e83db53100           call 0x983374
// 00667e37  83c40c               add esp, 0xc
// 00667e3a  837c9f5c00           cmp dword ptr [edi + ebx*4 + 0x5c], 0
// 00667e3f  7516                 jne 0x667e57
// 00667e41  8b5604               mov edx, dword ptr [esi + 4]
// 00667e44  8b02                 mov eax, dword ptr [edx]
// 00667e46  6804040000           push 0x404
// 00667e4b  6a01                 push 1
// 00667e4d  56                   push esi
// 00667e4e  ffd0                 call eax
// 00667e50  83c40c               add esp, 0xc
// 00667e53  89449f5c             mov dword ptr [edi + ebx*4 + 0x5c], eax
// 00667e57  8b4c9f5c             mov ecx, dword ptr [edi + ebx*4 + 0x5c]
// 00667e5b  6804040000           push 0x404
// 00667e60  6a00                 push 0
// 00667e62  51                   push ecx
// 00667e63  e80cb53100           call 0x983374
// 00667e68  83c40c               add esp, 0xc
// 00667e6b  eb1f                 jmp 0x667e8c
// 00667e6d  8d54af2c             lea edx, [edi + ebp*4 + 0x2c]
// 00667e71  52                   push edx
// 00667e72  55                   push ebp
// 00667e73  6a01                 push 1
// 00667e75  56                   push esi
// 00667e76  e8c5f2ffff           call 0x667140
// 00667e7b  8d449f3c             lea eax, [edi + ebx*4 + 0x3c]
// 00667e7f  50                   push eax
// 00667e80  53                   push ebx
// 00667e81  6a00                 push 0
// 00667e83  56                   push esi
// 00667e84  e8b7f2ffff           call 0x667140
// 00667e89  83c420               add esp, 0x20
// 00667e8c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00667e90  8b442410             mov eax, dword ptr [esp + 0x10]
// 00667e94  8344241c04           add dword ptr [esp + 0x1c], 4
// 00667e99  c70100000000         mov dword ptr [ecx], 0
// 00667e9f  40                   inc eax
// 00667ea0  83c104               add ecx, 4
// 00667ea3  3b86e4000000         cmp eax, dword ptr [esi + 0xe4]
// 00667ea9  89442410             mov dword ptr [esp + 0x10], eax
// 00667ead  894c2414             mov dword ptr [esp + 0x14], ecx
// 00667eb1  0f8cf9feffff         jl 0x667db0
// 00667eb7  5d                   pop ebp
// 00667eb8  5b                   pop ebx
// 00667eb9  33c0                 xor eax, eax
// 00667ebb  89470c               mov dword ptr [edi + 0xc], eax
// 00667ebe  894710               mov dword ptr [edi + 0x10], eax
// 00667ec1  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 00667ec7  894f24               mov dword ptr [edi + 0x24], ecx
// 00667eca  894728               mov dword ptr [edi + 0x28], eax
// 00667ecd  5f                   pop edi
// 00667ece  5e                   pop esi
// 00667ecf  83c408               add esp, 8
// 00667ed2  c3                   ret 
// library jpeg-6b/jchuff.c (function _start_pass_huff)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jchuff.c
