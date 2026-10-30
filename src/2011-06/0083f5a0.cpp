// roc 2011-06 0083f5a0  unit: CInstanceRecord::CNameItem  size: 306 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0083f5a0
//
// 0083f5a0  6aff                 push -1
// 0083f5a2  68844da000           push 0xa04d84
// 0083f5a7  64a100000000         mov eax, dword ptr fs:[0]
// 0083f5ad  50                   push eax
// 0083f5ae  83ec08               sub esp, 8
// 0083f5b1  53                   push ebx
// 0083f5b2  56                   push esi
// 0083f5b3  57                   push edi
// 0083f5b4  a12058c900           mov eax, dword ptr [0xc95820]
// 0083f5b9  33c4                 xor eax, esp
// 0083f5bb  50                   push eax
// 0083f5bc  8d442418             lea eax, [esp + 0x18]
// 0083f5c0  64a300000000         mov dword ptr fs:[0], eax
// 0083f5c6  8bf1                 mov esi, ecx
// 0083f5c8  8d7e5c               lea edi, [esi + 0x5c]
// 0083f5cb  8bcf                 mov ecx, edi
// 0083f5cd  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0083f5d5  ff15b026a400         call dword ptr [0xa426b0]
// 0083f5db  84c0                 test al, al
// 0083f5dd  7512                 jne 0x83f5f1
// 0083f5df  8b742428             mov esi, dword ptr [esp + 0x28]
// 0083f5e3  57                   push edi
// 0083f5e4  8bce                 mov ecx, esi
// 0083f5e6  ff15e42da400         call dword ptr [0xa42de4]
// 0083f5ec  e9ca000000           jmp 0x83f6bb
// 0083f5f1  8b06                 mov eax, dword ptr [esi]
// 0083f5f3  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 0083f5f7  8b5078               mov edx, dword ptr [eax + 0x78]
// 0083f5fa  57                   push edi
// 0083f5fb  8bce                 mov ecx, esi
// 0083f5fd  ffd2                 call edx
// 0083f5ff  8bd8                 mov ebx, eax
// 0083f601  85db                 test ebx, ebx
// 0083f603  7e4a                 jle 0x83f64f
// 0083f605  8d4c242c             lea ecx, [esp + 0x2c]
// 0083f609  ff15b42da400         call dword ptr [0xa42db4]
// 0083f60f  53                   push ebx
// 0083f610  8d4c2430             lea ecx, [esp + 0x30]
// 0083f614  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0083f61c  ff157c1fa400         call dword ptr [0xa41f7c]
// 0083f622  85c0                 test eax, eax
// 0083f624  7417                 je 0x83f63d
// 0083f626  8b742428             mov esi, dword ptr [esp + 0x28]
// 0083f62a  8d44242c             lea eax, [esp + 0x2c]
// 0083f62e  50                   push eax
// 0083f62f  8bce                 mov ecx, esi
// 0083f631  ff15e42da400         call dword ptr [0xa42de4]
// 0083f637  8d4c242c             lea ecx, [esp + 0x2c]
// 0083f63b  eb78                 jmp 0x83f6b5
// 0083f63d  8d4c242c             lea ecx, [esp + 0x2c]
// 0083f641  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 0083f649  ff15082ea400         call dword ptr [0xa42e08]
// 0083f64f  8b16                 mov edx, dword ptr [esi]
// 0083f651  8b526c               mov edx, dword ptr [edx + 0x6c]
// 0083f654  57                   push edi
// 0083f655  8d442418             lea eax, [esp + 0x18]
// 0083f659  50                   push eax
// 0083f65a  8bce                 mov ecx, esi
// 0083f65c  ffd2                 call edx
// 0083f65e  8bf0                 mov esi, eax
// 0083f660  8d442410             lea eax, [esp + 0x10]
// 0083f664  50                   push eax
// 0083f665  8bcf                 mov ecx, edi
// 0083f667  c744242401000000     mov dword ptr [esp + 0x24], 1
// 0083f66f  e87cc5ffff           call 0x83bbf0
// 0083f674  683cfea700           push 0xa7fe3c
// 0083f679  50                   push eax
// 0083f67a  8d4c2434             lea ecx, [esp + 0x34]
// 0083f67e  51                   push ecx
// 0083f67f  c644242c02           mov byte ptr [esp + 0x2c], 2
// 0083f684  e86732bdff           call 0x4128f0
// 0083f689  56                   push esi
// 0083f68a  8b742438             mov esi, dword ptr [esp + 0x38]
// 0083f68e  50                   push eax
// 0083f68f  56                   push esi
// 0083f690  c644243803           mov byte ptr [esp + 0x38], 3
// 0083f695  e8f649c0ff           call 0x444090
// 0083f69a  83c418               add esp, 0x18
// 0083f69d  8d4c242c             lea ecx, [esp + 0x2c]
// 0083f6a1  ff15082ea400         call dword ptr [0xa42e08]
// 0083f6a7  8d4c2410             lea ecx, [esp + 0x10]
// 0083f6ab  ff15082ea400         call dword ptr [0xa42e08]
// 0083f6b1  8d4c2414             lea ecx, [esp + 0x14]
// 0083f6b5  ff15082ea400         call dword ptr [0xa42e08]
// 0083f6bb  8bc6                 mov eax, esi
// 0083f6bd  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0083f6c1  64890d00000000       mov dword ptr fs:[0], ecx
// 0083f6c8  59                   pop ecx
// 0083f6c9  5f                   pop edi
// 0083f6ca  5e                   pop esi
// 0083f6cb  5b                   pop ebx
// 0083f6cc  83c414               add esp, 0x14
// 0083f6cf  c20800               ret 8
// copied from an identical function in another client (function ?GetGroupCaption@CXTPReportRecordItem@@UAE?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@PAVCXTPReportColumn@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\ReportControl\XTPReportRecordItem.cpp