// roc 2009-12 0086f2d0  unit: PAVCXTPCommandBar::?$CArray  size: 427 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086f2d0
//
// 0086f2d0  83ec14               sub esp, 0x14
// 0086f2d3  8b442420             mov eax, dword ptr [esp + 0x20]
// 0086f2d7  53                   push ebx
// 0086f2d8  55                   push ebp
// 0086f2d9  56                   push esi
// 0086f2da  57                   push edi
// 0086f2db  8bf1                 mov esi, ecx
// 0086f2dd  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0086f2e1  50                   push eax
// 0086f2e2  51                   push ecx
// 0086f2e3  ff1528cb9800         call dword ptr [0x98cb28]
// 0086f2e9  8b5e10               mov ebx, dword ptr [esi + 0x10]
// 0086f2ec  83eb01               sub ebx, 1
// 0086f2ef  89442410             mov dword ptr [esp + 0x10], eax
// 0086f2f3  7870                 js 0x86f365
// 0086f2f5  8b2df4ca9800         mov ebp, dword ptr [0x98caf4]
// 0086f2fb  eb03                 jmp 0x86f300
// 0086f2fd  8d4900               lea ecx, [ecx]
// 0086f300  85db                 test ebx, ebx
// 0086f302  0f8c6e010000         jl 0x86f476
// 0086f308  3b5e10               cmp ebx, dword ptr [esi + 0x10]
// 0086f30b  0f8d65010000         jge 0x86f476
// 0086f311  8b560c               mov edx, dword ptr [esi + 0xc]
// 0086f314  8b3c9a               mov edi, dword ptr [edx + ebx*4]
// 0086f317  85ff                 test edi, edi
// 0086f319  7445                 je 0x86f360
// 0086f31b  837f2000             cmp dword ptr [edi + 0x20], 0
// 0086f31f  743f                 je 0x86f360
// 0086f321  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0086f325  83ec08               sub esp, 8
// 0086f328  8bc4                 mov eax, esp
// 0086f32a  8908                 mov dword ptr [eax], ecx
// 0086f32c  8b542438             mov edx, dword ptr [esp + 0x38]
// 0086f330  895004               mov dword ptr [eax + 4], edx
// 0086f333  8b07                 mov eax, dword ptr [edi]
// 0086f335  8b90e0010000         mov edx, dword ptr [eax + 0x1e0]
// 0086f33b  8bcf                 mov ecx, edi
// 0086f33d  ffd2                 call edx
// 0086f33f  83f8fe               cmp eax, -2
// 0086f342  741c                 je 0x86f360
// 0086f344  83f801               cmp eax, 1
// 0086f347  0f84e8000000         je 0x86f435
// 0086f34d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0086f351  8b4720               mov eax, dword ptr [edi + 0x20]
// 0086f354  51                   push ecx
// 0086f355  50                   push eax
// 0086f356  ffd5                 call ebp
// 0086f358  85c0                 test eax, eax
// 0086f35a  0f85d5000000         jne 0x86f435
// 0086f360  83eb01               sub ebx, 1
// 0086f363  799b                 jns 0x86f300
// 0086f365  837e1000             cmp dword ptr [esi + 0x10], 0
// 0086f369  7e64                 jle 0x86f3cf
// 0086f36b  8b4634               mov eax, dword ptr [esi + 0x34]
// 0086f36e  33ff                 xor edi, edi
// 0086f370  85c0                 test eax, eax
// 0086f372  7e5b                 jle 0x86f3cf
// 0086f374  8b2d84cc9800         mov ebp, dword ptr [0x98cc84]
// 0086f37a  8d9b00000000         lea ebx, [ebx]
// 0086f380  85ff                 test edi, edi
// 0086f382  0f8cee000000         jl 0x86f476
// 0086f388  3bf8                 cmp edi, eax
// 0086f38a  0f8de6000000         jge 0x86f476
// 0086f390  8b5630               mov edx, dword ptr [esi + 0x30]
// 0086f393  8b1cba               mov ebx, dword ptr [edx + edi*4]
// 0086f396  53                   push ebx
// 0086f397  ffd5                 call ebp
// 0086f399  85c0                 test eax, eax
// 0086f39b  742a                 je 0x86f3c7
// 0086f39d  53                   push ebx
// 0086f39e  ff1564ca9800         call dword ptr [0x98ca64]
// 0086f3a4  85c0                 test eax, eax
// 0086f3a6  741f                 je 0x86f3c7
// 0086f3a8  53                   push ebx
// 0086f3a9  8d4c2418             lea ecx, [esp + 0x18]
// 0086f3ad  e88ebefdff           call 0x84b240
// 0086f3b2  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0086f3b6  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0086f3ba  51                   push ecx
// 0086f3bb  52                   push edx
// 0086f3bc  50                   push eax
// 0086f3bd  ff155cca9800         call dword ptr [0x98ca5c]
// 0086f3c3  85c0                 test eax, eax
// 0086f3c5  7562                 jne 0x86f429
// 0086f3c7  8b4634               mov eax, dword ptr [esi + 0x34]
// 0086f3ca  47                   inc edi
// 0086f3cb  3bf8                 cmp edi, eax
// 0086f3cd  7cb1                 jl 0x86f380
// 0086f3cf  8b442410             mov eax, dword ptr [esp + 0x10]
// 0086f3d3  85c0                 test eax, eax
// 0086f3d5  7416                 je 0x86f3ed
// 0086f3d7  837e1000             cmp dword ptr [esi + 0x10], 0
// 0086f3db  7e10                 jle 0x86f3ed
// 0086f3dd  6ae6                 push -0x1a
// 0086f3df  50                   push eax
// 0086f3e0  ff1568cb9800         call dword ptr [0x98cb68]
// 0086f3e6  a900000100           test eax, 0x10000
// 0086f3eb  753c                 jne 0x86f429
// 0086f3ed  8b4610               mov eax, dword ptr [esi + 0x10]
// 0086f3f0  33ff                 xor edi, edi
// 0086f3f2  85c0                 test eax, eax
// 0086f3f4  7e33                 jle 0x86f429
// 0086f3f6  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0086f3fa  8d9b00000000         lea ebx, [ebx]
// 0086f400  85ff                 test edi, edi
// 0086f402  7c72                 jl 0x86f476
// 0086f404  3bf8                 cmp edi, eax
// 0086f406  7d6e                 jge 0x86f476
// 0086f408  8b442430             mov eax, dword ptr [esp + 0x30]
// 0086f40c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0086f410  8b560c               mov edx, dword ptr [esi + 0xc]
// 0086f413  50                   push eax
// 0086f414  8b04ba               mov eax, dword ptr [edx + edi*4]
// 0086f417  51                   push ecx
// 0086f418  53                   push ebx
// 0086f419  50                   push eax
// 0086f41a  8bce                 mov ecx, esi
// 0086f41c  e8effdffff           call 0x86f210
// 0086f421  8b4610               mov eax, dword ptr [esi + 0x10]
// 0086f424  47                   inc edi
// 0086f425  3bf8                 cmp edi, eax
// 0086f427  7cd7                 jl 0x86f400
// 0086f429  33c0                 xor eax, eax
// 0086f42b  5f                   pop edi
// 0086f42c  5e                   pop esi
// 0086f42d  5d                   pop ebp
// 0086f42e  5b                   pop ebx
// 0086f42f  83c414               add esp, 0x14
// 0086f432  c20c00               ret 0xc
// 0086f435  83bf2c01000000       cmp dword ptr [edi + 0x12c], 0
// 0086f43c  7eeb                 jle 0x86f429
// 0086f43e  8b442428             mov eax, dword ptr [esp + 0x28]
// 0086f442  3d00020000           cmp eax, 0x200
// 0086f447  74e0                 je 0x86f429
// 0086f449  3da0000000           cmp eax, 0xa0
// 0086f44e  74d9                 je 0x86f429
// 0086f450  837e4000             cmp dword ptr [esi + 0x40], 0
// 0086f454  75d3                 jne 0x86f429
// 0086f456  8bce                 mov ecx, esi
// 0086f458  e843fdffff           call 0x86f1a0
// 0086f45d  5f                   pop edi
// 0086f45e  5e                   pop esi
// 0086f45f  33c0                 xor eax, eax
// 0086f461  33c9                 xor ecx, ecx
// 0086f463  5d                   pop ebp
// 0086f464  a3d4bab900           mov dword ptr [0xb9bad4], eax
// 0086f469  890dd8bab900         mov dword ptr [0xb9bad8], ecx
// 0086f46f  5b                   pop ebx
// 0086f470  83c414               add esp, 0x14
// 0086f473  c20c00               ret 0xc
// 0086f476  e89146f8ff           call 0x7f3b0c
// copied from an identical function in another client (function ?PreTranslateMouseEvents@CXTPMouseManager@@AAEHIUtagPOINT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPMouseManager.cpp