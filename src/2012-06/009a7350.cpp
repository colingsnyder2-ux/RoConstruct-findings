// roc 2012-06 009a7350  unit: CRobloxReportView  size: 478 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a7350
//
// 009a7350  6aff                 push -1
// 009a7352  6829dcad00           push 0xaddc29
// 009a7357  64a100000000         mov eax, dword ptr fs:[0]
// 009a735d  50                   push eax
// 009a735e  83ec30               sub esp, 0x30
// 009a7361  53                   push ebx
// 009a7362  55                   push ebp
// 009a7363  56                   push esi
// 009a7364  57                   push edi
// 009a7365  a1d027e000           mov eax, dword ptr [0xe027d0]
// 009a736a  33c4                 xor eax, esp
// 009a736c  50                   push eax
// 009a736d  8d442444             lea eax, [esp + 0x44]
// 009a7371  64a300000000         mov dword ptr fs:[0], eax
// 009a7377  8bf1                 mov esi, ecx
// 009a7379  83be6003000000       cmp dword ptr [esi + 0x360], 0
// 009a7380  0f848d010000         je 0x9a7513
// 009a7386  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 009a738a  85ff                 test edi, edi
// 009a738c  0f8481010000         je 0x9a7513
// 009a7392  8b6c2458             mov ebp, dword ptr [esp + 0x58]
// 009a7396  85ed                 test ebp, ebp
// 009a7398  0f8475010000         je 0x9a7513
// 009a739e  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 009a73a2  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 009a73a6  8b542464             mov edx, dword ptr [esp + 0x64]
// 009a73aa  8b5c2468             mov ebx, dword ptr [esp + 0x68]
// 009a73ae  89442424             mov dword ptr [esp + 0x24], eax
// 009a73b2  89442414             mov dword ptr [esp + 0x14], eax
// 009a73b6  8d442454             lea eax, [esp + 0x54]
// 009a73ba  56                   push esi
// 009a73bb  50                   push eax
// 009a73bc  894c2430             mov dword ptr [esp + 0x30], ecx
// 009a73c0  89542434             mov dword ptr [esp + 0x34], edx
// 009a73c4  895c2438             mov dword ptr [esp + 0x38], ebx
// 009a73c8  894c2420             mov dword ptr [esp + 0x20], ecx
// 009a73cc  89542424             mov dword ptr [esp + 0x24], edx
// 009a73d0  895c2428             mov dword ptr [esp + 0x28], ebx
// 009a73d4  e877d70200           call 0x9d4b50
// 009a73d9  83c408               add esp, 8
// 009a73dc  8b8e60030000         mov ecx, dword ptr [esi + 0x360]
// 009a73e2  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 009a73ea  e8c1ce0000           call 0x9b42b0
// 009a73ef  8b18                 mov ebx, dword ptr [eax]
// 009a73f1  8d4c2454             lea ecx, [esp + 0x54]
// 009a73f5  89442458             mov dword ptr [esp + 0x58], eax
// 009a73f9  83c358               add ebx, 0x58
// 009a73fc  ff159847b200         call dword ptr [0xb24798]
// 009a7402  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 009a7406  8b13                 mov edx, dword ptr [ebx]
// 009a7408  50                   push eax
// 009a7409  55                   push ebp
// 009a740a  ffd2                 call edx
// 009a740c  8b8e60030000         mov ecx, dword ptr [esi + 0x360]
// 009a7412  e8592b0400           call 0x9e9f70
// 009a7417  8b18                 mov ebx, dword ptr [eax]
// 009a7419  8d4c2454             lea ecx, [esp + 0x54]
// 009a741d  89442458             mov dword ptr [esp + 0x58], eax
// 009a7421  83c358               add ebx, 0x58
// 009a7424  ff159847b200         call dword ptr [0xb24798]
// 009a742a  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 009a742e  50                   push eax
// 009a742f  8b03                 mov eax, dword ptr [ebx]
// 009a7431  55                   push ebp
// 009a7432  ffd0                 call eax
// 009a7434  8b17                 mov edx, dword ptr [edi]
// 009a7436  8b4234               mov eax, dword ptr [edx + 0x34]
// 009a7439  68ffffff00           push 0xffffff
// 009a743e  8bcf                 mov ecx, edi
// 009a7440  ffd0                 call eax
// 009a7442  8b8e60030000         mov ecx, dword ptr [esi + 0x360]
// 009a7448  e8232b0400           call 0x9e9f70
// 009a744d  8b10                 mov edx, dword ptr [eax]
// 009a744f  8b525c               mov edx, dword ptr [edx + 0x5c]
// 009a7452  6a01                 push 1
// 009a7454  8d4c2418             lea ecx, [esp + 0x18]
// 009a7458  51                   push ecx
// 009a7459  57                   push edi
// 009a745a  8bc8                 mov ecx, eax
// 009a745c  ffd2                 call edx
// 009a745e  8b8e60030000         mov ecx, dword ptr [esi + 0x360]
// 009a7464  e847ce0000           call 0x9b42b0
// 009a7469  8b10                 mov edx, dword ptr [eax]
// 009a746b  8b525c               mov edx, dword ptr [edx + 0x5c]
// 009a746e  6a00                 push 0
// 009a7470  8d4c2428             lea ecx, [esp + 0x28]
// 009a7474  51                   push ecx
// 009a7475  57                   push edi
// 009a7476  8bc8                 mov ecx, eax
// 009a7478  ffd2                 call edx
// 009a747a  8b442460             mov eax, dword ptr [esp + 0x60]
// 009a747e  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 009a7482  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 009a7486  8b542464             mov edx, dword ptr [esp + 0x64]
// 009a748a  89442438             mov dword ptr [esp + 0x38], eax
// 009a748e  2b442428             sub eax, dword ptr [esp + 0x28]
// 009a7492  8d441802             lea eax, [eax + ebx + 2]
// 009a7496  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 009a749a  2b5c2420             sub ebx, dword ptr [esp + 0x20]
// 009a749e  89442438             mov dword ptr [esp + 0x38], eax
// 009a74a2  8b442468             mov eax, dword ptr [esp + 0x68]
// 009a74a6  8d4418fe             lea eax, [eax + ebx - 2]
// 009a74aa  89442440             mov dword ptr [esp + 0x40], eax
// 009a74ae  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 009a74b2  8b1e                 mov ebx, dword ptr [esi]
// 009a74b4  50                   push eax
// 009a74b5  83ec10               sub esp, 0x10
// 009a74b8  8bc4                 mov eax, esp
// 009a74ba  8908                 mov dword ptr [eax], ecx
// 009a74bc  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 009a74c0  894804               mov dword ptr [eax + 4], ecx
// 009a74c3  895008               mov dword ptr [eax + 8], edx
// 009a74c6  8b542454             mov edx, dword ptr [esp + 0x54]
// 009a74ca  55                   push ebp
// 009a74cb  89500c               mov dword ptr [eax + 0xc], edx
// 009a74ce  8b839c010000         mov eax, dword ptr [ebx + 0x19c]
// 009a74d4  57                   push edi
// 009a74d5  8bce                 mov ecx, esi
// 009a74d7  ffd0                 call eax
// 009a74d9  8b17                 mov edx, dword ptr [edi]
// 009a74db  8bd8                 mov ebx, eax
// 009a74dd  8b4234               mov eax, dword ptr [edx + 0x34]
// 009a74e0  68ffffff00           push 0xffffff
// 009a74e5  8bcf                 mov ecx, edi
// 009a74e7  ffd0                 call eax
// 009a74e9  8b8e60030000         mov ecx, dword ptr [esi + 0x360]
// 009a74ef  e87c2a0400           call 0x9e9f70
// 009a74f4  8b10                 mov edx, dword ptr [eax]
// 009a74f6  8b525c               mov edx, dword ptr [edx + 0x5c]
// 009a74f9  6a00                 push 0
// 009a74fb  8d4c2418             lea ecx, [esp + 0x18]
// 009a74ff  51                   push ecx
// 009a7500  57                   push edi
// 009a7501  8bc8                 mov ecx, eax
// 009a7503  ffd2                 call edx
// 009a7505  8d4c2454             lea ecx, [esp + 0x54]
// 009a7509  ff15d047b200         call dword ptr [0xb247d0]
// 009a750f  8bc3                 mov eax, ebx
// 009a7511  eb05                 jmp 0x9a7518
// 009a7513  b8ffffff7f           mov eax, 0x7fffffff
// 009a7518  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 009a751c  64890d00000000       mov dword ptr fs:[0], ecx
// 009a7523  59                   pop ecx
// 009a7524  5f                   pop edi
// 009a7525  5e                   pop esi
// 009a7526  5d                   pop ebp
// 009a7527  5b                   pop ebx
// 009a7528  83c43c               add esp, 0x3c
// 009a752b  c21c00               ret 0x1c
// copied from an identical function in another client (function ?PrintPage@CXTPReportView@@MAEJPAVCDC@@PAUCPrintInfo@@VCRect@@J@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\ReportControl\XTPReportView.cpp