// roc 2009-12 008393f0  unit: CXTPDockingPaneManager  size: 368 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008393f0
//
// 008393f0  6aff                 push -1
// 008393f2  6868c59500           push 0x95c568
// 008393f7  64a100000000         mov eax, dword ptr fs:[0]
// 008393fd  50                   push eax
// 008393fe  83ec20               sub esp, 0x20
// 00839401  53                   push ebx
// 00839402  55                   push ebp
// 00839403  56                   push esi
// 00839404  57                   push edi
// 00839405  a10052b600           mov eax, dword ptr [0xb65200]
// 0083940a  33c4                 xor eax, esp
// 0083940c  50                   push eax
// 0083940d  8d442434             lea eax, [esp + 0x34]
// 00839411  64a300000000         mov dword ptr fs:[0], eax
// 00839417  8bf9                 mov edi, ecx
// 00839419  8b742444             mov esi, dword ptr [esp + 0x44]
// 0083941d  8b5e30               mov ebx, dword ptr [esi + 0x30]
// 00839420  33ed                 xor ebp, ebp
// 00839422  8bce                 mov ecx, esi
// 00839424  896c2414             mov dword ptr [esp + 0x14], ebp
// 00839428  896c2418             mov dword ptr [esp + 0x18], ebp
// 0083942c  e81f360200           call 0x85ca50
// 00839431  85c0                 test eax, eax
// 00839433  7438                 je 0x83946d
// 00839435  8b4620               mov eax, dword ptr [esi + 0x20]
// 00839438  8b5018               mov edx, dword ptr [eax + 0x18]
// 0083943b  83c620               add esi, 0x20
// 0083943e  8bce                 mov ecx, esi
// 00839440  ffd2                 call edx
// 00839442  8b5020               mov edx, dword ptr [eax + 0x20]
// 00839445  8d4c2414             lea ecx, [esp + 0x14]
// 00839449  51                   push ecx
// 0083944a  52                   push edx
// 0083944b  ff1554cc9800         call dword ptr [0x98cc54]
// 00839451  8b06                 mov eax, dword ptr [esi]
// 00839453  8b5018               mov edx, dword ptr [eax + 0x18]
// 00839456  8bce                 mov ecx, esi
// 00839458  ffd2                 call edx
// 0083945a  8b8030010000         mov eax, dword ptr [eax + 0x130]
// 00839460  3bc5                 cmp eax, ebp
// 00839462  7405                 je 0x839469
// 00839464  8d5820               lea ebx, [eax + 0x20]
// 00839467  eb3e                 jmp 0x8394a7
// 00839469  33db                 xor ebx, ebx
// 0083946b  eb3a                 jmp 0x8394a7
// 0083946d  8d442424             lea eax, [esp + 0x24]
// 00839471  50                   push eax
// 00839472  8bcb                 mov ecx, ebx
// 00839474  e827730700           call 0x8b07a0
// 00839479  3bdd                 cmp ebx, ebp
// 0083947b  7405                 je 0x839482
// 0083947d  8d43ac               lea eax, [ebx - 0x54]
// 00839480  eb02                 jmp 0x839484
// 00839482  33c0                 xor eax, eax
// 00839484  8b8fd4000000         mov ecx, dword ptr [edi + 0xd4]
// 0083948a  8b11                 mov edx, dword ptr [ecx]
// 0083948c  8d742424             lea esi, [esp + 0x24]
// 00839490  56                   push esi
// 00839491  50                   push eax
// 00839492  8b4270               mov eax, dword ptr [edx + 0x70]
// 00839495  ffd0                 call eax
// 00839497  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0083949b  8b542428             mov edx, dword ptr [esp + 0x28]
// 0083949f  894c2414             mov dword ptr [esp + 0x14], ecx
// 008394a3  89542418             mov dword ptr [esp + 0x18], edx
// 008394a7  be64309a00           mov esi, 0x9a3064
// 008394ac  8974241c             mov dword ptr [esp + 0x1c], esi
// 008394b0  896c2420             mov dword ptr [esp + 0x20], ebp
// 008394b4  896c243c             mov dword ptr [esp + 0x3c], ebp
// 008394b8  ff153ccb9800         call dword ptr [0x98cb3c]
// 008394be  50                   push eax
// 008394bf  8d4c2420             lea ecx, [esp + 0x20]
// 008394c3  e810adfbff           call 0x7f41d8
// 008394c8  8d8f48010000         lea ecx, [edi + 0x148]
// 008394ce  ff1580de9800         call dword ptr [0x98de80]
// 008394d4  50                   push eax
// 008394d5  8b442424             mov eax, dword ptr [esp + 0x24]
// 008394d9  6810f00000           push 0xf010
// 008394de  6800040000           push 0x400
// 008394e3  55                   push ebp
// 008394e4  50                   push eax
// 008394e5  ff1540cb9800         call dword ptr [0x98cb40]
// 008394eb  8b87cc000000         mov eax, dword ptr [edi + 0xcc]
// 008394f1  3bc5                 cmp eax, ebp
// 008394f3  7504                 jne 0x8394f9
// 008394f5  33c0                 xor eax, eax
// 008394f7  eb03                 jmp 0x8394fc
// 008394f9  8b4020               mov eax, dword ptr [eax + 0x20]
// 008394fc  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00839500  8b542414             mov edx, dword ptr [esp + 0x14]
// 00839504  55                   push ebp
// 00839505  50                   push eax
// 00839506  8b442428             mov eax, dword ptr [esp + 0x28]
// 0083950a  55                   push ebp
// 0083950b  51                   push ecx
// 0083950c  52                   push edx
// 0083950d  6800010000           push 0x100
// 00839512  50                   push eax
// 00839513  ff1548cb9800         call dword ptr [0x98cb48]
// 00839519  3d10f00000           cmp eax, 0xf010
// 0083951e  7515                 jne 0x839535
// 00839520  8b8f24010000         mov ecx, dword ptr [edi + 0x124]
// 00839526  8b39                 mov edi, dword ptr [ecx]
// 00839528  83c8ff               or eax, 0xffffffff
// 0083952b  0bd0                 or edx, eax
// 0083952d  52                   push edx
// 0083952e  8b5704               mov edx, dword ptr [edi + 4]
// 00839531  50                   push eax
// 00839532  53                   push ebx
// 00839533  ffd2                 call edx
// 00839535  8d4c241c             lea ecx, [esp + 0x1c]
// 00839539  c744243cffffffff     mov dword ptr [esp + 0x3c], 0xffffffff
// 00839541  8974241c             mov dword ptr [esp + 0x1c], esi
// 00839545  e888acfbff           call 0x7f41d2
// 0083954a  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0083954e  64890d00000000       mov dword ptr fs:[0], ecx
// 00839555  59                   pop ecx
// 00839556  5f                   pop edi
// 00839557  5e                   pop esi
// 00839558  5d                   pop ebp
// 00839559  5b                   pop ebx
// 0083955a  83c42c               add esp, 0x2c
// 0083955d  c20400               ret 4
// copied from an identical function in another client (function ?_TrackPopupContextMenu@CXTPDockingPaneManager@@AAEXPAVCXTPDockingPane@@@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/DockingPane/XTPDockingPaneManager.cpp