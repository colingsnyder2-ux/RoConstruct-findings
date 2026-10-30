// from server: 100% by auto
// roc 2011-06 0057c640  unit: seg_00570000  size: 387 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0057c640
//
// 0057c640  83ec08               sub esp, 8
// 0057c643  807c241000           cmp byte ptr [esp + 0x10], 0
// 0057c648  56                   push esi
// 0057c649  8b742410             mov esi, dword ptr [esp + 0x10]
// 0057c64d  57                   push edi
// 0057c64e  8bbe5c010000         mov edi, dword ptr [esi + 0x15c]
// 0057c654  7410                 je 0x57c666
// 0057c656  c7470460c25700       mov dword ptr [edi + 4], 0x57c260
// 0057c65d  c7470860c55700       mov dword ptr [edi + 8], 0x57c560
// 0057c664  eb0e                 jmp 0x57c674
// 0057c666  c7470450bf5700       mov dword ptr [edi + 4], 0x57bf50
// 0057c66d  c74708b0c05700       mov dword ptr [edi + 8], 0x57c0b0
// 0057c674  83bee400000000       cmp dword ptr [esi + 0xe4], 0
// 0057c67b  c744240800000000     mov dword ptr [esp + 8], 0
// 0057c683  0f8e20010000         jle 0x57c7a9
// 0057c689  8d4714               lea eax, [edi + 0x14]
// 0057c68c  8d8ee8000000         lea ecx, [esi + 0xe8]
// 0057c692  53                   push ebx
// 0057c693  89442410             mov dword ptr [esp + 0x10], eax
// 0057c697  894c2418             mov dword ptr [esp + 0x18], ecx
// 0057c69b  55                   push ebp
// 0057c69c  8d642400             lea esp, [esp]
// 0057c6a0  807c242000           cmp byte ptr [esp + 0x20], 0
// 0057c6a5  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0057c6a9  8b02                 mov eax, dword ptr [edx]
// 0057c6ab  8b6814               mov ebp, dword ptr [eax + 0x14]
// 0057c6ae  8b5818               mov ebx, dword ptr [eax + 0x18]
// 0057c6b1  0f84a6000000         je 0x57c75d
// 0057c6b7  85ed                 test ebp, ebp
// 0057c6b9  7c05                 jl 0x57c6c0
// 0057c6bb  83fd04               cmp ebp, 4
// 0057c6be  7c18                 jl 0x57c6d8
// 0057c6c0  8b06                 mov eax, dword ptr [esi]
// 0057c6c2  c7401432000000       mov dword ptr [eax + 0x14], 0x32
// 0057c6c9  8b0e                 mov ecx, dword ptr [esi]
// 0057c6cb  896918               mov dword ptr [ecx + 0x18], ebp
// 0057c6ce  8b16                 mov edx, dword ptr [esi]
// 0057c6d0  8b02                 mov eax, dword ptr [edx]
// 0057c6d2  56                   push esi
// 0057c6d3  ffd0                 call eax
// 0057c6d5  83c404               add esp, 4
// 0057c6d8  85db                 test ebx, ebx
// 0057c6da  7c05                 jl 0x57c6e1
// 0057c6dc  83fb04               cmp ebx, 4
// 0057c6df  7c18                 jl 0x57c6f9
// 0057c6e1  8b0e                 mov ecx, dword ptr [esi]
// 0057c6e3  c7411432000000       mov dword ptr [ecx + 0x14], 0x32
// 0057c6ea  8b16                 mov edx, dword ptr [esi]
// 0057c6ec  895a18               mov dword ptr [edx + 0x18], ebx
// 0057c6ef  8b06                 mov eax, dword ptr [esi]
// 0057c6f1  8b08                 mov ecx, dword ptr [eax]
// 0057c6f3  56                   push esi
// 0057c6f4  ffd1                 call ecx
// 0057c6f6  83c404               add esp, 4
// 0057c6f9  837caf4c00           cmp dword ptr [edi + ebp*4 + 0x4c], 0
// 0057c6fe  7516                 jne 0x57c716
// 0057c700  8b5604               mov edx, dword ptr [esi + 4]
// 0057c703  8b02                 mov eax, dword ptr [edx]
// 0057c705  6804040000           push 0x404
// 0057c70a  6a01                 push 1
// 0057c70c  56                   push esi
// 0057c70d  ffd0                 call eax
// 0057c70f  83c40c               add esp, 0xc
// 0057c712  8944af4c             mov dword ptr [edi + ebp*4 + 0x4c], eax
// 0057c716  8b4caf4c             mov ecx, dword ptr [edi + ebp*4 + 0x4c]
// 0057c71a  6804040000           push 0x404
// 0057c71f  6a00                 push 0
// 0057c721  51                   push ecx
// 0057c722  e8bdeb2800           call 0x80b2e4
// 0057c727  83c40c               add esp, 0xc
// 0057c72a  837c9f5c00           cmp dword ptr [edi + ebx*4 + 0x5c], 0
// 0057c72f  7516                 jne 0x57c747
// 0057c731  8b5604               mov edx, dword ptr [esi + 4]
// 0057c734  8b02                 mov eax, dword ptr [edx]
// 0057c736  6804040000           push 0x404
// 0057c73b  6a01                 push 1
// 0057c73d  56                   push esi
// 0057c73e  ffd0                 call eax
// 0057c740  83c40c               add esp, 0xc
// 0057c743  89449f5c             mov dword ptr [edi + ebx*4 + 0x5c], eax
// 0057c747  8b4c9f5c             mov ecx, dword ptr [edi + ebx*4 + 0x5c]
// 0057c74b  6804040000           push 0x404
// 0057c750  6a00                 push 0
// 0057c752  51                   push ecx
// 0057c753  e88ceb2800           call 0x80b2e4
// 0057c758  83c40c               add esp, 0xc
// 0057c75b  eb1f                 jmp 0x57c77c
// 0057c75d  8d54af2c             lea edx, [edi + ebp*4 + 0x2c]
// 0057c761  52                   push edx
// 0057c762  55                   push ebp
// 0057c763  6a01                 push 1
// 0057c765  56                   push esi
// 0057c766  e8c5f2ffff           call 0x57ba30
// 0057c76b  8d449f3c             lea eax, [edi + ebx*4 + 0x3c]
// 0057c76f  50                   push eax
// 0057c770  53                   push ebx
// 0057c771  6a00                 push 0
// 0057c773  56                   push esi
// 0057c774  e8b7f2ffff           call 0x57ba30
// 0057c779  83c420               add esp, 0x20
// 0057c77c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0057c780  8b442410             mov eax, dword ptr [esp + 0x10]
// 0057c784  8344241c04           add dword ptr [esp + 0x1c], 4
// 0057c789  c70100000000         mov dword ptr [ecx], 0
// 0057c78f  40                   inc eax
// 0057c790  83c104               add ecx, 4
// 0057c793  3b86e4000000         cmp eax, dword ptr [esi + 0xe4]
// 0057c799  89442410             mov dword ptr [esp + 0x10], eax
// 0057c79d  894c2414             mov dword ptr [esp + 0x14], ecx
// 0057c7a1  0f8cf9feffff         jl 0x57c6a0
// 0057c7a7  5d                   pop ebp
// 0057c7a8  5b                   pop ebx
// 0057c7a9  33c0                 xor eax, eax
// 0057c7ab  89470c               mov dword ptr [edi + 0xc], eax
// 0057c7ae  894710               mov dword ptr [edi + 0x10], eax
// 0057c7b1  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 0057c7b7  894f24               mov dword ptr [edi + 0x24], ecx
// 0057c7ba  894728               mov dword ptr [edi + 0x28], eax
// 0057c7bd  5f                   pop edi
// 0057c7be  5e                   pop esi
// 0057c7bf  83c408               add esp, 8
// 0057c7c2  c3                   ret 
// library jpeg-6b/jchuff.c (function _start_pass_huff)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jchuff.c
