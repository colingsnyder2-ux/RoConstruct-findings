// roc 2012-06 00a071a0  unit: CXTPRibbonTheme  size: 634 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a071a0
//
// 00a071a0  6aff                 push -1
// 00a071a2  689a2dae00           push 0xae2d9a
// 00a071a7  64a100000000         mov eax, dword ptr fs:[0]
// 00a071ad  50                   push eax
// 00a071ae  83ec44               sub esp, 0x44
// 00a071b1  53                   push ebx
// 00a071b2  55                   push ebp
// 00a071b3  56                   push esi
// 00a071b4  57                   push edi
// 00a071b5  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a071ba  33c4                 xor eax, esp
// 00a071bc  50                   push eax
// 00a071bd  8d442458             lea eax, [esp + 0x58]
// 00a071c1  64a300000000         mov dword ptr fs:[0], eax
// 00a071c7  8bf9                 mov edi, ecx
// 00a071c9  897c2414             mov dword ptr [esp + 0x14], edi
// 00a071cd  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00a071d1  e84adba5ff           call 0x464d20
// 00a071d6  8bf0                 mov esi, eax
// 00a071d8  33db                 xor ebx, ebx
// 00a071da  89742420             mov dword ptr [esp + 0x20], esi
// 00a071de  3bf3                 cmp esi, ebx
// 00a071e0  0f841e020000         je 0xa07404
// 00a071e6  8b8768060000         mov eax, dword ptr [edi + 0x668]
// 00a071ec  8b6c2468             mov ebp, dword ptr [esp + 0x68]
// 00a071f0  050c010000           add eax, 0x10c
// 00a071f5  50                   push eax
// 00a071f6  55                   push ebp
// 00a071f7  8d4c2440             lea ecx, [esp + 0x40]
// 00a071fb  e830e3fcff           call 0x9d5530
// 00a07200  6a01                 push 1
// 00a07202  8bcd                 mov ecx, ebp
// 00a07204  895c2464             mov dword ptr [esp + 0x64], ebx
// 00a07208  e89b230900           call 0xa995a8
// 00a0720d  8b8768060000         mov eax, dword ptr [edi + 0x668]
// 00a07213  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 00a07219  8b88ac000000         mov ecx, dword ptr [eax + 0xac]
// 00a0721f  83f9ff               cmp ecx, -1
// 00a07222  7508                 jne 0xa0722c
// 00a07224  8b80a8000000         mov eax, dword ptr [eax + 0xa8]
// 00a0722a  eb02                 jmp 0xa0722e
// 00a0722c  8bc1                 mov eax, ecx
// 00a0722e  8b5500               mov edx, dword ptr [ebp]
// 00a07231  50                   push eax
// 00a07232  8b4238               mov eax, dword ptr [edx + 0x38]
// 00a07235  8bcd                 mov ecx, ebp
// 00a07237  ffd0                 call eax
// 00a07239  3bf3                 cmp esi, ebx
// 00a0723b  895c2468             mov dword ptr [esp + 0x68], ebx
// 00a0723f  0f8eae010000         jle 0xa073f3
// 00a07245  eb04                 jmp 0xa0724b
// 00a07247  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00a0724b  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 00a0724f  51                   push ecx
// 00a07250  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 00a07254  e877090500           call 0xa57bd0
// 00a07259  8bf0                 mov esi, eax
// 00a0725b  8b560c               mov edx, dword ptr [esi + 0xc]
// 00a0725e  52                   push edx
// 00a0725f  8d442420             lea eax, [esp + 0x20]
// 00a07263  50                   push eax
// 00a07264  e8b7a3ffff           call 0xa01620
// 00a07269  83c408               add esp, 8
// 00a0726c  8bc8                 mov ecx, eax
// 00a0726e  c644246001           mov byte ptr [esp + 0x60], 1
// 00a07273  ff159847b200         call dword ptr [0xb24798]
// 00a07279  50                   push eax
// 00a0727a  8d4c241c             lea ecx, [esp + 0x1c]
// 00a0727e  6888c2c100           push 0xc1c288
// 00a07283  51                   push ecx
// 00a07284  e827a3ffff           call 0xa015b0
// 00a07289  83c40c               add esp, 0xc
// 00a0728c  8bc8                 mov ecx, eax
// 00a0728e  c644246002           mov byte ptr [esp + 0x60], 2
// 00a07293  ff159847b200         call dword ptr [0xb24798]
// 00a07299  50                   push eax
// 00a0729a  8bcf                 mov ecx, edi
// 00a0729c  e8cf050000           call 0xa07870
// 00a072a1  8d4c2418             lea ecx, [esp + 0x18]
// 00a072a5  8bf8                 mov edi, eax
// 00a072a7  ff15d047b200         call dword ptr [0xb247d0]
// 00a072ad  8d4c241c             lea ecx, [esp + 0x1c]
// 00a072b1  c644246000           mov byte ptr [esp + 0x60], 0
// 00a072b6  ff15d047b200         call dword ptr [0xb247d0]
// 00a072bc  85ff                 test edi, edi
// 00a072be  0f842f010000         je 0xa073f3
// 00a072c4  8b5610               mov edx, dword ptr [esi + 0x10]
// 00a072c7  89542428             mov dword ptr [esp + 0x28], edx
// 00a072cb  8b4614               mov eax, dword ptr [esi + 0x14]
// 00a072ce  8944242c             mov dword ptr [esp + 0x2c], eax
// 00a072d2  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00a072d5  bb01000000           mov ebx, 1
// 00a072da  53                   push ebx
// 00a072db  894c2434             mov dword ptr [esp + 0x34], ecx
// 00a072df  8b561c               mov edx, dword ptr [esi + 0x1c]
// 00a072e2  6a00                 push 0
// 00a072e4  8d442450             lea eax, [esp + 0x50]
// 00a072e8  50                   push eax
// 00a072e9  8bcf                 mov ecx, edi
// 00a072eb  89542440             mov dword ptr [esp + 0x40], edx
// 00a072ef  e8fce70500           call 0xa65af0
// 00a072f4  83ec10               sub esp, 0x10
// 00a072f7  8bcc                 mov ecx, esp
// 00a072f9  8919                 mov dword ptr [ecx], ebx
// 00a072fb  8bd3                 mov edx, ebx
// 00a072fd  895104               mov dword ptr [ecx + 4], edx
// 00a07300  895108               mov dword ptr [ecx + 8], edx
// 00a07303  89510c               mov dword ptr [ecx + 0xc], edx
// 00a07306  8b10                 mov edx, dword ptr [eax]
// 00a07308  83ec10               sub esp, 0x10
// 00a0730b  8bcc                 mov ecx, esp
// 00a0730d  8911                 mov dword ptr [ecx], edx
// 00a0730f  8b5004               mov edx, dword ptr [eax + 4]
// 00a07312  895104               mov dword ptr [ecx + 4], edx
// 00a07315  8b5008               mov edx, dword ptr [eax + 8]
// 00a07318  8b400c               mov eax, dword ptr [eax + 0xc]
// 00a0731b  895108               mov dword ptr [ecx + 8], edx
// 00a0731e  89410c               mov dword ptr [ecx + 0xc], eax
// 00a07321  8d4c2448             lea ecx, [esp + 0x48]
// 00a07325  51                   push ecx
// 00a07326  55                   push ebp
// 00a07327  8bcf                 mov ecx, edi
// 00a07329  e892e00500           call 0xa653c0
// 00a0732e  8b7c246c             mov edi, dword ptr [esp + 0x6c]
// 00a07332  8344242806           add dword ptr [esp + 0x28], 6
// 00a07337  8bcf                 mov ecx, edi
// 00a07339  e812710100           call 0xa1e450
// 00a0733e  85c0                 test eax, eax
// 00a07340  740b                 je 0xa0734d
// 00a07342  8b8780020000         mov eax, dword ptr [edi + 0x280]
// 00a07348  8b4040               mov eax, dword ptr [eax + 0x40]
// 00a0734b  eb02                 jmp 0xa0734f
// 00a0734d  33c0                 xor eax, eax
// 00a0734f  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00a07353  8d4402fe             lea eax, [edx + eax - 2]
// 00a07357  8bcf                 mov ecx, edi
// 00a07359  8944242c             mov dword ptr [esp + 0x2c], eax
// 00a0735d  e8de770100           call 0xa1eb40
// 00a07362  85c0                 test eax, eax
// 00a07364  744f                 je 0xa073b5
// 00a07366  8b8780020000         mov eax, dword ptr [edi + 0x280]
// 00a0736c  8b4018               mov eax, dword ptr [eax + 0x18]
// 00a0736f  50                   push eax
// 00a07370  8bcf                 mov ecx, edi
// 00a07372  e8c9e5f8ff           call 0x995940
// 00a07377  50                   push eax
// 00a07378  51                   push ecx
// 00a07379  83c608               add esi, 8
// 00a0737c  8bcc                 mov ecx, esp
// 00a0737e  89642430             mov dword ptr [esp + 0x30], esp
// 00a07382  56                   push esi
// 00a07383  ff158047b200         call dword ptr [0xb24780]
// 00a07389  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00a0738d  8b542438             mov edx, dword ptr [esp + 0x38]
// 00a07391  83ec10               sub esp, 0x10
// 00a07394  8bc4                 mov eax, esp
// 00a07396  8908                 mov dword ptr [eax], ecx
// 00a07398  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00a0739c  895004               mov dword ptr [eax + 4], edx
// 00a0739f  8b542450             mov edx, dword ptr [esp + 0x50]
// 00a073a3  894808               mov dword ptr [eax + 8], ecx
// 00a073a6  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00a073aa  55                   push ebp
// 00a073ab  89500c               mov dword ptr [eax + 0xc], edx
// 00a073ae  e8eddcffff           call 0xa050a0
// 00a073b3  eb2b                 jmp 0xa073e0
// 00a073b5  8d7e08               lea edi, [esi + 8]
// 00a073b8  8b7500               mov esi, dword ptr [ebp]
// 00a073bb  6824880000           push 0x8824
// 00a073c0  8d44242c             lea eax, [esp + 0x2c]
// 00a073c4  50                   push eax
// 00a073c5  8bcf                 mov ecx, edi
// 00a073c7  83c670               add esi, 0x70
// 00a073ca  ff155846b200         call dword ptr [0xb24658]
// 00a073d0  50                   push eax
// 00a073d1  8bcf                 mov ecx, edi
// 00a073d3  ff159847b200         call dword ptr [0xb24798]
// 00a073d9  8b16                 mov edx, dword ptr [esi]
// 00a073db  50                   push eax
// 00a073dc  8bcd                 mov ecx, ebp
// 00a073de  ffd2                 call edx
// 00a073e0  8b442468             mov eax, dword ptr [esp + 0x68]
// 00a073e4  40                   inc eax
// 00a073e5  3b442420             cmp eax, dword ptr [esp + 0x20]
// 00a073e9  89442468             mov dword ptr [esp + 0x68], eax
// 00a073ed  0f8c54feffff         jl 0xa07247
// 00a073f3  8d4c2438             lea ecx, [esp + 0x38]
// 00a073f7  c7442460ffffffff     mov dword ptr [esp + 0x60], 0xffffffff
// 00a073ff  e8ace1fcff           call 0x9d55b0
// 00a07404  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00a07408  64890d00000000       mov dword ptr fs:[0], ecx
// 00a0740f  59                   pop ecx
// 00a07410  5f                   pop edi
// 00a07411  5e                   pop esi
// 00a07412  5d                   pop ebp
// 00a07413  5b                   pop ebx
// 00a07414  83c450               add esp, 0x50
// 00a07417  c20c00               ret 0xc
// copied from an identical function in another client (function ?DrawRibbonFrameContextHeaders@CXTPRibbonTheme@@UAEXPAVCDC@@PAVCXTPRibbonBar@@PAVCXTPRibbonTabContextHeaders@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Ribbon/XTPRibbonTheme.cpp