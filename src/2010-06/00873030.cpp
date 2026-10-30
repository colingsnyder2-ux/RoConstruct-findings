// roc 2010-06 00873030  unit: CXTPDockingPaneContext  size: 586 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00873030
//
// 00873030  83ec20               sub esp, 0x20
// 00873033  dd0540c9a400         fld qword ptr [0xa4c940]
// 00873039  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0087303d  53                   push ebx
// 0087303e  dd5c2404             fstp qword ptr [esp + 4]
// 00873042  d9e8                 fld1 
// 00873044  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 00873048  55                   push ebp
// 00873049  dd5c2410             fstp qword ptr [esp + 0x10]
// 0087304d  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00873051  56                   push esi
// 00873052  57                   push edi
// 00873053  8b7c2450             mov edi, dword ptr [esp + 0x50]
// 00873057  8bf1                 mov esi, ecx
// 00873059  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0087305d  85ff                 test edi, edi
// 0087305f  7439                 je 0x87309a
// 00873061  83be4801000000       cmp dword ptr [esi + 0x148], 0
// 00873068  7530                 jne 0x87309a
// 0087306a  8bc2                 mov eax, edx
// 0087306c  2bc5                 sub eax, ebp
// 0087306e  83f801               cmp eax, 1
// 00873071  89442410             mov dword ptr [esp + 0x10], eax
// 00873075  7e19                 jle 0x873090
// 00873077  8bc1                 mov eax, ecx
// 00873079  2bc3                 sub eax, ebx
// 0087307b  83f801               cmp eax, 1
// 0087307e  89442450             mov dword ptr [esp + 0x50], eax
// 00873082  7e0c                 jle 0x873090
// 00873084  db442450             fild dword ptr [esp + 0x50]
// 00873088  da742410             fidiv dword ptr [esp + 0x10]
// 0087308c  dd5c2418             fstp qword ptr [esp + 0x18]
// 00873090  dd0588caa600         fld qword ptr [0xa6ca88]
// 00873096  dd5c2410             fstp qword ptr [esp + 0x10]
// 0087309a  8bc1                 mov eax, ecx
// 0087309c  2bc3                 sub eax, ebx
// 0087309e  7423                 je 0x8730c3
// 008730a0  8bc2                 mov eax, edx
// 008730a2  2bc5                 sub eax, ebp
// 008730a4  741d                 je 0x8730c3
// 008730a6  85ff                 test edi, edi
// 008730a8  7425                 je 0x8730cf
// 008730aa  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008730ae  8b542444             mov edx, dword ptr [esp + 0x44]
// 008730b2  51                   push ecx
// 008730b3  52                   push edx
// 008730b4  8d44243c             lea eax, [esp + 0x3c]
// 008730b8  50                   push eax
// 008730b9  ff15e0bb9e00         call dword ptr [0x9ebbe0]
// 008730bf  85c0                 test eax, eax
// 008730c1  7541                 jne 0x873104
// 008730c3  5f                   pop edi
// 008730c4  5e                   pop esi
// 008730c5  5d                   pop ebp
// 008730c6  33c0                 xor eax, eax
// 008730c8  5b                   pop ebx
// 008730c9  83c420               add esp, 0x20
// 008730cc  c22000               ret 0x20
// 008730cf  83c114               add ecx, 0x14
// 008730d2  83c214               add edx, 0x14
// 008730d5  894c242c             mov dword ptr [esp + 0x2c], ecx
// 008730d9  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008730dd  89542428             mov dword ptr [esp + 0x28], edx
// 008730e1  8b542444             mov edx, dword ptr [esp + 0x44]
// 008730e5  51                   push ecx
// 008730e6  52                   push edx
// 008730e7  8d442428             lea eax, [esp + 0x28]
// 008730eb  83c5ec               add ebp, -0x14
// 008730ee  83c3ec               add ebx, -0x14
// 008730f1  50                   push eax
// 008730f2  896c242c             mov dword ptr [esp + 0x2c], ebp
// 008730f6  895c2430             mov dword ptr [esp + 0x30], ebx
// 008730fa  ff15e0bb9e00         call dword ptr [0x9ebbe0]
// 00873100  85c0                 test eax, eax
// 00873102  74bf                 je 0x8730c3
// 00873104  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 00873108  33db                 xor ebx, ebx
// 0087310a  85ff                 test edi, edi
// 0087310c  0f95c3               setne bl
// 0087310f  8bcd                 mov ecx, ebp
// 00873111  2b4c2438             sub ecx, dword ptr [esp + 0x38]
// 00873115  33ff                 xor edi, edi
// 00873117  8bc1                 mov eax, ecx
// 00873119  99                   cdq 
// 0087311a  33c2                 xor eax, edx
// 0087311c  2bc2                 sub eax, edx
// 0087311e  89442450             mov dword ptr [esp + 0x50], eax
// 00873122  8d5c1bff             lea ebx, [ebx + ebx - 1]
// 00873126  db442450             fild dword ptr [esp + 0x50]
// 0087312a  dd442410             fld qword ptr [esp + 0x10]
// 0087312e  d8d1                 fcom st(1)
// 00873130  dfe0                 fnstsw ax
// 00873132  f6c441               test ah, 0x41
// 00873135  751a                 jne 0x873151
// 00873137  0fafcb               imul ecx, ebx
// 0087313a  85c9                 test ecx, ecx
// 0087313c  7c13                 jl 0x873151
// 0087313e  ddd8                 fstp st(0)
// 00873140  c7868801000002000000 mov dword ptr [esi + 0x188], 2
// 0087314a  bf01000000           mov edi, 1
// 0087314f  eb02                 jmp 0x873153
// 00873151  ddd9                 fstp st(1)
// 00873153  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00873157  2bcd                 sub ecx, ebp
// 00873159  8bc1                 mov eax, ecx
// 0087315b  99                   cdq 
// 0087315c  33c2                 xor eax, edx
// 0087315e  2bc2                 sub eax, edx
// 00873160  89442450             mov dword ptr [esp + 0x50], eax
// 00873164  db442450             fild dword ptr [esp + 0x50]
// 00873168  d8d1                 fcom st(1)
// 0087316a  dfe0                 fnstsw ax
// 0087316c  f6c405               test ah, 5
// 0087316f  7a1a                 jp 0x87318b
// 00873171  0fafcb               imul ecx, ebx
// 00873174  85c9                 test ecx, ecx
// 00873176  7c13                 jl 0x87318b
// 00873178  ddd9                 fstp st(1)
// 0087317a  c7868801000003000000 mov dword ptr [esi + 0x188], 3
// 00873184  bf01000000           mov edi, 1
// 00873189  eb02                 jmp 0x87318d
// 0087318b  ddd8                 fstp st(0)
// 0087318d  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 00873191  8bcd                 mov ecx, ebp
// 00873193  2b4c2434             sub ecx, dword ptr [esp + 0x34]
// 00873197  8bc1                 mov eax, ecx
// 00873199  99                   cdq 
// 0087319a  33c2                 xor eax, edx
// 0087319c  2bc2                 sub eax, edx
// 0087319e  89442450             mov dword ptr [esp + 0x50], eax
// 008731a2  db442450             fild dword ptr [esp + 0x50]
// 008731a6  dd442418             fld qword ptr [esp + 0x18]
// 008731aa  dcc9                 fmul st(1), st(0)
// 008731ac  d9c9                 fxch st(1)
// 008731ae  d8d2                 fcom st(2)
// 008731b0  dfe0                 fnstsw ax
// 008731b2  f6c405               test ah, 5
// 008731b5  7a1a                 jp 0x8731d1
// 008731b7  0fafcb               imul ecx, ebx
// 008731ba  85c9                 test ecx, ecx
// 008731bc  7c13                 jl 0x8731d1
// 008731be  ddda                 fstp st(2)
// 008731c0  c7868801000000000000 mov dword ptr [esi + 0x188], 0
// 008731ca  bf01000000           mov edi, 1
// 008731cf  eb02                 jmp 0x8731d3
// 008731d1  ddd8                 fstp st(0)
// 008731d3  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008731d7  2bcd                 sub ecx, ebp
// 008731d9  8bc1                 mov eax, ecx
// 008731db  99                   cdq 
// 008731dc  33c2                 xor eax, edx
// 008731de  2bc2                 sub eax, edx
// 008731e0  89442450             mov dword ptr [esp + 0x50], eax
// 008731e4  db442450             fild dword ptr [esp + 0x50]
// 008731e8  dec9                 fmulp st(1)
// 008731ea  ded9                 fcompp 
// 008731ec  dfe0                 fnstsw ax
// 008731ee  f6c405               test ah, 5
// 008731f1  7a14                 jp 0x873207
// 008731f3  0fafcb               imul ecx, ebx
// 008731f6  85c9                 test ecx, ecx
// 008731f8  7c0d                 jl 0x873207
// 008731fa  bf01000000           mov edi, 1
// 008731ff  89be88010000         mov dword ptr [esi + 0x188], edi
// 00873205  eb04                 jmp 0x87320b
// 00873207  85ff                 test edi, edi
// 00873209  7463                 je 0x87326e
// 0087320b  8b8e88010000         mov ecx, dword ptr [esi + 0x188]
// 00873211  8b5c244c             mov ebx, dword ptr [esp + 0x4c]
// 00873215  51                   push ecx
// 00873216  53                   push ebx
// 00873217  8bce                 mov ecx, esi
// 00873219  e832f6ffff           call 0x872850
// 0087321e  85c0                 test eax, eax
// 00873220  0f849dfeffff         je 0x8730c3
// 00873226  8b9688010000         mov edx, dword ptr [esi + 0x188]
// 0087322c  8b8620010000         mov eax, dword ptr [esi + 0x120]
// 00873232  53                   push ebx
// 00873233  52                   push edx
// 00873234  50                   push eax
// 00873235  8d4c242c             lea ecx, [esp + 0x2c]
// 00873239  51                   push ecx
// 0087323a  8b8e1c010000         mov ecx, dword ptr [esi + 0x11c]
// 00873240  e88b9cf7ff           call 0x7eced0
// 00873245  8b10                 mov edx, dword ptr [eax]
// 00873247  899630010000         mov dword ptr [esi + 0x130], edx
// 0087324d  8b4804               mov ecx, dword ptr [eax + 4]
// 00873250  898e34010000         mov dword ptr [esi + 0x134], ecx
// 00873256  8b5008               mov edx, dword ptr [eax + 8]
// 00873259  899638010000         mov dword ptr [esi + 0x138], edx
// 0087325f  8b400c               mov eax, dword ptr [eax + 0xc]
// 00873262  89863c010000         mov dword ptr [esi + 0x13c], eax
// 00873268  899e2c010000         mov dword ptr [esi + 0x12c], ebx
// 0087326e  8bc7                 mov eax, edi
// 00873270  5f                   pop edi
// 00873271  5e                   pop esi
// 00873272  5d                   pop ebp
// 00873273  5b                   pop ebx
// 00873274  83c420               add esp, 0x20
// 00873277  c22000               ret 0x20
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneContext.cpp (function ?CanDock@CXTPDockingPaneContext@@IAEHVCRect@@VCPoint@@PAVCXTPDockingPaneBase@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneContext.cpp
