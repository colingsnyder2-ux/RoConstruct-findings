// roc 2012-06 009ae340  unit: CXTPReportControl  size: 252 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ae340
//
// 009ae340  6aff                 push -1
// 009ae342  6841e2ad00           push 0xade241
// 009ae347  64a100000000         mov eax, dword ptr fs:[0]
// 009ae34d  50                   push eax
// 009ae34e  83ec14               sub esp, 0x14
// 009ae351  53                   push ebx
// 009ae352  55                   push ebp
// 009ae353  56                   push esi
// 009ae354  57                   push edi
// 009ae355  a1d027e000           mov eax, dword ptr [0xe027d0]
// 009ae35a  33c4                 xor eax, esp
// 009ae35c  50                   push eax
// 009ae35d  8d442428             lea eax, [esp + 0x28]
// 009ae361  64a300000000         mov dword ptr fs:[0], eax
// 009ae367  8be9                 mov ebp, ecx
// 009ae369  8d4c2414             lea ecx, [esp + 0x14]
// 009ae36d  e858b40e00           call 0xa997ca
// 009ae372  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 009ae376  8d442414             lea eax, [esp + 0x14]
// 009ae37a  50                   push eax
// 009ae37b  68a023b600           push 0xb623a0
// 009ae380  33ff                 xor edi, edi
// 009ae382  51                   push ecx
// 009ae383  897c243c             mov dword ptr [esp + 0x3c], edi
// 009ae387  e864d6ffff           call 0x9ab9f0
// 009ae38c  8b442428             mov eax, dword ptr [esp + 0x28]
// 009ae390  83c40c               add esp, 0xc
// 009ae393  3bc7                 cmp eax, edi
// 009ae395  8bd8                 mov ebx, eax
// 009ae397  7f30                 jg 0x9ae3c9
// 009ae399  8d4c2414             lea ecx, [esp + 0x14]
// 009ae39d  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 009ae3a5  e81ab40e00           call 0xa997c4
// 009ae3aa  b801000000           mov eax, 1
// 009ae3af  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 009ae3b3  64890d00000000       mov dword ptr fs:[0], ecx
// 009ae3ba  59                   pop ecx
// 009ae3bb  5f                   pop edi
// 009ae3bc  5e                   pop esi
// 009ae3bd  5d                   pop ebp
// 009ae3be  5b                   pop ebx
// 009ae3bf  83c420               add esp, 0x20
// 009ae3c2  c20800               ret 8
// 009ae3c5  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 009ae3c9  85ff                 test edi, edi
// 009ae3cb  7c6a                 jl 0x9ae437
// 009ae3cd  3bf8                 cmp edi, eax
// 009ae3cf  7d66                 jge 0x9ae437
// 009ae3d1  8b542418             mov edx, dword ptr [esp + 0x18]
// 009ae3d5  8d04ba               lea eax, [edx + edi*4]
// 009ae3d8  50                   push eax
// 009ae3d9  8d4c243c             lea ecx, [esp + 0x3c]
// 009ae3dd  ff158047b200         call dword ptr [0xb24780]
// 009ae3e3  8d4c2438             lea ecx, [esp + 0x38]
// 009ae3e7  c644243001           mov byte ptr [esp + 0x30], 1
// 009ae3ec  ff156046b200         call dword ptr [0xb24660]
// 009ae3f2  8d4c2438             lea ecx, [esp + 0x38]
// 009ae3f6  84c0                 test al, al
// 009ae3f8  7528                 jne 0x9ae422
// 009ae3fa  8b7500               mov esi, dword ptr [ebp]
// 009ae3fd  81c644020000         add esi, 0x244
// 009ae403  ff159847b200         call dword ptr [0xb24798]
// 009ae409  50                   push eax
// 009ae40a  8b06                 mov eax, dword ptr [esi]
// 009ae40c  8bcd                 mov ecx, ebp
// 009ae40e  ffd0                 call eax
// 009ae410  85c0                 test eax, eax
// 009ae412  740a                 je 0x9ae41e
// 009ae414  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 009ae418  50                   push eax
// 009ae419  e8e2cb0000           call 0x9bb000
// 009ae41e  8d4c2438             lea ecx, [esp + 0x38]
// 009ae422  c644243000           mov byte ptr [esp + 0x30], 0
// 009ae427  ff15d047b200         call dword ptr [0xb247d0]
// 009ae42d  47                   inc edi
// 009ae42e  3bfb                 cmp edi, ebx
// 009ae430  7c93                 jl 0x9ae3c5
// 009ae432  e962ffffff           jmp 0x9ae399
// 009ae437  e8843ffdff           call 0x9823c0
// copied from an identical function in another client (function ?_ReadRecodsFromText@CXTPReportControl@@MAEHPBDAAVCXTPReportRecords@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportControl.cpp