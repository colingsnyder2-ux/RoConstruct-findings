// roc 2007-03 006d77c0  unit: seg_006d0000  size: 584 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006d77c0
//
// 006d77c0  83ec20               sub esp, 0x20
// 006d77c3  dd05f0567900         fld qword ptr [0x7956f0]
// 006d77c9  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 006d77cd  53                   push ebx
// 006d77ce  dd5c2404             fstp qword ptr [esp + 4]
// 006d77d2  d9e8                 fld1 
// 006d77d4  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 006d77d8  55                   push ebp
// 006d77d9  dd5c2410             fstp qword ptr [esp + 0x10]
// 006d77dd  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 006d77e1  85ed                 test ebp, ebp
// 006d77e3  56                   push esi
// 006d77e4  57                   push edi
// 006d77e5  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 006d77e9  8bf1                 mov esi, ecx
// 006d77eb  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 006d77ef  7439                 je 0x6d782a
// 006d77f1  83be4801000000       cmp dword ptr [esi + 0x148], 0
// 006d77f8  7530                 jne 0x6d782a
// 006d77fa  8bc2                 mov eax, edx
// 006d77fc  2bc3                 sub eax, ebx
// 006d77fe  83f801               cmp eax, 1
// 006d7801  89442410             mov dword ptr [esp + 0x10], eax
// 006d7805  7e19                 jle 0x6d7820
// 006d7807  8bc1                 mov eax, ecx
// 006d7809  2bc7                 sub eax, edi
// 006d780b  83f801               cmp eax, 1
// 006d780e  89442450             mov dword ptr [esp + 0x50], eax
// 006d7812  7e0c                 jle 0x6d7820
// 006d7814  db442450             fild dword ptr [esp + 0x50]
// 006d7818  da742410             fidiv dword ptr [esp + 0x10]
// 006d781c  dd5c2418             fstp qword ptr [esp + 0x18]
// 006d7820  dd05087d7d00         fld qword ptr [0x7d7d08]
// 006d7826  dd5c2410             fstp qword ptr [esp + 0x10]
// 006d782a  8bc1                 mov eax, ecx
// 006d782c  2bc7                 sub eax, edi
// 006d782e  7423                 je 0x6d7853
// 006d7830  8bc2                 mov eax, edx
// 006d7832  2bc3                 sub eax, ebx
// 006d7834  741d                 je 0x6d7853
// 006d7836  85ed                 test ebp, ebp
// 006d7838  7425                 je 0x6d785f
// 006d783a  8b7c2448             mov edi, dword ptr [esp + 0x48]
// 006d783e  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 006d7842  57                   push edi
// 006d7843  51                   push ecx
// 006d7844  8d54243c             lea edx, [esp + 0x3c]
// 006d7848  52                   push edx
// 006d7849  ff1598ed7700         call dword ptr [0x77ed98]
// 006d784f  85c0                 test eax, eax
// 006d7851  7541                 jne 0x6d7894
// 006d7853  5f                   pop edi
// 006d7854  5e                   pop esi
// 006d7855  5d                   pop ebp
// 006d7856  33c0                 xor eax, eax
// 006d7858  5b                   pop ebx
// 006d7859  83c420               add esp, 0x20
// 006d785c  c22000               ret 0x20
// 006d785f  8b442444             mov eax, dword ptr [esp + 0x44]
// 006d7863  83c7ec               add edi, -0x14
// 006d7866  897c2424             mov dword ptr [esp + 0x24], edi
// 006d786a  8b7c2448             mov edi, dword ptr [esp + 0x48]
// 006d786e  83c114               add ecx, 0x14
// 006d7871  57                   push edi
// 006d7872  894c2430             mov dword ptr [esp + 0x30], ecx
// 006d7876  50                   push eax
// 006d7877  8d4c2428             lea ecx, [esp + 0x28]
// 006d787b  83c214               add edx, 0x14
// 006d787e  83c3ec               add ebx, -0x14
// 006d7881  51                   push ecx
// 006d7882  895c242c             mov dword ptr [esp + 0x2c], ebx
// 006d7886  89542434             mov dword ptr [esp + 0x34], edx
// 006d788a  ff1598ed7700         call dword ptr [0x77ed98]
// 006d7890  85c0                 test eax, eax
// 006d7892  74bf                 je 0x6d7853
// 006d7894  33d2                 xor edx, edx
// 006d7896  85ed                 test ebp, ebp
// 006d7898  0f95c2               setne dl
// 006d789b  8bcf                 mov ecx, edi
// 006d789d  2b4c2438             sub ecx, dword ptr [esp + 0x38]
// 006d78a1  33db                 xor ebx, ebx
// 006d78a3  8bc1                 mov eax, ecx
// 006d78a5  8d5412ff             lea edx, [edx + edx - 1]
// 006d78a9  8bea                 mov ebp, edx
// 006d78ab  99                   cdq 
// 006d78ac  33c2                 xor eax, edx
// 006d78ae  2bc2                 sub eax, edx
// 006d78b0  89442450             mov dword ptr [esp + 0x50], eax
// 006d78b4  db442450             fild dword ptr [esp + 0x50]
// 006d78b8  dd442410             fld qword ptr [esp + 0x10]
// 006d78bc  d8d1                 fcom st(1)
// 006d78be  dfe0                 fnstsw ax
// 006d78c0  f6c441               test ah, 0x41
// 006d78c3  751a                 jne 0x6d78df
// 006d78c5  0fafcd               imul ecx, ebp
// 006d78c8  85c9                 test ecx, ecx
// 006d78ca  7c13                 jl 0x6d78df
// 006d78cc  ddd8                 fstp st(0)
// 006d78ce  c7868801000002000000 mov dword ptr [esi + 0x188], 2
// 006d78d8  bb01000000           mov ebx, 1
// 006d78dd  eb02                 jmp 0x6d78e1
// 006d78df  ddd9                 fstp st(1)
// 006d78e1  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 006d78e5  2bcf                 sub ecx, edi
// 006d78e7  8bc1                 mov eax, ecx
// 006d78e9  99                   cdq 
// 006d78ea  33c2                 xor eax, edx
// 006d78ec  2bc2                 sub eax, edx
// 006d78ee  89442450             mov dword ptr [esp + 0x50], eax
// 006d78f2  db442450             fild dword ptr [esp + 0x50]
// 006d78f6  d8d1                 fcom st(1)
// 006d78f8  dfe0                 fnstsw ax
// 006d78fa  f6c405               test ah, 5
// 006d78fd  7a1a                 jp 0x6d7919
// 006d78ff  0fafcd               imul ecx, ebp
// 006d7902  85c9                 test ecx, ecx
// 006d7904  7c13                 jl 0x6d7919
// 006d7906  ddd9                 fstp st(1)
// 006d7908  c7868801000003000000 mov dword ptr [esi + 0x188], 3
// 006d7912  bb01000000           mov ebx, 1
// 006d7917  eb02                 jmp 0x6d791b
// 006d7919  ddd8                 fstp st(0)
// 006d791b  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 006d791f  8bcf                 mov ecx, edi
// 006d7921  2b4c2434             sub ecx, dword ptr [esp + 0x34]
// 006d7925  8bc1                 mov eax, ecx
// 006d7927  99                   cdq 
// 006d7928  33c2                 xor eax, edx
// 006d792a  2bc2                 sub eax, edx
// 006d792c  89442450             mov dword ptr [esp + 0x50], eax
// 006d7930  db442450             fild dword ptr [esp + 0x50]
// 006d7934  dd442418             fld qword ptr [esp + 0x18]
// 006d7938  dcc9                 fmul st(1), st(0)
// 006d793a  d9c9                 fxch st(1)
// 006d793c  d8d2                 fcom st(2)
// 006d793e  dfe0                 fnstsw ax
// 006d7940  f6c405               test ah, 5
// 006d7943  7a1a                 jp 0x6d795f
// 006d7945  0fafcd               imul ecx, ebp
// 006d7948  85c9                 test ecx, ecx
// 006d794a  7c13                 jl 0x6d795f
// 006d794c  ddda                 fstp st(2)
// 006d794e  c7868801000000000000 mov dword ptr [esi + 0x188], 0
// 006d7958  bb01000000           mov ebx, 1
// 006d795d  eb02                 jmp 0x6d7961
// 006d795f  ddd8                 fstp st(0)
// 006d7961  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 006d7965  2bcf                 sub ecx, edi
// 006d7967  8bc1                 mov eax, ecx
// 006d7969  99                   cdq 
// 006d796a  33c2                 xor eax, edx
// 006d796c  2bc2                 sub eax, edx
// 006d796e  89442450             mov dword ptr [esp + 0x50], eax
// 006d7972  db442450             fild dword ptr [esp + 0x50]
// 006d7976  dec9                 fmulp st(1)
// 006d7978  ded9                 fcompp 
// 006d797a  dfe0                 fnstsw ax
// 006d797c  f6c405               test ah, 5
// 006d797f  7a14                 jp 0x6d7995
// 006d7981  0fafcd               imul ecx, ebp
// 006d7984  85c9                 test ecx, ecx
// 006d7986  7c0d                 jl 0x6d7995
// 006d7988  bb01000000           mov ebx, 1
// 006d798d  899e88010000         mov dword ptr [esi + 0x188], ebx
// 006d7993  eb04                 jmp 0x6d7999
// 006d7995  85db                 test ebx, ebx
// 006d7997  7463                 je 0x6d79fc
// 006d7999  8b8688010000         mov eax, dword ptr [esi + 0x188]
// 006d799f  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 006d79a3  50                   push eax
// 006d79a4  57                   push edi
// 006d79a5  8bce                 mov ecx, esi
// 006d79a7  e8c4f6ffff           call 0x6d7070
// 006d79ac  85c0                 test eax, eax
// 006d79ae  0f849ffeffff         je 0x6d7853
// 006d79b4  8b8e88010000         mov ecx, dword ptr [esi + 0x188]
// 006d79ba  8b9620010000         mov edx, dword ptr [esi + 0x120]
// 006d79c0  57                   push edi
// 006d79c1  51                   push ecx
// 006d79c2  8b8e1c010000         mov ecx, dword ptr [esi + 0x11c]
// 006d79c8  52                   push edx
// 006d79c9  8d44242c             lea eax, [esp + 0x2c]
// 006d79cd  50                   push eax
// 006d79ce  e8fd2df8ff           call 0x65a7d0
// 006d79d3  8b08                 mov ecx, dword ptr [eax]
// 006d79d5  898e30010000         mov dword ptr [esi + 0x130], ecx
// 006d79db  8b5004               mov edx, dword ptr [eax + 4]
// 006d79de  899634010000         mov dword ptr [esi + 0x134], edx
// 006d79e4  8b4808               mov ecx, dword ptr [eax + 8]
// 006d79e7  898e38010000         mov dword ptr [esi + 0x138], ecx
// 006d79ed  8b500c               mov edx, dword ptr [eax + 0xc]
// 006d79f0  89963c010000         mov dword ptr [esi + 0x13c], edx
// 006d79f6  89be2c010000         mov dword ptr [esi + 0x12c], edi
// 006d79fc  5f                   pop edi
// 006d79fd  5e                   pop esi
// 006d79fe  5d                   pop ebp
// 006d79ff  8bc3                 mov eax, ebx
// 006d7a01  5b                   pop ebx
// 006d7a02  83c420               add esp, 0x20
// 006d7a05  c22000               ret 0x20
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneContext.cpp (function ?CanDock@CXTPDockingPaneContext@@IAEHVCRect@@VCPoint@@PAVCXTPDockingPaneBase@@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneContext.cpp
