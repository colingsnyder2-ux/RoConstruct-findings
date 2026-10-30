// roc 2009-12 0085d2a0  unit: CXTPDockingPane  size: 220 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085d2a0
//
// 0085d2a0  6aff                 push -1
// 0085d2a2  68c8fc9500           push 0x95fcc8
// 0085d2a7  64a100000000         mov eax, dword ptr fs:[0]
// 0085d2ad  50                   push eax
// 0085d2ae  83ec10               sub esp, 0x10
// 0085d2b1  56                   push esi
// 0085d2b2  57                   push edi
// 0085d2b3  a10052b600           mov eax, dword ptr [0xb65200]
// 0085d2b8  33c4                 xor eax, esp
// 0085d2ba  50                   push eax
// 0085d2bb  8d44241c             lea eax, [esp + 0x1c]
// 0085d2bf  64a300000000         mov dword ptr fs:[0], eax
// 0085d2c5  8bf1                 mov esi, ecx
// 0085d2c7  8b46c4               mov eax, dword ptr [esi - 0x3c]
// 0085d2ca  50                   push eax
// 0085d2cb  8d4c2410             lea ecx, [esp + 0x10]
// 0085d2cf  e85c68f9ff           call 0x7f3b30
// 0085d2d4  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 0085d2d8  c70700000000         mov dword ptr [edi], 0
// 0085d2de  8b46d8               mov eax, dword ptr [esi - 0x28]
// 0085d2e1  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0085d2e9  85c0                 test eax, eax
// 0085d2eb  744c                 je 0x85d339
// 0085d2ed  8d48ac               lea ecx, [eax - 0x54]
// 0085d2f0  6a01                 push 1
// 0085d2f2  e83f910c00           call 0x926436
// 0085d2f7  8907                 mov dword ptr [edi], eax
// 0085d2f9  8b442410             mov eax, dword ptr [esp + 0x10]
// 0085d2fd  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0085d305  85c0                 test eax, eax
// 0085d307  7407                 je 0x85d310
// 0085d309  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0085d30d  894804               mov dword ptr [eax + 4], ecx
// 0085d310  837c241800           cmp dword ptr [esp + 0x18], 0
// 0085d315  740c                 je 0x85d323
// 0085d317  8b542414             mov edx, dword ptr [esp + 0x14]
// 0085d31b  52                   push edx
// 0085d31c  6a00                 push 0
// 0085d31e  e80168f9ff           call 0x7f3b24
// 0085d323  33c0                 xor eax, eax
// 0085d325  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0085d329  64890d00000000       mov dword ptr fs:[0], ecx
// 0085d330  59                   pop ecx
// 0085d331  5f                   pop edi
// 0085d332  5e                   pop esi
// 0085d333  83c41c               add esp, 0x1c
// 0085d336  c20400               ret 4
// 0085d339  8b442410             mov eax, dword ptr [esp + 0x10]
// 0085d33d  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0085d345  85c0                 test eax, eax
// 0085d347  7407                 je 0x85d350
// 0085d349  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0085d34d  894804               mov dword ptr [eax + 4], ecx
// 0085d350  837c241800           cmp dword ptr [esp + 0x18], 0
// 0085d355  740c                 je 0x85d363
// 0085d357  8b542414             mov edx, dword ptr [esp + 0x14]
// 0085d35b  52                   push edx
// 0085d35c  6a00                 push 0
// 0085d35e  e8c167f9ff           call 0x7f3b24
// 0085d363  b805400080           mov eax, 0x80004005
// 0085d368  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0085d36c  64890d00000000       mov dword ptr fs:[0], ecx
// 0085d373  59                   pop ecx
// 0085d374  5f                   pop edi
// 0085d375  5e                   pop esi
// 0085d376  83c41c               add esp, 0x1c
// 0085d379  c20400               ret 4
// copied from an identical function in another client (function ?GetAccessibleParent@CXTPDockingPane@@MAEJPAPAUIDispatch@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPane.cpp