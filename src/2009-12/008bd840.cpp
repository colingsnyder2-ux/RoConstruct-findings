// roc 2009-12 008bd840  unit: CXTPDockingPaneContext  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008bd840
//
// 008bd840  83ec10               sub esp, 0x10
// 008bd843  55                   push ebp
// 008bd844  56                   push esi
// 008bd845  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 008bd849  33ed                 xor ebp, ebp
// 008bd84b  57                   push edi
// 008bd84c  8bf9                 mov edi, ecx
// 008bd84e  3bf5                 cmp esi, ebp
// 008bd850  7405                 je 0x8bd857
// 008bd852  396e20               cmp dword ptr [esi + 0x20], ebp
// 008bd855  7571                 jne 0x8bd8c8
// 008bd857  8b871c010000         mov eax, dword ptr [edi + 0x11c]
// 008bd85d  53                   push ebx
// 008bd85e  8b98cc000000         mov ebx, dword ptr [eax + 0xcc]
// 008bd864  896c2410             mov dword ptr [esp + 0x10], ebp
// 008bd868  896c2414             mov dword ptr [esp + 0x14], ebp
// 008bd86c  896c2418             mov dword ptr [esp + 0x18], ebp
// 008bd870  896c241c             mov dword ptr [esp + 0x1c], ebp
// 008bd874  e8a562f3ff           call 0x7f3b1e
// 008bd879  68007f0000           push 0x7f00
// 008bd87e  55                   push ebp
// 008bd87f  ff1548ca9800         call dword ptr [0x98ca48]
// 008bd885  8b2e                 mov ebp, dword ptr [esi]
// 008bd887  6a00                 push 0
// 008bd889  6a00                 push 0
// 008bd88b  53                   push ebx
// 008bd88c  8d4c241c             lea ecx, [esp + 0x1c]
// 008bd890  51                   push ecx
// 008bd891  6800000080           push 0x80000000
// 008bd896  6a00                 push 0
// 008bd898  6a00                 push 0
// 008bd89a  6a00                 push 0
// 008bd89c  50                   push eax
// 008bd89d  6a00                 push 0
// 008bd89f  e88269f3ff           call 0x7f4226
// 008bd8a4  8b5560               mov edx, dword ptr [ebp + 0x60]
// 008bd8a7  50                   push eax
// 008bd8a8  6888000800           push 0x80088
// 008bd8ad  8bce                 mov ecx, esi
// 008bd8af  ffd2                 call edx
// 008bd8b1  8b87ac000000         mov eax, dword ptr [edi + 0xac]
// 008bd8b7  5b                   pop ebx
// 008bd8b8  85c0                 test eax, eax
// 008bd8ba  740c                 je 0x8bd8c8
// 008bd8bc  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008bd8bf  6a02                 push 2
// 008bd8c1  6a64                 push 0x64
// 008bd8c3  6a00                 push 0
// 008bd8c5  51                   push ecx
// 008bd8c6  ffd0                 call eax
// 008bd8c8  5f                   pop edi
// 008bd8c9  5e                   pop esi
// 008bd8ca  5d                   pop ebp
// 008bd8cb  83c410               add esp, 0x10
// 008bd8ce  c20400               ret 4
// copied from an identical function in another client (function ?CreateContextWindow@CXTPDockingPaneContext@@IAEXPAVCXTPDockingPaneContextAlphaWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneContext.cpp