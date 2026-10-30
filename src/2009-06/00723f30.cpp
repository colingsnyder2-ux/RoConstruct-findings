// roc 2009-06 00723f30  unit: CXTPPaintManager  size: 561 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00723f30
//
// 00723f30  83ec18               sub esp, 0x18
// 00723f33  53                   push ebx
// 00723f34  55                   push ebp
// 00723f35  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00723f39  8b859c000000         mov eax, dword ptr [ebp + 0x9c]
// 00723f3f  56                   push esi
// 00723f40  57                   push edi
// 00723f41  8bf9                 mov edi, ecx
// 00723f43  897c2414             mov dword ptr [esp + 0x14], edi
// 00723f47  83f8ff               cmp eax, -1
// 00723f4a  750f                 jne 0x723f5b
// 00723f4c  8b8d5c010000         mov ecx, dword ptr [ebp + 0x15c]
// 00723f52  85c9                 test ecx, ecx
// 00723f54  7405                 je 0x723f5b
// 00723f56  e845bfffff           call 0x71fea0
// 00723f5b  85c0                 test eax, eax
// 00723f5d  750d                 jne 0x723f6c
// 00723f5f  398724010000         cmp dword ptr [edi + 0x124], eax
// 00723f65  7405                 je 0x723f6c
// 00723f67  8d7001               lea esi, [eax + 1]
// 00723f6a  eb02                 jmp 0x723f6e
// 00723f6c  33f6                 xor esi, esi
// 00723f6e  8b8d00010000         mov ecx, dword ptr [ebp + 0x100]
// 00723f74  8b01                 mov eax, dword ptr [ecx]
// 00723f76  8b90a8010000         mov edx, dword ptr [eax + 0x1a8]
// 00723f7c  ffd2                 call edx
// 00723f7e  89442410             mov dword ptr [esp + 0x10], eax
// 00723f82  8b8760010000         mov eax, dword ptr [edi + 0x160]
// 00723f88  83f8ff               cmp eax, -1
// 00723f8b  7e04                 jle 0x723f91
// 00723f8d  89442410             mov dword ptr [esp + 0x10], eax
// 00723f91  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 00723f95  33c0                 xor eax, eax
// 00723f97  39442450             cmp dword ptr [esp + 0x50], eax
// 00723f9b  0f95c0               setne al
// 00723f9e  83c820               or eax, 0x20
// 00723fa1  837c244c00           cmp dword ptr [esp + 0x4c], 0
// 00723fa6  8bf8                 mov edi, eax
// 00723fa8  0f85eb000000         jne 0x724099
// 00723fae  85f6                 test esi, esi
// 00723fb0  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00723fb4  0f848f000000         je 0x724049
// 00723fba  8b4e08               mov ecx, dword ptr [esi + 8]
// 00723fbd  51                   push ecx
// 00723fbe  ff15e8e08900         call dword ptr [0x89e0e8]
// 00723fc4  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00723fc8  8b16                 mov edx, dword ptr [esi]
// 00723fca  6a14                 push 0x14
// 00723fcc  8be8                 mov ebp, eax
// 00723fce  e8ade7ffff           call 0x722780
// 00723fd3  50                   push eax
// 00723fd4  8b4238               mov eax, dword ptr [edx + 0x38]
// 00723fd7  8bce                 mov ecx, esi
// 00723fd9  ffd0                 call eax
// 00723fdb  8b542440             mov edx, dword ptr [esp + 0x40]
// 00723fdf  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00723fe3  8b442444             mov eax, dword ptr [esp + 0x44]
// 00723fe7  6a01                 push 1
// 00723fe9  89542420             mov dword ptr [esp + 0x20], edx
// 00723fed  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00723ff1  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00723ff5  6a01                 push 1
// 00723ff7  8d542420             lea edx, [esp + 0x20]
// 00723ffb  52                   push edx
// 00723ffc  8944242c             mov dword ptr [esp + 0x2c], eax
// 00724000  894c2430             mov dword ptr [esp + 0x30], ecx
// 00724004  ff15f8ed8900         call dword ptr [0x89edf8]
// 0072400a  8b06                 mov eax, dword ptr [esi]
// 0072400c  8bcf                 mov ecx, edi
// 0072400e  81c904080000         or ecx, 0x804
// 00724014  51                   push ecx
// 00724015  8d54241c             lea edx, [esp + 0x1c]
// 00724019  52                   push edx
// 0072401a  8bcb                 mov ecx, ebx
// 0072401c  89442440             mov dword ptr [esp + 0x40], eax
// 00724020  ff1554fb8900         call dword ptr [0x89fb54]
// 00724026  50                   push eax
// 00724027  8bcb                 mov ecx, ebx
// 00724029  ff15d0fc8900         call dword ptr [0x89fcd0]
// 0072402f  50                   push eax
// 00724030  8b442448             mov eax, dword ptr [esp + 0x48]
// 00724034  8b5070               mov edx, dword ptr [eax + 0x70]
// 00724037  8bce                 mov ecx, esi
// 00724039  ffd2                 call edx
// 0072403b  8b06                 mov eax, dword ptr [esi]
// 0072403d  8b5038               mov edx, dword ptr [eax + 0x38]
// 00724040  55                   push ebp
// 00724041  8bce                 mov ecx, esi
// 00724043  ffd2                 call edx
// 00724045  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 00724049  8bcd                 mov ecx, ebp
// 0072404b  e8d0130700           call 0x795420
// 00724050  837c241000           cmp dword ptr [esp + 0x10], 0
// 00724055  50                   push eax
// 00724056  7421                 je 0x724079
// 00724058  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0072405c  83cf04               or edi, 4
// 0072405f  57                   push edi
// 00724060  8d442444             lea eax, [esp + 0x44]
// 00724064  50                   push eax
// 00724065  51                   push ecx
// 00724066  56                   push esi
// 00724067  e864fcffff           call 0x723cd0
// 0072406c  83c414               add esp, 0x14
// 0072406f  5f                   pop edi
// 00724070  5e                   pop esi
// 00724071  5d                   pop ebp
// 00724072  5b                   pop ebx
// 00724073  83c418               add esp, 0x18
// 00724076  c22800               ret 0x28
// 00724079  81cf04080000         or edi, 0x804
// 0072407f  57                   push edi
// 00724080  8d542444             lea edx, [esp + 0x44]
// 00724084  52                   push edx
// 00724085  53                   push ebx
// 00724086  56                   push esi
// 00724087  e844fcffff           call 0x723cd0
// 0072408c  83c414               add esp, 0x14
// 0072408f  5f                   pop edi
// 00724090  5e                   pop esi
// 00724091  5d                   pop ebp
// 00724092  5b                   pop ebx
// 00724093  83c418               add esp, 0x18
// 00724096  c22800               ret 0x28
// 00724099  85f6                 test esi, esi
// 0072409b  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0072409f  0f848b000000         je 0x724130
// 007240a5  8b4608               mov eax, dword ptr [esi + 8]
// 007240a8  50                   push eax
// 007240a9  ff15e8e08900         call dword ptr [0x89e0e8]
// 007240af  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007240b3  8b16                 mov edx, dword ptr [esi]
// 007240b5  6a14                 push 0x14
// 007240b7  8be8                 mov ebp, eax
// 007240b9  e8c2e6ffff           call 0x722780
// 007240be  50                   push eax
// 007240bf  8b4238               mov eax, dword ptr [edx + 0x38]
// 007240c2  8bce                 mov ecx, esi
// 007240c4  ffd0                 call eax
// 007240c6  8b542440             mov edx, dword ptr [esp + 0x40]
// 007240ca  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 007240ce  8b442444             mov eax, dword ptr [esp + 0x44]
// 007240d2  6a01                 push 1
// 007240d4  89542420             mov dword ptr [esp + 0x20], edx
// 007240d8  894c241c             mov dword ptr [esp + 0x1c], ecx
// 007240dc  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 007240e0  6a01                 push 1
// 007240e2  8d542420             lea edx, [esp + 0x20]
// 007240e6  52                   push edx
// 007240e7  8944242c             mov dword ptr [esp + 0x2c], eax
// 007240eb  894c2430             mov dword ptr [esp + 0x30], ecx
// 007240ef  ff15f8ed8900         call dword ptr [0x89edf8]
// 007240f5  8b06                 mov eax, dword ptr [esi]
// 007240f7  8bcf                 mov ecx, edi
// 007240f9  81c900090000         or ecx, 0x900
// 007240ff  51                   push ecx
// 00724100  8d54241c             lea edx, [esp + 0x1c]
// 00724104  52                   push edx
// 00724105  8bcb                 mov ecx, ebx
// 00724107  89442438             mov dword ptr [esp + 0x38], eax
// 0072410b  ff1554fb8900         call dword ptr [0x89fb54]
// 00724111  50                   push eax
// 00724112  8bcb                 mov ecx, ebx
// 00724114  ff15d0fc8900         call dword ptr [0x89fcd0]
// 0072411a  50                   push eax
// 0072411b  8b442440             mov eax, dword ptr [esp + 0x40]
// 0072411f  8b5070               mov edx, dword ptr [eax + 0x70]
// 00724122  8bce                 mov ecx, esi
// 00724124  ffd2                 call edx
// 00724126  8b06                 mov eax, dword ptr [esi]
// 00724128  8b5038               mov edx, dword ptr [eax + 0x38]
// 0072412b  55                   push ebp
// 0072412c  8bce                 mov ecx, esi
// 0072412e  ffd2                 call edx
// 00724130  8b2e                 mov ebp, dword ptr [esi]
// 00724132  81cf00090000         or edi, 0x900
// 00724138  57                   push edi
// 00724139  8d442440             lea eax, [esp + 0x40]
// 0072413d  50                   push eax
// 0072413e  8bcb                 mov ecx, ebx
// 00724140  ff1554fb8900         call dword ptr [0x89fb54]
// 00724146  50                   push eax
// 00724147  8bcb                 mov ecx, ebx
// 00724149  ff15d0fc8900         call dword ptr [0x89fcd0]
// 0072414f  8b5570               mov edx, dword ptr [ebp + 0x70]
// 00724152  50                   push eax
// 00724153  8bce                 mov ecx, esi
// 00724155  ffd2                 call edx
// 00724157  5f                   pop edi
// 00724158  5e                   pop esi
// 00724159  5d                   pop ebp
// 0072415a  5b                   pop ebx
// 0072415b  83c418               add esp, 0x18
// 0072415e  c22800               ret 0x28
// copied from an identical function in another client (function ?DrawControlText3@CXTPPaintManager@@IAEXPAVCDC@@PAVCXTPControl@@ABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@2VCRect@@HH@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPPaintManager.cpp