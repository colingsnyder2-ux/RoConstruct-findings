// roc 2010-06 007cd360  unit: CRobloxReportView  size: 478 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007cd360
//
// 007cd360  6aff                 push -1
// 007cd362  6869069b00           push 0x9b0669
// 007cd367  64a100000000         mov eax, dword ptr fs:[0]
// 007cd36d  50                   push eax
// 007cd36e  83ec30               sub esp, 0x30
// 007cd371  53                   push ebx
// 007cd372  55                   push ebp
// 007cd373  56                   push esi
// 007cd374  57                   push edi
// 007cd375  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 007cd37a  33c4                 xor eax, esp
// 007cd37c  50                   push eax
// 007cd37d  8d442444             lea eax, [esp + 0x44]
// 007cd381  64a300000000         mov dword ptr fs:[0], eax
// 007cd387  8bf1                 mov esi, ecx
// 007cd389  83be6003000000       cmp dword ptr [esi + 0x360], 0
// 007cd390  0f848d010000         je 0x7cd523
// 007cd396  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 007cd39a  85ff                 test edi, edi
// 007cd39c  0f8481010000         je 0x7cd523
// 007cd3a2  8b6c2458             mov ebp, dword ptr [esp + 0x58]
// 007cd3a6  85ed                 test ebp, ebp
// 007cd3a8  0f8475010000         je 0x7cd523
// 007cd3ae  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 007cd3b2  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 007cd3b6  8b542464             mov edx, dword ptr [esp + 0x64]
// 007cd3ba  8b5c2468             mov ebx, dword ptr [esp + 0x68]
// 007cd3be  89442424             mov dword ptr [esp + 0x24], eax
// 007cd3c2  89442414             mov dword ptr [esp + 0x14], eax
// 007cd3c6  8d442454             lea eax, [esp + 0x54]
// 007cd3ca  56                   push esi
// 007cd3cb  50                   push eax
// 007cd3cc  894c2430             mov dword ptr [esp + 0x30], ecx
// 007cd3d0  89542434             mov dword ptr [esp + 0x34], edx
// 007cd3d4  895c2438             mov dword ptr [esp + 0x38], ebx
// 007cd3d8  894c2420             mov dword ptr [esp + 0x20], ecx
// 007cd3dc  89542424             mov dword ptr [esp + 0x24], edx
// 007cd3e0  895c2428             mov dword ptr [esp + 0x28], ebx
// 007cd3e4  e8c7180300           call 0x7fecb0
// 007cd3e9  83c408               add esp, 8
// 007cd3ec  8b8e60030000         mov ecx, dword ptr [esi + 0x360]
// 007cd3f2  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 007cd3fa  e8f12cefff           call 0x6c00f0
// 007cd3ff  8b18                 mov ebx, dword ptr [eax]
// 007cd401  8d4c2454             lea ecx, [esp + 0x54]
// 007cd405  89442458             mov dword ptr [esp + 0x58], eax
// 007cd409  83c358               add ebx, 0x58
// 007cd40c  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 007cd412  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 007cd416  8b13                 mov edx, dword ptr [ebx]
// 007cd418  50                   push eax
// 007cd419  55                   push ebp
// 007cd41a  ffd2                 call edx
// 007cd41c  8b8e60030000         mov ecx, dword ptr [esi + 0x360]
// 007cd422  e8991d0300           call 0x7ff1c0
// 007cd427  8b18                 mov ebx, dword ptr [eax]
// 007cd429  8d4c2454             lea ecx, [esp + 0x54]
// 007cd42d  89442458             mov dword ptr [esp + 0x58], eax
// 007cd431  83c358               add ebx, 0x58
// 007cd434  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 007cd43a  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 007cd43e  50                   push eax
// 007cd43f  8b03                 mov eax, dword ptr [ebx]
// 007cd441  55                   push ebp
// 007cd442  ffd0                 call eax
// 007cd444  8b17                 mov edx, dword ptr [edi]
// 007cd446  8b4234               mov eax, dword ptr [edx + 0x34]
// 007cd449  68ffffff00           push 0xffffff
// 007cd44e  8bcf                 mov ecx, edi
// 007cd450  ffd0                 call eax
// 007cd452  8b8e60030000         mov ecx, dword ptr [esi + 0x360]
// 007cd458  e8631d0300           call 0x7ff1c0
// 007cd45d  8b10                 mov edx, dword ptr [eax]
// 007cd45f  8b525c               mov edx, dword ptr [edx + 0x5c]
// 007cd462  6a01                 push 1
// 007cd464  8d4c2418             lea ecx, [esp + 0x18]
// 007cd468  51                   push ecx
// 007cd469  57                   push edi
// 007cd46a  8bc8                 mov ecx, eax
// 007cd46c  ffd2                 call edx
// 007cd46e  8b8e60030000         mov ecx, dword ptr [esi + 0x360]
// 007cd474  e8772cefff           call 0x6c00f0
// 007cd479  8b10                 mov edx, dword ptr [eax]
// 007cd47b  8b525c               mov edx, dword ptr [edx + 0x5c]
// 007cd47e  6a00                 push 0
// 007cd480  8d4c2428             lea ecx, [esp + 0x28]
// 007cd484  51                   push ecx
// 007cd485  57                   push edi
// 007cd486  8bc8                 mov ecx, eax
// 007cd488  ffd2                 call edx
// 007cd48a  8b442460             mov eax, dword ptr [esp + 0x60]
// 007cd48e  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 007cd492  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 007cd496  8b542464             mov edx, dword ptr [esp + 0x64]
// 007cd49a  89442438             mov dword ptr [esp + 0x38], eax
// 007cd49e  2b442428             sub eax, dword ptr [esp + 0x28]
// 007cd4a2  8d441802             lea eax, [eax + ebx + 2]
// 007cd4a6  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 007cd4aa  2b5c2420             sub ebx, dword ptr [esp + 0x20]
// 007cd4ae  89442438             mov dword ptr [esp + 0x38], eax
// 007cd4b2  8b442468             mov eax, dword ptr [esp + 0x68]
// 007cd4b6  8d4418fe             lea eax, [eax + ebx - 2]
// 007cd4ba  89442440             mov dword ptr [esp + 0x40], eax
// 007cd4be  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 007cd4c2  8b1e                 mov ebx, dword ptr [esi]
// 007cd4c4  50                   push eax
// 007cd4c5  83ec10               sub esp, 0x10
// 007cd4c8  8bc4                 mov eax, esp
// 007cd4ca  8908                 mov dword ptr [eax], ecx
// 007cd4cc  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 007cd4d0  894804               mov dword ptr [eax + 4], ecx
// 007cd4d3  895008               mov dword ptr [eax + 8], edx
// 007cd4d6  8b542454             mov edx, dword ptr [esp + 0x54]
// 007cd4da  55                   push ebp
// 007cd4db  89500c               mov dword ptr [eax + 0xc], edx
// 007cd4de  8b839c010000         mov eax, dword ptr [ebx + 0x19c]
// 007cd4e4  57                   push edi
// 007cd4e5  8bce                 mov ecx, esi
// 007cd4e7  ffd0                 call eax
// 007cd4e9  8b17                 mov edx, dword ptr [edi]
// 007cd4eb  8bd8                 mov ebx, eax
// 007cd4ed  8b4234               mov eax, dword ptr [edx + 0x34]
// 007cd4f0  68ffffff00           push 0xffffff
// 007cd4f5  8bcf                 mov ecx, edi
// 007cd4f7  ffd0                 call eax
// 007cd4f9  8b8e60030000         mov ecx, dword ptr [esi + 0x360]
// 007cd4ff  e8bc1c0300           call 0x7ff1c0
// 007cd504  8b10                 mov edx, dword ptr [eax]
// 007cd506  8b525c               mov edx, dword ptr [edx + 0x5c]
// 007cd509  6a00                 push 0
// 007cd50b  8d4c2418             lea ecx, [esp + 0x18]
// 007cd50f  51                   push ecx
// 007cd510  57                   push edi
// 007cd511  8bc8                 mov ecx, eax
// 007cd513  ffd2                 call edx
// 007cd515  8d4c2454             lea ecx, [esp + 0x54]
// 007cd519  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007cd51f  8bc3                 mov eax, ebx
// 007cd521  eb05                 jmp 0x7cd528
// 007cd523  b8ffffff7f           mov eax, 0x7fffffff
// 007cd528  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 007cd52c  64890d00000000       mov dword ptr fs:[0], ecx
// 007cd533  59                   pop ecx
// 007cd534  5f                   pop edi
// 007cd535  5e                   pop esi
// 007cd536  5d                   pop ebp
// 007cd537  5b                   pop ebx
// 007cd538  83c43c               add esp, 0x3c
// 007cd53b  c21c00               ret 0x1c
// copied from an identical function in another client (function ?PrintPage@CXTPReportView@@MAEJPAVCDC@@PAUCPrintInfo@@VCRect@@J@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\ReportControl\XTPReportView.cpp