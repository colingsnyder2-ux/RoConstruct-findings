// roc 2009-12 00821b40  unit: CXTPReportControl  size: 252 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00821b40
//
// 00821b40  6aff                 push -1
// 00821b42  6811b19500           push 0x95b111
// 00821b47  64a100000000         mov eax, dword ptr fs:[0]
// 00821b4d  50                   push eax
// 00821b4e  83ec14               sub esp, 0x14
// 00821b51  53                   push ebx
// 00821b52  55                   push ebp
// 00821b53  56                   push esi
// 00821b54  57                   push edi
// 00821b55  a10052b600           mov eax, dword ptr [0xb65200]
// 00821b5a  33c4                 xor eax, esp
// 00821b5c  50                   push eax
// 00821b5d  8d442428             lea eax, [esp + 0x28]
// 00821b61  64a300000000         mov dword ptr fs:[0], eax
// 00821b67  8be9                 mov ebp, ecx
// 00821b69  8d4c2414             lea ecx, [esp + 0x14]
// 00821b6d  e8524b1000           call 0x9266c4
// 00821b72  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00821b76  8d442414             lea eax, [esp + 0x14]
// 00821b7a  50                   push eax
// 00821b7b  6828fd9900           push 0x99fd28
// 00821b80  33ff                 xor edi, edi
// 00821b82  51                   push ecx
// 00821b83  897c243c             mov dword ptr [esp + 0x3c], edi
// 00821b87  e874d6ffff           call 0x81f200
// 00821b8c  8b442428             mov eax, dword ptr [esp + 0x28]
// 00821b90  83c40c               add esp, 0xc
// 00821b93  3bc7                 cmp eax, edi
// 00821b95  8bd8                 mov ebx, eax
// 00821b97  7f30                 jg 0x821bc9
// 00821b99  8d4c2414             lea ecx, [esp + 0x14]
// 00821b9d  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 00821ba5  e8144b1000           call 0x9266be
// 00821baa  b801000000           mov eax, 1
// 00821baf  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00821bb3  64890d00000000       mov dword ptr fs:[0], ecx
// 00821bba  59                   pop ecx
// 00821bbb  5f                   pop edi
// 00821bbc  5e                   pop esi
// 00821bbd  5d                   pop ebp
// 00821bbe  5b                   pop ebx
// 00821bbf  83c420               add esp, 0x20
// 00821bc2  c20800               ret 8
// 00821bc5  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00821bc9  85ff                 test edi, edi
// 00821bcb  7c6a                 jl 0x821c37
// 00821bcd  3bf8                 cmp edi, eax
// 00821bcf  7d66                 jge 0x821c37
// 00821bd1  8b542418             mov edx, dword ptr [esp + 0x18]
// 00821bd5  8d04ba               lea eax, [edx + edi*4]
// 00821bd8  50                   push eax
// 00821bd9  8d4c243c             lea ecx, [esp + 0x3c]
// 00821bdd  ff1594de9800         call dword ptr [0x98de94]
// 00821be3  8d4c2438             lea ecx, [esp + 0x38]
// 00821be7  c644243001           mov byte ptr [esp + 0x30], 1
// 00821bec  ff15bcdd9800         call dword ptr [0x98ddbc]
// 00821bf2  8d4c2438             lea ecx, [esp + 0x38]
// 00821bf6  84c0                 test al, al
// 00821bf8  7528                 jne 0x821c22
// 00821bfa  8b7500               mov esi, dword ptr [ebp]
// 00821bfd  81c644020000         add esi, 0x244
// 00821c03  ff1580de9800         call dword ptr [0x98de80]
// 00821c09  50                   push eax
// 00821c0a  8b06                 mov eax, dword ptr [esi]
// 00821c0c  8bcd                 mov ecx, ebp
// 00821c0e  ffd0                 call eax
// 00821c10  85c0                 test eax, eax
// 00821c12  740a                 je 0x821c1e
// 00821c14  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00821c18  50                   push eax
// 00821c19  e892b30000           call 0x82cfb0
// 00821c1e  8d4c2438             lea ecx, [esp + 0x38]
// 00821c22  c644243000           mov byte ptr [esp + 0x30], 0
// 00821c27  ff15c0de9800         call dword ptr [0x98dec0]
// 00821c2d  47                   inc edi
// 00821c2e  3bfb                 cmp edi, ebx
// 00821c30  7c93                 jl 0x821bc5
// 00821c32  e962ffffff           jmp 0x821b99
// 00821c37  e8d01efdff           call 0x7f3b0c
// copied from an identical function in another client (function ?_ReadRecodsFromText@CXTPReportControl@@MAEHPBDAAVCXTPReportRecords@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportControl.cpp