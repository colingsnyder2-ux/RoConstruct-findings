// roc 2009-12 008ef550  unit: CXTPRibbonTabPopupToolBar  size: 380 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ef550
//
// 008ef550  83ec20               sub esp, 0x20
// 008ef553  53                   push ebx
// 008ef554  55                   push ebp
// 008ef555  56                   push esi
// 008ef556  57                   push edi
// 008ef557  8bf1                 mov esi, ecx
// 008ef559  e83250f1ff           call 0x804590
// 008ef55e  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 008ef562  8bf8                 mov edi, eax
// 008ef564  56                   push esi
// 008ef565  53                   push ebx
// 008ef566  8bcf                 mov ecx, edi
// 008ef568  e8c335f8ff           call 0x872b30
// 008ef56d  8b8e7c020000         mov ecx, dword ptr [esi + 0x27c]
// 008ef573  8b17                 mov edx, dword ptr [edi]
// 008ef575  8b9238010000         mov edx, dword ptr [edx + 0x138]
// 008ef57b  83ec10               sub esp, 0x10
// 008ef57e  8bc4                 mov eax, esp
// 008ef580  8908                 mov dword ptr [eax], ecx
// 008ef582  8b8e80020000         mov ecx, dword ptr [esi + 0x280]
// 008ef588  894804               mov dword ptr [eax + 4], ecx
// 008ef58b  8b8e84020000         mov ecx, dword ptr [esi + 0x284]
// 008ef591  894808               mov dword ptr [eax + 8], ecx
// 008ef594  8b8e88020000         mov ecx, dword ptr [esi + 0x288]
// 008ef59a  89480c               mov dword ptr [eax + 0xc], ecx
// 008ef59d  8b8674020000         mov eax, dword ptr [esi + 0x274]
// 008ef5a3  50                   push eax
// 008ef5a4  53                   push ebx
// 008ef5a5  8bcf                 mov ecx, edi
// 008ef5a7  ffd2                 call edx
// 008ef5a9  6a01                 push 1
// 008ef5ab  8bcb                 mov ecx, ebx
// 008ef5ad  e8de6e0300           call 0x926490
// 008ef5b2  8b8674020000         mov eax, dword ptr [esi + 0x274]
// 008ef5b8  8ba884000000         mov ebp, dword ptr [eax + 0x84]
// 008ef5be  8b4528               mov eax, dword ptr [ebp + 0x28]
// 008ef5c1  33db                 xor ebx, ebx
// 008ef5c3  85c0                 test eax, eax
// 008ef5c5  0f8e9a000000         jle 0x8ef665
// 008ef5cb  eb03                 jmp 0x8ef5d0
// 008ef5cd  8d4900               lea ecx, [ecx]
// 008ef5d0  85db                 test ebx, ebx
// 008ef5d2  7c15                 jl 0x8ef5e9
// 008ef5d4  3bd8                 cmp ebx, eax
// 008ef5d6  7d11                 jge 0x8ef5e9
// 008ef5d8  3b5d28               cmp ebx, dword ptr [ebp + 0x28]
// 008ef5db  0f8de6000000         jge 0x8ef6c7
// 008ef5e1  8b4d24               mov ecx, dword ptr [ebp + 0x24]
// 008ef5e4  8b3c99               mov edi, dword ptr [ecx + ebx*4]
// 008ef5e7  eb02                 jmp 0x8ef5eb
// 008ef5e9  33ff                 xor edi, edi
// 008ef5eb  8bcf                 mov ecx, edi
// 008ef5ed  e86e9fffff           call 0x8e9560
// 008ef5f2  85c0                 test eax, eax
// 008ef5f4  7463                 je 0x8ef659
// 008ef5f6  8b4738               mov eax, dword ptr [edi + 0x38]
// 008ef5f9  8b5734               mov edx, dword ptr [edi + 0x34]
// 008ef5fc  8b4f3c               mov ecx, dword ptr [edi + 0x3c]
// 008ef5ff  89542410             mov dword ptr [esp + 0x10], edx
// 008ef603  8b5740               mov edx, dword ptr [edi + 0x40]
// 008ef606  89442414             mov dword ptr [esp + 0x14], eax
// 008ef60a  8d442410             lea eax, [esp + 0x10]
// 008ef60e  894c2418             mov dword ptr [esp + 0x18], ecx
// 008ef612  50                   push eax
// 008ef613  8d4c243c             lea ecx, [esp + 0x3c]
// 008ef617  89542420             mov dword ptr [esp + 0x20], edx
// 008ef61b  51                   push ecx
// 008ef61c  8d542428             lea edx, [esp + 0x28]
// 008ef620  52                   push edx
// 008ef621  ff15dcca9800         call dword ptr [0x98cadc]
// 008ef627  85c0                 test eax, eax
// 008ef629  742e                 je 0x8ef659
// 008ef62b  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008ef62f  8b17                 mov edx, dword ptr [edi]
// 008ef631  8b5260               mov edx, dword ptr [edx + 0x60]
// 008ef634  83ec10               sub esp, 0x10
// 008ef637  8bc4                 mov eax, esp
// 008ef639  8908                 mov dword ptr [eax], ecx
// 008ef63b  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008ef63f  894804               mov dword ptr [eax + 4], ecx
// 008ef642  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 008ef646  894808               mov dword ptr [eax + 8], ecx
// 008ef649  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 008ef64d  89480c               mov dword ptr [eax + 0xc], ecx
// 008ef650  8b442444             mov eax, dword ptr [esp + 0x44]
// 008ef654  50                   push eax
// 008ef655  8bcf                 mov ecx, edi
// 008ef657  ffd2                 call edx
// 008ef659  8b4528               mov eax, dword ptr [ebp + 0x28]
// 008ef65c  43                   inc ebx
// 008ef65d  3bd8                 cmp ebx, eax
// 008ef65f  0f8c6bffffff         jl 0x8ef5d0
// 008ef665  8b8e68020000         mov ecx, dword ptr [esi + 0x268]
// 008ef66b  8b01                 mov eax, dword ptr [ecx]
// 008ef66d  8b9080000000         mov edx, dword ptr [eax + 0x80]
// 008ef673  6a00                 push 0
// 008ef675  ffd2                 call edx
// 008ef677  85c0                 test eax, eax
// 008ef679  7415                 je 0x8ef690
// 008ef67b  8b8e68020000         mov ecx, dword ptr [esi + 0x268]
// 008ef681  8b01                 mov eax, dword ptr [ecx]
// 008ef683  8b542434             mov edx, dword ptr [esp + 0x34]
// 008ef687  8b80a0000000         mov eax, dword ptr [eax + 0xa0]
// 008ef68d  52                   push edx
// 008ef68e  ffd0                 call eax
// 008ef690  8b8e6c020000         mov ecx, dword ptr [esi + 0x26c]
// 008ef696  8b11                 mov edx, dword ptr [ecx]
// 008ef698  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 008ef69e  6a00                 push 0
// 008ef6a0  ffd0                 call eax
// 008ef6a2  85c0                 test eax, eax
// 008ef6a4  7417                 je 0x8ef6bd
// 008ef6a6  8bb66c020000         mov esi, dword ptr [esi + 0x26c]
// 008ef6ac  8b16                 mov edx, dword ptr [esi]
// 008ef6ae  8b442434             mov eax, dword ptr [esp + 0x34]
// 008ef6b2  8b92a0000000         mov edx, dword ptr [edx + 0xa0]
// 008ef6b8  50                   push eax
// 008ef6b9  8bce                 mov ecx, esi
// 008ef6bb  ffd2                 call edx
// 008ef6bd  5f                   pop edi
// 008ef6be  5e                   pop esi
// 008ef6bf  5d                   pop ebp
// 008ef6c0  5b                   pop ebx
// 008ef6c1  83c420               add esp, 0x20
// 008ef6c4  c21400               ret 0x14
// 008ef6c7  e84044f0ff           call 0x7f3b0c
// copied from an identical function in another client (function ?DrawCommandBar@CXTPRibbonTabPopupToolBar@@UAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonPopups.cpp