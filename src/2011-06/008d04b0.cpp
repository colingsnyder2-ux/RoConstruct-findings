// roc 2011-06 008d04b0  unit: CXTPDockingPaneContext  size: 586 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d04b0
//
// 008d04b0  83ec20               sub esp, 0x20
// 008d04b3  dd05f886a800         fld qword ptr [0xa886f8]
// 008d04b9  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 008d04bd  53                   push ebx
// 008d04be  dd5c2404             fstp qword ptr [esp + 4]
// 008d04c2  d9e8                 fld1 
// 008d04c4  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 008d04c8  55                   push ebp
// 008d04c9  dd5c2410             fstp qword ptr [esp + 0x10]
// 008d04cd  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 008d04d1  56                   push esi
// 008d04d2  57                   push edi
// 008d04d3  8b7c2450             mov edi, dword ptr [esp + 0x50]
// 008d04d7  8bf1                 mov esi, ecx
// 008d04d9  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008d04dd  85ff                 test edi, edi
// 008d04df  7439                 je 0x8d051a
// 008d04e1  83be4801000000       cmp dword ptr [esi + 0x148], 0
// 008d04e8  7530                 jne 0x8d051a
// 008d04ea  8bc2                 mov eax, edx
// 008d04ec  2bc5                 sub eax, ebp
// 008d04ee  83f801               cmp eax, 1
// 008d04f1  89442410             mov dword ptr [esp + 0x10], eax
// 008d04f5  7e19                 jle 0x8d0510
// 008d04f7  8bc1                 mov eax, ecx
// 008d04f9  2bc3                 sub eax, ebx
// 008d04fb  83f801               cmp eax, 1
// 008d04fe  89442450             mov dword ptr [esp + 0x50], eax
// 008d0502  7e0c                 jle 0x8d0510
// 008d0504  db442450             fild dword ptr [esp + 0x50]
// 008d0508  da742410             fidiv dword ptr [esp + 0x10]
// 008d050c  dd5c2418             fstp qword ptr [esp + 0x18]
// 008d0510  dd059874ad00         fld qword ptr [0xad7498]
// 008d0516  dd5c2410             fstp qword ptr [esp + 0x10]
// 008d051a  8bc1                 mov eax, ecx
// 008d051c  2bc3                 sub eax, ebx
// 008d051e  7423                 je 0x8d0543
// 008d0520  8bc2                 mov eax, edx
// 008d0522  2bc5                 sub eax, ebp
// 008d0524  741d                 je 0x8d0543
// 008d0526  85ff                 test edi, edi
// 008d0528  7425                 je 0x8d054f
// 008d052a  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008d052e  8b542444             mov edx, dword ptr [esp + 0x44]
// 008d0532  51                   push ecx
// 008d0533  52                   push edx
// 008d0534  8d44243c             lea eax, [esp + 0x3c]
// 008d0538  50                   push eax
// 008d0539  ff15101ca400         call dword ptr [0xa41c10]
// 008d053f  85c0                 test eax, eax
// 008d0541  7541                 jne 0x8d0584
// 008d0543  5f                   pop edi
// 008d0544  5e                   pop esi
// 008d0545  5d                   pop ebp
// 008d0546  33c0                 xor eax, eax
// 008d0548  5b                   pop ebx
// 008d0549  83c420               add esp, 0x20
// 008d054c  c22000               ret 0x20
// 008d054f  83c114               add ecx, 0x14
// 008d0552  83c214               add edx, 0x14
// 008d0555  894c242c             mov dword ptr [esp + 0x2c], ecx
// 008d0559  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008d055d  89542428             mov dword ptr [esp + 0x28], edx
// 008d0561  8b542444             mov edx, dword ptr [esp + 0x44]
// 008d0565  51                   push ecx
// 008d0566  52                   push edx
// 008d0567  8d442428             lea eax, [esp + 0x28]
// 008d056b  83c5ec               add ebp, -0x14
// 008d056e  83c3ec               add ebx, -0x14
// 008d0571  50                   push eax
// 008d0572  896c242c             mov dword ptr [esp + 0x2c], ebp
// 008d0576  895c2430             mov dword ptr [esp + 0x30], ebx
// 008d057a  ff15101ca400         call dword ptr [0xa41c10]
// 008d0580  85c0                 test eax, eax
// 008d0582  74bf                 je 0x8d0543
// 008d0584  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 008d0588  33db                 xor ebx, ebx
// 008d058a  85ff                 test edi, edi
// 008d058c  0f95c3               setne bl
// 008d058f  8bcd                 mov ecx, ebp
// 008d0591  2b4c2438             sub ecx, dword ptr [esp + 0x38]
// 008d0595  33ff                 xor edi, edi
// 008d0597  8bc1                 mov eax, ecx
// 008d0599  99                   cdq 
// 008d059a  33c2                 xor eax, edx
// 008d059c  2bc2                 sub eax, edx
// 008d059e  89442450             mov dword ptr [esp + 0x50], eax
// 008d05a2  8d5c1bff             lea ebx, [ebx + ebx - 1]
// 008d05a6  db442450             fild dword ptr [esp + 0x50]
// 008d05aa  dd442410             fld qword ptr [esp + 0x10]
// 008d05ae  d8d1                 fcom st(1)
// 008d05b0  dfe0                 fnstsw ax
// 008d05b2  f6c441               test ah, 0x41
// 008d05b5  751a                 jne 0x8d05d1
// 008d05b7  0fafcb               imul ecx, ebx
// 008d05ba  85c9                 test ecx, ecx
// 008d05bc  7c13                 jl 0x8d05d1
// 008d05be  ddd8                 fstp st(0)
// 008d05c0  c7868801000002000000 mov dword ptr [esi + 0x188], 2
// 008d05ca  bf01000000           mov edi, 1
// 008d05cf  eb02                 jmp 0x8d05d3
// 008d05d1  ddd9                 fstp st(1)
// 008d05d3  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008d05d7  2bcd                 sub ecx, ebp
// 008d05d9  8bc1                 mov eax, ecx
// 008d05db  99                   cdq 
// 008d05dc  33c2                 xor eax, edx
// 008d05de  2bc2                 sub eax, edx
// 008d05e0  89442450             mov dword ptr [esp + 0x50], eax
// 008d05e4  db442450             fild dword ptr [esp + 0x50]
// 008d05e8  d8d1                 fcom st(1)
// 008d05ea  dfe0                 fnstsw ax
// 008d05ec  f6c405               test ah, 5
// 008d05ef  7a1a                 jp 0x8d060b
// 008d05f1  0fafcb               imul ecx, ebx
// 008d05f4  85c9                 test ecx, ecx
// 008d05f6  7c13                 jl 0x8d060b
// 008d05f8  ddd9                 fstp st(1)
// 008d05fa  c7868801000003000000 mov dword ptr [esi + 0x188], 3
// 008d0604  bf01000000           mov edi, 1
// 008d0609  eb02                 jmp 0x8d060d
// 008d060b  ddd8                 fstp st(0)
// 008d060d  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 008d0611  8bcd                 mov ecx, ebp
// 008d0613  2b4c2434             sub ecx, dword ptr [esp + 0x34]
// 008d0617  8bc1                 mov eax, ecx
// 008d0619  99                   cdq 
// 008d061a  33c2                 xor eax, edx
// 008d061c  2bc2                 sub eax, edx
// 008d061e  89442450             mov dword ptr [esp + 0x50], eax
// 008d0622  db442450             fild dword ptr [esp + 0x50]
// 008d0626  dd442418             fld qword ptr [esp + 0x18]
// 008d062a  dcc9                 fmul st(1), st(0)
// 008d062c  d9c9                 fxch st(1)
// 008d062e  d8d2                 fcom st(2)
// 008d0630  dfe0                 fnstsw ax
// 008d0632  f6c405               test ah, 5
// 008d0635  7a1a                 jp 0x8d0651
// 008d0637  0fafcb               imul ecx, ebx
// 008d063a  85c9                 test ecx, ecx
// 008d063c  7c13                 jl 0x8d0651
// 008d063e  ddda                 fstp st(2)
// 008d0640  c7868801000000000000 mov dword ptr [esi + 0x188], 0
// 008d064a  bf01000000           mov edi, 1
// 008d064f  eb02                 jmp 0x8d0653
// 008d0651  ddd8                 fstp st(0)
// 008d0653  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008d0657  2bcd                 sub ecx, ebp
// 008d0659  8bc1                 mov eax, ecx
// 008d065b  99                   cdq 
// 008d065c  33c2                 xor eax, edx
// 008d065e  2bc2                 sub eax, edx
// 008d0660  89442450             mov dword ptr [esp + 0x50], eax
// 008d0664  db442450             fild dword ptr [esp + 0x50]
// 008d0668  dec9                 fmulp st(1)
// 008d066a  ded9                 fcompp 
// 008d066c  dfe0                 fnstsw ax
// 008d066e  f6c405               test ah, 5
// 008d0671  7a14                 jp 0x8d0687
// 008d0673  0fafcb               imul ecx, ebx
// 008d0676  85c9                 test ecx, ecx
// 008d0678  7c0d                 jl 0x8d0687
// 008d067a  bf01000000           mov edi, 1
// 008d067f  89be88010000         mov dword ptr [esi + 0x188], edi
// 008d0685  eb04                 jmp 0x8d068b
// 008d0687  85ff                 test edi, edi
// 008d0689  7463                 je 0x8d06ee
// 008d068b  8b8e88010000         mov ecx, dword ptr [esi + 0x188]
// 008d0691  8b5c244c             mov ebx, dword ptr [esp + 0x4c]
// 008d0695  51                   push ecx
// 008d0696  53                   push ebx
// 008d0697  8bce                 mov ecx, esi
// 008d0699  e802f6ffff           call 0x8cfca0
// 008d069e  85c0                 test eax, eax
// 008d06a0  0f849dfeffff         je 0x8d0543
// 008d06a6  8b9688010000         mov edx, dword ptr [esi + 0x188]
// 008d06ac  8b8620010000         mov eax, dword ptr [esi + 0x120]
// 008d06b2  53                   push ebx
// 008d06b3  52                   push edx
// 008d06b4  50                   push eax
// 008d06b5  8d4c242c             lea ecx, [esp + 0x2c]
// 008d06b9  51                   push ecx
// 008d06ba  8b8e1c010000         mov ecx, dword ptr [esi + 0x11c]
// 008d06c0  e85be0f7ff           call 0x84e720
// 008d06c5  8b10                 mov edx, dword ptr [eax]
// 008d06c7  899630010000         mov dword ptr [esi + 0x130], edx
// 008d06cd  8b4804               mov ecx, dword ptr [eax + 4]
// 008d06d0  898e34010000         mov dword ptr [esi + 0x134], ecx
// 008d06d6  8b5008               mov edx, dword ptr [eax + 8]
// 008d06d9  899638010000         mov dword ptr [esi + 0x138], edx
// 008d06df  8b400c               mov eax, dword ptr [eax + 0xc]
// 008d06e2  89863c010000         mov dword ptr [esi + 0x13c], eax
// 008d06e8  899e2c010000         mov dword ptr [esi + 0x12c], ebx
// 008d06ee  8bc7                 mov eax, edi
// 008d06f0  5f                   pop edi
// 008d06f1  5e                   pop esi
// 008d06f2  5d                   pop ebp
// 008d06f3  5b                   pop ebx
// 008d06f4  83c420               add esp, 0x20
// 008d06f7  c22000               ret 0x20
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneContext.cpp (function ?CanDock@CXTPDockingPaneContext@@IAEHVCRect@@VCPoint@@PAVCXTPDockingPaneBase@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneContext.cpp
