// roc 2009-12 008d03b0  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 614 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d03b0
//
// 008d03b0  6aff                 push -1
// 008d03b2  68f84f9600           push 0x964ff8
// 008d03b7  64a100000000         mov eax, dword ptr fs:[0]
// 008d03bd  50                   push eax
// 008d03be  83ec34               sub esp, 0x34
// 008d03c1  53                   push ebx
// 008d03c2  55                   push ebp
// 008d03c3  56                   push esi
// 008d03c4  57                   push edi
// 008d03c5  a10052b600           mov eax, dword ptr [0xb65200]
// 008d03ca  33c4                 xor eax, esp
// 008d03cc  50                   push eax
// 008d03cd  8d442448             lea eax, [esp + 0x48]
// 008d03d1  64a300000000         mov dword ptr fs:[0], eax
// 008d03d7  8bf9                 mov edi, ecx
// 008d03d9  8b4704               mov eax, dword ptr [edi + 4]
// 008d03dc  8b17                 mov edx, dword ptr [edi]
// 008d03de  8b742464             mov esi, dword ptr [esp + 0x64]
// 008d03e2  89442414             mov dword ptr [esp + 0x14], eax
// 008d03e6  8b422c               mov eax, dword ptr [edx + 0x2c]
// 008d03e9  897704               mov dword ptr [edi + 4], esi
// 008d03ec  ffd0                 call eax
// 008d03ee  83782000             cmp dword ptr [eax + 0x20], 0
// 008d03f2  7403                 je 0x8d03f7
// 008d03f4  897708               mov dword ptr [edi + 8], esi
// 008d03f7  8b17                 mov edx, dword ptr [edi]
// 008d03f9  8b4204               mov eax, dword ptr [edx + 4]
// 008d03fc  8bcf                 mov ecx, edi
// 008d03fe  ffd0                 call eax
// 008d0400  8d4c2434             lea ecx, [esp + 0x34]
// 008d0404  e8d74ef8ff           call 0x8552e0
// 008d0409  8b475c               mov eax, dword ptr [edi + 0x5c]
// 008d040c  33f6                 xor esi, esi
// 008d040e  c744245000000000     mov dword ptr [esp + 0x50], 0
// 008d0416  85c0                 test eax, eax
// 008d0418  7e50                 jle 0x8d046a
// 008d041a  8d9b00000000         lea ebx, [ebx]
// 008d0420  85f6                 test esi, esi
// 008d0422  7c0f                 jl 0x8d0433
// 008d0424  3b775c               cmp esi, dword ptr [edi + 0x5c]
// 008d0427  7d0a                 jge 0x8d0433
// 008d0429  8b4f58               mov ecx, dword ptr [edi + 0x58]
// 008d042c  8d04b1               lea eax, [ecx + esi*4]
// 008d042f  8b00                 mov eax, dword ptr [eax]
// 008d0431  eb02                 jmp 0x8d0435
// 008d0433  33c0                 xor eax, eax
// 008d0435  8b5044               mov edx, dword ptr [eax + 0x44]
// 008d0438  8b4848               mov ecx, dword ptr [eax + 0x48]
// 008d043b  89542418             mov dword ptr [esp + 0x18], edx
// 008d043f  8b504c               mov edx, dword ptr [eax + 0x4c]
// 008d0442  8b4050               mov eax, dword ptr [eax + 0x50]
// 008d0445  894c241c             mov dword ptr [esp + 0x1c], ecx
// 008d0449  8d4c2418             lea ecx, [esp + 0x18]
// 008d044d  89542420             mov dword ptr [esp + 0x20], edx
// 008d0451  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 008d0455  51                   push ecx
// 008d0456  52                   push edx
// 008d0457  8d4c243c             lea ecx, [esp + 0x3c]
// 008d045b  8944242c             mov dword ptr [esp + 0x2c], eax
// 008d045f  e8dc51f8ff           call 0x855640
// 008d0464  46                   inc esi
// 008d0465  3b775c               cmp esi, dword ptr [edi + 0x5c]
// 008d0468  7cb6                 jl 0x8d0420
// 008d046a  8b5c2458             mov ebx, dword ptr [esp + 0x58]
// 008d046e  53                   push ebx
// 008d046f  ff152ccc9800         call dword ptr [0x98cc2c]
// 008d0475  8b3528cc9800         mov esi, dword ptr [0x98cc28]
// 008d047b  ffd6                 call esi
// 008d047d  3bc3                 cmp eax, ebx
// 008d047f  754b                 jne 0x8d04cc
// 008d0481  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 008d0485  6a00                 push 0
// 008d0487  6a00                 push 0
// 008d0489  6a00                 push 0
// 008d048b  8d442424             lea eax, [esp + 0x24]
// 008d048f  50                   push eax
// 008d0490  ff15b0ca9800         call dword ptr [0x98cab0]
// 008d0496  ffd6                 call esi
// 008d0498  3bc3                 cmp eax, ebx
// 008d049a  0f8561010000         jne 0x8d0601
// 008d04a0  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008d04a4  3d00020000           cmp eax, 0x200
// 008d04a9  0f871e010000         ja 0x8d05cd
// 008d04af  746f                 je 0x8d0520
// 008d04b1  83f81f               cmp eax, 0x1f
// 008d04b4  7416                 je 0x8d04cc
// 008d04b6  3d00010000           cmp eax, 0x100
// 008d04bb  0f8520010000         jne 0x8d05e1
// 008d04c1  837c24201b           cmp dword ptr [esp + 0x20], 0x1b
// 008d04c6  0f8520010000         jne 0x8d05ec
// 008d04cc  ff1520cc9800         call dword ptr [0x98cc20]
// 008d04d2  8b442460             mov eax, dword ptr [esp + 0x60]
// 008d04d6  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008d04da  50                   push eax
// 008d04db  51                   push ecx
// 008d04dc  53                   push ebx
// 008d04dd  8bcf                 mov ecx, edi
// 008d04df  e85cf5ffff           call 0x8cfa40
// 008d04e4  8b542414             mov edx, dword ptr [esp + 0x14]
// 008d04e8  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 008d04ec  8b07                 mov eax, dword ptr [edi]
// 008d04ee  895704               mov dword ptr [edi + 4], edx
// 008d04f1  8b5060               mov edx, dword ptr [eax + 0x60]
// 008d04f4  51                   push ecx
// 008d04f5  8bcf                 mov ecx, edi
// 008d04f7  ffd2                 call edx
// 008d04f9  8d4c2434             lea ecx, [esp + 0x34]
// 008d04fd  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 008d0505  e8f64df8ff           call 0x855300
// 008d050a  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008d050e  64890d00000000       mov dword ptr fs:[0], ecx
// 008d0515  59                   pop ecx
// 008d0516  5f                   pop edi
// 008d0517  5e                   pop esi
// 008d0518  5d                   pop ebp
// 008d0519  5b                   pop ebx
// 008d051a  83c440               add esp, 0x40
// 008d051d  c21000               ret 0x10
// 008d0520  8b442424             mov eax, dword ptr [esp + 0x24]
// 008d0524  8bc8                 mov ecx, eax
// 008d0526  c1e910               shr ecx, 0x10
// 008d0529  0fbfc9               movsx ecx, cx
// 008d052c  98                   cwde 
// 008d052d  33f6                 xor esi, esi
// 008d052f  8944245c             mov dword ptr [esp + 0x5c], eax
// 008d0533  894c2460             mov dword ptr [esp + 0x60], ecx
// 008d0537  85ed                 test ebp, ebp
// 008d0539  0f8ead000000         jle 0x8d05ec
// 008d053f  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 008d0543  8b542464             mov edx, dword ptr [esp + 0x64]
// 008d0547  3b722c               cmp esi, dword ptr [edx + 0x2c]
// 008d054a  7425                 je 0x8d0571
// 008d054c  85f6                 test esi, esi
// 008d054e  0f8cbd000000         jl 0x8d0611
// 008d0554  3bf5                 cmp esi, ebp
// 008d0556  0f8db5000000         jge 0x8d0611
// 008d055c  8b442460             mov eax, dword ptr [esp + 0x60]
// 008d0560  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008d0564  50                   push eax
// 008d0565  51                   push ecx
// 008d0566  53                   push ebx
// 008d0567  ff155cca9800         call dword ptr [0x98ca5c]
// 008d056d  85c0                 test eax, eax
// 008d056f  750e                 jne 0x8d057f
// 008d0571  46                   inc esi
// 008d0572  83c310               add ebx, 0x10
// 008d0575  3bf5                 cmp esi, ebp
// 008d0577  7cca                 jl 0x8d0543
// 008d0579  8b5c2458             mov ebx, dword ptr [esp + 0x58]
// 008d057d  eb6d                 jmp 0x8d05ec
// 008d057f  3b775c               cmp esi, dword ptr [edi + 0x5c]
// 008d0582  0f8d89000000         jge 0x8d0611
// 008d0588  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 008d058c  8b4758               mov eax, dword ptr [edi + 0x58]
// 008d058f  8b492c               mov ecx, dword ptr [ecx + 0x2c]
// 008d0592  8d14b500000000       lea edx, [esi*4]
// 008d0599  03c2                 add eax, edx
// 008d059b  85c9                 test ecx, ecx
// 008d059d  7c72                 jl 0x8d0611
// 008d059f  3b4f5c               cmp ecx, dword ptr [edi + 0x5c]
// 008d05a2  7d6d                 jge 0x8d0611
// 008d05a4  8b5f58               mov ebx, dword ptr [edi + 0x58]
// 008d05a7  8b00                 mov eax, dword ptr [eax]
// 008d05a9  8d0c8b               lea ecx, [ebx + ecx*4]
// 008d05ac  8901                 mov dword ptr [ecx], eax
// 008d05ae  3b775c               cmp esi, dword ptr [edi + 0x5c]
// 008d05b1  7d5e                 jge 0x8d0611
// 008d05b3  8b4758               mov eax, dword ptr [edi + 0x58]
// 008d05b6  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 008d05ba  03c2                 add eax, edx
// 008d05bc  8908                 mov dword ptr [eax], ecx
// 008d05be  8b17                 mov edx, dword ptr [edi]
// 008d05c0  8b421c               mov eax, dword ptr [edx + 0x1c]
// 008d05c3  8bcf                 mov ecx, edi
// 008d05c5  ffd0                 call eax
// 008d05c7  8b5c2458             mov ebx, dword ptr [esp + 0x58]
// 008d05cb  eb1f                 jmp 0x8d05ec
// 008d05cd  2d02020000           sub eax, 0x202
// 008d05d2  0f84f4feffff         je 0x8d04cc
// 008d05d8  83e802               sub eax, 2
// 008d05db  0f84ebfeffff         je 0x8d04cc
// 008d05e1  8d4c2418             lea ecx, [esp + 0x18]
// 008d05e5  51                   push ecx
// 008d05e6  ff1594ca9800         call dword ptr [0x98ca94]
// 008d05ec  8b3528cc9800         mov esi, dword ptr [0x98cc28]
// 008d05f2  ffd6                 call esi
// 008d05f4  3bc3                 cmp eax, ebx
// 008d05f6  0f8489feffff         je 0x8d0485
// 008d05fc  e9cbfeffff           jmp 0x8d04cc
// 008d0601  8d542418             lea edx, [esp + 0x18]
// 008d0605  52                   push edx
// 008d0606  ff1594ca9800         call dword ptr [0x98ca94]
// 008d060c  e9bbfeffff           jmp 0x8d04cc
// 008d0611  e8f634f2ff           call 0x7f3b0c
// copied from an identical function in another client (function ?ReOrder@CXTPTabManager@@MAEXPAUHWND__@@VCPoint@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\TabManager\XTPTabManager.cpp