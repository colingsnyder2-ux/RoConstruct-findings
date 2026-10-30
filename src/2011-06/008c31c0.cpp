// roc 2011-06 008c31c0  unit: CXTPDockingPaneTabbedContainer  size: 280 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c31c0
//
// 008c31c0  6aff                 push -1
// 008c31c2  6869c1a000           push 0xa0c169
// 008c31c7  64a100000000         mov eax, dword ptr fs:[0]
// 008c31cd  50                   push eax
// 008c31ce  53                   push ebx
// 008c31cf  55                   push ebp
// 008c31d0  56                   push esi
// 008c31d1  57                   push edi
// 008c31d2  a12058c900           mov eax, dword ptr [0xc95820]
// 008c31d7  33c4                 xor eax, esp
// 008c31d9  50                   push eax
// 008c31da  8d442414             lea eax, [esp + 0x14]
// 008c31de  64a300000000         mov dword ptr fs:[0], eax
// 008c31e4  8bf9                 mov edi, ecx
// 008c31e6  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 008c31ea  8b442428             mov eax, dword ptr [esp + 0x28]
// 008c31ee  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008c31f2  55                   push ebp
// 008c31f3  50                   push eax
// 008c31f4  51                   push ecx
// 008c31f5  8bcf                 mov ecx, edi
// 008c31f7  e8fe6ef4ff           call 0x80a0fa
// 008c31fc  83f8ff               cmp eax, -1
// 008c31ff  0f85bd000000         jne 0x8c32c2
// 008c3205  8b542428             mov edx, dword ptr [esp + 0x28]
// 008c3209  8b442424             mov eax, dword ptr [esp + 0x24]
// 008c320d  52                   push edx
// 008c320e  50                   push eax
// 008c320f  8bcf                 mov ecx, edi
// 008c3211  e82affffff           call 0x8c3140
// 008c3216  8bf0                 mov esi, eax
// 008c3218  85f6                 test esi, esi
// 008c321a  0f8482000000         je 0x8c32a2
// 008c3220  8b5e14               mov ebx, dword ptr [esi + 0x14]
// 008c3223  8d4c242c             lea ecx, [esp + 0x2c]
// 008c3227  ff15b42da400         call dword ptr [0xa42db4]
// 008c322d  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 008c3235  e806cdfbff           call 0x87ff40
// 008c323a  8b10                 mov edx, dword ptr [eax]
// 008c323c  8b5208               mov edx, dword ptr [edx + 8]
// 008c323f  53                   push ebx
// 008c3240  8d4c2430             lea ecx, [esp + 0x30]
// 008c3244  51                   push ecx
// 008c3245  8bc8                 mov ecx, eax
// 008c3247  ffd2                 call edx
// 008c3249  8d4c242c             lea ecx, [esp + 0x2c]
// 008c324d  ff15a826a400         call dword ptr [0xa426a8]
// 008c3253  85c0                 test eax, eax
// 008c3255  750f                 jne 0x8c3266
// 008c3257  8d4c242c             lea ecx, [esp + 0x2c]
// 008c325b  ff15082ea400         call dword ptr [0xa42e08]
// 008c3261  83c8ff               or eax, 0xffffffff
// 008c3264  eb5c                 jmp 0x8c32c2
// 008c3266  8b0e                 mov ecx, dword ptr [esi]
// 008c3268  8b5604               mov edx, dword ptr [esi + 4]
// 008c326b  8d44242c             lea eax, [esp + 0x2c]
// 008c326f  50                   push eax
// 008c3270  53                   push ebx
// 008c3271  83ec10               sub esp, 0x10
// 008c3274  8bc4                 mov eax, esp
// 008c3276  8908                 mov dword ptr [eax], ecx
// 008c3278  8b4e08               mov ecx, dword ptr [esi + 8]
// 008c327b  895004               mov dword ptr [eax + 4], edx
// 008c327e  8b560c               mov edx, dword ptr [esi + 0xc]
// 008c3281  894808               mov dword ptr [eax + 8], ecx
// 008c3284  89500c               mov dword ptr [eax + 0xc], edx
// 008c3287  8b4720               mov eax, dword ptr [edi + 0x20]
// 008c328a  50                   push eax
// 008c328b  55                   push ebp
// 008c328c  e80fe6faff           call 0x8718a0
// 008c3291  83c420               add esp, 0x20
// 008c3294  8d4c242c             lea ecx, [esp + 0x2c]
// 008c3298  ff15082ea400         call dword ptr [0xa42e08]
// 008c329e  8bc3                 mov eax, ebx
// 008c32a0  eb20                 jmp 0x8c32c2
// 008c32a2  8b442428             mov eax, dword ptr [esp + 0x28]
// 008c32a6  8b97a8000000         mov edx, dword ptr [edi + 0xa8]
// 008c32ac  8b5250               mov edx, dword ptr [edx + 0x50]
// 008c32af  55                   push ebp
// 008c32b0  50                   push eax
// 008c32b1  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008c32b5  8d8fa8000000         lea ecx, [edi + 0xa8]
// 008c32bb  50                   push eax
// 008c32bc  8b4720               mov eax, dword ptr [edi + 0x20]
// 008c32bf  50                   push eax
// 008c32c0  ffd2                 call edx
// 008c32c2  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008c32c6  64890d00000000       mov dword ptr fs:[0], ecx
// 008c32cd  59                   pop ecx
// 008c32ce  5f                   pop edi
// 008c32cf  5e                   pop esi
// 008c32d0  5d                   pop ebp
// 008c32d1  5b                   pop ebx
// 008c32d2  83c40c               add esp, 0xc
// 008c32d5  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnToolHitTest@CXTPDockingPaneTabbedContainer@@MBEHVCPoint@@PAUtagTOOLINFOA@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\DockingPane\XTPDockingPaneTabbedContainer.cpp