// roc 2012-06 00a4d7d0  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 614 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4d7d0
//
// 00a4d7d0  6aff                 push -1
// 00a4d7d2  68d86eae00           push 0xae6ed8
// 00a4d7d7  64a100000000         mov eax, dword ptr fs:[0]
// 00a4d7dd  50                   push eax
// 00a4d7de  83ec34               sub esp, 0x34
// 00a4d7e1  53                   push ebx
// 00a4d7e2  55                   push ebp
// 00a4d7e3  56                   push esi
// 00a4d7e4  57                   push edi
// 00a4d7e5  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a4d7ea  33c4                 xor eax, esp
// 00a4d7ec  50                   push eax
// 00a4d7ed  8d442448             lea eax, [esp + 0x48]
// 00a4d7f1  64a300000000         mov dword ptr fs:[0], eax
// 00a4d7f7  8bf9                 mov edi, ecx
// 00a4d7f9  8b4704               mov eax, dword ptr [edi + 4]
// 00a4d7fc  8b17                 mov edx, dword ptr [edi]
// 00a4d7fe  8b742464             mov esi, dword ptr [esp + 0x64]
// 00a4d802  89442414             mov dword ptr [esp + 0x14], eax
// 00a4d806  8b422c               mov eax, dword ptr [edx + 0x2c]
// 00a4d809  897704               mov dword ptr [edi + 4], esi
// 00a4d80c  ffd0                 call eax
// 00a4d80e  83782000             cmp dword ptr [eax + 0x20], 0
// 00a4d812  7403                 je 0xa4d817
// 00a4d814  897708               mov dword ptr [edi + 8], esi
// 00a4d817  8b17                 mov edx, dword ptr [edi]
// 00a4d819  8b4204               mov eax, dword ptr [edx + 4]
// 00a4d81c  8bcf                 mov ecx, edi
// 00a4d81e  ffd0                 call eax
// 00a4d820  8d4c2434             lea ecx, [esp + 0x34]
// 00a4d824  e817f4f8ff           call 0x9dcc40
// 00a4d829  8b475c               mov eax, dword ptr [edi + 0x5c]
// 00a4d82c  33f6                 xor esi, esi
// 00a4d82e  c744245000000000     mov dword ptr [esp + 0x50], 0
// 00a4d836  85c0                 test eax, eax
// 00a4d838  7e50                 jle 0xa4d88a
// 00a4d83a  8d9b00000000         lea ebx, [ebx]
// 00a4d840  85f6                 test esi, esi
// 00a4d842  7c0f                 jl 0xa4d853
// 00a4d844  3b775c               cmp esi, dword ptr [edi + 0x5c]
// 00a4d847  7d0a                 jge 0xa4d853
// 00a4d849  8b4f58               mov ecx, dword ptr [edi + 0x58]
// 00a4d84c  8d04b1               lea eax, [ecx + esi*4]
// 00a4d84f  8b00                 mov eax, dword ptr [eax]
// 00a4d851  eb02                 jmp 0xa4d855
// 00a4d853  33c0                 xor eax, eax
// 00a4d855  8b5044               mov edx, dword ptr [eax + 0x44]
// 00a4d858  8b4848               mov ecx, dword ptr [eax + 0x48]
// 00a4d85b  89542418             mov dword ptr [esp + 0x18], edx
// 00a4d85f  8b504c               mov edx, dword ptr [eax + 0x4c]
// 00a4d862  8b4050               mov eax, dword ptr [eax + 0x50]
// 00a4d865  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00a4d869  8d4c2418             lea ecx, [esp + 0x18]
// 00a4d86d  89542420             mov dword ptr [esp + 0x20], edx
// 00a4d871  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00a4d875  51                   push ecx
// 00a4d876  52                   push edx
// 00a4d877  8d4c243c             lea ecx, [esp + 0x3c]
// 00a4d87b  8944242c             mov dword ptr [esp + 0x2c], eax
// 00a4d87f  e8ccf5f8ff           call 0x9dce50
// 00a4d884  46                   inc esi
// 00a4d885  3b775c               cmp esi, dword ptr [edi + 0x5c]
// 00a4d888  7cb6                 jl 0xa4d840
// 00a4d88a  8b5c2458             mov ebx, dword ptr [esp + 0x58]
// 00a4d88e  53                   push ebx
// 00a4d88f  ff15803ab200         call dword ptr [0xb23a80]
// 00a4d895  8b357c3ab200         mov esi, dword ptr [0xb23a7c]
// 00a4d89b  ffd6                 call esi
// 00a4d89d  3bc3                 cmp eax, ebx
// 00a4d89f  754b                 jne 0xa4d8ec
// 00a4d8a1  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 00a4d8a5  6a00                 push 0
// 00a4d8a7  6a00                 push 0
// 00a4d8a9  6a00                 push 0
// 00a4d8ab  8d442424             lea eax, [esp + 0x24]
// 00a4d8af  50                   push eax
// 00a4d8b0  ff15343bb200         call dword ptr [0xb23b34]
// 00a4d8b6  ffd6                 call esi
// 00a4d8b8  3bc3                 cmp eax, ebx
// 00a4d8ba  0f8561010000         jne 0xa4da21
// 00a4d8c0  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a4d8c4  3d00020000           cmp eax, 0x200
// 00a4d8c9  0f871e010000         ja 0xa4d9ed
// 00a4d8cf  746f                 je 0xa4d940
// 00a4d8d1  83f81f               cmp eax, 0x1f
// 00a4d8d4  7416                 je 0xa4d8ec
// 00a4d8d6  3d00010000           cmp eax, 0x100
// 00a4d8db  0f8520010000         jne 0xa4da01
// 00a4d8e1  837c24201b           cmp dword ptr [esp + 0x20], 0x1b
// 00a4d8e6  0f8520010000         jne 0xa4da0c
// 00a4d8ec  ff15743ab200         call dword ptr [0xb23a74]
// 00a4d8f2  8b442460             mov eax, dword ptr [esp + 0x60]
// 00a4d8f6  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00a4d8fa  50                   push eax
// 00a4d8fb  51                   push ecx
// 00a4d8fc  53                   push ebx
// 00a4d8fd  8bcf                 mov ecx, edi
// 00a4d8ff  e85cf5ffff           call 0xa4ce60
// 00a4d904  8b542414             mov edx, dword ptr [esp + 0x14]
// 00a4d908  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00a4d90c  8b07                 mov eax, dword ptr [edi]
// 00a4d90e  895704               mov dword ptr [edi + 4], edx
// 00a4d911  8b5060               mov edx, dword ptr [eax + 0x60]
// 00a4d914  51                   push ecx
// 00a4d915  8bcf                 mov ecx, edi
// 00a4d917  ffd2                 call edx
// 00a4d919  8d4c2434             lea ecx, [esp + 0x34]
// 00a4d91d  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 00a4d925  e836f3f8ff           call 0x9dcc60
// 00a4d92a  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00a4d92e  64890d00000000       mov dword ptr fs:[0], ecx
// 00a4d935  59                   pop ecx
// 00a4d936  5f                   pop edi
// 00a4d937  5e                   pop esi
// 00a4d938  5d                   pop ebp
// 00a4d939  5b                   pop ebx
// 00a4d93a  83c440               add esp, 0x40
// 00a4d93d  c21000               ret 0x10
// 00a4d940  8b442424             mov eax, dword ptr [esp + 0x24]
// 00a4d944  8bc8                 mov ecx, eax
// 00a4d946  c1e910               shr ecx, 0x10
// 00a4d949  0fbfc9               movsx ecx, cx
// 00a4d94c  98                   cwde 
// 00a4d94d  33f6                 xor esi, esi
// 00a4d94f  8944245c             mov dword ptr [esp + 0x5c], eax
// 00a4d953  894c2460             mov dword ptr [esp + 0x60], ecx
// 00a4d957  85ed                 test ebp, ebp
// 00a4d959  0f8ead000000         jle 0xa4da0c
// 00a4d95f  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 00a4d963  8b542464             mov edx, dword ptr [esp + 0x64]
// 00a4d967  3b722c               cmp esi, dword ptr [edx + 0x2c]
// 00a4d96a  7425                 je 0xa4d991
// 00a4d96c  85f6                 test esi, esi
// 00a4d96e  0f8cbd000000         jl 0xa4da31
// 00a4d974  3bf5                 cmp esi, ebp
// 00a4d976  0f8db5000000         jge 0xa4da31
// 00a4d97c  8b442460             mov eax, dword ptr [esp + 0x60]
// 00a4d980  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00a4d984  50                   push eax
// 00a4d985  51                   push ecx
// 00a4d986  53                   push ebx
// 00a4d987  ff15483bb200         call dword ptr [0xb23b48]
// 00a4d98d  85c0                 test eax, eax
// 00a4d98f  750e                 jne 0xa4d99f
// 00a4d991  46                   inc esi
// 00a4d992  83c310               add ebx, 0x10
// 00a4d995  3bf5                 cmp esi, ebp
// 00a4d997  7cca                 jl 0xa4d963
// 00a4d999  8b5c2458             mov ebx, dword ptr [esp + 0x58]
// 00a4d99d  eb6d                 jmp 0xa4da0c
// 00a4d99f  3b775c               cmp esi, dword ptr [edi + 0x5c]
// 00a4d9a2  0f8d89000000         jge 0xa4da31
// 00a4d9a8  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00a4d9ac  8b4758               mov eax, dword ptr [edi + 0x58]
// 00a4d9af  8b492c               mov ecx, dword ptr [ecx + 0x2c]
// 00a4d9b2  8d14b500000000       lea edx, [esi*4]
// 00a4d9b9  03c2                 add eax, edx
// 00a4d9bb  85c9                 test ecx, ecx
// 00a4d9bd  7c72                 jl 0xa4da31
// 00a4d9bf  3b4f5c               cmp ecx, dword ptr [edi + 0x5c]
// 00a4d9c2  7d6d                 jge 0xa4da31
// 00a4d9c4  8b5f58               mov ebx, dword ptr [edi + 0x58]
// 00a4d9c7  8b00                 mov eax, dword ptr [eax]
// 00a4d9c9  8d0c8b               lea ecx, [ebx + ecx*4]
// 00a4d9cc  8901                 mov dword ptr [ecx], eax
// 00a4d9ce  3b775c               cmp esi, dword ptr [edi + 0x5c]
// 00a4d9d1  7d5e                 jge 0xa4da31
// 00a4d9d3  8b4758               mov eax, dword ptr [edi + 0x58]
// 00a4d9d6  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00a4d9da  03c2                 add eax, edx
// 00a4d9dc  8908                 mov dword ptr [eax], ecx
// 00a4d9de  8b17                 mov edx, dword ptr [edi]
// 00a4d9e0  8b421c               mov eax, dword ptr [edx + 0x1c]
// 00a4d9e3  8bcf                 mov ecx, edi
// 00a4d9e5  ffd0                 call eax
// 00a4d9e7  8b5c2458             mov ebx, dword ptr [esp + 0x58]
// 00a4d9eb  eb1f                 jmp 0xa4da0c
// 00a4d9ed  2d02020000           sub eax, 0x202
// 00a4d9f2  0f84f4feffff         je 0xa4d8ec
// 00a4d9f8  83e802               sub eax, 2
// 00a4d9fb  0f84ebfeffff         je 0xa4d8ec
// 00a4da01  8d4c2418             lea ecx, [esp + 0x18]
// 00a4da05  51                   push ecx
// 00a4da06  ff15a43ab200         call dword ptr [0xb23aa4]
// 00a4da0c  8b357c3ab200         mov esi, dword ptr [0xb23a7c]
// 00a4da12  ffd6                 call esi
// 00a4da14  3bc3                 cmp eax, ebx
// 00a4da16  0f8489feffff         je 0xa4d8a5
// 00a4da1c  e9cbfeffff           jmp 0xa4d8ec
// 00a4da21  8d542418             lea edx, [esp + 0x18]
// 00a4da25  52                   push edx
// 00a4da26  ff15a43ab200         call dword ptr [0xb23aa4]
// 00a4da2c  e9bbfeffff           jmp 0xa4d8ec
// 00a4da31  e88a49f3ff           call 0x9823c0
// copied from an identical function in another client (function ?ReOrder@CXTPTabManager@@MAEXPAUHWND__@@VCPoint@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\TabManager\XTPTabManager.cpp