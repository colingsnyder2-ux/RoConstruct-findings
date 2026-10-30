// roc 2009-12 008911c0  unit: CXTPDockBar::UDOCK_INFO::?$CArray  size: 641 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008911c0
//
// 008911c0  83ec14               sub esp, 0x14
// 008911c3  53                   push ebx
// 008911c4  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 008911c8  55                   push ebp
// 008911c9  56                   push esi
// 008911ca  33ed                 xor ebp, ebp
// 008911cc  3bdd                 cmp ebx, ebp
// 008911ce  57                   push edi
// 008911cf  8bf9                 mov edi, ecx
// 008911d1  7d05                 jge 0x8911d8
// 008911d3  e83429f6ff           call 0x7f3b0c
// 008911d8  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008911dc  3bc5                 cmp eax, ebp
// 008911de  7c03                 jl 0x8911e3
// 008911e0  894710               mov dword ptr [edi + 0x10], eax
// 008911e3  3bdd                 cmp ebx, ebp
// 008911e5  7523                 jne 0x89120a
// 008911e7  8b4704               mov eax, dword ptr [edi + 4]
// 008911ea  3bc5                 cmp eax, ebp
// 008911ec  740c                 je 0x8911fa
// 008911ee  50                   push eax
// 008911ef  e81229f6ff           call 0x7f3b06
// 008911f4  83c404               add esp, 4
// 008911f7  896f04               mov dword ptr [edi + 4], ebp
// 008911fa  896f0c               mov dword ptr [edi + 0xc], ebp
// 008911fd  896f08               mov dword ptr [edi + 8], ebp
// 00891200  5f                   pop edi
// 00891201  5e                   pop esi
// 00891202  5d                   pop ebp
// 00891203  5b                   pop ebx
// 00891204  83c414               add esp, 0x14
// 00891207  c20800               ret 8
// 0089120a  8b5704               mov edx, dword ptr [edi + 4]
// 0089120d  3bd5                 cmp edx, ebp
// 0089120f  0f85ae000000         jne 0x8912c3
// 00891215  8b6f10               mov ebp, dword ptr [edi + 0x10]
// 00891218  3bdd                 cmp ebx, ebp
// 0089121a  7e08                 jle 0x891224
// 0089121c  8beb                 mov ebp, ebx
// 0089121e  895c242c             mov dword ptr [esp + 0x2c], ebx
// 00891222  eb04                 jmp 0x891228
// 00891224  896c242c             mov dword ptr [esp + 0x2c], ebp
// 00891228  8d746d00             lea esi, [ebp + ebp*2]
// 0089122c  c1e604               shl esi, 4
// 0089122f  56                   push esi
// 00891230  e80d29f6ff           call 0x7f3b42
// 00891235  56                   push esi
// 00891236  6a00                 push 0
// 00891238  50                   push eax
// 00891239  894704               mov dword ptr [edi + 4], eax
// 0089123c  e86338f6ff           call 0x7f4aa4
// 00891241  83c410               add esp, 0x10
// 00891244  85db                 test ebx, ebx
// 00891246  7e6b                 jle 0x8912b3
// 00891248  c744242800000000     mov dword ptr [esp + 0x28], 0
// 00891250  895c2410             mov dword ptr [esp + 0x10], ebx
// 00891254  8b7704               mov esi, dword ptr [edi + 4]
// 00891257  03742428             add esi, dword ptr [esp + 0x28]
// 0089125b  744a                 je 0x8912a7
// 0089125d  6a00                 push 0
// 0089125f  8d442418             lea eax, [esp + 0x18]
// 00891263  50                   push eax
// 00891264  ff1564cc9800         call dword ptr [0x98cc64]
// 0089126a  8b442414             mov eax, dword ptr [esp + 0x14]
// 0089126e  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00891272  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00891276  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0089127a  894604               mov dword ptr [esi + 4], eax
// 0089127d  894614               mov dword ptr [esi + 0x14], eax
// 00891280  894e08               mov dword ptr [esi + 8], ecx
// 00891283  894e18               mov dword ptr [esi + 0x18], ecx
// 00891286  33c0                 xor eax, eax
// 00891288  89560c               mov dword ptr [esi + 0xc], edx
// 0089128b  89561c               mov dword ptr [esi + 0x1c], edx
// 0089128e  896e10               mov dword ptr [esi + 0x10], ebp
// 00891291  896e20               mov dword ptr [esi + 0x20], ebp
// 00891294  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00891298  c70600000000         mov dword ptr [esi], 0
// 0089129e  894624               mov dword ptr [esi + 0x24], eax
// 008912a1  894628               mov dword ptr [esi + 0x28], eax
// 008912a4  89462c               mov dword ptr [esi + 0x2c], eax
// 008912a7  8344242830           add dword ptr [esp + 0x28], 0x30
// 008912ac  836c241001           sub dword ptr [esp + 0x10], 1
// 008912b1  75a1                 jne 0x891254
// 008912b3  896f0c               mov dword ptr [edi + 0xc], ebp
// 008912b6  895f08               mov dword ptr [edi + 8], ebx
// 008912b9  5f                   pop edi
// 008912ba  5e                   pop esi
// 008912bb  5d                   pop ebp
// 008912bc  5b                   pop ebx
// 008912bd  83c414               add esp, 0x14
// 008912c0  c20800               ret 8
// 008912c3  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 008912c6  3bd9                 cmp ebx, ecx
// 008912c8  7f7a                 jg 0x891344
// 008912ca  8b4f08               mov ecx, dword ptr [edi + 8]
// 008912cd  3bd9                 cmp ebx, ecx
// 008912cf  0f8e5f010000         jle 0x891434
// 008912d5  8bc3                 mov eax, ebx
// 008912d7  2bc1                 sub eax, ecx
// 008912d9  8d0440               lea eax, [eax + eax*2]
// 008912dc  8d0c49               lea ecx, [ecx + ecx*2]
// 008912df  c1e004               shl eax, 4
// 008912e2  50                   push eax
// 008912e3  c1e104               shl ecx, 4
// 008912e6  03ca                 add ecx, edx
// 008912e8  55                   push ebp
// 008912e9  51                   push ecx
// 008912ea  e8b537f6ff           call 0x7f4aa4
// 008912ef  8bd3                 mov edx, ebx
// 008912f1  2b5708               sub edx, dword ptr [edi + 8]
// 008912f4  83c40c               add esp, 0xc
// 008912f7  85d2                 test edx, edx
// 008912f9  0f8e35010000         jle 0x891434
// 008912ff  90                   nop 
// 00891300  8b4708               mov eax, dword ptr [edi + 8]
// 00891303  03c5                 add eax, ebp
// 00891305  8d3440               lea esi, [eax + eax*2]
// 00891308  c1e604               shl esi, 4
// 0089130b  037704               add esi, dword ptr [edi + 4]
// 0089130e  741d                 je 0x89132d
// 00891310  6a00                 push 0
// 00891312  83ec10               sub esp, 0x10
// 00891315  8964243c             mov dword ptr [esp + 0x3c], esp
// 00891319  8bc4                 mov eax, esp
// 0089131b  6a00                 push 0
// 0089131d  50                   push eax
// 0089131e  ff1564cc9800         call dword ptr [0x98cc64]
// 00891324  6a00                 push 0
// 00891326  8bce                 mov ecx, esi
// 00891328  e863fdffff           call 0x891090
// 0089132d  8bc3                 mov eax, ebx
// 0089132f  2b4708               sub eax, dword ptr [edi + 8]
// 00891332  45                   inc ebp
// 00891333  3be8                 cmp ebp, eax
// 00891335  7cc9                 jl 0x891300
// 00891337  895f08               mov dword ptr [edi + 8], ebx
// 0089133a  5f                   pop edi
// 0089133b  5e                   pop esi
// 0089133c  5d                   pop ebp
// 0089133d  5b                   pop ebx
// 0089133e  83c414               add esp, 0x14
// 00891341  c20800               ret 8
// 00891344  8b4710               mov eax, dword ptr [edi + 0x10]
// 00891347  3bc5                 cmp eax, ebp
// 00891349  7524                 jne 0x89136f
// 0089134b  8b4708               mov eax, dword ptr [edi + 8]
// 0089134e  99                   cdq 
// 0089134f  83e207               and edx, 7
// 00891352  03c2                 add eax, edx
// 00891354  c1f803               sar eax, 3
// 00891357  83f804               cmp eax, 4
// 0089135a  7d07                 jge 0x891363
// 0089135c  b804000000           mov eax, 4
// 00891361  eb0c                 jmp 0x89136f
// 00891363  3d00040000           cmp eax, 0x400
// 00891368  7e05                 jle 0x89136f
// 0089136a  b800040000           mov eax, 0x400
// 0089136f  8d3401               lea esi, [ecx + eax]
// 00891372  3bde                 cmp ebx, esi
// 00891374  7d06                 jge 0x89137c
// 00891376  89742428             mov dword ptr [esp + 0x28], esi
// 0089137a  eb06                 jmp 0x891382
// 0089137c  895c2428             mov dword ptr [esp + 0x28], ebx
// 00891380  8bf3                 mov esi, ebx
// 00891382  3bf1                 cmp esi, ecx
// 00891384  7d05                 jge 0x89138b
// 00891386  e88127f6ff           call 0x7f3b0c
// 0089138b  8d3476               lea esi, [esi + esi*2]
// 0089138e  c1e604               shl esi, 4
// 00891391  56                   push esi
// 00891392  e8ab27f6ff           call 0x7f3b42
// 00891397  8b5704               mov edx, dword ptr [edi + 4]
// 0089139a  8be8                 mov ebp, eax
// 0089139c  8b4708               mov eax, dword ptr [edi + 8]
// 0089139f  8d0c40               lea ecx, [eax + eax*2]
// 008913a2  c1e104               shl ecx, 4
// 008913a5  51                   push ecx
// 008913a6  52                   push edx
// 008913a7  56                   push esi
// 008913a8  55                   push ebp
// 008913a9  e8f217b7ff           call 0x402ba0
// 008913ae  8b4f08               mov ecx, dword ptr [edi + 8]
// 008913b1  8bc3                 mov eax, ebx
// 008913b3  2bc1                 sub eax, ecx
// 008913b5  8d0440               lea eax, [eax + eax*2]
// 008913b8  8d0c49               lea ecx, [ecx + ecx*2]
// 008913bb  c1e004               shl eax, 4
// 008913be  50                   push eax
// 008913bf  c1e104               shl ecx, 4
// 008913c2  03cd                 add ecx, ebp
// 008913c4  6a00                 push 0
// 008913c6  51                   push ecx
// 008913c7  e8d836f6ff           call 0x7f4aa4
// 008913cc  8bd3                 mov edx, ebx
// 008913ce  2b5708               sub edx, dword ptr [edi + 8]
// 008913d1  33c9                 xor ecx, ecx
// 008913d3  83c420               add esp, 0x20
// 008913d6  894c242c             mov dword ptr [esp + 0x2c], ecx
// 008913da  85d2                 test edx, edx
// 008913dc  7e40                 jle 0x89141e
// 008913de  8bff                 mov edi, edi
// 008913e0  8b4708               mov eax, dword ptr [edi + 8]
// 008913e3  03c1                 add eax, ecx
// 008913e5  8d3440               lea esi, [eax + eax*2]
// 008913e8  c1e604               shl esi, 4
// 008913eb  03f5                 add esi, ebp
// 008913ed  7421                 je 0x891410
// 008913ef  6a00                 push 0
// 008913f1  83ec10               sub esp, 0x10
// 008913f4  89642424             mov dword ptr [esp + 0x24], esp
// 008913f8  8bc4                 mov eax, esp
// 008913fa  6a00                 push 0
// 008913fc  50                   push eax
// 008913fd  ff1564cc9800         call dword ptr [0x98cc64]
// 00891403  6a00                 push 0
// 00891405  8bce                 mov ecx, esi
// 00891407  e884fcffff           call 0x891090
// 0089140c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00891410  8bc3                 mov eax, ebx
// 00891412  2b4708               sub eax, dword ptr [edi + 8]
// 00891415  41                   inc ecx
// 00891416  3bc8                 cmp ecx, eax
// 00891418  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0089141c  7cc2                 jl 0x8913e0
// 0089141e  8b4f04               mov ecx, dword ptr [edi + 4]
// 00891421  51                   push ecx
// 00891422  e8df26f6ff           call 0x7f3b06
// 00891427  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0089142b  83c404               add esp, 4
// 0089142e  896f04               mov dword ptr [edi + 4], ebp
// 00891431  89570c               mov dword ptr [edi + 0xc], edx
// 00891434  895f08               mov dword ptr [edi + 8], ebx
// 00891437  5f                   pop edi
// 00891438  5e                   pop esi
// 00891439  5d                   pop ebp
// 0089143a  5b                   pop ebx
// 0089143b  83c414               add esp, 0x14
// 0089143e  c20800               ret 8
// copied from an identical function in another client (function ?SetSize@?$CArray@UDOCK_INFO@CXTPDockBar@@AAU12@@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPDockBar.cpp