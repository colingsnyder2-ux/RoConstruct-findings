// roc 2011-06 008c0670  unit: CXTPDockingPaneMiniWnd  size: 430 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c0670
//
// 008c0670  6aff                 push -1
// 008c0672  68a9bfa000           push 0xa0bfa9
// 008c0677  64a100000000         mov eax, dword ptr fs:[0]
// 008c067d  50                   push eax
// 008c067e  83ec30               sub esp, 0x30
// 008c0681  53                   push ebx
// 008c0682  55                   push ebp
// 008c0683  56                   push esi
// 008c0684  57                   push edi
// 008c0685  a12058c900           mov eax, dword ptr [0xc95820]
// 008c068a  33c4                 xor eax, esp
// 008c068c  50                   push eax
// 008c068d  8d442444             lea eax, [esp + 0x44]
// 008c0691  64a300000000         mov dword ptr fs:[0], eax
// 008c0697  8bf1                 mov esi, ecx
// 008c0699  89742418             mov dword ptr [esp + 0x18], esi
// 008c069d  e87ef5ffff           call 0x8bfc20
// 008c06a2  85c0                 test eax, eax
// 008c06a4  0f84c7000000         je 0x8c0771
// 008c06aa  56                   push esi
// 008c06ab  8d4c2438             lea ecx, [esp + 0x38]
// 008c06af  e87cc6f9ff           call 0x85cd30
// 008c06b4  8b442434             mov eax, dword ptr [esp + 0x34]
// 008c06b8  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008c06bc  8d54241c             lea edx, [esp + 0x1c]
// 008c06c0  8944241c             mov dword ptr [esp + 0x1c], eax
// 008c06c4  8b4620               mov eax, dword ptr [esi + 0x20]
// 008c06c7  52                   push edx
// 008c06c8  50                   push eax
// 008c06c9  894c2428             mov dword ptr [esp + 0x28], ecx
// 008c06cd  ff15f419a400         call dword ptr [0xa419f4]
// 008c06d3  8bce                 mov ecx, esi
// 008c06d5  e844bf1000           call 0x9cc61e
// 008c06da  a900004000           test eax, 0x400000
// 008c06df  740c                 je 0x8c06ed
// 008c06e1  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008c06e5  2b4c243c             sub ecx, dword ptr [esp + 0x3c]
// 008c06e9  014c241c             add dword ptr [esp + 0x1c], ecx
// 008c06ed  8b8624010000         mov eax, dword ptr [esi + 0x124]
// 008c06f3  33ff                 xor edi, edi
// 008c06f5  397808               cmp dword ptr [eax + 8], edi
// 008c06f8  7e77                 jle 0x8c0771
// 008c06fa  8b1d601ca400         mov ebx, dword ptr [0xa41c60]
// 008c0700  8b2d101ca400         mov ebp, dword ptr [0xa41c10]
// 008c0706  85ff                 test edi, edi
// 008c0708  0f8c0b010000         jl 0x8c0819
// 008c070e  3b7808               cmp edi, dword ptr [eax + 8]
// 008c0711  0f8d02010000         jge 0x8c0819
// 008c0717  8b5004               mov edx, dword ptr [eax + 4]
// 008c071a  8b34ba               mov esi, dword ptr [edx + edi*4]
// 008c071d  8d04ba               lea eax, [edx + edi*4]
// 008c0720  8b06                 mov eax, dword ptr [esi]
// 008c0722  89442424             mov dword ptr [esp + 0x24], eax
// 008c0726  8b4e04               mov ecx, dword ptr [esi + 4]
// 008c0729  894c2428             mov dword ptr [esp + 0x28], ecx
// 008c072d  8b5608               mov edx, dword ptr [esi + 8]
// 008c0730  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008c0734  8954242c             mov dword ptr [esp + 0x2c], edx
// 008c0738  8b460c               mov eax, dword ptr [esi + 0xc]
// 008c073b  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008c073f  51                   push ecx
// 008c0740  89442434             mov dword ptr [esp + 0x34], eax
// 008c0744  52                   push edx
// 008c0745  8d44242c             lea eax, [esp + 0x2c]
// 008c0749  50                   push eax
// 008c074a  ffd3                 call ebx
// 008c074c  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 008c0750  8b542454             mov edx, dword ptr [esp + 0x54]
// 008c0754  51                   push ecx
// 008c0755  52                   push edx
// 008c0756  8d44242c             lea eax, [esp + 0x2c]
// 008c075a  50                   push eax
// 008c075b  ffd5                 call ebp
// 008c075d  85c0                 test eax, eax
// 008c075f  7529                 jne 0x8c078a
// 008c0761  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008c0765  8b8124010000         mov eax, dword ptr [ecx + 0x124]
// 008c076b  47                   inc edi
// 008c076c  3b7808               cmp edi, dword ptr [eax + 8]
// 008c076f  7c95                 jl 0x8c0706
// 008c0771  83c8ff               or eax, 0xffffffff
// 008c0774  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008c0778  64890d00000000       mov dword ptr fs:[0], ecx
// 008c077f  59                   pop ecx
// 008c0780  5f                   pop edi
// 008c0781  5e                   pop esi
// 008c0782  5d                   pop ebp
// 008c0783  5b                   pop ebx
// 008c0784  83c43c               add esp, 0x3c
// 008c0787  c20c00               ret 0xc
// 008c078a  8b7614               mov esi, dword ptr [esi + 0x14]
// 008c078d  8d4c2414             lea ecx, [esp + 0x14]
// 008c0791  ff15b42da400         call dword ptr [0xa42db4]
// 008c0797  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 008c079f  e89cf7fbff           call 0x87ff40
// 008c07a4  8b10                 mov edx, dword ptr [eax]
// 008c07a6  8b5208               mov edx, dword ptr [edx + 8]
// 008c07a9  56                   push esi
// 008c07aa  8d4c2418             lea ecx, [esp + 0x18]
// 008c07ae  51                   push ecx
// 008c07af  8bc8                 mov ecx, eax
// 008c07b1  ffd2                 call edx
// 008c07b3  8d4c2414             lea ecx, [esp + 0x14]
// 008c07b7  ff15a826a400         call dword ptr [0xa426a8]
// 008c07bd  85c0                 test eax, eax
// 008c07bf  750c                 jne 0x8c07cd
// 008c07c1  8d4c2414             lea ecx, [esp + 0x14]
// 008c07c5  ff15082ea400         call dword ptr [0xa42e08]
// 008c07cb  eba4                 jmp 0x8c0771
// 008c07cd  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008c07d1  8b542428             mov edx, dword ptr [esp + 0x28]
// 008c07d5  8d442414             lea eax, [esp + 0x14]
// 008c07d9  50                   push eax
// 008c07da  56                   push esi
// 008c07db  83ec10               sub esp, 0x10
// 008c07de  8bc4                 mov eax, esp
// 008c07e0  8908                 mov dword ptr [eax], ecx
// 008c07e2  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008c07e6  895004               mov dword ptr [eax + 4], edx
// 008c07e9  8b542448             mov edx, dword ptr [esp + 0x48]
// 008c07ed  894808               mov dword ptr [eax + 8], ecx
// 008c07f0  89500c               mov dword ptr [eax + 0xc], edx
// 008c07f3  8b442430             mov eax, dword ptr [esp + 0x30]
// 008c07f7  8b4820               mov ecx, dword ptr [eax + 0x20]
// 008c07fa  8b542474             mov edx, dword ptr [esp + 0x74]
// 008c07fe  51                   push ecx
// 008c07ff  52                   push edx
// 008c0800  e89b10fbff           call 0x8718a0
// 008c0805  83c420               add esp, 0x20
// 008c0808  8d4c2414             lea ecx, [esp + 0x14]
// 008c080c  ff15082ea400         call dword ptr [0xa42e08]
// 008c0812  8bc6                 mov eax, esi
// 008c0814  e95bffffff           jmp 0x8c0774
// 008c0819  e8ec9af4ff           call 0x80a30a
// copied from an identical function in another client (function ?OnToolHitTest@CXTPDockingPaneMiniWnd@@MBEHVCPoint@@PAUtagTOOLINFOA@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\DockingPane\XTPDockingPaneMiniWnd.cpp