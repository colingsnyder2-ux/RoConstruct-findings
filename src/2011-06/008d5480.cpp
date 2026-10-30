// roc 2011-06 008d5480  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 614 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d5480
//
// 008d5480  6aff                 push -1
// 008d5482  6868d2a000           push 0xa0d268
// 008d5487  64a100000000         mov eax, dword ptr fs:[0]
// 008d548d  50                   push eax
// 008d548e  83ec34               sub esp, 0x34
// 008d5491  53                   push ebx
// 008d5492  55                   push ebp
// 008d5493  56                   push esi
// 008d5494  57                   push edi
// 008d5495  a12058c900           mov eax, dword ptr [0xc95820]
// 008d549a  33c4                 xor eax, esp
// 008d549c  50                   push eax
// 008d549d  8d442448             lea eax, [esp + 0x48]
// 008d54a1  64a300000000         mov dword ptr fs:[0], eax
// 008d54a7  8bf9                 mov edi, ecx
// 008d54a9  8b4704               mov eax, dword ptr [edi + 4]
// 008d54ac  8b17                 mov edx, dword ptr [edi]
// 008d54ae  8b742464             mov esi, dword ptr [esp + 0x64]
// 008d54b2  89442414             mov dword ptr [esp + 0x14], eax
// 008d54b6  8b422c               mov eax, dword ptr [edx + 0x2c]
// 008d54b9  897704               mov dword ptr [edi + 4], esi
// 008d54bc  ffd0                 call eax
// 008d54be  83782000             cmp dword ptr [eax + 0x20], 0
// 008d54c2  7403                 je 0x8d54c7
// 008d54c4  897708               mov dword ptr [edi + 8], esi
// 008d54c7  8b17                 mov edx, dword ptr [edi]
// 008d54c9  8b4204               mov eax, dword ptr [edx + 4]
// 008d54cc  8bcf                 mov ecx, edi
// 008d54ce  ffd0                 call eax
// 008d54d0  8d4c2434             lea ecx, [esp + 0x34]
// 008d54d4  e877f3f8ff           call 0x864850
// 008d54d9  8b475c               mov eax, dword ptr [edi + 0x5c]
// 008d54dc  33f6                 xor esi, esi
// 008d54de  c744245000000000     mov dword ptr [esp + 0x50], 0
// 008d54e6  85c0                 test eax, eax
// 008d54e8  7e50                 jle 0x8d553a
// 008d54ea  8d9b00000000         lea ebx, [ebx]
// 008d54f0  85f6                 test esi, esi
// 008d54f2  7c0f                 jl 0x8d5503
// 008d54f4  3b775c               cmp esi, dword ptr [edi + 0x5c]
// 008d54f7  7d0a                 jge 0x8d5503
// 008d54f9  8b4f58               mov ecx, dword ptr [edi + 0x58]
// 008d54fc  8d04b1               lea eax, [ecx + esi*4]
// 008d54ff  8b00                 mov eax, dword ptr [eax]
// 008d5501  eb02                 jmp 0x8d5505
// 008d5503  33c0                 xor eax, eax
// 008d5505  8b5044               mov edx, dword ptr [eax + 0x44]
// 008d5508  8b4848               mov ecx, dword ptr [eax + 0x48]
// 008d550b  89542418             mov dword ptr [esp + 0x18], edx
// 008d550f  8b504c               mov edx, dword ptr [eax + 0x4c]
// 008d5512  8b4050               mov eax, dword ptr [eax + 0x50]
// 008d5515  894c241c             mov dword ptr [esp + 0x1c], ecx
// 008d5519  8d4c2418             lea ecx, [esp + 0x18]
// 008d551d  89542420             mov dword ptr [esp + 0x20], edx
// 008d5521  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 008d5525  51                   push ecx
// 008d5526  52                   push edx
// 008d5527  8d4c243c             lea ecx, [esp + 0x3c]
// 008d552b  8944242c             mov dword ptr [esp + 0x2c], eax
// 008d552f  e84c91fcff           call 0x89e680
// 008d5534  46                   inc esi
// 008d5535  3b775c               cmp esi, dword ptr [edi + 0x5c]
// 008d5538  7cb6                 jl 0x8d54f0
// 008d553a  8b5c2458             mov ebx, dword ptr [esp + 0x58]
// 008d553e  53                   push ebx
// 008d553f  ff15341ba400         call dword ptr [0xa41b34]
// 008d5545  8b35381ba400         mov esi, dword ptr [0xa41b38]
// 008d554b  ffd6                 call esi
// 008d554d  3bc3                 cmp eax, ebx
// 008d554f  754b                 jne 0x8d559c
// 008d5551  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 008d5555  6a00                 push 0
// 008d5557  6a00                 push 0
// 008d5559  6a00                 push 0
// 008d555b  8d442424             lea eax, [esp + 0x24]
// 008d555f  50                   push eax
// 008d5560  ff15281ca400         call dword ptr [0xa41c28]
// 008d5566  ffd6                 call esi
// 008d5568  3bc3                 cmp eax, ebx
// 008d556a  0f8561010000         jne 0x8d56d1
// 008d5570  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008d5574  3d00020000           cmp eax, 0x200
// 008d5579  0f871e010000         ja 0x8d569d
// 008d557f  746f                 je 0x8d55f0
// 008d5581  83f81f               cmp eax, 0x1f
// 008d5584  7416                 je 0x8d559c
// 008d5586  3d00010000           cmp eax, 0x100
// 008d558b  0f8520010000         jne 0x8d56b1
// 008d5591  837c24201b           cmp dword ptr [esp + 0x20], 0x1b
// 008d5596  0f8520010000         jne 0x8d56bc
// 008d559c  ff15401ba400         call dword ptr [0xa41b40]
// 008d55a2  8b442460             mov eax, dword ptr [esp + 0x60]
// 008d55a6  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008d55aa  50                   push eax
// 008d55ab  51                   push ecx
// 008d55ac  53                   push ebx
// 008d55ad  8bcf                 mov ecx, edi
// 008d55af  e85cf5ffff           call 0x8d4b10
// 008d55b4  8b542414             mov edx, dword ptr [esp + 0x14]
// 008d55b8  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 008d55bc  8b07                 mov eax, dword ptr [edi]
// 008d55be  895704               mov dword ptr [edi + 4], edx
// 008d55c1  8b5060               mov edx, dword ptr [eax + 0x60]
// 008d55c4  51                   push ecx
// 008d55c5  8bcf                 mov ecx, edi
// 008d55c7  ffd2                 call edx
// 008d55c9  8d4c2434             lea ecx, [esp + 0x34]
// 008d55cd  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 008d55d5  e896f2f8ff           call 0x864870
// 008d55da  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008d55de  64890d00000000       mov dword ptr fs:[0], ecx
// 008d55e5  59                   pop ecx
// 008d55e6  5f                   pop edi
// 008d55e7  5e                   pop esi
// 008d55e8  5d                   pop ebp
// 008d55e9  5b                   pop ebx
// 008d55ea  83c440               add esp, 0x40
// 008d55ed  c21000               ret 0x10
// 008d55f0  8b442424             mov eax, dword ptr [esp + 0x24]
// 008d55f4  8bc8                 mov ecx, eax
// 008d55f6  c1e910               shr ecx, 0x10
// 008d55f9  0fbfc9               movsx ecx, cx
// 008d55fc  98                   cwde 
// 008d55fd  33f6                 xor esi, esi
// 008d55ff  8944245c             mov dword ptr [esp + 0x5c], eax
// 008d5603  894c2460             mov dword ptr [esp + 0x60], ecx
// 008d5607  85ed                 test ebp, ebp
// 008d5609  0f8ead000000         jle 0x8d56bc
// 008d560f  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 008d5613  8b542464             mov edx, dword ptr [esp + 0x64]
// 008d5617  3b722c               cmp esi, dword ptr [edx + 0x2c]
// 008d561a  7425                 je 0x8d5641
// 008d561c  85f6                 test esi, esi
// 008d561e  0f8cbd000000         jl 0x8d56e1
// 008d5624  3bf5                 cmp esi, ebp
// 008d5626  0f8db5000000         jge 0x8d56e1
// 008d562c  8b442460             mov eax, dword ptr [esp + 0x60]
// 008d5630  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008d5634  50                   push eax
// 008d5635  51                   push ecx
// 008d5636  53                   push ebx
// 008d5637  ff15101ca400         call dword ptr [0xa41c10]
// 008d563d  85c0                 test eax, eax
// 008d563f  750e                 jne 0x8d564f
// 008d5641  46                   inc esi
// 008d5642  83c310               add ebx, 0x10
// 008d5645  3bf5                 cmp esi, ebp
// 008d5647  7cca                 jl 0x8d5613
// 008d5649  8b5c2458             mov ebx, dword ptr [esp + 0x58]
// 008d564d  eb6d                 jmp 0x8d56bc
// 008d564f  3b775c               cmp esi, dword ptr [edi + 0x5c]
// 008d5652  0f8d89000000         jge 0x8d56e1
// 008d5658  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 008d565c  8b4758               mov eax, dword ptr [edi + 0x58]
// 008d565f  8b492c               mov ecx, dword ptr [ecx + 0x2c]
// 008d5662  8d14b500000000       lea edx, [esi*4]
// 008d5669  03c2                 add eax, edx
// 008d566b  85c9                 test ecx, ecx
// 008d566d  7c72                 jl 0x8d56e1
// 008d566f  3b4f5c               cmp ecx, dword ptr [edi + 0x5c]
// 008d5672  7d6d                 jge 0x8d56e1
// 008d5674  8b5f58               mov ebx, dword ptr [edi + 0x58]
// 008d5677  8b00                 mov eax, dword ptr [eax]
// 008d5679  8d0c8b               lea ecx, [ebx + ecx*4]
// 008d567c  8901                 mov dword ptr [ecx], eax
// 008d567e  3b775c               cmp esi, dword ptr [edi + 0x5c]
// 008d5681  7d5e                 jge 0x8d56e1
// 008d5683  8b4758               mov eax, dword ptr [edi + 0x58]
// 008d5686  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 008d568a  03c2                 add eax, edx
// 008d568c  8908                 mov dword ptr [eax], ecx
// 008d568e  8b17                 mov edx, dword ptr [edi]
// 008d5690  8b421c               mov eax, dword ptr [edx + 0x1c]
// 008d5693  8bcf                 mov ecx, edi
// 008d5695  ffd0                 call eax
// 008d5697  8b5c2458             mov ebx, dword ptr [esp + 0x58]
// 008d569b  eb1f                 jmp 0x8d56bc
// 008d569d  2d02020000           sub eax, 0x202
// 008d56a2  0f84f4feffff         je 0x8d559c
// 008d56a8  83e802               sub eax, 2
// 008d56ab  0f84ebfeffff         je 0x8d559c
// 008d56b1  8d4c2418             lea ecx, [esp + 0x18]
// 008d56b5  51                   push ecx
// 008d56b6  ff150c1aa400         call dword ptr [0xa41a0c]
// 008d56bc  8b35381ba400         mov esi, dword ptr [0xa41b38]
// 008d56c2  ffd6                 call esi
// 008d56c4  3bc3                 cmp eax, ebx
// 008d56c6  0f8489feffff         je 0x8d5555
// 008d56cc  e9cbfeffff           jmp 0x8d559c
// 008d56d1  8d542418             lea edx, [esp + 0x18]
// 008d56d5  52                   push edx
// 008d56d6  ff150c1aa400         call dword ptr [0xa41a0c]
// 008d56dc  e9bbfeffff           jmp 0x8d559c
// 008d56e1  e8244cf3ff           call 0x80a30a
// copied from an identical function in another client (function ?ReOrder@CXTPTabManager@@MAEXPAUHWND__@@VCPoint@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\TabManager\XTPTabManager.cpp