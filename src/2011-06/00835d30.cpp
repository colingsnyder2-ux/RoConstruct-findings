// roc 2011-06 00835d30  unit: CXTPReportControl  size: 252 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00835d30
//
// 00835d30  6aff                 push -1
// 00835d32  68c144a000           push 0xa044c1
// 00835d37  64a100000000         mov eax, dword ptr fs:[0]
// 00835d3d  50                   push eax
// 00835d3e  83ec14               sub esp, 0x14
// 00835d41  53                   push ebx
// 00835d42  55                   push ebp
// 00835d43  56                   push esi
// 00835d44  57                   push edi
// 00835d45  a12058c900           mov eax, dword ptr [0xc95820]
// 00835d4a  33c4                 xor eax, esp
// 00835d4c  50                   push eax
// 00835d4d  8d442428             lea eax, [esp + 0x28]
// 00835d51  64a300000000         mov dword ptr fs:[0], eax
// 00835d57  8be9                 mov ebp, ecx
// 00835d59  8d4c2414             lea ecx, [esp + 0x14]
// 00835d5d  e8ae6a1900           call 0x9cc810
// 00835d62  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00835d66  8d442414             lea eax, [esp + 0x14]
// 00835d6a  50                   push eax
// 00835d6b  689cbea500           push 0xa5be9c
// 00835d70  33ff                 xor edi, edi
// 00835d72  51                   push ecx
// 00835d73  897c243c             mov dword ptr [esp + 0x3c], edi
// 00835d77  e874d6ffff           call 0x8333f0
// 00835d7c  8b442428             mov eax, dword ptr [esp + 0x28]
// 00835d80  83c40c               add esp, 0xc
// 00835d83  3bc7                 cmp eax, edi
// 00835d85  8bd8                 mov ebx, eax
// 00835d87  7f30                 jg 0x835db9
// 00835d89  8d4c2414             lea ecx, [esp + 0x14]
// 00835d8d  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 00835d95  e8706a1900           call 0x9cc80a
// 00835d9a  b801000000           mov eax, 1
// 00835d9f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00835da3  64890d00000000       mov dword ptr fs:[0], ecx
// 00835daa  59                   pop ecx
// 00835dab  5f                   pop edi
// 00835dac  5e                   pop esi
// 00835dad  5d                   pop ebp
// 00835dae  5b                   pop ebx
// 00835daf  83c420               add esp, 0x20
// 00835db2  c20800               ret 8
// 00835db5  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00835db9  85ff                 test edi, edi
// 00835dbb  7c6a                 jl 0x835e27
// 00835dbd  3bf8                 cmp edi, eax
// 00835dbf  7d66                 jge 0x835e27
// 00835dc1  8b542418             mov edx, dword ptr [esp + 0x18]
// 00835dc5  8d04ba               lea eax, [edx + edi*4]
// 00835dc8  50                   push eax
// 00835dc9  8d4c243c             lea ecx, [esp + 0x3c]
// 00835dcd  ff15e42da400         call dword ptr [0xa42de4]
// 00835dd3  8d4c2438             lea ecx, [esp + 0x38]
// 00835dd7  c644243001           mov byte ptr [esp + 0x30], 1
// 00835ddc  ff15b026a400         call dword ptr [0xa426b0]
// 00835de2  8d4c2438             lea ecx, [esp + 0x38]
// 00835de6  84c0                 test al, al
// 00835de8  7528                 jne 0x835e12
// 00835dea  8b7500               mov esi, dword ptr [ebp]
// 00835ded  81c644020000         add esi, 0x244
// 00835df3  ff15c82da400         call dword ptr [0xa42dc8]
// 00835df9  50                   push eax
// 00835dfa  8b06                 mov eax, dword ptr [esi]
// 00835dfc  8bcd                 mov ecx, ebp
// 00835dfe  ffd0                 call eax
// 00835e00  85c0                 test eax, eax
// 00835e02  740a                 je 0x835e0e
// 00835e04  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00835e08  50                   push eax
// 00835e09  e862ce0000           call 0x842c70
// 00835e0e  8d4c2438             lea ecx, [esp + 0x38]
// 00835e12  c644243000           mov byte ptr [esp + 0x30], 0
// 00835e17  ff15082ea400         call dword ptr [0xa42e08]
// 00835e1d  47                   inc edi
// 00835e1e  3bfb                 cmp edi, ebx
// 00835e20  7c93                 jl 0x835db5
// 00835e22  e962ffffff           jmp 0x835d89
// 00835e27  e8de44fdff           call 0x80a30a
// copied from an identical function in another client (function ?_ReadRecodsFromText@CXTPReportControl@@MAEHPBDAAVCXTPReportRecords@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportControl.cpp