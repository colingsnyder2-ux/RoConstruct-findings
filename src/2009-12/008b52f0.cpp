// roc 2009-12 008b52f0  unit: CXTPDockingPaneSplitterContainer  size: 181 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b52f0
//
// 008b52f0  53                   push ebx
// 008b52f1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 008b52f5  56                   push esi
// 008b52f6  8bf1                 mov esi, ecx
// 008b52f8  85db                 test ebx, ebx
// 008b52fa  0f84a0000000         je 0x8b53a0
// 008b5300  8b8390000000         mov eax, dword ptr [ebx + 0x90]
// 008b5306  8d4e20               lea ecx, [esi + 0x20]
// 008b5309  898690000000         mov dword ptr [esi + 0x90], eax
// 008b530f  e82cb5ffff           call 0x8b0840
// 008b5314  8b88cc000000         mov ecx, dword ptr [eax + 0xcc]
// 008b531a  894e34               mov dword ptr [esi + 0x34], ecx
// 008b531d  8d4b20               lea ecx, [ebx + 0x20]
// 008b5320  e86b54faff           call 0x85a790
// 008b5325  8944240c             mov dword ptr [esp + 0xc], eax
// 008b5329  85c0                 test eax, eax
// 008b532b  744b                 je 0x8b5378
// 008b532d  55                   push ebp
// 008b532e  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 008b5332  57                   push edi
// 008b5333  8d542414             lea edx, [esp + 0x14]
// 008b5337  52                   push edx
// 008b5338  8d4b20               lea ecx, [ebx + 0x20]
// 008b533b  e8d0db0300           call 0x8f2f10
// 008b5340  8bf8                 mov edi, eax
// 008b5342  8b07                 mov eax, dword ptr [edi]
// 008b5344  8b5014               mov edx, dword ptr [eax + 0x14]
// 008b5347  8bcf                 mov ecx, edi
// 008b5349  ffd2                 call edx
// 008b534b  85c0                 test eax, eax
// 008b534d  7404                 je 0x8b5353
// 008b534f  85ed                 test ebp, ebp
// 008b5351  741c                 je 0x8b536f
// 008b5353  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 008b5356  8b07                 mov eax, dword ptr [edi]
// 008b5358  8b5044               mov edx, dword ptr [eax + 0x44]
// 008b535b  6a01                 push 1
// 008b535d  6a00                 push 0
// 008b535f  6a00                 push 0
// 008b5361  55                   push ebp
// 008b5362  51                   push ecx
// 008b5363  8bcf                 mov ecx, edi
// 008b5365  ffd2                 call edx
// 008b5367  50                   push eax
// 008b5368  8bce                 mov ecx, esi
// 008b536a  e831f9ffff           call 0x8b4ca0
// 008b536f  837c241400           cmp dword ptr [esp + 0x14], 0
// 008b5374  75bd                 jne 0x8b5333
// 008b5376  5f                   pop edi
// 008b5377  5d                   pop ebp
// 008b5378  8b4324               mov eax, dword ptr [ebx + 0x24]
// 008b537b  894624               mov dword ptr [esi + 0x24], eax
// 008b537e  8b4b28               mov ecx, dword ptr [ebx + 0x28]
// 008b5381  8d433c               lea eax, [ebx + 0x3c]
// 008b5384  894e28               mov dword ptr [esi + 0x28], ecx
// 008b5387  8b10                 mov edx, dword ptr [eax]
// 008b5389  8d4e3c               lea ecx, [esi + 0x3c]
// 008b538c  8911                 mov dword ptr [ecx], edx
// 008b538e  8b5004               mov edx, dword ptr [eax + 4]
// 008b5391  895104               mov dword ptr [ecx + 4], edx
// 008b5394  8b5008               mov edx, dword ptr [eax + 8]
// 008b5397  895108               mov dword ptr [ecx + 8], edx
// 008b539a  8b400c               mov eax, dword ptr [eax + 0xc]
// 008b539d  89410c               mov dword ptr [ecx + 0xc], eax
// 008b53a0  5e                   pop esi
// 008b53a1  5b                   pop ebx
// 008b53a2  c20800               ret 8
// copied from an identical function in another client (function ?Copy@CXTPDockingPaneSplitterContainer@@IAEXPAV1@PAV?$CMap@PAVCXTPDockingPaneBase@@PAV1@PAV1@PAV1@@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneSplitterContainer.cpp