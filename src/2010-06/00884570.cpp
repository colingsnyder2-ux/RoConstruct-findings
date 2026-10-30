// roc 2010-06 00884570  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 614 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00884570
//
// 00884570  6aff                 push -1
// 00884572  6868af9b00           push 0x9baf68
// 00884577  64a100000000         mov eax, dword ptr fs:[0]
// 0088457d  50                   push eax
// 0088457e  83ec34               sub esp, 0x34
// 00884581  53                   push ebx
// 00884582  55                   push ebp
// 00884583  56                   push esi
// 00884584  57                   push edi
// 00884585  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 0088458a  33c4                 xor eax, esp
// 0088458c  50                   push eax
// 0088458d  8d442448             lea eax, [esp + 0x48]
// 00884591  64a300000000         mov dword ptr fs:[0], eax
// 00884597  8bf9                 mov edi, ecx
// 00884599  8b4704               mov eax, dword ptr [edi + 4]
// 0088459c  8b17                 mov edx, dword ptr [edi]
// 0088459e  8b742464             mov esi, dword ptr [esp + 0x64]
// 008845a2  89442414             mov dword ptr [esp + 0x14], eax
// 008845a6  8b422c               mov eax, dword ptr [edx + 0x2c]
// 008845a9  897704               mov dword ptr [edi + 4], esi
// 008845ac  ffd0                 call eax
// 008845ae  83782000             cmp dword ptr [eax + 0x20], 0
// 008845b2  7403                 je 0x8845b7
// 008845b4  897708               mov dword ptr [edi + 8], esi
// 008845b7  8b17                 mov edx, dword ptr [edi]
// 008845b9  8b4204               mov eax, dword ptr [edx + 4]
// 008845bc  8bcf                 mov ecx, edi
// 008845be  ffd0                 call eax
// 008845c0  8d4c2434             lea ecx, [esp + 0x34]
// 008845c4  e8974df8ff           call 0x809360
// 008845c9  8b475c               mov eax, dword ptr [edi + 0x5c]
// 008845cc  33f6                 xor esi, esi
// 008845ce  c744245000000000     mov dword ptr [esp + 0x50], 0
// 008845d6  85c0                 test eax, eax
// 008845d8  7e50                 jle 0x88462a
// 008845da  8d9b00000000         lea ebx, [ebx]
// 008845e0  85f6                 test esi, esi
// 008845e2  7c0f                 jl 0x8845f3
// 008845e4  3b775c               cmp esi, dword ptr [edi + 0x5c]
// 008845e7  7d0a                 jge 0x8845f3
// 008845e9  8b4f58               mov ecx, dword ptr [edi + 0x58]
// 008845ec  8d04b1               lea eax, [ecx + esi*4]
// 008845ef  8b00                 mov eax, dword ptr [eax]
// 008845f1  eb02                 jmp 0x8845f5
// 008845f3  33c0                 xor eax, eax
// 008845f5  8b5044               mov edx, dword ptr [eax + 0x44]
// 008845f8  8b4848               mov ecx, dword ptr [eax + 0x48]
// 008845fb  89542418             mov dword ptr [esp + 0x18], edx
// 008845ff  8b504c               mov edx, dword ptr [eax + 0x4c]
// 00884602  8b4050               mov eax, dword ptr [eax + 0x50]
// 00884605  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00884609  8d4c2418             lea ecx, [esp + 0x18]
// 0088460d  89542420             mov dword ptr [esp + 0x20], edx
// 00884611  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00884615  51                   push ecx
// 00884616  52                   push edx
// 00884617  8d4c243c             lea ecx, [esp + 0x3c]
// 0088461b  8944242c             mov dword ptr [esp + 0x2c], eax
// 0088461f  e84c4ff8ff           call 0x809570
// 00884624  46                   inc esi
// 00884625  3b775c               cmp esi, dword ptr [edi + 0x5c]
// 00884628  7cb6                 jl 0x8845e0
// 0088462a  8b5c2458             mov ebx, dword ptr [esp + 0x58]
// 0088462e  53                   push ebx
// 0088462f  ff1580bc9e00         call dword ptr [0x9ebc80]
// 00884635  8b3584bc9e00         mov esi, dword ptr [0x9ebc84]
// 0088463b  ffd6                 call esi
// 0088463d  3bc3                 cmp eax, ebx
// 0088463f  754b                 jne 0x88468c
// 00884641  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 00884645  6a00                 push 0
// 00884647  6a00                 push 0
// 00884649  6a00                 push 0
// 0088464b  8d442424             lea eax, [esp + 0x24]
// 0088464f  50                   push eax
// 00884650  ff15f0bb9e00         call dword ptr [0x9ebbf0]
// 00884656  ffd6                 call esi
// 00884658  3bc3                 cmp eax, ebx
// 0088465a  0f8561010000         jne 0x8847c1
// 00884660  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00884664  3d00020000           cmp eax, 0x200
// 00884669  0f871e010000         ja 0x88478d
// 0088466f  746f                 je 0x8846e0
// 00884671  83f81f               cmp eax, 0x1f
// 00884674  7416                 je 0x88468c
// 00884676  3d00010000           cmp eax, 0x100
// 0088467b  0f8520010000         jne 0x8847a1
// 00884681  837c24201b           cmp dword ptr [esp + 0x20], 0x1b
// 00884686  0f8520010000         jne 0x8847ac
// 0088468c  ff158cbc9e00         call dword ptr [0x9ebc8c]
// 00884692  8b442460             mov eax, dword ptr [esp + 0x60]
// 00884696  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0088469a  50                   push eax
// 0088469b  51                   push ecx
// 0088469c  53                   push ebx
// 0088469d  8bcf                 mov ecx, edi
// 0088469f  e87cf5ffff           call 0x883c20
// 008846a4  8b542414             mov edx, dword ptr [esp + 0x14]
// 008846a8  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 008846ac  8b07                 mov eax, dword ptr [edi]
// 008846ae  895704               mov dword ptr [edi + 4], edx
// 008846b1  8b5060               mov edx, dword ptr [eax + 0x60]
// 008846b4  51                   push ecx
// 008846b5  8bcf                 mov ecx, edi
// 008846b7  ffd2                 call edx
// 008846b9  8d4c2434             lea ecx, [esp + 0x34]
// 008846bd  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 008846c5  e8b64cf8ff           call 0x809380
// 008846ca  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008846ce  64890d00000000       mov dword ptr fs:[0], ecx
// 008846d5  59                   pop ecx
// 008846d6  5f                   pop edi
// 008846d7  5e                   pop esi
// 008846d8  5d                   pop ebp
// 008846d9  5b                   pop ebx
// 008846da  83c440               add esp, 0x40
// 008846dd  c21000               ret 0x10
// 008846e0  8b442424             mov eax, dword ptr [esp + 0x24]
// 008846e4  8bc8                 mov ecx, eax
// 008846e6  c1e910               shr ecx, 0x10
// 008846e9  0fbfc9               movsx ecx, cx
// 008846ec  98                   cwde 
// 008846ed  33f6                 xor esi, esi
// 008846ef  8944245c             mov dword ptr [esp + 0x5c], eax
// 008846f3  894c2460             mov dword ptr [esp + 0x60], ecx
// 008846f7  85ed                 test ebp, ebp
// 008846f9  0f8ead000000         jle 0x8847ac
// 008846ff  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 00884703  8b542464             mov edx, dword ptr [esp + 0x64]
// 00884707  3b722c               cmp esi, dword ptr [edx + 0x2c]
// 0088470a  7425                 je 0x884731
// 0088470c  85f6                 test esi, esi
// 0088470e  0f8cbd000000         jl 0x8847d1
// 00884714  3bf5                 cmp esi, ebp
// 00884716  0f8db5000000         jge 0x8847d1
// 0088471c  8b442460             mov eax, dword ptr [esp + 0x60]
// 00884720  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00884724  50                   push eax
// 00884725  51                   push ecx
// 00884726  53                   push ebx
// 00884727  ff15e0bb9e00         call dword ptr [0x9ebbe0]
// 0088472d  85c0                 test eax, eax
// 0088472f  750e                 jne 0x88473f
// 00884731  46                   inc esi
// 00884732  83c310               add ebx, 0x10
// 00884735  3bf5                 cmp esi, ebp
// 00884737  7cca                 jl 0x884703
// 00884739  8b5c2458             mov ebx, dword ptr [esp + 0x58]
// 0088473d  eb6d                 jmp 0x8847ac
// 0088473f  3b775c               cmp esi, dword ptr [edi + 0x5c]
// 00884742  0f8d89000000         jge 0x8847d1
// 00884748  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 0088474c  8b4758               mov eax, dword ptr [edi + 0x58]
// 0088474f  8b492c               mov ecx, dword ptr [ecx + 0x2c]
// 00884752  8d14b500000000       lea edx, [esi*4]
// 00884759  03c2                 add eax, edx
// 0088475b  85c9                 test ecx, ecx
// 0088475d  7c72                 jl 0x8847d1
// 0088475f  3b4f5c               cmp ecx, dword ptr [edi + 0x5c]
// 00884762  7d6d                 jge 0x8847d1
// 00884764  8b5f58               mov ebx, dword ptr [edi + 0x58]
// 00884767  8b00                 mov eax, dword ptr [eax]
// 00884769  8d0c8b               lea ecx, [ebx + ecx*4]
// 0088476c  8901                 mov dword ptr [ecx], eax
// 0088476e  3b775c               cmp esi, dword ptr [edi + 0x5c]
// 00884771  7d5e                 jge 0x8847d1
// 00884773  8b4758               mov eax, dword ptr [edi + 0x58]
// 00884776  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 0088477a  03c2                 add eax, edx
// 0088477c  8908                 mov dword ptr [eax], ecx
// 0088477e  8b17                 mov edx, dword ptr [edi]
// 00884780  8b421c               mov eax, dword ptr [edx + 0x1c]
// 00884783  8bcf                 mov ecx, edi
// 00884785  ffd0                 call eax
// 00884787  8b5c2458             mov ebx, dword ptr [esp + 0x58]
// 0088478b  eb1f                 jmp 0x8847ac
// 0088478d  2d02020000           sub eax, 0x202
// 00884792  0f84f4feffff         je 0x88468c
// 00884798  83e802               sub eax, 2
// 0088479b  0f84ebfeffff         je 0x88468c
// 008847a1  8d4c2418             lea ecx, [esp + 0x18]
// 008847a5  51                   push ecx
// 008847a6  ff1508bc9e00         call dword ptr [0x9ebc08]
// 008847ac  8b3584bc9e00         mov esi, dword ptr [0x9ebc84]
// 008847b2  ffd6                 call esi
// 008847b4  3bc3                 cmp eax, ebx
// 008847b6  0f8489feffff         je 0x884645
// 008847bc  e9cbfeffff           jmp 0x88468c
// 008847c1  8d542418             lea edx, [esp + 0x18]
// 008847c5  52                   push edx
// 008847c6  ff1508bc9e00         call dword ptr [0x9ebc08]
// 008847cc  e9bbfeffff           jmp 0x88468c
// 008847d1  e87634f2ff           call 0x7a7c4c
// copied from an identical function in another client (function ?ReOrder@CXTPTabManager@@MAEXPAUHWND__@@VCPoint@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\TabManager\XTPTabManager.cpp