// roc 2009-06 007e4320  unit: CXTPDockingPaneContext  size: 586 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007e4320
//
// 007e4320  83ec20               sub esp, 0x20
// 007e4323  dd05e03f8d00         fld qword ptr [0x8d3fe0]
// 007e4329  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 007e432d  53                   push ebx
// 007e432e  dd5c2404             fstp qword ptr [esp + 4]
// 007e4332  d9e8                 fld1 
// 007e4334  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 007e4338  55                   push ebp
// 007e4339  dd5c2410             fstp qword ptr [esp + 0x10]
// 007e433d  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 007e4341  56                   push esi
// 007e4342  57                   push edi
// 007e4343  8b7c2450             mov edi, dword ptr [esp + 0x50]
// 007e4347  8bf1                 mov esi, ecx
// 007e4349  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 007e434d  85ff                 test edi, edi
// 007e434f  7439                 je 0x7e438a
// 007e4351  83be4801000000       cmp dword ptr [esi + 0x148], 0
// 007e4358  7530                 jne 0x7e438a
// 007e435a  8bc2                 mov eax, edx
// 007e435c  2bc5                 sub eax, ebp
// 007e435e  83f801               cmp eax, 1
// 007e4361  89442410             mov dword ptr [esp + 0x10], eax
// 007e4365  7e19                 jle 0x7e4380
// 007e4367  8bc1                 mov eax, ecx
// 007e4369  2bc3                 sub eax, ebx
// 007e436b  83f801               cmp eax, 1
// 007e436e  89442450             mov dword ptr [esp + 0x50], eax
// 007e4372  7e0c                 jle 0x7e4380
// 007e4374  db442450             fild dword ptr [esp + 0x50]
// 007e4378  da742410             fidiv dword ptr [esp + 0x10]
// 007e437c  dd5c2418             fstp qword ptr [esp + 0x18]
// 007e4380  dd0530839000         fld qword ptr [0x908330]
// 007e4386  dd5c2410             fstp qword ptr [esp + 0x10]
// 007e438a  8bc1                 mov eax, ecx
// 007e438c  2bc3                 sub eax, ebx
// 007e438e  7423                 je 0x7e43b3
// 007e4390  8bc2                 mov eax, edx
// 007e4392  2bc5                 sub eax, ebp
// 007e4394  741d                 je 0x7e43b3
// 007e4396  85ff                 test edi, edi
// 007e4398  7425                 je 0x7e43bf
// 007e439a  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 007e439e  8b542444             mov edx, dword ptr [esp + 0x44]
// 007e43a2  51                   push ecx
// 007e43a3  52                   push edx
// 007e43a4  8d44243c             lea eax, [esp + 0x3c]
// 007e43a8  50                   push eax
// 007e43a9  ff15c0ed8900         call dword ptr [0x89edc0]
// 007e43af  85c0                 test eax, eax
// 007e43b1  7541                 jne 0x7e43f4
// 007e43b3  5f                   pop edi
// 007e43b4  5e                   pop esi
// 007e43b5  5d                   pop ebp
// 007e43b6  33c0                 xor eax, eax
// 007e43b8  5b                   pop ebx
// 007e43b9  83c420               add esp, 0x20
// 007e43bc  c22000               ret 0x20
// 007e43bf  83c114               add ecx, 0x14
// 007e43c2  83c214               add edx, 0x14
// 007e43c5  894c242c             mov dword ptr [esp + 0x2c], ecx
// 007e43c9  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 007e43cd  89542428             mov dword ptr [esp + 0x28], edx
// 007e43d1  8b542444             mov edx, dword ptr [esp + 0x44]
// 007e43d5  51                   push ecx
// 007e43d6  52                   push edx
// 007e43d7  8d442428             lea eax, [esp + 0x28]
// 007e43db  83c5ec               add ebp, -0x14
// 007e43de  83c3ec               add ebx, -0x14
// 007e43e1  50                   push eax
// 007e43e2  896c242c             mov dword ptr [esp + 0x2c], ebp
// 007e43e6  895c2430             mov dword ptr [esp + 0x30], ebx
// 007e43ea  ff15c0ed8900         call dword ptr [0x89edc0]
// 007e43f0  85c0                 test eax, eax
// 007e43f2  74bf                 je 0x7e43b3
// 007e43f4  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 007e43f8  33db                 xor ebx, ebx
// 007e43fa  85ff                 test edi, edi
// 007e43fc  0f95c3               setne bl
// 007e43ff  8bcd                 mov ecx, ebp
// 007e4401  2b4c2438             sub ecx, dword ptr [esp + 0x38]
// 007e4405  33ff                 xor edi, edi
// 007e4407  8bc1                 mov eax, ecx
// 007e4409  99                   cdq 
// 007e440a  33c2                 xor eax, edx
// 007e440c  2bc2                 sub eax, edx
// 007e440e  89442450             mov dword ptr [esp + 0x50], eax
// 007e4412  8d5c1bff             lea ebx, [ebx + ebx - 1]
// 007e4416  db442450             fild dword ptr [esp + 0x50]
// 007e441a  dd442410             fld qword ptr [esp + 0x10]
// 007e441e  d8d1                 fcom st(1)
// 007e4420  dfe0                 fnstsw ax
// 007e4422  f6c441               test ah, 0x41
// 007e4425  751a                 jne 0x7e4441
// 007e4427  0fafcb               imul ecx, ebx
// 007e442a  85c9                 test ecx, ecx
// 007e442c  7c13                 jl 0x7e4441
// 007e442e  ddd8                 fstp st(0)
// 007e4430  c7868801000002000000 mov dword ptr [esi + 0x188], 2
// 007e443a  bf01000000           mov edi, 1
// 007e443f  eb02                 jmp 0x7e4443
// 007e4441  ddd9                 fstp st(1)
// 007e4443  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 007e4447  2bcd                 sub ecx, ebp
// 007e4449  8bc1                 mov eax, ecx
// 007e444b  99                   cdq 
// 007e444c  33c2                 xor eax, edx
// 007e444e  2bc2                 sub eax, edx
// 007e4450  89442450             mov dword ptr [esp + 0x50], eax
// 007e4454  db442450             fild dword ptr [esp + 0x50]
// 007e4458  d8d1                 fcom st(1)
// 007e445a  dfe0                 fnstsw ax
// 007e445c  f6c405               test ah, 5
// 007e445f  7a1a                 jp 0x7e447b
// 007e4461  0fafcb               imul ecx, ebx
// 007e4464  85c9                 test ecx, ecx
// 007e4466  7c13                 jl 0x7e447b
// 007e4468  ddd9                 fstp st(1)
// 007e446a  c7868801000003000000 mov dword ptr [esi + 0x188], 3
// 007e4474  bf01000000           mov edi, 1
// 007e4479  eb02                 jmp 0x7e447d
// 007e447b  ddd8                 fstp st(0)
// 007e447d  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 007e4481  8bcd                 mov ecx, ebp
// 007e4483  2b4c2434             sub ecx, dword ptr [esp + 0x34]
// 007e4487  8bc1                 mov eax, ecx
// 007e4489  99                   cdq 
// 007e448a  33c2                 xor eax, edx
// 007e448c  2bc2                 sub eax, edx
// 007e448e  89442450             mov dword ptr [esp + 0x50], eax
// 007e4492  db442450             fild dword ptr [esp + 0x50]
// 007e4496  dd442418             fld qword ptr [esp + 0x18]
// 007e449a  dcc9                 fmul st(1), st(0)
// 007e449c  d9c9                 fxch st(1)
// 007e449e  d8d2                 fcom st(2)
// 007e44a0  dfe0                 fnstsw ax
// 007e44a2  f6c405               test ah, 5
// 007e44a5  7a1a                 jp 0x7e44c1
// 007e44a7  0fafcb               imul ecx, ebx
// 007e44aa  85c9                 test ecx, ecx
// 007e44ac  7c13                 jl 0x7e44c1
// 007e44ae  ddda                 fstp st(2)
// 007e44b0  c7868801000000000000 mov dword ptr [esi + 0x188], 0
// 007e44ba  bf01000000           mov edi, 1
// 007e44bf  eb02                 jmp 0x7e44c3
// 007e44c1  ddd8                 fstp st(0)
// 007e44c3  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 007e44c7  2bcd                 sub ecx, ebp
// 007e44c9  8bc1                 mov eax, ecx
// 007e44cb  99                   cdq 
// 007e44cc  33c2                 xor eax, edx
// 007e44ce  2bc2                 sub eax, edx
// 007e44d0  89442450             mov dword ptr [esp + 0x50], eax
// 007e44d4  db442450             fild dword ptr [esp + 0x50]
// 007e44d8  dec9                 fmulp st(1)
// 007e44da  ded9                 fcompp 
// 007e44dc  dfe0                 fnstsw ax
// 007e44de  f6c405               test ah, 5
// 007e44e1  7a14                 jp 0x7e44f7
// 007e44e3  0fafcb               imul ecx, ebx
// 007e44e6  85c9                 test ecx, ecx
// 007e44e8  7c0d                 jl 0x7e44f7
// 007e44ea  bf01000000           mov edi, 1
// 007e44ef  89be88010000         mov dword ptr [esi + 0x188], edi
// 007e44f5  eb04                 jmp 0x7e44fb
// 007e44f7  85ff                 test edi, edi
// 007e44f9  7463                 je 0x7e455e
// 007e44fb  8b8e88010000         mov ecx, dword ptr [esi + 0x188]
// 007e4501  8b5c244c             mov ebx, dword ptr [esp + 0x4c]
// 007e4505  51                   push ecx
// 007e4506  53                   push ebx
// 007e4507  8bce                 mov ecx, esi
// 007e4509  e8b2f6ffff           call 0x7e3bc0
// 007e450e  85c0                 test eax, eax
// 007e4510  0f849dfeffff         je 0x7e43b3
// 007e4516  8b9688010000         mov edx, dword ptr [esi + 0x188]
// 007e451c  8b8620010000         mov eax, dword ptr [esi + 0x120]
// 007e4522  53                   push ebx
// 007e4523  52                   push edx
// 007e4524  50                   push eax
// 007e4525  8d4c242c             lea ecx, [esp + 0x2c]
// 007e4529  51                   push ecx
// 007e452a  8b8e1c010000         mov ecx, dword ptr [esi + 0x11c]
// 007e4530  e87b9af7ff           call 0x75dfb0
// 007e4535  8b10                 mov edx, dword ptr [eax]
// 007e4537  899630010000         mov dword ptr [esi + 0x130], edx
// 007e453d  8b4804               mov ecx, dword ptr [eax + 4]
// 007e4540  898e34010000         mov dword ptr [esi + 0x134], ecx
// 007e4546  8b5008               mov edx, dword ptr [eax + 8]
// 007e4549  899638010000         mov dword ptr [esi + 0x138], edx
// 007e454f  8b400c               mov eax, dword ptr [eax + 0xc]
// 007e4552  89863c010000         mov dword ptr [esi + 0x13c], eax
// 007e4558  899e2c010000         mov dword ptr [esi + 0x12c], ebx
// 007e455e  8bc7                 mov eax, edi
// 007e4560  5f                   pop edi
// 007e4561  5e                   pop esi
// 007e4562  5d                   pop ebp
// 007e4563  5b                   pop ebx
// 007e4564  83c420               add esp, 0x20
// 007e4567  c22000               ret 0x20
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneContext.cpp (function ?CanDock@CXTPDockingPaneContext@@IAEHVCRect@@VCPoint@@PAVCXTPDockingPaneBase@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneContext.cpp
