// roc 2010-06 008a3740  unit: CXTPRibbonTabPopupToolBar  size: 380 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a3740
//
// 008a3740  83ec20               sub esp, 0x20
// 008a3743  53                   push ebx
// 008a3744  55                   push ebp
// 008a3745  56                   push esi
// 008a3746  57                   push edi
// 008a3747  8bf1                 mov esi, ecx
// 008a3749  e8424ff1ff           call 0x7b8690
// 008a374e  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 008a3752  8bf8                 mov edi, eax
// 008a3754  56                   push esi
// 008a3755  53                   push ebx
// 008a3756  8bcf                 mov ecx, edi
// 008a3758  e803a3f8ff           call 0x82da60
// 008a375d  8b8e7c020000         mov ecx, dword ptr [esi + 0x27c]
// 008a3763  8b17                 mov edx, dword ptr [edi]
// 008a3765  8b9238010000         mov edx, dword ptr [edx + 0x138]
// 008a376b  83ec10               sub esp, 0x10
// 008a376e  8bc4                 mov eax, esp
// 008a3770  8908                 mov dword ptr [eax], ecx
// 008a3772  8b8e80020000         mov ecx, dword ptr [esi + 0x280]
// 008a3778  894804               mov dword ptr [eax + 4], ecx
// 008a377b  8b8e84020000         mov ecx, dword ptr [esi + 0x284]
// 008a3781  894808               mov dword ptr [eax + 8], ecx
// 008a3784  8b8e88020000         mov ecx, dword ptr [esi + 0x288]
// 008a378a  89480c               mov dword ptr [eax + 0xc], ecx
// 008a378d  8b8674020000         mov eax, dword ptr [esi + 0x274]
// 008a3793  50                   push eax
// 008a3794  53                   push ebx
// 008a3795  8bcf                 mov ecx, edi
// 008a3797  ffd2                 call edx
// 008a3799  6a01                 push 1
// 008a379b  8bcb                 mov ecx, ebx
// 008a379d  e812960d00           call 0x97cdb4
// 008a37a2  8b8674020000         mov eax, dword ptr [esi + 0x274]
// 008a37a8  8ba884000000         mov ebp, dword ptr [eax + 0x84]
// 008a37ae  8b4528               mov eax, dword ptr [ebp + 0x28]
// 008a37b1  33db                 xor ebx, ebx
// 008a37b3  85c0                 test eax, eax
// 008a37b5  0f8e9a000000         jle 0x8a3855
// 008a37bb  eb03                 jmp 0x8a37c0
// 008a37bd  8d4900               lea ecx, [ecx]
// 008a37c0  85db                 test ebx, ebx
// 008a37c2  7c15                 jl 0x8a37d9
// 008a37c4  3bd8                 cmp ebx, eax
// 008a37c6  7d11                 jge 0x8a37d9
// 008a37c8  3b5d28               cmp ebx, dword ptr [ebp + 0x28]
// 008a37cb  0f8de6000000         jge 0x8a38b7
// 008a37d1  8b4d24               mov ecx, dword ptr [ebp + 0x24]
// 008a37d4  8b3c99               mov edi, dword ptr [ecx + ebx*4]
// 008a37d7  eb02                 jmp 0x8a37db
// 008a37d9  33ff                 xor edi, edi
// 008a37db  8bcf                 mov ecx, edi
// 008a37dd  e88eabffff           call 0x89e370
// 008a37e2  85c0                 test eax, eax
// 008a37e4  7463                 je 0x8a3849
// 008a37e6  8b4738               mov eax, dword ptr [edi + 0x38]
// 008a37e9  8b5734               mov edx, dword ptr [edi + 0x34]
// 008a37ec  8b4f3c               mov ecx, dword ptr [edi + 0x3c]
// 008a37ef  89542410             mov dword ptr [esp + 0x10], edx
// 008a37f3  8b5740               mov edx, dword ptr [edi + 0x40]
// 008a37f6  89442414             mov dword ptr [esp + 0x14], eax
// 008a37fa  8d442410             lea eax, [esp + 0x10]
// 008a37fe  894c2418             mov dword ptr [esp + 0x18], ecx
// 008a3802  50                   push eax
// 008a3803  8d4c243c             lea ecx, [esp + 0x3c]
// 008a3807  89542420             mov dword ptr [esp + 0x20], edx
// 008a380b  51                   push ecx
// 008a380c  8d542428             lea edx, [esp + 0x28]
// 008a3810  52                   push edx
// 008a3811  ff15a4ba9e00         call dword ptr [0x9ebaa4]
// 008a3817  85c0                 test eax, eax
// 008a3819  742e                 je 0x8a3849
// 008a381b  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008a381f  8b17                 mov edx, dword ptr [edi]
// 008a3821  8b5260               mov edx, dword ptr [edx + 0x60]
// 008a3824  83ec10               sub esp, 0x10
// 008a3827  8bc4                 mov eax, esp
// 008a3829  8908                 mov dword ptr [eax], ecx
// 008a382b  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008a382f  894804               mov dword ptr [eax + 4], ecx
// 008a3832  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 008a3836  894808               mov dword ptr [eax + 8], ecx
// 008a3839  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 008a383d  89480c               mov dword ptr [eax + 0xc], ecx
// 008a3840  8b442444             mov eax, dword ptr [esp + 0x44]
// 008a3844  50                   push eax
// 008a3845  8bcf                 mov ecx, edi
// 008a3847  ffd2                 call edx
// 008a3849  8b4528               mov eax, dword ptr [ebp + 0x28]
// 008a384c  43                   inc ebx
// 008a384d  3bd8                 cmp ebx, eax
// 008a384f  0f8c6bffffff         jl 0x8a37c0
// 008a3855  8b8e68020000         mov ecx, dword ptr [esi + 0x268]
// 008a385b  8b01                 mov eax, dword ptr [ecx]
// 008a385d  8b9080000000         mov edx, dword ptr [eax + 0x80]
// 008a3863  6a00                 push 0
// 008a3865  ffd2                 call edx
// 008a3867  85c0                 test eax, eax
// 008a3869  7415                 je 0x8a3880
// 008a386b  8b8e68020000         mov ecx, dword ptr [esi + 0x268]
// 008a3871  8b01                 mov eax, dword ptr [ecx]
// 008a3873  8b542434             mov edx, dword ptr [esp + 0x34]
// 008a3877  8b80a0000000         mov eax, dword ptr [eax + 0xa0]
// 008a387d  52                   push edx
// 008a387e  ffd0                 call eax
// 008a3880  8b8e6c020000         mov ecx, dword ptr [esi + 0x26c]
// 008a3886  8b11                 mov edx, dword ptr [ecx]
// 008a3888  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 008a388e  6a00                 push 0
// 008a3890  ffd0                 call eax
// 008a3892  85c0                 test eax, eax
// 008a3894  7417                 je 0x8a38ad
// 008a3896  8bb66c020000         mov esi, dword ptr [esi + 0x26c]
// 008a389c  8b16                 mov edx, dword ptr [esi]
// 008a389e  8b442434             mov eax, dword ptr [esp + 0x34]
// 008a38a2  8b92a0000000         mov edx, dword ptr [edx + 0xa0]
// 008a38a8  50                   push eax
// 008a38a9  8bce                 mov ecx, esi
// 008a38ab  ffd2                 call edx
// 008a38ad  5f                   pop edi
// 008a38ae  5e                   pop esi
// 008a38af  5d                   pop ebp
// 008a38b0  5b                   pop ebx
// 008a38b1  83c420               add esp, 0x20
// 008a38b4  c21400               ret 0x14
// 008a38b7  e89043f0ff           call 0x7a7c4c
// copied from an identical function in another client (function ?DrawCommandBar@CXTPRibbonTabPopupToolBar@@UAEXPAVCDC@@VCRect@@@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonPopups.cpp