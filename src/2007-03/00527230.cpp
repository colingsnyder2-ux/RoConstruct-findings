// roc 2007-03 00527230  unit: seg_00520000  size: 389 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00527230
//
// 00527230  83ec08               sub esp, 8
// 00527233  807c241000           cmp byte ptr [esp + 0x10], 0
// 00527238  56                   push esi
// 00527239  8b742410             mov esi, dword ptr [esp + 0x10]
// 0052723d  57                   push edi
// 0052723e  8bbe5c010000         mov edi, dword ptr [esi + 0x15c]
// 00527244  7410                 je 0x527256
// 00527246  c74704906d5200       mov dword ptr [edi + 4], 0x526d90
// 0052724d  c7470840715200       mov dword ptr [edi + 8], 0x527140
// 00527254  eb0e                 jmp 0x527264
// 00527256  c74704706a5200       mov dword ptr [edi + 4], 0x526a70
// 0052725d  c74708e06b5200       mov dword ptr [edi + 8], 0x526be0
// 00527264  83bee400000000       cmp dword ptr [esi + 0xe4], 0
// 0052726b  c744240800000000     mov dword ptr [esp + 8], 0
// 00527273  0f8e22010000         jle 0x52739b
// 00527279  8d4714               lea eax, [edi + 0x14]
// 0052727c  8d8ee8000000         lea ecx, [esi + 0xe8]
// 00527282  53                   push ebx
// 00527283  89442410             mov dword ptr [esp + 0x10], eax
// 00527287  894c2418             mov dword ptr [esp + 0x18], ecx
// 0052728b  55                   push ebp
// 0052728c  8d642400             lea esp, [esp]
// 00527290  807c242000           cmp byte ptr [esp + 0x20], 0
// 00527295  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00527299  8b02                 mov eax, dword ptr [edx]
// 0052729b  8b6814               mov ebp, dword ptr [eax + 0x14]
// 0052729e  8b5818               mov ebx, dword ptr [eax + 0x18]
// 005272a1  0f84a6000000         je 0x52734d
// 005272a7  85ed                 test ebp, ebp
// 005272a9  7c05                 jl 0x5272b0
// 005272ab  83fd04               cmp ebp, 4
// 005272ae  7c18                 jl 0x5272c8
// 005272b0  8b06                 mov eax, dword ptr [esi]
// 005272b2  c7401432000000       mov dword ptr [eax + 0x14], 0x32
// 005272b9  8b0e                 mov ecx, dword ptr [esi]
// 005272bb  896918               mov dword ptr [ecx + 0x18], ebp
// 005272be  8b16                 mov edx, dword ptr [esi]
// 005272c0  8b02                 mov eax, dword ptr [edx]
// 005272c2  56                   push esi
// 005272c3  ffd0                 call eax
// 005272c5  83c404               add esp, 4
// 005272c8  85db                 test ebx, ebx
// 005272ca  7c05                 jl 0x5272d1
// 005272cc  83fb04               cmp ebx, 4
// 005272cf  7c18                 jl 0x5272e9
// 005272d1  8b0e                 mov ecx, dword ptr [esi]
// 005272d3  c7411432000000       mov dword ptr [ecx + 0x14], 0x32
// 005272da  8b16                 mov edx, dword ptr [esi]
// 005272dc  895a18               mov dword ptr [edx + 0x18], ebx
// 005272df  8b06                 mov eax, dword ptr [esi]
// 005272e1  8b08                 mov ecx, dword ptr [eax]
// 005272e3  56                   push esi
// 005272e4  ffd1                 call ecx
// 005272e6  83c404               add esp, 4
// 005272e9  837caf4c00           cmp dword ptr [edi + ebp*4 + 0x4c], 0
// 005272ee  7516                 jne 0x527306
// 005272f0  8b5604               mov edx, dword ptr [esi + 4]
// 005272f3  8b02                 mov eax, dword ptr [edx]
// 005272f5  6804040000           push 0x404
// 005272fa  6a01                 push 1
// 005272fc  56                   push esi
// 005272fd  ffd0                 call eax
// 005272ff  83c40c               add esp, 0xc
// 00527302  8944af4c             mov dword ptr [edi + ebp*4 + 0x4c], eax
// 00527306  8b4caf4c             mov ecx, dword ptr [edi + ebp*4 + 0x4c]
// 0052730a  6804040000           push 0x404
// 0052730f  6a00                 push 0
// 00527311  51                   push ecx
// 00527312  e8057d0f00           call 0x61f01c
// 00527317  83c40c               add esp, 0xc
// 0052731a  837c9f5c00           cmp dword ptr [edi + ebx*4 + 0x5c], 0
// 0052731f  7516                 jne 0x527337
// 00527321  8b5604               mov edx, dword ptr [esi + 4]
// 00527324  8b02                 mov eax, dword ptr [edx]
// 00527326  6804040000           push 0x404
// 0052732b  6a01                 push 1
// 0052732d  56                   push esi
// 0052732e  ffd0                 call eax
// 00527330  83c40c               add esp, 0xc
// 00527333  89449f5c             mov dword ptr [edi + ebx*4 + 0x5c], eax
// 00527337  8b4c9f5c             mov ecx, dword ptr [edi + ebx*4 + 0x5c]
// 0052733b  6804040000           push 0x404
// 00527340  6a00                 push 0
// 00527342  51                   push ecx
// 00527343  e8d47c0f00           call 0x61f01c
// 00527348  83c40c               add esp, 0xc
// 0052734b  eb1f                 jmp 0x52736c
// 0052734d  8d54af2c             lea edx, [edi + ebp*4 + 0x2c]
// 00527351  52                   push edx
// 00527352  55                   push ebp
// 00527353  6a01                 push 1
// 00527355  56                   push esi
// 00527356  e8c5f1ffff           call 0x526520
// 0052735b  8d449f3c             lea eax, [edi + ebx*4 + 0x3c]
// 0052735f  50                   push eax
// 00527360  53                   push ebx
// 00527361  6a00                 push 0
// 00527363  56                   push esi
// 00527364  e8b7f1ffff           call 0x526520
// 00527369  83c420               add esp, 0x20
// 0052736c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00527370  8b442410             mov eax, dword ptr [esp + 0x10]
// 00527374  8344241c04           add dword ptr [esp + 0x1c], 4
// 00527379  c70100000000         mov dword ptr [ecx], 0
// 0052737f  83c001               add eax, 1
// 00527382  83c104               add ecx, 4
// 00527385  3b86e4000000         cmp eax, dword ptr [esi + 0xe4]
// 0052738b  89442410             mov dword ptr [esp + 0x10], eax
// 0052738f  894c2414             mov dword ptr [esp + 0x14], ecx
// 00527393  0f8cf7feffff         jl 0x527290
// 00527399  5d                   pop ebp
// 0052739a  5b                   pop ebx
// 0052739b  33c0                 xor eax, eax
// 0052739d  89470c               mov dword ptr [edi + 0xc], eax
// 005273a0  894710               mov dword ptr [edi + 0x10], eax
// 005273a3  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 005273a9  894f24               mov dword ptr [edi + 0x24], ecx
// 005273ac  894728               mov dword ptr [edi + 0x28], eax
// 005273af  5f                   pop edi
// 005273b0  5e                   pop esi
// 005273b1  83c408               add esp, 8
// 005273b4  c3                   ret 
// library jpeg-6b/jchuff.c (function _start_pass_huff)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jchuff.c
