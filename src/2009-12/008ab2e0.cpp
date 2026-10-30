// roc 2009-12 008ab2e0  unit: CXTPDockingPaneAutoHidePanel::PAVCAutoHidePanelTabManager::?$CArray  size: 852 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ab2e0
//
// 008ab2e0  6aff                 push -1
// 008ab2e2  68f8299600           push 0x9629f8
// 008ab2e7  64a100000000         mov eax, dword ptr fs:[0]
// 008ab2ed  50                   push eax
// 008ab2ee  83ec5c               sub esp, 0x5c
// 008ab2f1  53                   push ebx
// 008ab2f2  55                   push ebp
// 008ab2f3  56                   push esi
// 008ab2f4  57                   push edi
// 008ab2f5  a10052b600           mov eax, dword ptr [0xb65200]
// 008ab2fa  33c4                 xor eax, esp
// 008ab2fc  50                   push eax
// 008ab2fd  8d442470             lea eax, [esp + 0x70]
// 008ab301  64a300000000         mov dword ptr fs:[0], eax
// 008ab307  8bf1                 mov esi, ecx
// 008ab309  89742414             mov dword ptr [esp + 0x14], esi
// 008ab30d  e8cab90700           call 0x926cdc
// 008ab312  8b9c2484000000       mov ebx, dword ptr [esp + 0x84]
// 008ab319  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 008ab320  33c9                 xor ecx, ecx
// 008ab322  894c2478             mov dword ptr [esp + 0x78], ecx
// 008ab326  c7060466a000         mov dword ptr [esi], 0xa06604
// 008ab32c  899ef8000000         mov dword ptr [esi + 0xf8], ebx
// 008ab332  8986fc000000         mov dword ptr [esi + 0xfc], eax
// 008ab338  3bd9                 cmp ebx, ecx
// 008ab33a  0f84cc020000         je 0x8ab60c
// 008ab340  398ba4010000         cmp dword ptr [ebx + 0x1a4], ecx
// 008ab346  0f84c0020000         je 0x8ab60c
// 008ab34c  898e28010000         mov dword ptr [esi + 0x128], ecx
// 008ab352  8b80ac000000         mov eax, dword ptr [eax + 0xac]
// 008ab358  898600010000         mov dword ptr [esi + 0x100], eax
// 008ab35e  83f802               cmp eax, 2
// 008ab361  7409                 je 0x8ab36c
// 008ab363  83f803               cmp eax, 3
// 008ab366  7404                 je 0x8ab36c
// 008ab368  33c0                 xor eax, eax
// 008ab36a  eb05                 jmp 0x8ab371
// 008ab36c  b801000000           mov eax, 1
// 008ab371  8bce                 mov ecx, esi
// 008ab373  898604010000         mov dword ptr [esi + 0x104], eax
// 008ab379  e812e8ffff           call 0x8a9b90
// 008ab37e  8bf8                 mov edi, eax
// 008ab380  8b87cc000000         mov eax, dword ptr [edi + 0xcc]
// 008ab386  8bcf                 mov ecx, edi
// 008ab388  89842484000000       mov dword ptr [esp + 0x84], eax
// 008ab38f  e81cd3f8ff           call 0x8386b0
// 008ab394  8d4c2418             lea ecx, [esp + 0x18]
// 008ab398  51                   push ecx
// 008ab399  8bc8                 mov ecx, eax
// 008ab39b  e800540000           call 0x8b07a0
// 008ab3a0  6a01                 push 1
// 008ab3a2  8d54244c             lea edx, [esp + 0x4c]
// 008ab3a6  52                   push edx
// 008ab3a7  8bce                 mov ecx, esi
// 008ab3a9  e8c2e9ffff           call 0x8a9d70
// 008ab3ae  8b8ba4010000         mov ecx, dword ptr [ebx + 0x1a4]
// 008ab3b4  8b4128               mov eax, dword ptr [ecx + 0x28]
// 008ab3b7  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 008ab3bb  83c004               add eax, 4
// 008ab3be  3bd0                 cmp edx, eax
// 008ab3c0  8bda                 mov ebx, edx
// 008ab3c2  7c02                 jl 0x8ab3c6
// 008ab3c4  8bd8                 mov ebx, eax
// 008ab3c6  395c2464             cmp dword ptr [esp + 0x64], ebx
// 008ab3ca  7e06                 jle 0x8ab3d2
// 008ab3cc  8b6c2464             mov ebp, dword ptr [esp + 0x64]
// 008ab3d0  eb08                 jmp 0x8ab3da
// 008ab3d2  3bd0                 cmp edx, eax
// 008ab3d4  8bea                 mov ebp, edx
// 008ab3d6  7c02                 jl 0x8ab3da
// 008ab3d8  8be8                 mov ebp, eax
// 008ab3da  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 008ab3dd  8d4104               lea eax, [ecx + 4]
// 008ab3e0  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 008ab3e4  3bc8                 cmp ecx, eax
// 008ab3e6  8bd1                 mov edx, ecx
// 008ab3e8  7c02                 jl 0x8ab3ec
// 008ab3ea  8bd0                 mov edx, eax
// 008ab3ec  8b5c2460             mov ebx, dword ptr [esp + 0x60]
// 008ab3f0  3bda                 cmp ebx, edx
// 008ab3f2  7f08                 jg 0x8ab3fc
// 008ab3f4  3bc8                 cmp ecx, eax
// 008ab3f6  8bd9                 mov ebx, ecx
// 008ab3f8  7c02                 jl 0x8ab3fc
// 008ab3fa  8bd8                 mov ebx, eax
// 008ab3fc  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 008ab402  50                   push eax
// 008ab403  8bcf                 mov ecx, edi
// 008ab405  e8f6d2f8ff           call 0x838700
// 008ab40a  83f803               cmp eax, 3
// 008ab40d  7735                 ja 0x8ab444
// 008ab40f  ff248524b68a00       jmp dword ptr [eax*4 + 0x8ab624]
// 008ab416  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008ab41a  03d9                 add ebx, ecx
// 008ab41c  895c2420             mov dword ptr [esp + 0x20], ebx
// 008ab420  eb22                 jmp 0x8ab444
// 008ab422  8b542420             mov edx, dword ptr [esp + 0x20]
// 008ab426  2bd3                 sub edx, ebx
// 008ab428  89542418             mov dword ptr [esp + 0x18], edx
// 008ab42c  eb16                 jmp 0x8ab444
// 008ab42e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008ab432  03e8                 add ebp, eax
// 008ab434  896c2424             mov dword ptr [esp + 0x24], ebp
// 008ab438  eb0a                 jmp 0x8ab444
// 008ab43a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008ab43e  2bcd                 sub ecx, ebp
// 008ab440  894c241c             mov dword ptr [esp + 0x1c], ecx
// 008ab444  8b9c2484000000       mov ebx, dword ptr [esp + 0x84]
// 008ab44b  8d542418             lea edx, [esp + 0x18]
// 008ab44f  52                   push edx
// 008ab450  8bcb                 mov ecx, ebx
// 008ab452  e88193f4ff           call 0x7f47d8
// 008ab457  8d442428             lea eax, [esp + 0x28]
// 008ab45b  50                   push eax
// 008ab45c  8d4c243c             lea ecx, [esp + 0x3c]
// 008ab460  51                   push ecx
// 008ab461  8bce                 mov ecx, esi
// 008ab463  e858f2ffff           call 0x8aa6c0
// 008ab468  85c0                 test eax, eax
// 008ab46a  742b                 je 0x8ab497
// 008ab46c  83bff400000000       cmp dword ptr [edi + 0xf4], 0
// 008ab473  7522                 jne 0x8ab497
// 008ab475  e82634fcff           call 0x86e8a0
// 008ab47a  8b10                 mov edx, dword ptr [eax]
// 008ab47c  8b5218               mov edx, dword ptr [edx + 0x18]
// 008ab47f  33c9                 xor ecx, ecx
// 008ab481  398e04010000         cmp dword ptr [esi + 0x104], ecx
// 008ab487  0f95c1               setne cl
// 008ab48a  81c1f2260000         add ecx, 0x26f2
// 008ab490  51                   push ecx
// 008ab491  8bc8                 mov ecx, eax
// 008ab493  ffd2                 call edx
// 008ab495  eb12                 jmp 0x8ab4a9
// 008ab497  e88286f4ff           call 0x7f3b1e
// 008ab49c  68007f0000           push 0x7f00
// 008ab4a1  6a00                 push 0
// 008ab4a3  ff1548ca9800         call dword ptr [0x98ca48]
// 008ab4a9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008ab4ad  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008ab4b1  6a00                 push 0
// 008ab4b3  898e14010000         mov dword ptr [esi + 0x114], ecx
// 008ab4b9  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008ab4bd  53                   push ebx
// 008ab4be  899618010000         mov dword ptr [esi + 0x118], edx
// 008ab4c4  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 008ab4c8  898e1c010000         mov dword ptr [esi + 0x11c], ecx
// 008ab4ce  8d4c2420             lea ecx, [esp + 0x20]
// 008ab4d2  51                   push ecx
// 008ab4d3  6800000046           push 0x46000000
// 008ab4d8  6856fd9900           push 0x99fd56
// 008ab4dd  6a00                 push 0
// 008ab4df  6a00                 push 0
// 008ab4e1  50                   push eax
// 008ab4e2  6a00                 push 0
// 008ab4e4  899620010000         mov dword ptr [esi + 0x120], edx
// 008ab4ea  e8378df4ff           call 0x7f4226
// 008ab4ef  50                   push eax
// 008ab4f0  8bcb                 mov ecx, ebx
// 008ab4f2  e881af0700           call 0x926478
// 008ab4f7  2500004000           and eax, 0x400000
// 008ab4fc  50                   push eax
// 008ab4fd  8bce                 mov ecx, esi
// 008ab4ff  e8d2b70700           call 0x926cd6
// 008ab504  d9ee                 fldz 
// 008ab506  bb01000000           mov ebx, 1
// 008ab50b  d9c0                 fld st(0)
// 008ab50d  c7860801000000000000 mov dword ptr [esi + 0x108], 0
// 008ab517  899e0c010000         mov dword ptr [esi + 0x10c], ebx
// 008ab51d  dd05a88eb600         fld qword ptr [0xb68ea8]
// 008ab523  dde1                 fucom st(1)
// 008ab525  dfe0                 fnstsw ax
// 008ab527  ddd9                 fstp st(1)
// 008ab529  f6c444               test ah, 0x44
// 008ab52c  7b76                 jnp 0x8ab5a4
// 008ab52e  8b0db08eb600         mov ecx, dword ptr [0xb68eb0]
// 008ab534  85c9                 test ecx, ecx
// 008ab536  746c                 je 0x8ab5a4
// 008ab538  d8d1                 fcom st(1)
// 008ab53a  dfe0                 fnstsw ax
// 008ab53c  ddd9                 fstp st(1)
// 008ab53e  f6c441               test ah, 0x41
// 008ab541  7551                 jne 0x8ab594
// 008ab543  83be0401000000       cmp dword ptr [esi + 0x104], 0
// 008ab54a  7415                 je 0x8ab561
// 008ab54c  8b961c010000         mov edx, dword ptr [esi + 0x11c]
// 008ab552  2b9614010000         sub edx, dword ptr [esi + 0x114]
// 008ab558  89942484000000       mov dword ptr [esp + 0x84], edx
// 008ab55f  eb13                 jmp 0x8ab574
// 008ab561  8b8620010000         mov eax, dword ptr [esi + 0x120]
// 008ab567  2b8618010000         sub eax, dword ptr [esi + 0x118]
// 008ab56d  89842484000000       mov dword ptr [esp + 0x84], eax
// 008ab574  da8c2484000000       fimul dword ptr [esp + 0x84]
// 008ab57b  dc0df865a000         fmul qword ptr [0xa065f8]
// 008ab581  da35b08eb600         fidiv dword ptr [0xb68eb0]
// 008ab587  e86497f4ff           call 0x7f4cf0
// 008ab58c  89860c010000         mov dword ptr [esi + 0x10c], eax
// 008ab592  eb14                 jmp 0x8ab5a8
// 008ab594  a1b48eb600           mov eax, dword ptr [0xb68eb4]
// 008ab599  99                   cdq 
// 008ab59a  f7f9                 idiv ecx
// 008ab59c  89860c010000         mov dword ptr [esi + 0x10c], eax
// 008ab5a2  eb02                 jmp 0x8ab5a6
// 008ab5a4  ddd8                 fstp st(0)
// 008ab5a6  ddd8                 fstp st(0)
// 008ab5a8  399e0c010000         cmp dword ptr [esi + 0x10c], ebx
// 008ab5ae  7d06                 jge 0x8ab5b6
// 008ab5b0  899e0c010000         mov dword ptr [esi + 0x10c], ebx
// 008ab5b6  399e0c010000         cmp dword ptr [esi + 0x10c], ebx
// 008ab5bc  8b3d58cc9800         mov edi, dword ptr [0x98cc58]
// 008ab5c2  c7861001000000000000 mov dword ptr [esi + 0x110], 0
// 008ab5cc  7e11                 jle 0x8ab5df
// 008ab5ce  8b0db08eb600         mov ecx, dword ptr [0xb68eb0]
// 008ab5d4  8b5620               mov edx, dword ptr [esi + 0x20]
// 008ab5d7  6a00                 push 0
// 008ab5d9  51                   push ecx
// 008ab5da  6a02                 push 2
// 008ab5dc  52                   push edx
// 008ab5dd  ffd7                 call edi
// 008ab5df  8bce                 mov ecx, esi
// 008ab5e1  e82ae8ffff           call 0x8a9e10
// 008ab5e6  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 008ab5ec  6a05                 push 5
// 008ab5ee  e85585f4ff           call 0x7f3b48
// 008ab5f3  a1c08eb600           mov eax, dword ptr [0xb68ec0]
// 008ab5f8  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008ab5fb  6a00                 push 0
// 008ab5fd  50                   push eax
// 008ab5fe  53                   push ebx
// 008ab5ff  51                   push ecx
// 008ab600  ffd7                 call edi
// 008ab602  c7862401000006000000 mov dword ptr [esi + 0x124], 6
// 008ab60c  8bc6                 mov eax, esi
// 008ab60e  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 008ab612  64890d00000000       mov dword ptr fs:[0], ecx
// 008ab619  59                   pop ecx
// 008ab61a  5f                   pop edi
// 008ab61b  5e                   pop esi
// 008ab61c  5d                   pop ebp
// 008ab61d  5b                   pop ebx
// 008ab61e  83c468               add esp, 0x68
// 008ab621  c20800               ret 8
// 008ab624  16                   push ss
// 008ab625  b48a                 mov ah, 0x8a
// 008ab627  0022                 add byte ptr [edx], ah
// 008ab629  b48a                 mov ah, 0x8a
// 008ab62b  002e                 add byte ptr [esi], ch
// 008ab62d  b48a                 mov ah, 0x8a
// 008ab62f  003a                 add byte ptr [edx], bh
// 008ab631  b48a                 mov ah, 0x8a
// copied from an identical function in another client (function ??0CXTPDockingPaneAutoHideWnd@@AAE@PAVCXTPDockingPaneAutoHidePanel@@PAVCXTPDockingPaneTabbedContainer@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp