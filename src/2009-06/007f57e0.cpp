// roc 2009-06 007f57e0  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 614 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007f57e0
//
// 007f57e0  6aff                 push -1
// 007f57e2  68980e8800           push 0x880e98
// 007f57e7  64a100000000         mov eax, dword ptr fs:[0]
// 007f57ed  50                   push eax
// 007f57ee  83ec34               sub esp, 0x34
// 007f57f1  53                   push ebx
// 007f57f2  55                   push ebp
// 007f57f3  56                   push esi
// 007f57f4  57                   push edi
// 007f57f5  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007f57fa  33c4                 xor eax, esp
// 007f57fc  50                   push eax
// 007f57fd  8d442448             lea eax, [esp + 0x48]
// 007f5801  64a300000000         mov dword ptr fs:[0], eax
// 007f5807  8bf9                 mov edi, ecx
// 007f5809  8b4704               mov eax, dword ptr [edi + 4]
// 007f580c  8b17                 mov edx, dword ptr [edi]
// 007f580e  8b742464             mov esi, dword ptr [esp + 0x64]
// 007f5812  89442414             mov dword ptr [esp + 0x14], eax
// 007f5816  8b422c               mov eax, dword ptr [edx + 0x2c]
// 007f5819  897704               mov dword ptr [edi + 4], esi
// 007f581c  ffd0                 call eax
// 007f581e  83782000             cmp dword ptr [eax + 0x20], 0
// 007f5822  7403                 je 0x7f5827
// 007f5824  897708               mov dword ptr [edi + 8], esi
// 007f5827  8b17                 mov edx, dword ptr [edi]
// 007f5829  8b4204               mov eax, dword ptr [edx + 4]
// 007f582c  8bcf                 mov ecx, edi
// 007f582e  ffd0                 call eax
// 007f5830  8d4c2434             lea ecx, [esp + 0x34]
// 007f5834  e8174df8ff           call 0x77a550
// 007f5839  8b475c               mov eax, dword ptr [edi + 0x5c]
// 007f583c  33f6                 xor esi, esi
// 007f583e  c744245000000000     mov dword ptr [esp + 0x50], 0
// 007f5846  85c0                 test eax, eax
// 007f5848  7e50                 jle 0x7f589a
// 007f584a  8d9b00000000         lea ebx, [ebx]
// 007f5850  85f6                 test esi, esi
// 007f5852  7c0f                 jl 0x7f5863
// 007f5854  3b775c               cmp esi, dword ptr [edi + 0x5c]
// 007f5857  7d0a                 jge 0x7f5863
// 007f5859  8b4f58               mov ecx, dword ptr [edi + 0x58]
// 007f585c  8d04b1               lea eax, [ecx + esi*4]
// 007f585f  8b00                 mov eax, dword ptr [eax]
// 007f5861  eb02                 jmp 0x7f5865
// 007f5863  33c0                 xor eax, eax
// 007f5865  8b5044               mov edx, dword ptr [eax + 0x44]
// 007f5868  8b4848               mov ecx, dword ptr [eax + 0x48]
// 007f586b  89542418             mov dword ptr [esp + 0x18], edx
// 007f586f  8b504c               mov edx, dword ptr [eax + 0x4c]
// 007f5872  8b4050               mov eax, dword ptr [eax + 0x50]
// 007f5875  894c241c             mov dword ptr [esp + 0x1c], ecx
// 007f5879  8d4c2418             lea ecx, [esp + 0x18]
// 007f587d  89542420             mov dword ptr [esp + 0x20], edx
// 007f5881  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 007f5885  51                   push ecx
// 007f5886  52                   push edx
// 007f5887  8d4c243c             lea ecx, [esp + 0x3c]
// 007f588b  8944242c             mov dword ptr [esp + 0x2c], eax
// 007f588f  e8fc7afcff           call 0x7bd390
// 007f5894  46                   inc esi
// 007f5895  3b775c               cmp esi, dword ptr [edi + 0x5c]
// 007f5898  7cb6                 jl 0x7f5850
// 007f589a  8b5c2458             mov ebx, dword ptr [esp + 0x58]
// 007f589e  53                   push ebx
// 007f589f  ff1538ee8900         call dword ptr [0x89ee38]
// 007f58a5  8b353cee8900         mov esi, dword ptr [0x89ee3c]
// 007f58ab  ffd6                 call esi
// 007f58ad  3bc3                 cmp eax, ebx
// 007f58af  754b                 jne 0x7f58fc
// 007f58b1  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 007f58b5  6a00                 push 0
// 007f58b7  6a00                 push 0
// 007f58b9  6a00                 push 0
// 007f58bb  8d442424             lea eax, [esp + 0x24]
// 007f58bf  50                   push eax
// 007f58c0  ff15d8ee8900         call dword ptr [0x89eed8]
// 007f58c6  ffd6                 call esi
// 007f58c8  3bc3                 cmp eax, ebx
// 007f58ca  0f8561010000         jne 0x7f5a31
// 007f58d0  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007f58d4  3d00020000           cmp eax, 0x200
// 007f58d9  0f871e010000         ja 0x7f59fd
// 007f58df  746f                 je 0x7f5950
// 007f58e1  83f81f               cmp eax, 0x1f
// 007f58e4  7416                 je 0x7f58fc
// 007f58e6  3d00010000           cmp eax, 0x100
// 007f58eb  0f8520010000         jne 0x7f5a11
// 007f58f1  837c24201b           cmp dword ptr [esp + 0x20], 0x1b
// 007f58f6  0f8520010000         jne 0x7f5a1c
// 007f58fc  ff1544ee8900         call dword ptr [0x89ee44]
// 007f5902  8b442460             mov eax, dword ptr [esp + 0x60]
// 007f5906  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 007f590a  50                   push eax
// 007f590b  51                   push ecx
// 007f590c  53                   push ebx
// 007f590d  8bcf                 mov ecx, edi
// 007f590f  e87cf5ffff           call 0x7f4e90
// 007f5914  8b542414             mov edx, dword ptr [esp + 0x14]
// 007f5918  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 007f591c  8b07                 mov eax, dword ptr [edi]
// 007f591e  895704               mov dword ptr [edi + 4], edx
// 007f5921  8b5060               mov edx, dword ptr [eax + 0x60]
// 007f5924  51                   push ecx
// 007f5925  8bcf                 mov ecx, edi
// 007f5927  ffd2                 call edx
// 007f5929  8d4c2434             lea ecx, [esp + 0x34]
// 007f592d  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 007f5935  e8364cf8ff           call 0x77a570
// 007f593a  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 007f593e  64890d00000000       mov dword ptr fs:[0], ecx
// 007f5945  59                   pop ecx
// 007f5946  5f                   pop edi
// 007f5947  5e                   pop esi
// 007f5948  5d                   pop ebp
// 007f5949  5b                   pop ebx
// 007f594a  83c440               add esp, 0x40
// 007f594d  c21000               ret 0x10
// 007f5950  8b442424             mov eax, dword ptr [esp + 0x24]
// 007f5954  8bc8                 mov ecx, eax
// 007f5956  c1e910               shr ecx, 0x10
// 007f5959  0fbfc9               movsx ecx, cx
// 007f595c  98                   cwde 
// 007f595d  33f6                 xor esi, esi
// 007f595f  8944245c             mov dword ptr [esp + 0x5c], eax
// 007f5963  894c2460             mov dword ptr [esp + 0x60], ecx
// 007f5967  85ed                 test ebp, ebp
// 007f5969  0f8ead000000         jle 0x7f5a1c
// 007f596f  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 007f5973  8b542464             mov edx, dword ptr [esp + 0x64]
// 007f5977  3b722c               cmp esi, dword ptr [edx + 0x2c]
// 007f597a  7425                 je 0x7f59a1
// 007f597c  85f6                 test esi, esi
// 007f597e  0f8cbd000000         jl 0x7f5a41
// 007f5984  3bf5                 cmp esi, ebp
// 007f5986  0f8db5000000         jge 0x7f5a41
// 007f598c  8b442460             mov eax, dword ptr [esp + 0x60]
// 007f5990  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 007f5994  50                   push eax
// 007f5995  51                   push ecx
// 007f5996  53                   push ebx
// 007f5997  ff15c0ed8900         call dword ptr [0x89edc0]
// 007f599d  85c0                 test eax, eax
// 007f599f  750e                 jne 0x7f59af
// 007f59a1  46                   inc esi
// 007f59a2  83c310               add ebx, 0x10
// 007f59a5  3bf5                 cmp esi, ebp
// 007f59a7  7cca                 jl 0x7f5973
// 007f59a9  8b5c2458             mov ebx, dword ptr [esp + 0x58]
// 007f59ad  eb6d                 jmp 0x7f5a1c
// 007f59af  3b775c               cmp esi, dword ptr [edi + 0x5c]
// 007f59b2  0f8d89000000         jge 0x7f5a41
// 007f59b8  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 007f59bc  8b4758               mov eax, dword ptr [edi + 0x58]
// 007f59bf  8b492c               mov ecx, dword ptr [ecx + 0x2c]
// 007f59c2  8d14b500000000       lea edx, [esi*4]
// 007f59c9  03c2                 add eax, edx
// 007f59cb  85c9                 test ecx, ecx
// 007f59cd  7c72                 jl 0x7f5a41
// 007f59cf  3b4f5c               cmp ecx, dword ptr [edi + 0x5c]
// 007f59d2  7d6d                 jge 0x7f5a41
// 007f59d4  8b5f58               mov ebx, dword ptr [edi + 0x58]
// 007f59d7  8b00                 mov eax, dword ptr [eax]
// 007f59d9  8d0c8b               lea ecx, [ebx + ecx*4]
// 007f59dc  8901                 mov dword ptr [ecx], eax
// 007f59de  3b775c               cmp esi, dword ptr [edi + 0x5c]
// 007f59e1  7d5e                 jge 0x7f5a41
// 007f59e3  8b4758               mov eax, dword ptr [edi + 0x58]
// 007f59e6  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 007f59ea  03c2                 add eax, edx
// 007f59ec  8908                 mov dword ptr [eax], ecx
// 007f59ee  8b17                 mov edx, dword ptr [edi]
// 007f59f0  8b421c               mov eax, dword ptr [edx + 0x1c]
// 007f59f3  8bcf                 mov ecx, edi
// 007f59f5  ffd0                 call eax
// 007f59f7  8b5c2458             mov ebx, dword ptr [esp + 0x58]
// 007f59fb  eb1f                 jmp 0x7f5a1c
// 007f59fd  2d02020000           sub eax, 0x202
// 007f5a02  0f84f4feffff         je 0x7f58fc
// 007f5a08  83e802               sub eax, 2
// 007f5a0b  0f84ebfeffff         je 0x7f58fc
// 007f5a11  8d4c2418             lea ecx, [esp + 0x18]
// 007f5a15  51                   push ecx
// 007f5a16  ff154ced8900         call dword ptr [0x89ed4c]
// 007f5a1c  8b353cee8900         mov esi, dword ptr [0x89ee3c]
// 007f5a22  ffd6                 call esi
// 007f5a24  3bc3                 cmp eax, ebx
// 007f5a26  0f8489feffff         je 0x7f58b5
// 007f5a2c  e9cbfeffff           jmp 0x7f58fc
// 007f5a31  8d542418             lea edx, [esp + 0x18]
// 007f5a35  52                   push edx
// 007f5a36  ff154ced8900         call dword ptr [0x89ed4c]
// 007f5a3c  e9bbfeffff           jmp 0x7f58fc
// 007f5a41  e89e32f2ff           call 0x718ce4
// copied from an identical function in another client (function ?ReOrder@CXTPTabManager@@MAEXPAUHWND__@@VCPoint@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\TabManager\XTPTabManager.cpp