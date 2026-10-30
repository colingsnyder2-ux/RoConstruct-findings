// from server: 100% by auto
// roc 2010-06 00586390  unit: seg_00580000  size: 387 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00586390
//
// 00586390  83ec08               sub esp, 8
// 00586393  807c241000           cmp byte ptr [esp + 0x10], 0
// 00586398  56                   push esi
// 00586399  8b742410             mov esi, dword ptr [esp + 0x10]
// 0058639d  57                   push edi
// 0058639e  8bbe5c010000         mov edi, dword ptr [esi + 0x15c]
// 005863a4  7410                 je 0x5863b6
// 005863a6  c74704b05f5800       mov dword ptr [edi + 4], 0x585fb0
// 005863ad  c74708b0625800       mov dword ptr [edi + 8], 0x5862b0
// 005863b4  eb0e                 jmp 0x5863c4
// 005863b6  c74704a05c5800       mov dword ptr [edi + 4], 0x585ca0
// 005863bd  c74708005e5800       mov dword ptr [edi + 8], 0x585e00
// 005863c4  83bee400000000       cmp dword ptr [esi + 0xe4], 0
// 005863cb  c744240800000000     mov dword ptr [esp + 8], 0
// 005863d3  0f8e20010000         jle 0x5864f9
// 005863d9  8d4714               lea eax, [edi + 0x14]
// 005863dc  8d8ee8000000         lea ecx, [esi + 0xe8]
// 005863e2  53                   push ebx
// 005863e3  89442410             mov dword ptr [esp + 0x10], eax
// 005863e7  894c2418             mov dword ptr [esp + 0x18], ecx
// 005863eb  55                   push ebp
// 005863ec  8d642400             lea esp, [esp]
// 005863f0  807c242000           cmp byte ptr [esp + 0x20], 0
// 005863f5  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005863f9  8b02                 mov eax, dword ptr [edx]
// 005863fb  8b6814               mov ebp, dword ptr [eax + 0x14]
// 005863fe  8b5818               mov ebx, dword ptr [eax + 0x18]
// 00586401  0f84a6000000         je 0x5864ad
// 00586407  85ed                 test ebp, ebp
// 00586409  7c05                 jl 0x586410
// 0058640b  83fd04               cmp ebp, 4
// 0058640e  7c18                 jl 0x586428
// 00586410  8b06                 mov eax, dword ptr [esi]
// 00586412  c7401432000000       mov dword ptr [eax + 0x14], 0x32
// 00586419  8b0e                 mov ecx, dword ptr [esi]
// 0058641b  896918               mov dword ptr [ecx + 0x18], ebp
// 0058641e  8b16                 mov edx, dword ptr [esi]
// 00586420  8b02                 mov eax, dword ptr [edx]
// 00586422  56                   push esi
// 00586423  ffd0                 call eax
// 00586425  83c404               add esp, 4
// 00586428  85db                 test ebx, ebx
// 0058642a  7c05                 jl 0x586431
// 0058642c  83fb04               cmp ebx, 4
// 0058642f  7c18                 jl 0x586449
// 00586431  8b0e                 mov ecx, dword ptr [esi]
// 00586433  c7411432000000       mov dword ptr [ecx + 0x14], 0x32
// 0058643a  8b16                 mov edx, dword ptr [esi]
// 0058643c  895a18               mov dword ptr [edx + 0x18], ebx
// 0058643f  8b06                 mov eax, dword ptr [esi]
// 00586441  8b08                 mov ecx, dword ptr [eax]
// 00586443  56                   push esi
// 00586444  ffd1                 call ecx
// 00586446  83c404               add esp, 4
// 00586449  837caf4c00           cmp dword ptr [edi + ebp*4 + 0x4c], 0
// 0058644e  7516                 jne 0x586466
// 00586450  8b5604               mov edx, dword ptr [esi + 4]
// 00586453  8b02                 mov eax, dword ptr [edx]
// 00586455  6804040000           push 0x404
// 0058645a  6a01                 push 1
// 0058645c  56                   push esi
// 0058645d  ffd0                 call eax
// 0058645f  83c40c               add esp, 0xc
// 00586462  8944af4c             mov dword ptr [edi + ebp*4 + 0x4c], eax
// 00586466  8b4caf4c             mov ecx, dword ptr [edi + ebp*4 + 0x4c]
// 0058646a  6804040000           push 0x404
// 0058646f  6a00                 push 0
// 00586471  51                   push ecx
// 00586472  e86d272200           call 0x7a8be4
// 00586477  83c40c               add esp, 0xc
// 0058647a  837c9f5c00           cmp dword ptr [edi + ebx*4 + 0x5c], 0
// 0058647f  7516                 jne 0x586497
// 00586481  8b5604               mov edx, dword ptr [esi + 4]
// 00586484  8b02                 mov eax, dword ptr [edx]
// 00586486  6804040000           push 0x404
// 0058648b  6a01                 push 1
// 0058648d  56                   push esi
// 0058648e  ffd0                 call eax
// 00586490  83c40c               add esp, 0xc
// 00586493  89449f5c             mov dword ptr [edi + ebx*4 + 0x5c], eax
// 00586497  8b4c9f5c             mov ecx, dword ptr [edi + ebx*4 + 0x5c]
// 0058649b  6804040000           push 0x404
// 005864a0  6a00                 push 0
// 005864a2  51                   push ecx
// 005864a3  e83c272200           call 0x7a8be4
// 005864a8  83c40c               add esp, 0xc
// 005864ab  eb1f                 jmp 0x5864cc
// 005864ad  8d54af2c             lea edx, [edi + ebp*4 + 0x2c]
// 005864b1  52                   push edx
// 005864b2  55                   push ebp
// 005864b3  6a01                 push 1
// 005864b5  56                   push esi
// 005864b6  e8c5f2ffff           call 0x585780
// 005864bb  8d449f3c             lea eax, [edi + ebx*4 + 0x3c]
// 005864bf  50                   push eax
// 005864c0  53                   push ebx
// 005864c1  6a00                 push 0
// 005864c3  56                   push esi
// 005864c4  e8b7f2ffff           call 0x585780
// 005864c9  83c420               add esp, 0x20
// 005864cc  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005864d0  8b442410             mov eax, dword ptr [esp + 0x10]
// 005864d4  8344241c04           add dword ptr [esp + 0x1c], 4
// 005864d9  c70100000000         mov dword ptr [ecx], 0
// 005864df  40                   inc eax
// 005864e0  83c104               add ecx, 4
// 005864e3  3b86e4000000         cmp eax, dword ptr [esi + 0xe4]
// 005864e9  89442410             mov dword ptr [esp + 0x10], eax
// 005864ed  894c2414             mov dword ptr [esp + 0x14], ecx
// 005864f1  0f8cf9feffff         jl 0x5863f0
// 005864f7  5d                   pop ebp
// 005864f8  5b                   pop ebx
// 005864f9  33c0                 xor eax, eax
// 005864fb  89470c               mov dword ptr [edi + 0xc], eax
// 005864fe  894710               mov dword ptr [edi + 0x10], eax
// 00586501  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 00586507  894f24               mov dword ptr [edi + 0x24], ecx
// 0058650a  894728               mov dword ptr [edi + 0x28], eax
// 0058650d  5f                   pop edi
// 0058650e  5e                   pop esi
// 0058650f  83c408               add esp, 8
// 00586512  c3                   ret 
// library jpeg-6b/jchuff.c (function _start_pass_huff)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jchuff.c
