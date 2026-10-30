// roc 2009-12 008e0190  unit: CXTPOffice2007Image  size: 1752 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e0190
//
// 008e0190  6aff                 push -1
// 008e0192  68705a9600           push 0x965a70
// 008e0197  64a100000000         mov eax, dword ptr fs:[0]
// 008e019d  50                   push eax
// 008e019e  83ec48               sub esp, 0x48
// 008e01a1  53                   push ebx
// 008e01a2  55                   push ebp
// 008e01a3  56                   push esi
// 008e01a4  57                   push edi
// 008e01a5  a10052b600           mov eax, dword ptr [0xb65200]
// 008e01aa  33c4                 xor eax, esp
// 008e01ac  50                   push eax
// 008e01ad  8d44245c             lea eax, [esp + 0x5c]
// 008e01b1  64a300000000         mov dword ptr fs:[0], eax
// 008e01b7  8bf9                 mov edi, ecx
// 008e01b9  33db                 xor ebx, ebx
// 008e01bb  3bfb                 cmp edi, ebx
// 008e01bd  0f848f060000         je 0x8e0852
// 008e01c3  395f20               cmp dword ptr [edi + 0x20], ebx
// 008e01c6  0f8486060000         je 0x8e0852
// 008e01cc  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 008e01d3  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 008e01da  8b942490000000       mov edx, dword ptr [esp + 0x90]
// 008e01e1  2b442478             sub eax, dword ptr [esp + 0x78]
// 008e01e5  03d1                 add edx, ecx
// 008e01e7  3bd0                 cmp edx, eax
// 008e01e9  0f8f63060000         jg 0x8e0852
// 008e01ef  8b4734               mov eax, dword ptr [edi + 0x34]
// 008e01f2  3bc3                 cmp eax, ebx
// 008e01f4  0f8458060000         je 0x8e0852
// 008e01fa  50                   push eax
// 008e01fb  8d4c2418             lea ecx, [esp + 0x18]
// 008e01ff  e80cc2f5ff           call 0x83c410
// 008e0204  8b742470             mov esi, dword ptr [esp + 0x70]
// 008e0208  8b44247c             mov eax, dword ptr [esp + 0x7c]
// 008e020c  8b4e08               mov ecx, dword ptr [esi + 8]
// 008e020f  2b442474             sub eax, dword ptr [esp + 0x74]
// 008e0213  2b0e                 sub ecx, dword ptr [esi]
// 008e0215  895c2464             mov dword ptr [esp + 0x64], ebx
// 008e0219  3bc8                 cmp ecx, eax
// 008e021b  750e                 jne 0x8e022b
// 008e021d  899c2484000000       mov dword ptr [esp + 0x84], ebx
// 008e0224  899c248c000000       mov dword ptr [esp + 0x8c], ebx
// 008e022b  8b560c               mov edx, dword ptr [esi + 0xc]
// 008e022e  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 008e0235  2b5604               sub edx, dword ptr [esi + 4]
// 008e0238  2b442478             sub eax, dword ptr [esp + 0x78]
// 008e023c  3bd0                 cmp edx, eax
// 008e023e  750e                 jne 0x8e024e
// 008e0240  899c2488000000       mov dword ptr [esp + 0x88], ebx
// 008e0247  899c2490000000       mov dword ptr [esp + 0x90], ebx
// 008e024e  8b6c246c             mov ebp, dword ptr [esp + 0x6c]
// 008e0252  6a03                 push 3
// 008e0254  8bcd                 mov ecx, ebp
// 008e0256  e845640400           call 0x9266a0
// 008e025b  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 008e0262  8b942488000000       mov edx, dword ptr [esp + 0x88]
// 008e0269  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 008e0270  8b9c2490000000       mov ebx, dword ptr [esp + 0x90]
// 008e0277  894c2418             mov dword ptr [esp + 0x18], ecx
// 008e027b  8b0e                 mov ecx, dword ptr [esi]
// 008e027d  3b4e08               cmp ecx, dword ptr [esi + 8]
// 008e0280  8954241c             mov dword ptr [esp + 0x1c], edx
// 008e0284  89442420             mov dword ptr [esp + 0x20], eax
// 008e0288  0f8db3050000         jge 0x8e0841
// 008e028e  8b5604               mov edx, dword ptr [esi + 4]
// 008e0291  3b560c               cmp edx, dword ptr [esi + 0xc]
// 008e0294  0f8da7050000         jge 0x8e0841
// 008e029a  55                   push ebp
// 008e029b  e870bef6ff           call 0x84c110
// 008e02a0  83c404               add esp, 4
// 008e02a3  837f2400             cmp dword ptr [edi + 0x24], 0
// 008e02a7  89442470             mov dword ptr [esp + 0x70], eax
// 008e02ab  741f                 je 0x8e02cc
// 008e02ad  837f2c00             cmp dword ptr [edi + 0x2c], 0
// 008e02b1  7419                 je 0x8e02cc
// 008e02b3  85c0                 test eax, eax
// 008e02b5  7408                 je 0x8e02bf
// 008e02b7  837f3000             cmp dword ptr [edi + 0x30], 0
// 008e02bb  7408                 je 0x8e02c5
// 008e02bd  eb0d                 jmp 0x8e02cc
// 008e02bf  837f3000             cmp dword ptr [edi + 0x30], 0
// 008e02c3  7407                 je 0x8e02cc
// 008e02c5  8bcf                 mov ecx, edi
// 008e02c7  e8e4fbffff           call 0x8dfeb0
// 008e02cc  8b4720               mov eax, dword ptr [edi + 0x20]
// 008e02cf  50                   push eax
// 008e02d0  55                   push ebp
// 008e02d1  8d4c2450             lea ecx, [esp + 0x50]
// 008e02d5  e836b6f6ff           call 0x84b910
// 008e02da  837c247000           cmp dword ptr [esp + 0x70], 0
// 008e02df  c644246401           mov byte ptr [esp + 0x64], 1
// 008e02e4  741b                 je 0x8e0301
// 008e02e6  837f2400             cmp dword ptr [edi + 0x24], 0
// 008e02ea  7515                 jne 0x8e0301
// 008e02ec  837f2c00             cmp dword ptr [edi + 0x2c], 0
// 008e02f0  750f                 jne 0x8e0301
// 008e02f2  8d4c2448             lea ecx, [esp + 0x48]
// 008e02f6  6a00                 push 0
// 008e02f8  51                   push ecx
// 008e02f9  e842bef6ff           call 0x84c140
// 008e02fe  83c408               add esp, 8
// 008e0301  8d8c2484000000       lea ecx, [esp + 0x84]
// 008e0308  e8937cfcff           call 0x8a7fa0
// 008e030d  85c0                 test eax, eax
// 008e030f  7410                 je 0x8e0321
// 008e0311  8d542474             lea edx, [esp + 0x74]
// 008e0315  52                   push edx
// 008e0316  8d44244c             lea eax, [esp + 0x4c]
// 008e031a  50                   push eax
// 008e031b  56                   push esi
// 008e031c  e90a050000           jmp 0x8e082b
// 008e0321  8b4e04               mov ecx, dword ptr [esi + 4]
// 008e0324  8b460c               mov eax, dword ptr [esi + 0xc]
// 008e0327  8b942488000000       mov edx, dword ptr [esp + 0x88]
// 008e032e  2bc1                 sub eax, ecx
// 008e0330  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 008e0337  03ca                 add ecx, edx
// 008e0339  3bc1                 cmp eax, ecx
// 008e033b  7e0f                 jle 0x8e034c
// 008e033d  8b942480000000       mov edx, dword ptr [esp + 0x80]
// 008e0344  2b542478             sub edx, dword ptr [esp + 0x78]
// 008e0348  3bd1                 cmp edx, ecx
// 008e034a  7549                 jne 0x8e0395
// 008e034c  51                   push ecx
// 008e034d  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 008e0354  51                   push ecx
// 008e0355  50                   push eax
// 008e0356  ff15a0b29800         call dword ptr [0x98b2a0]
// 008e035c  8b4e04               mov ecx, dword ptr [esi + 4]
// 008e035f  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 008e0362  2bd9                 sub ebx, ecx
// 008e0364  2bd8                 sub ebx, eax
// 008e0366  8944241c             mov dword ptr [esp + 0x1c], eax
// 008e036a  85db                 test ebx, ebx
// 008e036c  7e27                 jle 0x8e0395
// 008e036e  8bd3                 mov edx, ebx
// 008e0370  81e201000080         and edx, 0x80000001
// 008e0376  7905                 jns 0x8e037d
// 008e0378  4a                   dec edx
// 008e0379  83cafe               or edx, 0xfffffffe
// 008e037c  42                   inc edx
// 008e037d  8b842490000000       mov eax, dword ptr [esp + 0x90]
// 008e0384  2501000080           and eax, 0x80000001
// 008e0389  7905                 jns 0x8e0390
// 008e038b  48                   dec eax
// 008e038c  83c8fe               or eax, 0xfffffffe
// 008e038f  40                   inc eax
// 008e0390  3bd0                 cmp edx, eax
// 008e0392  7401                 je 0x8e0395
// 008e0394  43                   inc ebx
// 008e0395  8b0e                 mov ecx, dword ptr [esi]
// 008e0397  8b4608               mov eax, dword ptr [esi + 8]
// 008e039a  8b942484000000       mov edx, dword ptr [esp + 0x84]
// 008e03a1  2bc1                 sub eax, ecx
// 008e03a3  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 008e03aa  03ca                 add ecx, edx
// 008e03ac  3bc1                 cmp eax, ecx
// 008e03ae  8b542474             mov edx, dword ptr [esp + 0x74]
// 008e03b2  89442470             mov dword ptr [esp + 0x70], eax
// 008e03b6  7e0e                 jle 0x8e03c6
// 008e03b8  8b44247c             mov eax, dword ptr [esp + 0x7c]
// 008e03bc  2bc2                 sub eax, edx
// 008e03be  3bc1                 cmp eax, ecx
// 008e03c0  7521                 jne 0x8e03e3
// 008e03c2  8b442470             mov eax, dword ptr [esp + 0x70]
// 008e03c6  0faf842484000000     imul eax, dword ptr [esp + 0x84]
// 008e03ce  99                   cdq 
// 008e03cf  f7f9                 idiv ecx
// 008e03d1  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 008e03d5  8b542474             mov edx, dword ptr [esp + 0x74]
// 008e03d9  2bc8                 sub ecx, eax
// 008e03db  89442418             mov dword ptr [esp + 0x18], eax
// 008e03df  894c2420             mov dword ptr [esp + 0x20], ecx
// 008e03e3  8b442478             mov eax, dword ptr [esp + 0x78]
// 008e03e7  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 008e03ee  03c8                 add ecx, eax
// 008e03f0  8b842484000000       mov eax, dword ptr [esp + 0x84]
// 008e03f7  03c2                 add eax, edx
// 008e03f9  89542428             mov dword ptr [esp + 0x28], edx
// 008e03fd  8b542478             mov edx, dword ptr [esp + 0x78]
// 008e0401  89442430             mov dword ptr [esp + 0x30], eax
// 008e0405  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008e0409  894c2434             mov dword ptr [esp + 0x34], ecx
// 008e040d  8954242c             mov dword ptr [esp + 0x2c], edx
// 008e0411  8b5604               mov edx, dword ptr [esi + 4]
// 008e0414  8d0c02               lea ecx, [edx + eax]
// 008e0417  8b442418             mov eax, dword ptr [esp + 0x18]
// 008e041b  894c2470             mov dword ptr [esp + 0x70], ecx
// 008e041f  8b0e                 mov ecx, dword ptr [esi]
// 008e0421  03c1                 add eax, ecx
// 008e0423  894c2438             mov dword ptr [esp + 0x38], ecx
// 008e0427  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 008e042b  8954243c             mov dword ptr [esp + 0x3c], edx
// 008e042f  8d542428             lea edx, [esp + 0x28]
// 008e0433  52                   push edx
// 008e0434  89442444             mov dword ptr [esp + 0x44], eax
// 008e0438  894c2448             mov dword ptr [esp + 0x48], ecx
// 008e043c  8d44244c             lea eax, [esp + 0x4c]
// 008e0440  50                   push eax
// 008e0441  8d4c2440             lea ecx, [esp + 0x40]
// 008e0445  51                   push ecx
// 008e0446  55                   push ebp
// 008e0447  8bcf                 mov ecx, edi
// 008e0449  e812fcffff           call 0x8e0060
// 008e044e  8b942488000000       mov edx, dword ptr [esp + 0x88]
// 008e0455  8b442478             mov eax, dword ptr [esp + 0x78]
// 008e0459  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 008e0460  03c2                 add eax, edx
// 008e0462  8b542474             mov edx, dword ptr [esp + 0x74]
// 008e0466  89442470             mov dword ptr [esp + 0x70], eax
// 008e046a  8b44247c             mov eax, dword ptr [esp + 0x7c]
// 008e046e  2b84248c000000       sub eax, dword ptr [esp + 0x8c]
// 008e0475  03d1                 add edx, ecx
// 008e0477  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 008e047b  89542438             mov dword ptr [esp + 0x38], edx
// 008e047f  8b542470             mov edx, dword ptr [esp + 0x70]
// 008e0483  89442440             mov dword ptr [esp + 0x40], eax
// 008e0487  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008e048b  894c243c             mov dword ptr [esp + 0x3c], ecx
// 008e048f  8b4e04               mov ecx, dword ptr [esi + 4]
// 008e0492  89542444             mov dword ptr [esp + 0x44], edx
// 008e0496  8d1401               lea edx, [ecx + eax]
// 008e0499  8b4608               mov eax, dword ptr [esi + 8]
// 008e049c  2b442420             sub eax, dword ptr [esp + 0x20]
// 008e04a0  89542470             mov dword ptr [esp + 0x70], edx
// 008e04a4  8b16                 mov edx, dword ptr [esi]
// 008e04a6  03542418             add edx, dword ptr [esp + 0x18]
// 008e04aa  894c242c             mov dword ptr [esp + 0x2c], ecx
// 008e04ae  89442430             mov dword ptr [esp + 0x30], eax
// 008e04b2  8b442470             mov eax, dword ptr [esp + 0x70]
// 008e04b6  8d4c2438             lea ecx, [esp + 0x38]
// 008e04ba  51                   push ecx
// 008e04bb  8954242c             mov dword ptr [esp + 0x2c], edx
// 008e04bf  8d54244c             lea edx, [esp + 0x4c]
// 008e04c3  89442438             mov dword ptr [esp + 0x38], eax
// 008e04c7  52                   push edx
// 008e04c8  8d442430             lea eax, [esp + 0x30]
// 008e04cc  50                   push eax
// 008e04cd  55                   push ebp
// 008e04ce  8bcf                 mov ecx, edi
// 008e04d0  e88bfbffff           call 0x8e0060
// 008e04d5  8b442478             mov eax, dword ptr [esp + 0x78]
// 008e04d9  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 008e04e0  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 008e04e4  03c8                 add ecx, eax
// 008e04e6  2b94248c000000       sub edx, dword ptr [esp + 0x8c]
// 008e04ed  8944243c             mov dword ptr [esp + 0x3c], eax
// 008e04f1  8b44247c             mov eax, dword ptr [esp + 0x7c]
// 008e04f5  89442440             mov dword ptr [esp + 0x40], eax
// 008e04f9  8b4604               mov eax, dword ptr [esi + 4]
// 008e04fc  894c2444             mov dword ptr [esp + 0x44], ecx
// 008e0500  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008e0504  89542438             mov dword ptr [esp + 0x38], edx
// 008e0508  8d1408               lea edx, [eax + ecx]
// 008e050b  8b4e08               mov ecx, dword ptr [esi + 8]
// 008e050e  89542470             mov dword ptr [esp + 0x70], edx
// 008e0512  8bd1                 mov edx, ecx
// 008e0514  2b542420             sub edx, dword ptr [esp + 0x20]
// 008e0518  894c2430             mov dword ptr [esp + 0x30], ecx
// 008e051c  8944242c             mov dword ptr [esp + 0x2c], eax
// 008e0520  8b442470             mov eax, dword ptr [esp + 0x70]
// 008e0524  8d4c2438             lea ecx, [esp + 0x38]
// 008e0528  51                   push ecx
// 008e0529  8954242c             mov dword ptr [esp + 0x2c], edx
// 008e052d  8d54244c             lea edx, [esp + 0x4c]
// 008e0531  89442438             mov dword ptr [esp + 0x38], eax
// 008e0535  52                   push edx
// 008e0536  8d442430             lea eax, [esp + 0x30]
// 008e053a  50                   push eax
// 008e053b  55                   push ebp
// 008e053c  8bcf                 mov ecx, edi
// 008e053e  e81dfbffff           call 0x8e0060
// 008e0543  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 008e054a  8b542474             mov edx, dword ptr [esp + 0x74]
// 008e054e  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 008e0555  2b842490000000       sub eax, dword ptr [esp + 0x90]
// 008e055c  03d1                 add edx, ecx
// 008e055e  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 008e0565  89542470             mov dword ptr [esp + 0x70], edx
// 008e0569  8b542478             mov edx, dword ptr [esp + 0x78]
// 008e056d  03ca                 add ecx, edx
// 008e056f  8b542474             mov edx, dword ptr [esp + 0x74]
// 008e0573  894c243c             mov dword ptr [esp + 0x3c], ecx
// 008e0577  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 008e057b  894c2440             mov dword ptr [esp + 0x40], ecx
// 008e057f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008e0583  89542438             mov dword ptr [esp + 0x38], edx
// 008e0587  8b16                 mov edx, dword ptr [esi]
// 008e0589  03ca                 add ecx, edx
// 008e058b  894c2470             mov dword ptr [esp + 0x70], ecx
// 008e058f  8b4e04               mov ecx, dword ptr [esi + 4]
// 008e0592  034c241c             add ecx, dword ptr [esp + 0x1c]
// 008e0596  89442444             mov dword ptr [esp + 0x44], eax
// 008e059a  8b460c               mov eax, dword ptr [esi + 0xc]
// 008e059d  2bc3                 sub eax, ebx
// 008e059f  89542428             mov dword ptr [esp + 0x28], edx
// 008e05a3  8b542470             mov edx, dword ptr [esp + 0x70]
// 008e05a7  89442434             mov dword ptr [esp + 0x34], eax
// 008e05ab  894c242c             mov dword ptr [esp + 0x2c], ecx
// 008e05af  8d442438             lea eax, [esp + 0x38]
// 008e05b3  50                   push eax
// 008e05b4  8d4c244c             lea ecx, [esp + 0x4c]
// 008e05b8  51                   push ecx
// 008e05b9  89542438             mov dword ptr [esp + 0x38], edx
// 008e05bd  8d542430             lea edx, [esp + 0x30]
// 008e05c1  52                   push edx
// 008e05c2  55                   push ebp
// 008e05c3  8bcf                 mov ecx, edi
// 008e05c5  e896faffff           call 0x8e0060
// 008e05ca  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 008e05ce  2b8c248c000000       sub ecx, dword ptr [esp + 0x8c]
// 008e05d5  8b542478             mov edx, dword ptr [esp + 0x78]
// 008e05d9  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 008e05e0  2b842490000000       sub eax, dword ptr [esp + 0x90]
// 008e05e7  894c246c             mov dword ptr [esp + 0x6c], ecx
// 008e05eb  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 008e05f2  03d1                 add edx, ecx
// 008e05f4  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 008e05fb  89542470             mov dword ptr [esp + 0x70], edx
// 008e05ff  8b542474             mov edx, dword ptr [esp + 0x74]
// 008e0603  03d1                 add edx, ecx
// 008e0605  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 008e0609  89542438             mov dword ptr [esp + 0x38], edx
// 008e060d  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 008e0611  894c243c             mov dword ptr [esp + 0x3c], ecx
// 008e0615  8b4e08               mov ecx, dword ptr [esi + 8]
// 008e0618  2b4c2420             sub ecx, dword ptr [esp + 0x20]
// 008e061c  89542440             mov dword ptr [esp + 0x40], edx
// 008e0620  8b5604               mov edx, dword ptr [esi + 4]
// 008e0623  89442444             mov dword ptr [esp + 0x44], eax
// 008e0627  8b460c               mov eax, dword ptr [esi + 0xc]
// 008e062a  2bc3                 sub eax, ebx
// 008e062c  0354241c             add edx, dword ptr [esp + 0x1c]
// 008e0630  89542470             mov dword ptr [esp + 0x70], edx
// 008e0634  8b16                 mov edx, dword ptr [esi]
// 008e0636  03542418             add edx, dword ptr [esp + 0x18]
// 008e063a  89442434             mov dword ptr [esp + 0x34], eax
// 008e063e  89542428             mov dword ptr [esp + 0x28], edx
// 008e0642  8b542470             mov edx, dword ptr [esp + 0x70]
// 008e0646  894c2430             mov dword ptr [esp + 0x30], ecx
// 008e064a  8d442438             lea eax, [esp + 0x38]
// 008e064e  50                   push eax
// 008e064f  8d4c244c             lea ecx, [esp + 0x4c]
// 008e0653  51                   push ecx
// 008e0654  89542434             mov dword ptr [esp + 0x34], edx
// 008e0658  8d542430             lea edx, [esp + 0x30]
// 008e065c  52                   push edx
// 008e065d  55                   push ebp
// 008e065e  8bcf                 mov ecx, edi
// 008e0660  e8fbf9ffff           call 0x8e0060
// 008e0665  8b542478             mov edx, dword ptr [esp + 0x78]
// 008e0669  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 008e0670  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 008e0677  2b842490000000       sub eax, dword ptr [esp + 0x90]
// 008e067e  03ca                 add ecx, edx
// 008e0680  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 008e0684  2b94248c000000       sub edx, dword ptr [esp + 0x8c]
// 008e068b  894c243c             mov dword ptr [esp + 0x3c], ecx
// 008e068f  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 008e0693  894c2440             mov dword ptr [esp + 0x40], ecx
// 008e0697  8b4e04               mov ecx, dword ptr [esi + 4]
// 008e069a  034c241c             add ecx, dword ptr [esp + 0x1c]
// 008e069e  89542438             mov dword ptr [esp + 0x38], edx
// 008e06a2  8b5608               mov edx, dword ptr [esi + 8]
// 008e06a5  2b542420             sub edx, dword ptr [esp + 0x20]
// 008e06a9  89442444             mov dword ptr [esp + 0x44], eax
// 008e06ad  8b460c               mov eax, dword ptr [esi + 0xc]
// 008e06b0  2bc3                 sub eax, ebx
// 008e06b2  894c242c             mov dword ptr [esp + 0x2c], ecx
// 008e06b6  8b4e08               mov ecx, dword ptr [esi + 8]
// 008e06b9  89542428             mov dword ptr [esp + 0x28], edx
// 008e06bd  8d542438             lea edx, [esp + 0x38]
// 008e06c1  52                   push edx
// 008e06c2  89442438             mov dword ptr [esp + 0x38], eax
// 008e06c6  894c2434             mov dword ptr [esp + 0x34], ecx
// 008e06ca  8d44244c             lea eax, [esp + 0x4c]
// 008e06ce  50                   push eax
// 008e06cf  8d4c2430             lea ecx, [esp + 0x30]
// 008e06d3  51                   push ecx
// 008e06d4  55                   push ebp
// 008e06d5  8bcf                 mov ecx, edi
// 008e06d7  e884f9ffff           call 0x8e0060
// 008e06dc  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 008e06e3  2b842490000000       sub eax, dword ptr [esp + 0x90]
// 008e06ea  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 008e06ee  8b942484000000       mov edx, dword ptr [esp + 0x84]
// 008e06f5  03d1                 add edx, ecx
// 008e06f7  8944243c             mov dword ptr [esp + 0x3c], eax
// 008e06fb  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 008e0702  89442444             mov dword ptr [esp + 0x44], eax
// 008e0706  8b442418             mov eax, dword ptr [esp + 0x18]
// 008e070a  89542440             mov dword ptr [esp + 0x40], edx
// 008e070e  8b16                 mov edx, dword ptr [esi]
// 008e0710  03c2                 add eax, edx
// 008e0712  894c2438             mov dword ptr [esp + 0x38], ecx
// 008e0716  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 008e0719  89442470             mov dword ptr [esp + 0x70], eax
// 008e071d  8bc1                 mov eax, ecx
// 008e071f  2bc3                 sub eax, ebx
// 008e0721  89542428             mov dword ptr [esp + 0x28], edx
// 008e0725  8b542470             mov edx, dword ptr [esp + 0x70]
// 008e0729  8944242c             mov dword ptr [esp + 0x2c], eax
// 008e072d  894c2434             mov dword ptr [esp + 0x34], ecx
// 008e0731  8d442438             lea eax, [esp + 0x38]
// 008e0735  50                   push eax
// 008e0736  8d4c244c             lea ecx, [esp + 0x4c]
// 008e073a  51                   push ecx
// 008e073b  89542438             mov dword ptr [esp + 0x38], edx
// 008e073f  8d542430             lea edx, [esp + 0x30]
// 008e0743  52                   push edx
// 008e0744  55                   push ebp
// 008e0745  8bcf                 mov ecx, edi
// 008e0747  e814f9ffff           call 0x8e0060
// 008e074c  8b44247c             mov eax, dword ptr [esp + 0x7c]
// 008e0750  2b84248c000000       sub eax, dword ptr [esp + 0x8c]
// 008e0757  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 008e075e  2b8c2490000000       sub ecx, dword ptr [esp + 0x90]
// 008e0765  8b542474             mov edx, dword ptr [esp + 0x74]
// 008e0769  894c2470             mov dword ptr [esp + 0x70], ecx
// 008e076d  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 008e0774  03d1                 add edx, ecx
// 008e0776  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 008e077a  89442440             mov dword ptr [esp + 0x40], eax
// 008e077e  8b4608               mov eax, dword ptr [esi + 8]
// 008e0781  2b442420             sub eax, dword ptr [esp + 0x20]
// 008e0785  89542438             mov dword ptr [esp + 0x38], edx
// 008e0789  8b942480000000       mov edx, dword ptr [esp + 0x80]
// 008e0790  894c243c             mov dword ptr [esp + 0x3c], ecx
// 008e0794  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 008e0797  89542444             mov dword ptr [esp + 0x44], edx
// 008e079b  8b16                 mov edx, dword ptr [esi]
// 008e079d  03542418             add edx, dword ptr [esp + 0x18]
// 008e07a1  89442430             mov dword ptr [esp + 0x30], eax
// 008e07a5  8b460c               mov eax, dword ptr [esi + 0xc]
// 008e07a8  2bcb                 sub ecx, ebx
// 008e07aa  89442434             mov dword ptr [esp + 0x34], eax
// 008e07ae  894c242c             mov dword ptr [esp + 0x2c], ecx
// 008e07b2  8d442438             lea eax, [esp + 0x38]
// 008e07b6  50                   push eax
// 008e07b7  8d4c244c             lea ecx, [esp + 0x4c]
// 008e07bb  51                   push ecx
// 008e07bc  89542430             mov dword ptr [esp + 0x30], edx
// 008e07c0  8d542430             lea edx, [esp + 0x30]
// 008e07c4  52                   push edx
// 008e07c5  55                   push ebp
// 008e07c6  8bcf                 mov ecx, edi
// 008e07c8  e893f8ffff           call 0x8e0060
// 008e07cd  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 008e07d4  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 008e07d8  2b94248c000000       sub edx, dword ptr [esp + 0x8c]
// 008e07df  8bc1                 mov eax, ecx
// 008e07e1  2b842490000000       sub eax, dword ptr [esp + 0x90]
// 008e07e8  894c2444             mov dword ptr [esp + 0x44], ecx
// 008e07ec  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 008e07ef  8b7608               mov esi, dword ptr [esi + 8]
// 008e07f2  8944243c             mov dword ptr [esp + 0x3c], eax
// 008e07f6  8b44247c             mov eax, dword ptr [esp + 0x7c]
// 008e07fa  89442440             mov dword ptr [esp + 0x40], eax
// 008e07fe  8bc1                 mov eax, ecx
// 008e0800  89542438             mov dword ptr [esp + 0x38], edx
// 008e0804  2bc3                 sub eax, ebx
// 008e0806  8bd6                 mov edx, esi
// 008e0808  2b542420             sub edx, dword ptr [esp + 0x20]
// 008e080c  8944242c             mov dword ptr [esp + 0x2c], eax
// 008e0810  8d442438             lea eax, [esp + 0x38]
// 008e0814  894c2434             mov dword ptr [esp + 0x34], ecx
// 008e0818  50                   push eax
// 008e0819  8d4c244c             lea ecx, [esp + 0x4c]
// 008e081d  8954242c             mov dword ptr [esp + 0x2c], edx
// 008e0821  51                   push ecx
// 008e0822  8d542430             lea edx, [esp + 0x30]
// 008e0826  89742438             mov dword ptr [esp + 0x38], esi
// 008e082a  52                   push edx
// 008e082b  55                   push ebp
// 008e082c  8bcf                 mov ecx, edi
// 008e082e  e82df8ffff           call 0x8e0060
// 008e0833  8d4c2448             lea ecx, [esp + 0x48]
// 008e0837  c644246400           mov byte ptr [esp + 0x64], 0
// 008e083c  e84fb1f6ff           call 0x84b990
// 008e0841  8d4c2414             lea ecx, [esp + 0x14]
// 008e0845  c7442464ffffffff     mov dword ptr [esp + 0x64], 0xffffffff
// 008e084d  e8debbf5ff           call 0x83c430
// 008e0852  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008e0856  64890d00000000       mov dword ptr fs:[0], ecx
// 008e085d  59                   pop ecx
// 008e085e  5f                   pop edi
// 008e085f  5e                   pop esi
// 008e0860  5d                   pop ebp
// 008e0861  5b                   pop ebx
// 008e0862  83c454               add esp, 0x54
// 008e0865  c22800               ret 0x28
// copied from an identical function in another client (function ?DrawImage@CXTPOffice2007Image@@QAEXPAVCDC@@ABVCRect@@V3@2@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPOffice2007Image.cpp