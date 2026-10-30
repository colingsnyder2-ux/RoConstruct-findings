// roc 2009-12 008a7440  unit: CXTPReportHeaderDropWnd  size: 509 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a7440
//
// 008a7440  6aff                 push -1
// 008a7442  6850279600           push 0x962750
// 008a7447  64a100000000         mov eax, dword ptr fs:[0]
// 008a744d  50                   push eax
// 008a744e  83ec48               sub esp, 0x48
// 008a7451  53                   push ebx
// 008a7452  55                   push ebp
// 008a7453  56                   push esi
// 008a7454  57                   push edi
// 008a7455  a10052b600           mov eax, dword ptr [0xb65200]
// 008a745a  33c4                 xor eax, esp
// 008a745c  50                   push eax
// 008a745d  8d44245c             lea eax, [esp + 0x5c]
// 008a7461  64a300000000         mov dword ptr fs:[0], eax
// 008a7467  8bf1                 mov esi, ecx
// 008a7469  8b6c246c             mov ebp, dword ptr [esp + 0x6c]
// 008a746d  8d4514               lea eax, [ebp + 0x14]
// 008a7470  894660               mov dword ptr [esi + 0x60], eax
// 008a7473  e8a6c6f4ff           call 0x7f3b1e
// 008a7478  68007f0000           push 0x7f00
// 008a747d  33db                 xor ebx, ebx
// 008a747f  53                   push ebx
// 008a7480  ff1548ca9800         call dword ptr [0x98ca48]
// 008a7486  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 008a7489  53                   push ebx
// 008a748a  53                   push ebx
// 008a748b  8b3e                 mov edi, dword ptr [esi]
// 008a748d  53                   push ebx
// 008a748e  51                   push ecx
// 008a748f  6a0c                 push 0xc
// 008a7491  53                   push ebx
// 008a7492  53                   push ebx
// 008a7493  6800000088           push 0x88000000
// 008a7498  53                   push ebx
// 008a7499  53                   push ebx
// 008a749a  53                   push ebx
// 008a749b  50                   push eax
// 008a749c  53                   push ebx
// 008a749d  e884cdf4ff           call 0x7f4226
// 008a74a2  8b5764               mov edx, dword ptr [edi + 0x64]
// 008a74a5  50                   push eax
// 008a74a6  6880000000           push 0x80
// 008a74ab  8bce                 mov ecx, esi
// 008a74ad  ffd2                 call edx
// 008a74af  8944246c             mov dword ptr [esp + 0x6c], eax
// 008a74b3  b8f82a9f00           mov eax, 0x9f2af8
// 008a74b8  895c2420             mov dword ptr [esp + 0x20], ebx
// 008a74bc  8944241c             mov dword ptr [esp + 0x1c], eax
// 008a74c0  895c2464             mov dword ptr [esp + 0x64], ebx
// 008a74c4  895c2418             mov dword ptr [esp + 0x18], ebx
// 008a74c8  89442414             mov dword ptr [esp + 0x14], eax
// 008a74cc  b808000000           mov eax, 8
// 008a74d1  bf04000000           mov edi, 4
// 008a74d6  6a01                 push 1
// 008a74d8  89442428             mov dword ptr [esp + 0x28], eax
// 008a74dc  89442430             mov dword ptr [esp + 0x30], eax
// 008a74e0  6a07                 push 7
// 008a74e2  8d44242c             lea eax, [esp + 0x2c]
// 008a74e6  50                   push eax
// 008a74e7  c644247001           mov byte ptr [esp + 0x70], 1
// 008a74ec  895c2434             mov dword ptr [esp + 0x34], ebx
// 008a74f0  897c243c             mov dword ptr [esp + 0x3c], edi
// 008a74f4  c74424400b000000     mov dword ptr [esp + 0x40], 0xb
// 008a74fc  897c2444             mov dword ptr [esp + 0x44], edi
// 008a7500  c744244806000000     mov dword ptr [esp + 0x48], 6
// 008a7508  c744244c09000000     mov dword ptr [esp + 0x4c], 9
// 008a7510  c744245001000000     mov dword ptr [esp + 0x50], 1
// 008a7518  897c2454             mov dword ptr [esp + 0x54], edi
// 008a751c  897c2458             mov dword ptr [esp + 0x58], edi
// 008a7520  897c245c             mov dword ptr [esp + 0x5c], edi
// 008a7524  897c2460             mov dword ptr [esp + 0x60], edi
// 008a7528  895c2464             mov dword ptr [esp + 0x64], ebx
// 008a752c  ff15b0b09800         call dword ptr [0x98b0b0]
// 008a7532  50                   push eax
// 008a7533  8d4c2420             lea ecx, [esp + 0x20]
// 008a7537  e8eec8f4ff           call 0x7f3e2a
// 008a753c  8b4660               mov eax, dword ptr [esi + 0x60]
// 008a753f  8d50f6               lea edx, [eax - 0xa]
// 008a7542  8d48fc               lea ecx, [eax - 4]
// 008a7545  89542440             mov dword ptr [esp + 0x40], edx
// 008a7549  ba08000000           mov edx, 8
// 008a754e  897c2424             mov dword ptr [esp + 0x24], edi
// 008a7552  89442428             mov dword ptr [esp + 0x28], eax
// 008a7556  897c242c             mov dword ptr [esp + 0x2c], edi
// 008a755a  894c2430             mov dword ptr [esp + 0x30], ecx
// 008a755e  895c2434             mov dword ptr [esp + 0x34], ebx
// 008a7562  894c2438             mov dword ptr [esp + 0x38], ecx
// 008a7566  c744243c06000000     mov dword ptr [esp + 0x3c], 6
// 008a756e  c74424440c000000     mov dword ptr [esp + 0x44], 0xc
// 008a7576  894c2448             mov dword ptr [esp + 0x48], ecx
// 008a757a  8954244c             mov dword ptr [esp + 0x4c], edx
// 008a757e  894c2450             mov dword ptr [esp + 0x50], ecx
// 008a7582  89542454             mov dword ptr [esp + 0x54], edx
// 008a7586  89442458             mov dword ptr [esp + 0x58], eax
// 008a758a  6a01                 push 1
// 008a758c  6a07                 push 7
// 008a758e  8d44242c             lea eax, [esp + 0x2c]
// 008a7592  50                   push eax
// 008a7593  ff15b0b09800         call dword ptr [0x98b0b0]
// 008a7599  50                   push eax
// 008a759a  8d4c2418             lea ecx, [esp + 0x18]
// 008a759e  e887c8f4ff           call 0x7f3e2a
// 008a75a3  55                   push ebp
// 008a75a4  6a0c                 push 0xc
// 008a75a6  53                   push ebx
// 008a75a7  53                   push ebx
// 008a75a8  8d7e58               lea edi, [esi + 0x58]
// 008a75ab  ff150cb19800         call dword ptr [0x98b10c]
// 008a75b1  50                   push eax
// 008a75b2  8bcf                 mov ecx, edi
// 008a75b4  e871c8f4ff           call 0x7f3e2a
// 008a75b9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008a75bd  8b542420             mov edx, dword ptr [esp + 0x20]
// 008a75c1  8b465c               mov eax, dword ptr [esi + 0x5c]
// 008a75c4  6a02                 push 2
// 008a75c6  51                   push ecx
// 008a75c7  52                   push edx
// 008a75c8  50                   push eax
// 008a75c9  ff15acb09800         call dword ptr [0x98b0ac]
// 008a75cf  3bfb                 cmp edi, ebx
// 008a75d1  7504                 jne 0x8a75d7
// 008a75d3  33ff                 xor edi, edi
// 008a75d5  eb03                 jmp 0x8a75da
// 008a75d7  8b7f04               mov edi, dword ptr [edi + 4]
// 008a75da  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008a75dd  53                   push ebx
// 008a75de  57                   push edi
// 008a75df  51                   push ecx
// 008a75e0  ff1554cb9800         call dword ptr [0x98cb54]
// 008a75e6  8d4c241c             lea ecx, [esp + 0x1c]
// 008a75ea  e82fc8f4ff           call 0x7f3e1e
// 008a75ef  8d4c2414             lea ecx, [esp + 0x14]
// 008a75f3  e826c8f4ff           call 0x7f3e1e
// 008a75f8  bef82a9f00           mov esi, 0x9f2af8
// 008a75fd  8d4c2414             lea ecx, [esp + 0x14]
// 008a7601  885c2464             mov byte ptr [esp + 0x64], bl
// 008a7605  89742414             mov dword ptr [esp + 0x14], esi
// 008a7609  e8227cb6ff           call 0x40f230
// 008a760e  8d4c241c             lea ecx, [esp + 0x1c]
// 008a7612  c7442464ffffffff     mov dword ptr [esp + 0x64], 0xffffffff
// 008a761a  8974241c             mov dword ptr [esp + 0x1c], esi
// 008a761e  e80d7cb6ff           call 0x40f230
// 008a7623  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 008a7627  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008a762b  64890d00000000       mov dword ptr fs:[0], ecx
// 008a7632  59                   pop ecx
// 008a7633  5f                   pop edi
// 008a7634  5e                   pop esi
// 008a7635  5d                   pop ebp
// 008a7636  5b                   pop ebx
// 008a7637  83c454               add esp, 0x54
// 008a763a  c20400               ret 4
// copied from an identical function in another client (function ?Create@CXTPReportHeaderDropWnd@@UAEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportDragDrop.cpp