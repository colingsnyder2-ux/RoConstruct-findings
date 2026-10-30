// roc 2009-12 008817e0  unit: CXTPOffice2007Theme  size: 492 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008817e0
//
// 008817e0  6aff                 push -1
// 008817e2  68e8009600           push 0x9600e8
// 008817e7  64a100000000         mov eax, dword ptr fs:[0]
// 008817ed  50                   push eax
// 008817ee  83ec48               sub esp, 0x48
// 008817f1  53                   push ebx
// 008817f2  55                   push ebp
// 008817f3  56                   push esi
// 008817f4  57                   push edi
// 008817f5  a10052b600           mov eax, dword ptr [0xb65200]
// 008817fa  33c4                 xor eax, esp
// 008817fc  50                   push eax
// 008817fd  8d44245c             lea eax, [esp + 0x5c]
// 00881801  64a300000000         mov dword ptr fs:[0], eax
// 00881807  8bf1                 mov esi, ecx
// 00881809  33db                 xor ebx, ebx
// 0088180b  bdf82a9f00           mov ebp, 0x9f2af8
// 00881810  895c2418             mov dword ptr [esp + 0x18], ebx
// 00881814  896c2414             mov dword ptr [esp + 0x14], ebp
// 00881818  8d442470             lea eax, [esp + 0x70]
// 0088181c  50                   push eax
// 0088181d  895c2468             mov dword ptr [esp + 0x68], ebx
// 00881821  ff15c4b09800         call dword ptr [0x98b0c4]
// 00881827  50                   push eax
// 00881828  8d4c2418             lea ecx, [esp + 0x18]
// 0088182c  e8f925f7ff           call 0x7f3e2a
// 00881831  8b7c246c             mov edi, dword ptr [esp + 0x6c]
// 00881835  8d4c2414             lea ecx, [esp + 0x14]
// 00881839  51                   push ecx
// 0088183a  8bcf                 mov ecx, edi
// 0088183c  e8234e0a00           call 0x926664
// 00881841  8d942480000000       lea edx, [esp + 0x80]
// 00881848  52                   push edx
// 00881849  8bcf                 mov ecx, edi
// 0088184b  e864520a00           call 0x926ab4
// 00881850  68e425a000           push 0xa025e4
// 00881855  8bce                 mov ecx, esi
// 00881857  e8a4d4ffff           call 0x87ed00
// 0088185c  8944246c             mov dword ptr [esp + 0x6c], eax
// 00881860  3bc3                 cmp eax, ebx
// 00881862  7509                 jne 0x88186d
// 00881864  896c2414             mov dword ptr [esp + 0x14], ebp
// 00881868  e938010000           jmp 0x8819a5
// 0088186d  6a01                 push 1
// 0088186f  53                   push ebx
// 00881870  8d4c2424             lea ecx, [esp + 0x24]
// 00881874  51                   push ecx
// 00881875  8bc8                 mov ecx, eax
// 00881877  e844f00500           call 0x8e08c0
// 0088187c  8b6c247c             mov ebp, dword ptr [esp + 0x7c]
// 00881880  8b442474             mov eax, dword ptr [esp + 0x74]
// 00881884  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00881888  8b542478             mov edx, dword ptr [esp + 0x78]
// 0088188c  896c2438             mov dword ptr [esp + 0x38], ebp
// 00881890  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00881894  2b6c2420             sub ebp, dword ptr [esp + 0x20]
// 00881898  89442430             mov dword ptr [esp + 0x30], eax
// 0088189c  03e8                 add ebp, eax
// 0088189e  8b442424             mov eax, dword ptr [esp + 0x24]
// 008818a2  2b44241c             sub eax, dword ptr [esp + 0x1c]
// 008818a6  2bd1                 sub edx, ecx
// 008818a8  3bd0                 cmp edx, eax
// 008818aa  894c242c             mov dword ptr [esp + 0x2c], ecx
// 008818ae  896c2438             mov dword ptr [esp + 0x38], ebp
// 008818b2  7f02                 jg 0x8818b6
// 008818b4  8bd0                 mov edx, eax
// 008818b6  03d1                 add edx, ecx
// 008818b8  83ec10               sub esp, 0x10
// 008818bb  8d48ff               lea ecx, [eax - 1]
// 008818be  8bc4                 mov eax, esp
// 008818c0  8908                 mov dword ptr [eax], ecx
// 008818c2  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008818c6  89542444             mov dword ptr [esp + 0x44], edx
// 008818ca  33d2                 xor edx, edx
// 008818cc  895004               mov dword ptr [eax + 4], edx
// 008818cf  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 008818d3  895808               mov dword ptr [eax + 8], ebx
// 008818d6  83ec10               sub esp, 0x10
// 008818d9  33ed                 xor ebp, ebp
// 008818db  89680c               mov dword ptr [eax + 0xc], ebp
// 008818de  8bc4                 mov eax, esp
// 008818e0  8910                 mov dword ptr [eax], edx
// 008818e2  8b542444             mov edx, dword ptr [esp + 0x44]
// 008818e6  894804               mov dword ptr [eax + 4], ecx
// 008818e9  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008818ed  895008               mov dword ptr [eax + 8], edx
// 008818f0  8d54244c             lea edx, [esp + 0x4c]
// 008818f4  52                   push edx
// 008818f5  89480c               mov dword ptr [eax + 0xc], ecx
// 008818f8  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 008818ff  57                   push edi
// 00881900  e88be80500           call 0x8e0190
// 00881905  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00881909  2b4c2420             sub ecx, dword ptr [esp + 0x20]
// 0088190d  8b5c247c             mov ebx, dword ptr [esp + 0x7c]
// 00881911  034c2474             add ecx, dword ptr [esp + 0x74]
// 00881915  8bd3                 mov edx, ebx
// 00881917  2bd1                 sub edx, ecx
// 00881919  03d2                 add edx, edx
// 0088191b  b856555555           mov eax, 0x55555556
// 00881920  f7ea                 imul edx
// 00881922  8bc2                 mov eax, edx
// 00881924  c1e81f               shr eax, 0x1f
// 00881927  03c2                 add eax, edx
// 00881929  8b542470             mov edx, dword ptr [esp + 0x70]
// 0088192d  03c1                 add eax, ecx
// 0088192f  894c2440             mov dword ptr [esp + 0x40], ecx
// 00881933  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 00881937  55                   push ebp
// 00881938  8944244c             mov dword ptr [esp + 0x4c], eax
// 0088193c  89442454             mov dword ptr [esp + 0x54], eax
// 00881940  8b8644060000         mov eax, dword ptr [esi + 0x644]
// 00881946  50                   push eax
// 00881947  894c244c             mov dword ptr [esp + 0x4c], ecx
// 0088194b  894c245c             mov dword ptr [esp + 0x5c], ecx
// 0088194f  8b8e40060000         mov ecx, dword ptr [esi + 0x640]
// 00881955  89542444             mov dword ptr [esp + 0x44], edx
// 00881959  89542454             mov dword ptr [esp + 0x54], edx
// 0088195d  51                   push ecx
// 0088195e  8d542448             lea edx, [esp + 0x48]
// 00881962  52                   push edx
// 00881963  57                   push edi
// 00881964  895c246c             mov dword ptr [esp + 0x6c], ebx
// 00881968  e833b9fcff           call 0x84d2a0
// 0088196d  8bc8                 mov ecx, eax
// 0088196f  e85cb9fcff           call 0x84d2d0
// 00881974  8b8648060000         mov eax, dword ptr [esi + 0x648]
// 0088197a  8b8e44060000         mov ecx, dword ptr [esi + 0x644]
// 00881980  55                   push ebp
// 00881981  50                   push eax
// 00881982  51                   push ecx
// 00881983  8d542458             lea edx, [esp + 0x58]
// 00881987  52                   push edx
// 00881988  57                   push edi
// 00881989  e812b9fcff           call 0x84d2a0
// 0088198e  8bc8                 mov ecx, eax
// 00881990  e83bb9fcff           call 0x84d2d0
// 00881995  55                   push ebp
// 00881996  8bcf                 mov ecx, edi
// 00881998  e8c74c0a00           call 0x926664
// 0088199d  c7442414f82a9f00     mov dword ptr [esp + 0x14], 0x9f2af8
// 008819a5  8d4c2414             lea ecx, [esp + 0x14]
// 008819a9  c7442464ffffffff     mov dword ptr [esp + 0x64], 0xffffffff
// 008819b1  e87ad8b8ff           call 0x40f230
// 008819b6  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008819ba  64890d00000000       mov dword ptr fs:[0], ecx
// 008819c1  59                   pop ecx
// 008819c2  5f                   pop edi
// 008819c3  5e                   pop esi
// 008819c4  5d                   pop ebp
// 008819c5  5b                   pop ebx
// 008819c6  83c454               add esp, 0x54
// 008819c9  c22400               ret 0x24
// copied from an identical function in another client (function ?FillWorkspace@CXTPOffice2007Theme@@UAEXPAVCDC@@VCRect@@1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPOffice2007Theme.cpp