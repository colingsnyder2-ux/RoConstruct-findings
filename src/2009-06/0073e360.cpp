// roc 2009-06 0073e360  unit: CRobloxReportView  size: 478 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0073e360
//
// 0073e360  6aff                 push -1
// 0073e362  6819668700           push 0x876619
// 0073e367  64a100000000         mov eax, dword ptr fs:[0]
// 0073e36d  50                   push eax
// 0073e36e  83ec30               sub esp, 0x30
// 0073e371  53                   push ebx
// 0073e372  55                   push ebp
// 0073e373  56                   push esi
// 0073e374  57                   push edi
// 0073e375  a1304fa200           mov eax, dword ptr [0xa24f30]
// 0073e37a  33c4                 xor eax, esp
// 0073e37c  50                   push eax
// 0073e37d  8d442444             lea eax, [esp + 0x44]
// 0073e381  64a300000000         mov dword ptr fs:[0], eax
// 0073e387  8bf1                 mov esi, ecx
// 0073e389  83be6003000000       cmp dword ptr [esi + 0x360], 0
// 0073e390  0f848d010000         je 0x73e523
// 0073e396  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 0073e39a  85ff                 test edi, edi
// 0073e39c  0f8481010000         je 0x73e523
// 0073e3a2  8b6c2458             mov ebp, dword ptr [esp + 0x58]
// 0073e3a6  85ed                 test ebp, ebp
// 0073e3a8  0f8475010000         je 0x73e523
// 0073e3ae  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 0073e3b2  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 0073e3b6  8b542464             mov edx, dword ptr [esp + 0x64]
// 0073e3ba  8b5c2468             mov ebx, dword ptr [esp + 0x68]
// 0073e3be  89442424             mov dword ptr [esp + 0x24], eax
// 0073e3c2  89442414             mov dword ptr [esp + 0x14], eax
// 0073e3c6  8d442454             lea eax, [esp + 0x54]
// 0073e3ca  56                   push esi
// 0073e3cb  50                   push eax
// 0073e3cc  894c2430             mov dword ptr [esp + 0x30], ecx
// 0073e3d0  89542434             mov dword ptr [esp + 0x34], edx
// 0073e3d4  895c2438             mov dword ptr [esp + 0x38], ebx
// 0073e3d8  894c2420             mov dword ptr [esp + 0x20], ecx
// 0073e3dc  89542424             mov dword ptr [esp + 0x24], edx
// 0073e3e0  895c2428             mov dword ptr [esp + 0x28], ebx
// 0073e3e4  e8971a0300           call 0x76fe80
// 0073e3e9  83c408               add esp, 8
// 0073e3ec  8b8e60030000         mov ecx, dword ptr [esi + 0x360]
// 0073e3f2  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 0073e3fa  e8d131f7ff           call 0x6b15d0
// 0073e3ff  8b18                 mov ebx, dword ptr [eax]
// 0073e401  8d4c2454             lea ecx, [esp + 0x54]
// 0073e405  89442458             mov dword ptr [esp + 0x58], eax
// 0073e409  83c358               add ebx, 0x58
// 0073e40c  ff15d0fc8900         call dword ptr [0x89fcd0]
// 0073e412  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0073e416  8b13                 mov edx, dword ptr [ebx]
// 0073e418  50                   push eax
// 0073e419  55                   push ebp
// 0073e41a  ffd2                 call edx
// 0073e41c  8b8e60030000         mov ecx, dword ptr [esi + 0x360]
// 0073e422  e8796d0400           call 0x7851a0
// 0073e427  8b18                 mov ebx, dword ptr [eax]
// 0073e429  8d4c2454             lea ecx, [esp + 0x54]
// 0073e42d  89442458             mov dword ptr [esp + 0x58], eax
// 0073e431  83c358               add ebx, 0x58
// 0073e434  ff15d0fc8900         call dword ptr [0x89fcd0]
// 0073e43a  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0073e43e  50                   push eax
// 0073e43f  8b03                 mov eax, dword ptr [ebx]
// 0073e441  55                   push ebp
// 0073e442  ffd0                 call eax
// 0073e444  8b17                 mov edx, dword ptr [edi]
// 0073e446  8b4234               mov eax, dword ptr [edx + 0x34]
// 0073e449  68ffffff00           push 0xffffff
// 0073e44e  8bcf                 mov ecx, edi
// 0073e450  ffd0                 call eax
// 0073e452  8b8e60030000         mov ecx, dword ptr [esi + 0x360]
// 0073e458  e8436d0400           call 0x7851a0
// 0073e45d  8b10                 mov edx, dword ptr [eax]
// 0073e45f  8b525c               mov edx, dword ptr [edx + 0x5c]
// 0073e462  6a01                 push 1
// 0073e464  8d4c2418             lea ecx, [esp + 0x18]
// 0073e468  51                   push ecx
// 0073e469  57                   push edi
// 0073e46a  8bc8                 mov ecx, eax
// 0073e46c  ffd2                 call edx
// 0073e46e  8b8e60030000         mov ecx, dword ptr [esi + 0x360]
// 0073e474  e85731f7ff           call 0x6b15d0
// 0073e479  8b10                 mov edx, dword ptr [eax]
// 0073e47b  8b525c               mov edx, dword ptr [edx + 0x5c]
// 0073e47e  6a00                 push 0
// 0073e480  8d4c2428             lea ecx, [esp + 0x28]
// 0073e484  51                   push ecx
// 0073e485  57                   push edi
// 0073e486  8bc8                 mov ecx, eax
// 0073e488  ffd2                 call edx
// 0073e48a  8b442460             mov eax, dword ptr [esp + 0x60]
// 0073e48e  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 0073e492  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0073e496  8b542464             mov edx, dword ptr [esp + 0x64]
// 0073e49a  89442438             mov dword ptr [esp + 0x38], eax
// 0073e49e  2b442428             sub eax, dword ptr [esp + 0x28]
// 0073e4a2  8d441802             lea eax, [eax + ebx + 2]
// 0073e4a6  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0073e4aa  2b5c2420             sub ebx, dword ptr [esp + 0x20]
// 0073e4ae  89442438             mov dword ptr [esp + 0x38], eax
// 0073e4b2  8b442468             mov eax, dword ptr [esp + 0x68]
// 0073e4b6  8d4418fe             lea eax, [eax + ebx - 2]
// 0073e4ba  89442440             mov dword ptr [esp + 0x40], eax
// 0073e4be  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 0073e4c2  8b1e                 mov ebx, dword ptr [esi]
// 0073e4c4  50                   push eax
// 0073e4c5  83ec10               sub esp, 0x10
// 0073e4c8  8bc4                 mov eax, esp
// 0073e4ca  8908                 mov dword ptr [eax], ecx
// 0073e4cc  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0073e4d0  894804               mov dword ptr [eax + 4], ecx
// 0073e4d3  895008               mov dword ptr [eax + 8], edx
// 0073e4d6  8b542454             mov edx, dword ptr [esp + 0x54]
// 0073e4da  55                   push ebp
// 0073e4db  89500c               mov dword ptr [eax + 0xc], edx
// 0073e4de  8b839c010000         mov eax, dword ptr [ebx + 0x19c]
// 0073e4e4  57                   push edi
// 0073e4e5  8bce                 mov ecx, esi
// 0073e4e7  ffd0                 call eax
// 0073e4e9  8b17                 mov edx, dword ptr [edi]
// 0073e4eb  8bd8                 mov ebx, eax
// 0073e4ed  8b4234               mov eax, dword ptr [edx + 0x34]
// 0073e4f0  68ffffff00           push 0xffffff
// 0073e4f5  8bcf                 mov ecx, edi
// 0073e4f7  ffd0                 call eax
// 0073e4f9  8b8e60030000         mov ecx, dword ptr [esi + 0x360]
// 0073e4ff  e89c6c0400           call 0x7851a0
// 0073e504  8b10                 mov edx, dword ptr [eax]
// 0073e506  8b525c               mov edx, dword ptr [edx + 0x5c]
// 0073e509  6a00                 push 0
// 0073e50b  8d4c2418             lea ecx, [esp + 0x18]
// 0073e50f  51                   push ecx
// 0073e510  57                   push edi
// 0073e511  8bc8                 mov ecx, eax
// 0073e513  ffd2                 call edx
// 0073e515  8d4c2454             lea ecx, [esp + 0x54]
// 0073e519  ff1510fd8900         call dword ptr [0x89fd10]
// 0073e51f  8bc3                 mov eax, ebx
// 0073e521  eb05                 jmp 0x73e528
// 0073e523  b8ffffff7f           mov eax, 0x7fffffff
// 0073e528  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0073e52c  64890d00000000       mov dword ptr fs:[0], ecx
// 0073e533  59                   pop ecx
// 0073e534  5f                   pop edi
// 0073e535  5e                   pop esi
// 0073e536  5d                   pop ebp
// 0073e537  5b                   pop ebx
// 0073e538  83c43c               add esp, 0x3c
// 0073e53b  c21c00               ret 0x1c
// copied from an identical function in another client (function ?PrintPage@CXTPReportView@@MAEJPAVCDC@@PAUCPrintInfo@@VCRect@@J@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\ReportControl\XTPReportView.cpp