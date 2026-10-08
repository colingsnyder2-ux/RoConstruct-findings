// roc 2012-06 00a487b0  unit: CXTPDockingPaneContext  size: 586 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a487b0
//
// 00a487b0  83ec20               sub esp, 0x20
// 00a487b3  dd05a0c7b800         fld qword ptr [0xb8c7a0]
// 00a487b9  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00a487bd  53                   push ebx
// 00a487be  dd5c2404             fstp qword ptr [esp + 4]
// 00a487c2  d9e8                 fld1 
// 00a487c4  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 00a487c8  55                   push ebp
// 00a487c9  dd5c2410             fstp qword ptr [esp + 0x10]
// 00a487cd  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00a487d1  56                   push esi
// 00a487d2  57                   push edi
// 00a487d3  8b7c2450             mov edi, dword ptr [esp + 0x50]
// 00a487d7  8bf1                 mov esi, ecx
// 00a487d9  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00a487dd  85ff                 test edi, edi
// 00a487df  7439                 je 0xa4881a
// 00a487e1  83be4801000000       cmp dword ptr [esi + 0x148], 0
// 00a487e8  7530                 jne 0xa4881a
// 00a487ea  8bc2                 mov eax, edx
// 00a487ec  2bc5                 sub eax, ebp
// 00a487ee  83f801               cmp eax, 1
// 00a487f1  89442410             mov dword ptr [esp + 0x10], eax
// 00a487f5  7e19                 jle 0xa48810
// 00a487f7  8bc1                 mov eax, ecx
// 00a487f9  2bc3                 sub eax, ebx
// 00a487fb  83f801               cmp eax, 1
// 00a487fe  89442450             mov dword ptr [esp + 0x50], eax
// 00a48802  7e0c                 jle 0xa48810
// 00a48804  db442450             fild dword ptr [esp + 0x50]
// 00a48808  da742410             fidiv dword ptr [esp + 0x10]
// 00a4880c  dd5c2418             fstp qword ptr [esp + 0x18]
// 00a48810  dd05302bc200         fld qword ptr [0xc22b30]
// 00a48816  dd5c2410             fstp qword ptr [esp + 0x10]
// 00a4881a  8bc1                 mov eax, ecx
// 00a4881c  2bc3                 sub eax, ebx
// 00a4881e  7423                 je 0xa48843
// 00a48820  8bc2                 mov eax, edx
// 00a48822  2bc5                 sub eax, ebp
// 00a48824  741d                 je 0xa48843
// 00a48826  85ff                 test edi, edi
// 00a48828  7425                 je 0xa4884f
// 00a4882a  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00a4882e  8b542444             mov edx, dword ptr [esp + 0x44]
// 00a48832  51                   push ecx
// 00a48833  52                   push edx
// 00a48834  8d44243c             lea eax, [esp + 0x3c]
// 00a48838  50                   push eax
// 00a48839  ff15483bb200         call dword ptr [0xb23b48]
// 00a4883f  85c0                 test eax, eax
// 00a48841  7541                 jne 0xa48884
// 00a48843  5f                   pop edi
// 00a48844  5e                   pop esi
// 00a48845  5d                   pop ebp
// 00a48846  33c0                 xor eax, eax
// 00a48848  5b                   pop ebx
// 00a48849  83c420               add esp, 0x20
// 00a4884c  c22000               ret 0x20
// 00a4884f  83c114               add ecx, 0x14
// 00a48852  83c214               add edx, 0x14
// 00a48855  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00a48859  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00a4885d  89542428             mov dword ptr [esp + 0x28], edx
// 00a48861  8b542444             mov edx, dword ptr [esp + 0x44]
// 00a48865  51                   push ecx
// 00a48866  52                   push edx
// 00a48867  8d442428             lea eax, [esp + 0x28]
// 00a4886b  83c5ec               add ebp, -0x14
// 00a4886e  83c3ec               add ebx, -0x14
// 00a48871  50                   push eax
// 00a48872  896c242c             mov dword ptr [esp + 0x2c], ebp
// 00a48876  895c2430             mov dword ptr [esp + 0x30], ebx
// 00a4887a  ff15483bb200         call dword ptr [0xb23b48]
// 00a48880  85c0                 test eax, eax
// 00a48882  74bf                 je 0xa48843
// 00a48884  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 00a48888  33db                 xor ebx, ebx
// 00a4888a  85ff                 test edi, edi
// 00a4888c  0f95c3               setne bl
// 00a4888f  8bcd                 mov ecx, ebp
// 00a48891  2b4c2438             sub ecx, dword ptr [esp + 0x38]
// 00a48895  33ff                 xor edi, edi
// 00a48897  8bc1                 mov eax, ecx
// 00a48899  99                   cdq 
// 00a4889a  33c2                 xor eax, edx
// 00a4889c  2bc2                 sub eax, edx
// 00a4889e  89442450             mov dword ptr [esp + 0x50], eax
// 00a488a2  8d5c1bff             lea ebx, [ebx + ebx - 1]
// 00a488a6  db442450             fild dword ptr [esp + 0x50]
// 00a488aa  dd442410             fld qword ptr [esp + 0x10]
// 00a488ae  d8d1                 fcom st(1)
// 00a488b0  dfe0                 fnstsw ax
// 00a488b2  f6c441               test ah, 0x41
// 00a488b5  751a                 jne 0xa488d1
// 00a488b7  0fafcb               imul ecx, ebx
// 00a488ba  85c9                 test ecx, ecx
// 00a488bc  7c13                 jl 0xa488d1
// 00a488be  ddd8                 fstp st(0)
// 00a488c0  c7868801000002000000 mov dword ptr [esi + 0x188], 2
// 00a488ca  bf01000000           mov edi, 1
// 00a488cf  eb02                 jmp 0xa488d3
// 00a488d1  ddd9                 fstp st(1)
// 00a488d3  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00a488d7  2bcd                 sub ecx, ebp
// 00a488d9  8bc1                 mov eax, ecx
// 00a488db  99                   cdq 
// 00a488dc  33c2                 xor eax, edx
// 00a488de  2bc2                 sub eax, edx
// 00a488e0  89442450             mov dword ptr [esp + 0x50], eax
// 00a488e4  db442450             fild dword ptr [esp + 0x50]
// 00a488e8  d8d1                 fcom st(1)
// 00a488ea  dfe0                 fnstsw ax
// 00a488ec  f6c405               test ah, 5
// 00a488ef  7a1a                 jp 0xa4890b
// 00a488f1  0fafcb               imul ecx, ebx
// 00a488f4  85c9                 test ecx, ecx
// 00a488f6  7c13                 jl 0xa4890b
// 00a488f8  ddd9                 fstp st(1)
// 00a488fa  c7868801000003000000 mov dword ptr [esi + 0x188], 3
// 00a48904  bf01000000           mov edi, 1
// 00a48909  eb02                 jmp 0xa4890d
// 00a4890b  ddd8                 fstp st(0)
// 00a4890d  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 00a48911  8bcd                 mov ecx, ebp
// 00a48913  2b4c2434             sub ecx, dword ptr [esp + 0x34]
// 00a48917  8bc1                 mov eax, ecx
// 00a48919  99                   cdq 
// 00a4891a  33c2                 xor eax, edx
// 00a4891c  2bc2                 sub eax, edx
// 00a4891e  89442450             mov dword ptr [esp + 0x50], eax
// 00a48922  db442450             fild dword ptr [esp + 0x50]
// 00a48926  dd442418             fld qword ptr [esp + 0x18]
// 00a4892a  dcc9                 fmul st(1), st(0)
// 00a4892c  d9c9                 fxch st(1)
// 00a4892e  d8d2                 fcom st(2)
// 00a48930  dfe0                 fnstsw ax
// 00a48932  f6c405               test ah, 5
// 00a48935  7a1a                 jp 0xa48951
// 00a48937  0fafcb               imul ecx, ebx
// 00a4893a  85c9                 test ecx, ecx
// 00a4893c  7c13                 jl 0xa48951
// 00a4893e  ddda                 fstp st(2)
// 00a48940  c7868801000000000000 mov dword ptr [esi + 0x188], 0
// 00a4894a  bf01000000           mov edi, 1
// 00a4894f  eb02                 jmp 0xa48953
// 00a48951  ddd8                 fstp st(0)
// 00a48953  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00a48957  2bcd                 sub ecx, ebp
// 00a48959  8bc1                 mov eax, ecx
// 00a4895b  99                   cdq 
// 00a4895c  33c2                 xor eax, edx
// 00a4895e  2bc2                 sub eax, edx
// 00a48960  89442450             mov dword ptr [esp + 0x50], eax
// 00a48964  db442450             fild dword ptr [esp + 0x50]
// 00a48968  dec9                 fmulp st(1)
// 00a4896a  ded9                 fcompp 
// 00a4896c  dfe0                 fnstsw ax
// 00a4896e  f6c405               test ah, 5
// 00a48971  7a14                 jp 0xa48987
// 00a48973  0fafcb               imul ecx, ebx
// 00a48976  85c9                 test ecx, ecx
// 00a48978  7c0d                 jl 0xa48987
// 00a4897a  bf01000000           mov edi, 1
// 00a4897f  89be88010000         mov dword ptr [esi + 0x188], edi
// 00a48985  eb04                 jmp 0xa4898b
// 00a48987  85ff                 test edi, edi
// 00a48989  7463                 je 0xa489ee
// 00a4898b  8b8e88010000         mov ecx, dword ptr [esi + 0x188]
// 00a48991  8b5c244c             mov ebx, dword ptr [esp + 0x4c]
// 00a48995  51                   push ecx
// 00a48996  53                   push ebx
// 00a48997  8bce                 mov ecx, esi
// 00a48999  e8a2f6ffff           call 0xa48040
// 00a4899e  85c0                 test eax, eax
// 00a489a0  0f849dfeffff         je 0xa48843
// 00a489a6  8b9688010000         mov edx, dword ptr [esi + 0x188]
// 00a489ac  8b8620010000         mov eax, dword ptr [esi + 0x120]
// 00a489b2  53                   push ebx
// 00a489b3  52                   push edx
// 00a489b4  50                   push eax
// 00a489b5  8d4c242c             lea ecx, [esp + 0x2c]
// 00a489b9  51                   push ecx
// 00a489ba  8b8e1c010000         mov ecx, dword ptr [esi + 0x11c]
// 00a489c0  e82be2f7ff           call 0x9c6bf0
// 00a489c5  8b10                 mov edx, dword ptr [eax]
// 00a489c7  899630010000         mov dword ptr [esi + 0x130], edx
// 00a489cd  8b4804               mov ecx, dword ptr [eax + 4]
// 00a489d0  898e34010000         mov dword ptr [esi + 0x134], ecx
// 00a489d6  8b5008               mov edx, dword ptr [eax + 8]
// 00a489d9  899638010000         mov dword ptr [esi + 0x138], edx
// 00a489df  8b400c               mov eax, dword ptr [eax + 0xc]
// 00a489e2  89863c010000         mov dword ptr [esi + 0x13c], eax
// 00a489e8  899e2c010000         mov dword ptr [esi + 0x12c], ebx
// 00a489ee  8bc7                 mov eax, edi
// 00a489f0  5f                   pop edi
// 00a489f1  5e                   pop esi
// 00a489f2  5d                   pop ebp
// 00a489f3  5b                   pop ebx
// 00a489f4  83c420               add esp, 0x20
// 00a489f7  c22000               ret 0x20
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneContext.cpp (function ?CanDock@CXTPDockingPaneContext@@IAEHVCRect@@VCPoint@@PAVCXTPDockingPaneBase@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneContext.cpp
