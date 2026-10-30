// roc 2009-12 008bf520  unit: CXTPDockingPaneContext  size: 655 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008bf520
//
// 008bf520  6aff                 push -1
// 008bf522  68123d9600           push 0x963d12
// 008bf527  64a100000000         mov eax, dword ptr fs:[0]
// 008bf52d  50                   push eax
// 008bf52e  83ec44               sub esp, 0x44
// 008bf531  53                   push ebx
// 008bf532  55                   push ebp
// 008bf533  56                   push esi
// 008bf534  57                   push edi
// 008bf535  a10052b600           mov eax, dword ptr [0xb65200]
// 008bf53a  33c4                 xor eax, esp
// 008bf53c  50                   push eax
// 008bf53d  8d442458             lea eax, [esp + 0x58]
// 008bf541  64a300000000         mov dword ptr fs:[0], eax
// 008bf547  8be9                 mov ebp, ecx
// 008bf549  8b442478             mov eax, dword ptr [esp + 0x78]
// 008bf54d  33db                 xor ebx, ebx
// 008bf54f  3bc3                 cmp eax, ebx
// 008bf551  0f8440020000         je 0x8bf797
// 008bf557  83f820               cmp eax, 0x20
// 008bf55a  0f8437020000         je 0x8bf797
// 008bf560  6a60                 push 0x60
// 008bf562  e8f942f3ff           call 0x7f3860
// 008bf567  83c404               add esp, 4
// 008bf56a  8944241c             mov dword ptr [esp + 0x1c], eax
// 008bf56e  895c2460             mov dword ptr [esp + 0x60], ebx
// 008bf572  3bc3                 cmp eax, ebx
// 008bf574  740c                 je 0x8bf582
// 008bf576  55                   push ebp
// 008bf577  8bc8                 mov ecx, eax
// 008bf579  e882cbffff           call 0x8bc100
// 008bf57e  8bf0                 mov esi, eax
// 008bf580  eb02                 jmp 0x8bf584
// 008bf582  33f6                 xor esi, esi
// 008bf584  56                   push esi
// 008bf585  8d8dd0000000         lea ecx, [ebp + 0xd0]
// 008bf58b  c7442464ffffffff     mov dword ptr [esp + 0x64], 0xffffffff
// 008bf593  e8e8450000           call 0x8c3b80
// 008bf598  8b851c010000         mov eax, dword ptr [ebp + 0x11c]
// 008bf59e  8b88cc000000         mov ecx, dword ptr [eax + 0xcc]
// 008bf5a4  894c241c             mov dword ptr [esp + 0x1c], ecx
// 008bf5a8  895c2420             mov dword ptr [esp + 0x20], ebx
// 008bf5ac  895c2424             mov dword ptr [esp + 0x24], ebx
// 008bf5b0  895c2428             mov dword ptr [esp + 0x28], ebx
// 008bf5b4  895c242c             mov dword ptr [esp + 0x2c], ebx
// 008bf5b8  e86145f3ff           call 0x7f3b1e
// 008bf5bd  68007f0000           push 0x7f00
// 008bf5c2  53                   push ebx
// 008bf5c3  ff1548ca9800         call dword ptr [0x98ca48]
// 008bf5c9  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008bf5cd  8b3e                 mov edi, dword ptr [esi]
// 008bf5cf  53                   push ebx
// 008bf5d0  53                   push ebx
// 008bf5d1  52                   push edx
// 008bf5d2  8d4c242c             lea ecx, [esp + 0x2c]
// 008bf5d6  51                   push ecx
// 008bf5d7  6800000080           push 0x80000000
// 008bf5dc  53                   push ebx
// 008bf5dd  53                   push ebx
// 008bf5de  53                   push ebx
// 008bf5df  50                   push eax
// 008bf5e0  53                   push ebx
// 008bf5e1  83c760               add edi, 0x60
// 008bf5e4  e83d4cf3ff           call 0x7f4226
// 008bf5e9  8b17                 mov edx, dword ptr [edi]
// 008bf5eb  50                   push eax
// 008bf5ec  6880000000           push 0x80
// 008bf5f1  8bce                 mov ecx, esi
// 008bf5f3  ffd2                 call edx
// 008bf5f5  8b442478             mov eax, dword ptr [esp + 0x78]
// 008bf5f9  8d4c241c             lea ecx, [esp + 0x1c]
// 008bf5fd  51                   push ecx
// 008bf5fe  8dbd6c010000         lea edi, [ebp + 0x16c]
// 008bf604  50                   push eax
// 008bf605  8bcf                 mov ecx, edi
// 008bf607  894654               mov dword ptr [esi + 0x54], eax
// 008bf60a  895c2424             mov dword ptr [esp + 0x24], ebx
// 008bf60e  e86dd3f4ff           call 0x80c980
// 008bf613  85c0                 test eax, eax
// 008bf615  753b                 jne 0x8bf652
// 008bf617  6a08                 push 8
// 008bf619  e84242f3ff           call 0x7f3860
// 008bf61e  83c404               add esp, 4
// 008bf621  3bc3                 cmp eax, ebx
// 008bf623  740f                 je 0x8bf634
// 008bf625  895804               mov dword ptr [eax + 4], ebx
// 008bf628  c700f82a9f00         mov dword ptr [eax], 0x9f2af8
// 008bf62e  89442414             mov dword ptr [esp + 0x14], eax
// 008bf632  eb04                 jmp 0x8bf638
// 008bf634  895c2414             mov dword ptr [esp + 0x14], ebx
// 008bf638  8b442478             mov eax, dword ptr [esp + 0x78]
// 008bf63c  8b542414             mov edx, dword ptr [esp + 0x14]
// 008bf640  50                   push eax
// 008bf641  8bcf                 mov ecx, edi
// 008bf643  89542420             mov dword ptr [esp + 0x20], edx
// 008bf647  e8344bfdff           call 0x894180
// 008bf64c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008bf650  8908                 mov dword ptr [eax], ecx
// 008bf652  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 008bf656  3bfb                 cmp edi, ebx
// 008bf658  0f8439010000         je 0x8bf797
// 008bf65e  395f04               cmp dword ptr [edi + 4], ebx
// 008bf661  0f85e4000000         jne 0x8bf74b
// 008bf667  56                   push esi
// 008bf668  8d4c2448             lea ecx, [esp + 0x48]
// 008bf66c  e86550f3ff           call 0x7f46d6
// 008bf671  c744246001000000     mov dword ptr [esp + 0x60], 1
// 008bf679  895c2418             mov dword ptr [esp + 0x18], ebx
// 008bf67d  c744241418229a00     mov dword ptr [esp + 0x14], 0x9a2218
// 008bf685  8b542474             mov edx, dword ptr [esp + 0x74]
// 008bf689  2b54246c             sub edx, dword ptr [esp + 0x6c]
// 008bf68d  8b442470             mov eax, dword ptr [esp + 0x70]
// 008bf691  2b442468             sub eax, dword ptr [esp + 0x68]
// 008bf695  52                   push edx
// 008bf696  50                   push eax
// 008bf697  8d4c244c             lea ecx, [esp + 0x4c]
// 008bf69b  51                   push ecx
// 008bf69c  8d4c2420             lea ecx, [esp + 0x20]
// 008bf6a0  c644246c02           mov byte ptr [esp + 0x6c], 2
// 008bf6a5  e8a6a5f4ff           call 0x809c50
// 008bf6aa  395c2418             cmp dword ptr [esp + 0x18], ebx
// 008bf6ae  7474                 je 0x8bf724
// 008bf6b0  8d542414             lea edx, [esp + 0x14]
// 008bf6b4  52                   push edx
// 008bf6b5  8d442448             lea eax, [esp + 0x48]
// 008bf6b9  50                   push eax
// 008bf6ba  8d4c2438             lea ecx, [esp + 0x38]
// 008bf6be  e8bdc1f8ff           call 0x84b880
// 008bf6c3  53                   push ebx
// 008bf6c4  8d4c246c             lea ecx, [esp + 0x6c]
// 008bf6c8  51                   push ecx
// 008bf6c9  8d4c2438             lea ecx, [esp + 0x38]
// 008bf6cd  c644246803           mov byte ptr [esp + 0x68], 3
// 008bf6d2  e8274ff3ff           call 0x7f45fe
// 008bf6d7  8d542430             lea edx, [esp + 0x30]
// 008bf6db  52                   push edx
// 008bf6dc  8bce                 mov ecx, esi
// 008bf6de  e8edcdffff           call 0x8bc4d0
// 008bf6e3  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 008bf6e7  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 008bf6eb  83ec10               sub esp, 0x10
// 008bf6ee  8bc4                 mov eax, esp
// 008bf6f0  8908                 mov dword ptr [eax], ecx
// 008bf6f2  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 008bf6f9  895004               mov dword ptr [eax + 4], edx
// 008bf6fc  8b942484000000       mov edx, dword ptr [esp + 0x84]
// 008bf703  894808               mov dword ptr [eax + 8], ecx
// 008bf706  89500c               mov dword ptr [eax + 0xc], edx
// 008bf709  8d442440             lea eax, [esp + 0x40]
// 008bf70d  50                   push eax
// 008bf70e  57                   push edi
// 008bf70f  8bcd                 mov ecx, ebp
// 008bf711  e8badfffff           call 0x8bd6d0
// 008bf716  8d4c2430             lea ecx, [esp + 0x30]
// 008bf71a  c644246002           mov byte ptr [esp + 0x60], 2
// 008bf71f  e86cc2f8ff           call 0x84b990
// 008bf724  8d4c2414             lea ecx, [esp + 0x14]
// 008bf728  c644246001           mov byte ptr [esp + 0x60], 1
// 008bf72d  c744241418229a00     mov dword ptr [esp + 0x14], 0x9a2218
// 008bf735  e8f6fab4ff           call 0x40f230
// 008bf73a  8d4c2444             lea ecx, [esp + 0x44]
// 008bf73e  c7442460ffffffff     mov dword ptr [esp + 0x60], 0xffffffff
// 008bf746  e8854ff3ff           call 0x7f46d0
// 008bf74b  53                   push ebx
// 008bf74c  53                   push ebx
// 008bf74d  53                   push ebx
// 008bf74e  53                   push ebx
// 008bf74f  ff150cb19800         call dword ptr [0x98b10c]
// 008bf755  6a05                 push 5
// 008bf757  8be8                 mov ebp, eax
// 008bf759  8b4704               mov eax, dword ptr [edi + 4]
// 008bf75c  53                   push ebx
// 008bf75d  50                   push eax
// 008bf75e  55                   push ebp
// 008bf75f  ff15acb09800         call dword ptr [0x98b0ac]
// 008bf765  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008bf768  53                   push ebx
// 008bf769  55                   push ebp
// 008bf76a  51                   push ecx
// 008bf76b  ff1554cb9800         call dword ptr [0x98cb54]
// 008bf771  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 008bf775  8b542474             mov edx, dword ptr [esp + 0x74]
// 008bf779  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 008bf77d  6a54                 push 0x54
// 008bf77f  2bd0                 sub edx, eax
// 008bf781  52                   push edx
// 008bf782  8b542478             mov edx, dword ptr [esp + 0x78]
// 008bf786  2bd1                 sub edx, ecx
// 008bf788  52                   push edx
// 008bf789  50                   push eax
// 008bf78a  51                   push ecx
// 008bf78b  53                   push ebx
// 008bf78c  8bce                 mov ecx, esi
// 008bf78e  e89944f3ff           call 0x7f3c2c
// 008bf793  8bc6                 mov eax, esi
// 008bf795  eb02                 jmp 0x8bf799
// 008bf797  33c0                 xor eax, eax
// 008bf799  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 008bf79d  64890d00000000       mov dword ptr fs:[0], ecx
// 008bf7a4  59                   pop ecx
// 008bf7a5  5f                   pop edi
// 008bf7a6  5e                   pop esi
// 008bf7a7  5d                   pop ebp
// 008bf7a8  5b                   pop ebx
// 008bf7a9  83c450               add esp, 0x50
// 008bf7ac  c21400               ret 0x14
// copied from an identical function in another client (function ?CreateNewSticker@CXTPDockingPaneContext@@IAEPAVCXTPDockingPaneContextStickerWnd@@VCRect@@W4XTPDockingPaneStickerType@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneContext.cpp