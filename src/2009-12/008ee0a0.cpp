// roc 2009-12 008ee0a0  unit: CXTPRibbonGroup  size: 595 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ee0a0
//
// 008ee0a0  83ec1c               sub esp, 0x1c
// 008ee0a3  53                   push ebx
// 008ee0a4  55                   push ebp
// 008ee0a5  8be9                 mov ebp, ecx
// 008ee0a7  8b4534               mov eax, dword ptr [ebp + 0x34]
// 008ee0aa  8b808c000000         mov eax, dword ptr [eax + 0x8c]
// 008ee0b0  56                   push esi
// 008ee0b1  57                   push edi
// 008ee0b2  50                   push eax
// 008ee0b3  e8f8170000           call 0x8ef8b0
// 008ee0b8  8b5d28               mov ebx, dword ptr [ebp + 0x28]
// 008ee0bb  83c404               add esp, 4
// 008ee0be  89442418             mov dword ptr [esp + 0x18], eax
// 008ee0c2  895c2414             mov dword ptr [esp + 0x14], ebx
// 008ee0c6  85db                 test ebx, ebx
// 008ee0c8  7513                 jne 0x8ee0dd
// 008ee0ca  53                   push ebx
// 008ee0cb  53                   push ebx
// 008ee0cc  8bc8                 mov ecx, eax
// 008ee0ce  e8bd0f0000           call 0x8ef090
// 008ee0d3  5f                   pop edi
// 008ee0d4  5e                   pop esi
// 008ee0d5  5d                   pop ebp
// 008ee0d6  5b                   pop ebx
// 008ee0d7  83c41c               add esp, 0x1c
// 008ee0da  c21000               ret 0x10
// 008ee0dd  33c9                 xor ecx, ecx
// 008ee0df  8bc3                 mov eax, ebx
// 008ee0e1  ba04000000           mov edx, 4
// 008ee0e6  f7e2                 mul edx
// 008ee0e8  0f90c1               seto cl
// 008ee0eb  f7d9                 neg ecx
// 008ee0ed  0bc8                 or ecx, eax
// 008ee0ef  51                   push ecx
// 008ee0f0  e84d5af0ff           call 0x7f3b42
// 008ee0f5  83c404               add esp, 4
// 008ee0f8  33f6                 xor esi, esi
// 008ee0fa  89442410             mov dword ptr [esp + 0x10], eax
// 008ee0fe  85db                 test ebx, ebx
// 008ee100  7e31                 jle 0x8ee133
// 008ee102  85f6                 test esi, esi
// 008ee104  7c0d                 jl 0x8ee113
// 008ee106  3b7528               cmp esi, dword ptr [ebp + 0x28]
// 008ee109  7d08                 jge 0x8ee113
// 008ee10b  8b4524               mov eax, dword ptr [ebp + 0x24]
// 008ee10e  8b3cb0               mov edi, dword ptr [eax + esi*4]
// 008ee111  eb02                 jmp 0x8ee115
// 008ee113  33ff                 xor edi, edi
// 008ee115  8bcf                 mov ecx, edi
// 008ee117  e844b4ffff           call 0x8e9560
// 008ee11c  85c0                 test eax, eax
// 008ee11e  740e                 je 0x8ee12e
// 008ee120  8b17                 mov edx, dword ptr [edi]
// 008ee122  8b442430             mov eax, dword ptr [esp + 0x30]
// 008ee126  8b5278               mov edx, dword ptr [edx + 0x78]
// 008ee129  50                   push eax
// 008ee12a  8bcf                 mov ecx, edi
// 008ee12c  ffd2                 call edx
// 008ee12e  46                   inc esi
// 008ee12f  3bf3                 cmp esi, ebx
// 008ee131  7ccf                 jl 0x8ee102
// 008ee133  33f6                 xor esi, esi
// 008ee135  85db                 test ebx, ebx
// 008ee137  7e46                 jle 0x8ee17f
// 008ee139  8da42400000000       lea esp, [esp]
// 008ee140  85f6                 test esi, esi
// 008ee142  7c0d                 jl 0x8ee151
// 008ee144  3b7528               cmp esi, dword ptr [ebp + 0x28]
// 008ee147  7d08                 jge 0x8ee151
// 008ee149  8b4524               mov eax, dword ptr [ebp + 0x24]
// 008ee14c  8b3cb0               mov edi, dword ptr [eax + esi*4]
// 008ee14f  eb02                 jmp 0x8ee153
// 008ee151  33ff                 xor edi, edi
// 008ee153  8bcf                 mov ecx, edi
// 008ee155  e806b4ffff           call 0x8e9560
// 008ee15a  85c0                 test eax, eax
// 008ee15c  7413                 je 0x8ee171
// 008ee15e  8b17                 mov edx, dword ptr [edi]
// 008ee160  8b442430             mov eax, dword ptr [esp + 0x30]
// 008ee164  8b9280000000         mov edx, dword ptr [edx + 0x80]
// 008ee16a  50                   push eax
// 008ee16b  8bcf                 mov ecx, edi
// 008ee16d  ffd2                 call edx
// 008ee16f  eb02                 jmp 0x8ee173
// 008ee171  33c0                 xor eax, eax
// 008ee173  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008ee177  8904b1               mov dword ptr [ecx + esi*4], eax
// 008ee17a  46                   inc esi
// 008ee17b  3bf3                 cmp esi, ebx
// 008ee17d  7cc1                 jl 0x8ee140
// 008ee17f  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 008ee183  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 008ee187  2b7e08               sub edi, dword ptr [esi + 8]
// 008ee18a  8b542410             mov edx, dword ptr [esp + 0x10]
// 008ee18e  2b3e                 sub edi, dword ptr [esi]
// 008ee190  8b442430             mov eax, dword ptr [esp + 0x30]
// 008ee194  57                   push edi
// 008ee195  52                   push edx
// 008ee196  50                   push eax
// 008ee197  8bcd                 mov ecx, ebp
// 008ee199  e8d2fdffff           call 0x8edf70
// 008ee19e  8b0e                 mov ecx, dword ptr [esi]
// 008ee1a0  8b5604               mov edx, dword ptr [esi + 4]
// 008ee1a3  8b4608               mov eax, dword ptr [esi + 8]
// 008ee1a6  894c241c             mov dword ptr [esp + 0x1c], ecx
// 008ee1aa  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 008ee1ad  33db                 xor ebx, ebx
// 008ee1af  395c2414             cmp dword ptr [esp + 0x14], ebx
// 008ee1b3  89542420             mov dword ptr [esp + 0x20], edx
// 008ee1b7  89442424             mov dword ptr [esp + 0x24], eax
// 008ee1bb  894c2428             mov dword ptr [esp + 0x28], ecx
// 008ee1bf  bef9ffffff           mov esi, 0xfffffff9
// 008ee1c4  7e2e                 jle 0x8ee1f4
// 008ee1c6  85db                 test ebx, ebx
// 008ee1c8  7c0d                 jl 0x8ee1d7
// 008ee1ca  3b5d28               cmp ebx, dword ptr [ebp + 0x28]
// 008ee1cd  7d08                 jge 0x8ee1d7
// 008ee1cf  8b5524               mov edx, dword ptr [ebp + 0x24]
// 008ee1d2  8b0c9a               mov ecx, dword ptr [edx + ebx*4]
// 008ee1d5  eb02                 jmp 0x8ee1d9
// 008ee1d7  33c9                 xor ecx, ecx
// 008ee1d9  e882b3ffff           call 0x8e9560
// 008ee1de  85c0                 test eax, eax
// 008ee1e0  740b                 je 0x8ee1ed
// 008ee1e2  8b442410             mov eax, dword ptr [esp + 0x10]
// 008ee1e6  8b0c98               mov ecx, dword ptr [eax + ebx*4]
// 008ee1e9  8d740e07             lea esi, [esi + ecx + 7]
// 008ee1ed  43                   inc ebx
// 008ee1ee  3b5c2414             cmp ebx, dword ptr [esp + 0x14]
// 008ee1f2  7cd2                 jl 0x8ee1c6
// 008ee1f4  3bf7                 cmp esi, edi
// 008ee1f6  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008ee1fa  8b5904               mov ebx, dword ptr [ecx + 4]
// 008ee1fd  7e0e                 jle 0x8ee20d
// 008ee1ff  8bc6                 mov eax, esi
// 008ee201  2bc7                 sub eax, edi
// 008ee203  3bd8                 cmp ebx, eax
// 008ee205  7e02                 jle 0x8ee209
// 008ee207  8bd8                 mov ebx, eax
// 008ee209  85db                 test ebx, ebx
// 008ee20b  7d02                 jge 0x8ee20f
// 008ee20d  33db                 xor ebx, ebx
// 008ee20f  2bf3                 sub esi, ebx
// 008ee211  33d2                 xor edx, edx
// 008ee213  2bf7                 sub esi, edi
// 008ee215  85f6                 test esi, esi
// 008ee217  0f9fc2               setg dl
// 008ee21a  33c0                 xor eax, eax
// 008ee21c  85db                 test ebx, ebx
// 008ee21e  0f9fc0               setg al
// 008ee221  895d38               mov dword ptr [ebp + 0x38], ebx
// 008ee224  52                   push edx
// 008ee225  50                   push eax
// 008ee226  e8650e0000           call 0x8ef090
// 008ee22b  295c241c             sub dword ptr [esp + 0x1c], ebx
// 008ee22f  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 008ee233  33ff                 xor edi, edi
// 008ee235  85db                 test ebx, ebx
// 008ee237  7e6c                 jle 0x8ee2a5
// 008ee239  8da42400000000       lea esp, [esp]
// 008ee240  85ff                 test edi, edi
// 008ee242  7c0d                 jl 0x8ee251
// 008ee244  3b7d28               cmp edi, dword ptr [ebp + 0x28]
// 008ee247  7d08                 jge 0x8ee251
// 008ee249  8b4d24               mov ecx, dword ptr [ebp + 0x24]
// 008ee24c  8b34b9               mov esi, dword ptr [ecx + edi*4]
// 008ee24f  eb02                 jmp 0x8ee253
// 008ee251  33f6                 xor esi, esi
// 008ee253  8bce                 mov ecx, esi
// 008ee255  e806b3ffff           call 0x8e9560
// 008ee25a  85c0                 test eax, eax
// 008ee25c  7442                 je 0x8ee2a0
// 008ee25e  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 008ee262  8b542420             mov edx, dword ptr [esp + 0x20]
// 008ee266  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008ee26a  83ec10               sub esp, 0x10
// 008ee26d  8bc4                 mov eax, esp
// 008ee26f  8918                 mov dword ptr [eax], ebx
// 008ee271  895004               mov dword ptr [eax + 4], edx
// 008ee274  8b542438             mov edx, dword ptr [esp + 0x38]
// 008ee278  894808               mov dword ptr [eax + 8], ecx
// 008ee27b  89500c               mov dword ptr [eax + 0xc], edx
// 008ee27e  8b442420             mov eax, dword ptr [esp + 0x20]
// 008ee282  8b0cb8               mov ecx, dword ptr [eax + edi*4]
// 008ee285  51                   push ecx
// 008ee286  8bce                 mov ecx, esi
// 008ee288  e8b3f6ffff           call 0x8ed940
// 008ee28d  8b542410             mov edx, dword ptr [esp + 0x10]
// 008ee291  8b04ba               mov eax, dword ptr [edx + edi*4]
// 008ee294  8d4c0307             lea ecx, [ebx + eax + 7]
// 008ee298  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 008ee29c  894c241c             mov dword ptr [esp + 0x1c], ecx
// 008ee2a0  47                   inc edi
// 008ee2a1  3bfb                 cmp edi, ebx
// 008ee2a3  7c9b                 jl 0x8ee240
// 008ee2a5  33f6                 xor esi, esi
// 008ee2a7  85db                 test ebx, ebx
// 008ee2a9  7e31                 jle 0x8ee2dc
// 008ee2ab  eb03                 jmp 0x8ee2b0
// 008ee2ad  8d4900               lea ecx, [ecx]
// 008ee2b0  85f6                 test esi, esi
// 008ee2b2  7c0d                 jl 0x8ee2c1
// 008ee2b4  3b7528               cmp esi, dword ptr [ebp + 0x28]
// 008ee2b7  7d08                 jge 0x8ee2c1
// 008ee2b9  8b5524               mov edx, dword ptr [ebp + 0x24]
// 008ee2bc  8b3cb2               mov edi, dword ptr [edx + esi*4]
// 008ee2bf  eb02                 jmp 0x8ee2c3
// 008ee2c1  33ff                 xor edi, edi
// 008ee2c3  8bcf                 mov ecx, edi
// 008ee2c5  e896b2ffff           call 0x8e9560
// 008ee2ca  85c0                 test eax, eax
// 008ee2cc  7409                 je 0x8ee2d7
// 008ee2ce  8b07                 mov eax, dword ptr [edi]
// 008ee2d0  8b507c               mov edx, dword ptr [eax + 0x7c]
// 008ee2d3  8bcf                 mov ecx, edi
// 008ee2d5  ffd2                 call edx
// 008ee2d7  46                   inc esi
// 008ee2d8  3bf3                 cmp esi, ebx
// 008ee2da  7cd4                 jl 0x8ee2b0
// 008ee2dc  8b442410             mov eax, dword ptr [esp + 0x10]
// 008ee2e0  50                   push eax
// 008ee2e1  e82058f0ff           call 0x7f3b06
// 008ee2e6  83c404               add esp, 4
// 008ee2e9  5f                   pop edi
// 008ee2ea  5e                   pop esi
// 008ee2eb  5d                   pop ebp
// 008ee2ec  5b                   pop ebx
// 008ee2ed  83c41c               add esp, 0x1c
// 008ee2f0  c21000               ret 0x10
// copied from an identical function in another client (function ?CalcDynamicSize@CXTPRibbonGroups@@QAEXPAVCDC@@HKABVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonGroups.cpp