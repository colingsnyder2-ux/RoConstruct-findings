// from server: 100% by auto
// roc 2007-08 006eead0  unit: CXTPDockingPaneContext  size: 584 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006eead0
//
// 006eead0  83ec20               sub esp, 0x20
// 006eead3  dd05e0627900         fld qword ptr [0x7962e0]
// 006eead9  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 006eeadd  53                   push ebx
// 006eeade  dd5c2404             fstp qword ptr [esp + 4]
// 006eeae2  d9e8                 fld1 
// 006eeae4  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 006eeae8  55                   push ebp
// 006eeae9  dd5c2410             fstp qword ptr [esp + 0x10]
// 006eeaed  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 006eeaf1  85ed                 test ebp, ebp
// 006eeaf3  56                   push esi
// 006eeaf4  57                   push edi
// 006eeaf5  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 006eeaf9  8bf1                 mov esi, ecx
// 006eeafb  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 006eeaff  7439                 je 0x6eeb3a
// 006eeb01  83be4801000000       cmp dword ptr [esi + 0x148], 0
// 006eeb08  7530                 jne 0x6eeb3a
// 006eeb0a  8bc2                 mov eax, edx
// 006eeb0c  2bc3                 sub eax, ebx
// 006eeb0e  83f801               cmp eax, 1
// 006eeb11  89442410             mov dword ptr [esp + 0x10], eax
// 006eeb15  7e19                 jle 0x6eeb30
// 006eeb17  8bc1                 mov eax, ecx
// 006eeb19  2bc7                 sub eax, edi
// 006eeb1b  83f801               cmp eax, 1
// 006eeb1e  89442450             mov dword ptr [esp + 0x50], eax
// 006eeb22  7e0c                 jle 0x6eeb30
// 006eeb24  db442450             fild dword ptr [esp + 0x50]
// 006eeb28  da742410             fidiv dword ptr [esp + 0x10]
// 006eeb2c  dd5c2418             fstp qword ptr [esp + 0x18]
// 006eeb30  dd0508b07d00         fld qword ptr [0x7db008]
// 006eeb36  dd5c2410             fstp qword ptr [esp + 0x10]
// 006eeb3a  8bc1                 mov eax, ecx
// 006eeb3c  2bc7                 sub eax, edi
// 006eeb3e  7423                 je 0x6eeb63
// 006eeb40  8bc2                 mov eax, edx
// 006eeb42  2bc3                 sub eax, ebx
// 006eeb44  741d                 je 0x6eeb63
// 006eeb46  85ed                 test ebp, ebp
// 006eeb48  7425                 je 0x6eeb6f
// 006eeb4a  8b7c2448             mov edi, dword ptr [esp + 0x48]
// 006eeb4e  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 006eeb52  57                   push edi
// 006eeb53  51                   push ecx
// 006eeb54  8d54243c             lea edx, [esp + 0x3c]
// 006eeb58  52                   push edx
// 006eeb59  ff1594ed7700         call dword ptr [0x77ed94]
// 006eeb5f  85c0                 test eax, eax
// 006eeb61  7541                 jne 0x6eeba4
// 006eeb63  5f                   pop edi
// 006eeb64  5e                   pop esi
// 006eeb65  5d                   pop ebp
// 006eeb66  33c0                 xor eax, eax
// 006eeb68  5b                   pop ebx
// 006eeb69  83c420               add esp, 0x20
// 006eeb6c  c22000               ret 0x20
// 006eeb6f  8b442444             mov eax, dword ptr [esp + 0x44]
// 006eeb73  83c7ec               add edi, -0x14
// 006eeb76  897c2424             mov dword ptr [esp + 0x24], edi
// 006eeb7a  8b7c2448             mov edi, dword ptr [esp + 0x48]
// 006eeb7e  83c114               add ecx, 0x14
// 006eeb81  57                   push edi
// 006eeb82  894c2430             mov dword ptr [esp + 0x30], ecx
// 006eeb86  50                   push eax
// 006eeb87  8d4c2428             lea ecx, [esp + 0x28]
// 006eeb8b  83c214               add edx, 0x14
// 006eeb8e  83c3ec               add ebx, -0x14
// 006eeb91  51                   push ecx
// 006eeb92  895c242c             mov dword ptr [esp + 0x2c], ebx
// 006eeb96  89542434             mov dword ptr [esp + 0x34], edx
// 006eeb9a  ff1594ed7700         call dword ptr [0x77ed94]
// 006eeba0  85c0                 test eax, eax
// 006eeba2  74bf                 je 0x6eeb63
// 006eeba4  33d2                 xor edx, edx
// 006eeba6  85ed                 test ebp, ebp
// 006eeba8  0f95c2               setne dl
// 006eebab  8bcf                 mov ecx, edi
// 006eebad  2b4c2438             sub ecx, dword ptr [esp + 0x38]
// 006eebb1  33db                 xor ebx, ebx
// 006eebb3  8bc1                 mov eax, ecx
// 006eebb5  8d5412ff             lea edx, [edx + edx - 1]
// 006eebb9  8bea                 mov ebp, edx
// 006eebbb  99                   cdq 
// 006eebbc  33c2                 xor eax, edx
// 006eebbe  2bc2                 sub eax, edx
// 006eebc0  89442450             mov dword ptr [esp + 0x50], eax
// 006eebc4  db442450             fild dword ptr [esp + 0x50]
// 006eebc8  dd442410             fld qword ptr [esp + 0x10]
// 006eebcc  d8d1                 fcom st(1)
// 006eebce  dfe0                 fnstsw ax
// 006eebd0  f6c441               test ah, 0x41
// 006eebd3  751a                 jne 0x6eebef
// 006eebd5  0fafcd               imul ecx, ebp
// 006eebd8  85c9                 test ecx, ecx
// 006eebda  7c13                 jl 0x6eebef
// 006eebdc  ddd8                 fstp st(0)
// 006eebde  c7868801000002000000 mov dword ptr [esi + 0x188], 2
// 006eebe8  bb01000000           mov ebx, 1
// 006eebed  eb02                 jmp 0x6eebf1
// 006eebef  ddd9                 fstp st(1)
// 006eebf1  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 006eebf5  2bcf                 sub ecx, edi
// 006eebf7  8bc1                 mov eax, ecx
// 006eebf9  99                   cdq 
// 006eebfa  33c2                 xor eax, edx
// 006eebfc  2bc2                 sub eax, edx
// 006eebfe  89442450             mov dword ptr [esp + 0x50], eax
// 006eec02  db442450             fild dword ptr [esp + 0x50]
// 006eec06  d8d1                 fcom st(1)
// 006eec08  dfe0                 fnstsw ax
// 006eec0a  f6c405               test ah, 5
// 006eec0d  7a1a                 jp 0x6eec29
// 006eec0f  0fafcd               imul ecx, ebp
// 006eec12  85c9                 test ecx, ecx
// 006eec14  7c13                 jl 0x6eec29
// 006eec16  ddd9                 fstp st(1)
// 006eec18  c7868801000003000000 mov dword ptr [esi + 0x188], 3
// 006eec22  bb01000000           mov ebx, 1
// 006eec27  eb02                 jmp 0x6eec2b
// 006eec29  ddd8                 fstp st(0)
// 006eec2b  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 006eec2f  8bcf                 mov ecx, edi
// 006eec31  2b4c2434             sub ecx, dword ptr [esp + 0x34]
// 006eec35  8bc1                 mov eax, ecx
// 006eec37  99                   cdq 
// 006eec38  33c2                 xor eax, edx
// 006eec3a  2bc2                 sub eax, edx
// 006eec3c  89442450             mov dword ptr [esp + 0x50], eax
// 006eec40  db442450             fild dword ptr [esp + 0x50]
// 006eec44  dd442418             fld qword ptr [esp + 0x18]
// 006eec48  dcc9                 fmul st(1), st(0)
// 006eec4a  d9c9                 fxch st(1)
// 006eec4c  d8d2                 fcom st(2)
// 006eec4e  dfe0                 fnstsw ax
// 006eec50  f6c405               test ah, 5
// 006eec53  7a1a                 jp 0x6eec6f
// 006eec55  0fafcd               imul ecx, ebp
// 006eec58  85c9                 test ecx, ecx
// 006eec5a  7c13                 jl 0x6eec6f
// 006eec5c  ddda                 fstp st(2)
// 006eec5e  c7868801000000000000 mov dword ptr [esi + 0x188], 0
// 006eec68  bb01000000           mov ebx, 1
// 006eec6d  eb02                 jmp 0x6eec71
// 006eec6f  ddd8                 fstp st(0)
// 006eec71  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 006eec75  2bcf                 sub ecx, edi
// 006eec77  8bc1                 mov eax, ecx
// 006eec79  99                   cdq 
// 006eec7a  33c2                 xor eax, edx
// 006eec7c  2bc2                 sub eax, edx
// 006eec7e  89442450             mov dword ptr [esp + 0x50], eax
// 006eec82  db442450             fild dword ptr [esp + 0x50]
// 006eec86  dec9                 fmulp st(1)
// 006eec88  ded9                 fcompp 
// 006eec8a  dfe0                 fnstsw ax
// 006eec8c  f6c405               test ah, 5
// 006eec8f  7a14                 jp 0x6eeca5
// 006eec91  0fafcd               imul ecx, ebp
// 006eec94  85c9                 test ecx, ecx
// 006eec96  7c0d                 jl 0x6eeca5
// 006eec98  bb01000000           mov ebx, 1
// 006eec9d  899e88010000         mov dword ptr [esi + 0x188], ebx
// 006eeca3  eb04                 jmp 0x6eeca9
// 006eeca5  85db                 test ebx, ebx
// 006eeca7  7463                 je 0x6eed0c
// 006eeca9  8b8688010000         mov eax, dword ptr [esi + 0x188]
// 006eecaf  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 006eecb3  50                   push eax
// 006eecb4  57                   push edi
// 006eecb5  8bce                 mov ecx, esi
// 006eecb7  e834f6ffff           call 0x6ee2f0
// 006eecbc  85c0                 test eax, eax
// 006eecbe  0f849ffeffff         je 0x6eeb63
// 006eecc4  8b8e88010000         mov ecx, dword ptr [esi + 0x188]
// 006eecca  8b9620010000         mov edx, dword ptr [esi + 0x120]
// 006eecd0  57                   push edi
// 006eecd1  51                   push ecx
// 006eecd2  8b8e1c010000         mov ecx, dword ptr [esi + 0x11c]
// 006eecd8  52                   push edx
// 006eecd9  8d44242c             lea eax, [esp + 0x2c]
// 006eecdd  50                   push eax
// 006eecde  e8adfaf7ff           call 0x66e790
// 006eece3  8b08                 mov ecx, dword ptr [eax]
// 006eece5  898e30010000         mov dword ptr [esi + 0x130], ecx
// 006eeceb  8b5004               mov edx, dword ptr [eax + 4]
// 006eecee  899634010000         mov dword ptr [esi + 0x134], edx
// 006eecf4  8b4808               mov ecx, dword ptr [eax + 8]
// 006eecf7  898e38010000         mov dword ptr [esi + 0x138], ecx
// 006eecfd  8b500c               mov edx, dword ptr [eax + 0xc]
// 006eed00  89963c010000         mov dword ptr [esi + 0x13c], edx
// 006eed06  89be2c010000         mov dword ptr [esi + 0x12c], edi
// 006eed0c  5f                   pop edi
// 006eed0d  5e                   pop esi
// 006eed0e  5d                   pop ebp
// 006eed0f  8bc3                 mov eax, ebx
// 006eed11  5b                   pop ebx
// 006eed12  83c420               add esp, 0x20
// 006eed15  c22000               ret 0x20
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneContext.cpp (function ?CanDock@CXTPDockingPaneContext@@IAEHVCRect@@VCPoint@@PAVCXTPDockingPaneBase@@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneContext.cpp
