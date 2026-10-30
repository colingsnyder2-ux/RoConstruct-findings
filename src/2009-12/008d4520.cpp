// roc 2009-12 008d4520  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 166 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d4520
//
// 008d4520  6aff                 push -1
// 008d4522  6828e69500           push 0x95e628
// 008d4527  64a100000000         mov eax, dword ptr fs:[0]
// 008d452d  50                   push eax
// 008d452e  83ec2c               sub esp, 0x2c
// 008d4531  56                   push esi
// 008d4532  a10052b600           mov eax, dword ptr [0xb65200]
// 008d4537  33c4                 xor eax, esp
// 008d4539  50                   push eax
// 008d453a  8d442434             lea eax, [esp + 0x34]
// 008d453e  64a300000000         mov dword ptr fs:[0], eax
// 008d4544  8bf1                 mov esi, ecx
// 008d4546  6a00                 push 0
// 008d4548  8d4c2424             lea ecx, [esp + 0x24]
// 008d454c  e8391f0500           call 0x92648a
// 008d4551  8b461c               mov eax, dword ptr [esi + 0x1c]
// 008d4554  050c010000           add eax, 0x10c
// 008d4559  50                   push eax
// 008d455a  8d442424             lea eax, [esp + 0x24]
// 008d455e  50                   push eax
// 008d455f  8d4c2418             lea ecx, [esp + 0x18]
// 008d4563  c744244400000000     mov dword ptr [esp + 0x44], 0
// 008d456b  e8f070f7ff           call 0x84b660
// 008d4570  8b542428             mov edx, dword ptr [esp + 0x28]
// 008d4574  8d4c2408             lea ecx, [esp + 8]
// 008d4578  51                   push ecx
// 008d4579  6a01                 push 1
// 008d457b  6868619a00           push 0x9a6168
// 008d4580  52                   push edx
// 008d4581  ff156cb19800         call dword ptr [0x98b16c]
// 008d4587  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008d458b  83c003               add eax, 3
// 008d458e  83f812               cmp eax, 0x12
// 008d4591  7d05                 jge 0x8d4598
// 008d4593  b812000000           mov eax, 0x12
// 008d4598  8d4c2410             lea ecx, [esp + 0x10]
// 008d459c  894618               mov dword ptr [esi + 0x18], eax
// 008d459f  e83c71f7ff           call 0x84b6e0
// 008d45a4  8d4c2420             lea ecx, [esp + 0x20]
// 008d45a8  c744243cffffffff     mov dword ptr [esp + 0x3c], 0xffffffff
// 008d45b0  e8cf1e0500           call 0x926484
// 008d45b5  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008d45b9  64890d00000000       mov dword ptr fs:[0], ecx
// 008d45c0  59                   pop ecx
// 008d45c1  5e                   pop esi
// 008d45c2  83c438               add esp, 0x38
// 008d45c5  c3                   ret 
// copied from an identical function in another client (function ?RefreshMetrics@CAppearanceSet@CXTPTabPaintManager@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/TabManager/XTPTabPaintManagerAppearance.cpp