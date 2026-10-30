// roc 2009-12 008af150  unit: CXTPDockingPaneMiniWnd  size: 430 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008af150
//
// 008af150  6aff                 push -1
// 008af152  68992d9600           push 0x962d99
// 008af157  64a100000000         mov eax, dword ptr fs:[0]
// 008af15d  50                   push eax
// 008af15e  83ec30               sub esp, 0x30
// 008af161  53                   push ebx
// 008af162  55                   push ebp
// 008af163  56                   push esi
// 008af164  57                   push edi
// 008af165  a10052b600           mov eax, dword ptr [0xb65200]
// 008af16a  33c4                 xor eax, esp
// 008af16c  50                   push eax
// 008af16d  8d442444             lea eax, [esp + 0x44]
// 008af171  64a300000000         mov dword ptr fs:[0], eax
// 008af177  8bf1                 mov esi, ecx
// 008af179  89742418             mov dword ptr [esp + 0x18], esi
// 008af17d  e87ef5ffff           call 0x8ae700
// 008af182  85c0                 test eax, eax
// 008af184  0f84c7000000         je 0x8af251
// 008af18a  56                   push esi
// 008af18b  8d4c2438             lea ecx, [esp + 0x38]
// 008af18f  e8dcc0f9ff           call 0x84b270
// 008af194  8b442434             mov eax, dword ptr [esp + 0x34]
// 008af198  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008af19c  8d54241c             lea edx, [esp + 0x1c]
// 008af1a0  8944241c             mov dword ptr [esp + 0x1c], eax
// 008af1a4  8b4620               mov eax, dword ptr [esi + 0x20]
// 008af1a7  52                   push edx
// 008af1a8  50                   push eax
// 008af1a9  894c2428             mov dword ptr [esp + 0x28], ecx
// 008af1ad  ff1534cc9800         call dword ptr [0x98cc34]
// 008af1b3  8bce                 mov ecx, esi
// 008af1b5  e8be720700           call 0x926478
// 008af1ba  a900004000           test eax, 0x400000
// 008af1bf  740c                 je 0x8af1cd
// 008af1c1  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008af1c5  2b4c243c             sub ecx, dword ptr [esp + 0x3c]
// 008af1c9  014c241c             add dword ptr [esp + 0x1c], ecx
// 008af1cd  8b8624010000         mov eax, dword ptr [esi + 0x124]
// 008af1d3  33ff                 xor edi, edi
// 008af1d5  397808               cmp dword ptr [eax + 8], edi
// 008af1d8  7e77                 jle 0x8af251
// 008af1da  8b1d6ccc9800         mov ebx, dword ptr [0x98cc6c]
// 008af1e0  8b2d5cca9800         mov ebp, dword ptr [0x98ca5c]
// 008af1e6  85ff                 test edi, edi
// 008af1e8  0f8c0b010000         jl 0x8af2f9
// 008af1ee  3b7808               cmp edi, dword ptr [eax + 8]
// 008af1f1  0f8d02010000         jge 0x8af2f9
// 008af1f7  8b5004               mov edx, dword ptr [eax + 4]
// 008af1fa  8b34ba               mov esi, dword ptr [edx + edi*4]
// 008af1fd  8d04ba               lea eax, [edx + edi*4]
// 008af200  8b06                 mov eax, dword ptr [esi]
// 008af202  89442424             mov dword ptr [esp + 0x24], eax
// 008af206  8b4e04               mov ecx, dword ptr [esi + 4]
// 008af209  894c2428             mov dword ptr [esp + 0x28], ecx
// 008af20d  8b5608               mov edx, dword ptr [esi + 8]
// 008af210  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008af214  8954242c             mov dword ptr [esp + 0x2c], edx
// 008af218  8b460c               mov eax, dword ptr [esi + 0xc]
// 008af21b  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008af21f  51                   push ecx
// 008af220  89442434             mov dword ptr [esp + 0x34], eax
// 008af224  52                   push edx
// 008af225  8d44242c             lea eax, [esp + 0x2c]
// 008af229  50                   push eax
// 008af22a  ffd3                 call ebx
// 008af22c  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 008af230  8b542454             mov edx, dword ptr [esp + 0x54]
// 008af234  51                   push ecx
// 008af235  52                   push edx
// 008af236  8d44242c             lea eax, [esp + 0x2c]
// 008af23a  50                   push eax
// 008af23b  ffd5                 call ebp
// 008af23d  85c0                 test eax, eax
// 008af23f  7529                 jne 0x8af26a
// 008af241  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008af245  8b8124010000         mov eax, dword ptr [ecx + 0x124]
// 008af24b  47                   inc edi
// 008af24c  3b7808               cmp edi, dword ptr [eax + 8]
// 008af24f  7c95                 jl 0x8af1e6
// 008af251  83c8ff               or eax, 0xffffffff
// 008af254  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008af258  64890d00000000       mov dword ptr fs:[0], ecx
// 008af25f  59                   pop ecx
// 008af260  5f                   pop edi
// 008af261  5e                   pop esi
// 008af262  5d                   pop ebp
// 008af263  5b                   pop ebx
// 008af264  83c43c               add esp, 0x3c
// 008af267  c20c00               ret 0xc
// 008af26a  8b7614               mov esi, dword ptr [esi + 0x14]
// 008af26d  8d4c2414             lea ecx, [esp + 0x14]
// 008af271  ff1574de9800         call dword ptr [0x98de74]
// 008af277  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 008af27f  e81cf6fbff           call 0x86e8a0
// 008af284  8b10                 mov edx, dword ptr [eax]
// 008af286  8b5208               mov edx, dword ptr [edx + 8]
// 008af289  56                   push esi
// 008af28a  8d4c2418             lea ecx, [esp + 0x18]
// 008af28e  51                   push ecx
// 008af28f  8bc8                 mov ecx, eax
// 008af291  ffd2                 call edx
// 008af293  8d4c2414             lea ecx, [esp + 0x14]
// 008af297  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008af29d  85c0                 test eax, eax
// 008af29f  750c                 jne 0x8af2ad
// 008af2a1  8d4c2414             lea ecx, [esp + 0x14]
// 008af2a5  ff15c0de9800         call dword ptr [0x98dec0]
// 008af2ab  eba4                 jmp 0x8af251
// 008af2ad  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008af2b1  8b542428             mov edx, dword ptr [esp + 0x28]
// 008af2b5  8d442414             lea eax, [esp + 0x14]
// 008af2b9  50                   push eax
// 008af2ba  56                   push esi
// 008af2bb  83ec10               sub esp, 0x10
// 008af2be  8bc4                 mov eax, esp
// 008af2c0  8908                 mov dword ptr [eax], ecx
// 008af2c2  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008af2c6  895004               mov dword ptr [eax + 4], edx
// 008af2c9  8b542448             mov edx, dword ptr [esp + 0x48]
// 008af2cd  894808               mov dword ptr [eax + 8], ecx
// 008af2d0  89500c               mov dword ptr [eax + 0xc], edx
// 008af2d3  8b442430             mov eax, dword ptr [esp + 0x30]
// 008af2d7  8b4820               mov ecx, dword ptr [eax + 0x20]
// 008af2da  8b542474             mov edx, dword ptr [esp + 0x74]
// 008af2de  51                   push ecx
// 008af2df  52                   push edx
// 008af2e0  e84b0dfbff           call 0x860030
// 008af2e5  83c420               add esp, 0x20
// 008af2e8  8d4c2414             lea ecx, [esp + 0x14]
// 008af2ec  ff15c0de9800         call dword ptr [0x98dec0]
// 008af2f2  8bc6                 mov eax, esi
// 008af2f4  e95bffffff           jmp 0x8af254
// 008af2f9  e80e48f4ff           call 0x7f3b0c
// copied from an identical function in another client (function ?OnToolHitTest@CXTPDockingPaneMiniWnd@@MBEHVCPoint@@PAUtagTOOLINFOA@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\DockingPane\XTPDockingPaneMiniWnd.cpp