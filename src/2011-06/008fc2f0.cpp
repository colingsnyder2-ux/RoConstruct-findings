// roc 2011-06 008fc2f0  unit: CXTPRibbonTabPopupToolBar  size: 380 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008fc2f0
//
// 008fc2f0  83ec20               sub esp, 0x20
// 008fc2f3  53                   push ebx
// 008fc2f4  55                   push ebp
// 008fc2f5  56                   push esi
// 008fc2f6  57                   push edi
// 008fc2f7  8bf1                 mov esi, ecx
// 008fc2f9  e852e8f1ff           call 0x81ab50
// 008fc2fe  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 008fc302  8bf8                 mov edi, eax
// 008fc304  56                   push esi
// 008fc305  53                   push ebx
// 008fc306  8bcf                 mov ecx, edi
// 008fc308  e8e3e7f8ff           call 0x88aaf0
// 008fc30d  8b8e7c020000         mov ecx, dword ptr [esi + 0x27c]
// 008fc313  8b17                 mov edx, dword ptr [edi]
// 008fc315  8b9238010000         mov edx, dword ptr [edx + 0x138]
// 008fc31b  83ec10               sub esp, 0x10
// 008fc31e  8bc4                 mov eax, esp
// 008fc320  8908                 mov dword ptr [eax], ecx
// 008fc322  8b8e80020000         mov ecx, dword ptr [esi + 0x280]
// 008fc328  894804               mov dword ptr [eax + 4], ecx
// 008fc32b  8b8e84020000         mov ecx, dword ptr [esi + 0x284]
// 008fc331  894808               mov dword ptr [eax + 8], ecx
// 008fc334  8b8e88020000         mov ecx, dword ptr [esi + 0x288]
// 008fc33a  89480c               mov dword ptr [eax + 0xc], ecx
// 008fc33d  8b8674020000         mov eax, dword ptr [esi + 0x274]
// 008fc343  50                   push eax
// 008fc344  53                   push ebx
// 008fc345  8bcf                 mov ecx, edi
// 008fc347  ffd2                 call edx
// 008fc349  6a01                 push 1
// 008fc34b  8bcb                 mov ecx, ebx
// 008fc34d  e89c020d00           call 0x9cc5ee
// 008fc352  8b8674020000         mov eax, dword ptr [esi + 0x274]
// 008fc358  8ba884000000         mov ebp, dword ptr [eax + 0x84]
// 008fc35e  8b4528               mov eax, dword ptr [ebp + 0x28]
// 008fc361  33db                 xor ebx, ebx
// 008fc363  85c0                 test eax, eax
// 008fc365  0f8e9a000000         jle 0x8fc405
// 008fc36b  eb03                 jmp 0x8fc370
// 008fc36d  8d4900               lea ecx, [ecx]
// 008fc370  85db                 test ebx, ebx
// 008fc372  7c15                 jl 0x8fc389
// 008fc374  3bd8                 cmp ebx, eax
// 008fc376  7d11                 jge 0x8fc389
// 008fc378  3b5d28               cmp ebx, dword ptr [ebp + 0x28]
// 008fc37b  0f8de6000000         jge 0x8fc467
// 008fc381  8b4d24               mov ecx, dword ptr [ebp + 0x24]
// 008fc384  8b3c99               mov edi, dword ptr [ecx + ebx*4]
// 008fc387  eb02                 jmp 0x8fc38b
// 008fc389  33ff                 xor edi, edi
// 008fc38b  8bcf                 mov ecx, edi
// 008fc38d  e84eabffff           call 0x8f6ee0
// 008fc392  85c0                 test eax, eax
// 008fc394  7463                 je 0x8fc3f9
// 008fc396  8b4738               mov eax, dword ptr [edi + 0x38]
// 008fc399  8b5734               mov edx, dword ptr [edi + 0x34]
// 008fc39c  8b4f3c               mov ecx, dword ptr [edi + 0x3c]
// 008fc39f  89542410             mov dword ptr [esp + 0x10], edx
// 008fc3a3  8b5740               mov edx, dword ptr [edi + 0x40]
// 008fc3a6  89442414             mov dword ptr [esp + 0x14], eax
// 008fc3aa  8d442410             lea eax, [esp + 0x10]
// 008fc3ae  894c2418             mov dword ptr [esp + 0x18], ecx
// 008fc3b2  50                   push eax
// 008fc3b3  8d4c243c             lea ecx, [esp + 0x3c]
// 008fc3b7  89542420             mov dword ptr [esp + 0x20], edx
// 008fc3bb  51                   push ecx
// 008fc3bc  8d542428             lea edx, [esp + 0x28]
// 008fc3c0  52                   push edx
// 008fc3c1  ff15fc1ba400         call dword ptr [0xa41bfc]
// 008fc3c7  85c0                 test eax, eax
// 008fc3c9  742e                 je 0x8fc3f9
// 008fc3cb  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008fc3cf  8b17                 mov edx, dword ptr [edi]
// 008fc3d1  8b5260               mov edx, dword ptr [edx + 0x60]
// 008fc3d4  83ec10               sub esp, 0x10
// 008fc3d7  8bc4                 mov eax, esp
// 008fc3d9  8908                 mov dword ptr [eax], ecx
// 008fc3db  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008fc3df  894804               mov dword ptr [eax + 4], ecx
// 008fc3e2  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 008fc3e6  894808               mov dword ptr [eax + 8], ecx
// 008fc3e9  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 008fc3ed  89480c               mov dword ptr [eax + 0xc], ecx
// 008fc3f0  8b442444             mov eax, dword ptr [esp + 0x44]
// 008fc3f4  50                   push eax
// 008fc3f5  8bcf                 mov ecx, edi
// 008fc3f7  ffd2                 call edx
// 008fc3f9  8b4528               mov eax, dword ptr [ebp + 0x28]
// 008fc3fc  43                   inc ebx
// 008fc3fd  3bd8                 cmp ebx, eax
// 008fc3ff  0f8c6bffffff         jl 0x8fc370
// 008fc405  8b8e68020000         mov ecx, dword ptr [esi + 0x268]
// 008fc40b  8b01                 mov eax, dword ptr [ecx]
// 008fc40d  8b9080000000         mov edx, dword ptr [eax + 0x80]
// 008fc413  6a00                 push 0
// 008fc415  ffd2                 call edx
// 008fc417  85c0                 test eax, eax
// 008fc419  7415                 je 0x8fc430
// 008fc41b  8b8e68020000         mov ecx, dword ptr [esi + 0x268]
// 008fc421  8b01                 mov eax, dword ptr [ecx]
// 008fc423  8b542434             mov edx, dword ptr [esp + 0x34]
// 008fc427  8b80a0000000         mov eax, dword ptr [eax + 0xa0]
// 008fc42d  52                   push edx
// 008fc42e  ffd0                 call eax
// 008fc430  8b8e6c020000         mov ecx, dword ptr [esi + 0x26c]
// 008fc436  8b11                 mov edx, dword ptr [ecx]
// 008fc438  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 008fc43e  6a00                 push 0
// 008fc440  ffd0                 call eax
// 008fc442  85c0                 test eax, eax
// 008fc444  7417                 je 0x8fc45d
// 008fc446  8bb66c020000         mov esi, dword ptr [esi + 0x26c]
// 008fc44c  8b16                 mov edx, dword ptr [esi]
// 008fc44e  8b442434             mov eax, dword ptr [esp + 0x34]
// 008fc452  8b92a0000000         mov edx, dword ptr [edx + 0xa0]
// 008fc458  50                   push eax
// 008fc459  8bce                 mov ecx, esi
// 008fc45b  ffd2                 call edx
// 008fc45d  5f                   pop edi
// 008fc45e  5e                   pop esi
// 008fc45f  5d                   pop ebp
// 008fc460  5b                   pop ebx
// 008fc461  83c420               add esp, 0x20
// 008fc464  c21400               ret 0x14
// 008fc467  e89edef0ff           call 0x80a30a
// copied from an identical function in another client (function ?DrawCommandBar@CXTPRibbonTabPopupToolBar@@UAEXPAVCDC@@VCRect@@@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonPopups.cpp