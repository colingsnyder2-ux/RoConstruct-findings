// roc 2009-06 00746d30  unit: CXTPReportControl  size: 252 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00746d30
//
// 00746d30  6aff                 push -1
// 00746d32  68216e8700           push 0x876e21
// 00746d37  64a100000000         mov eax, dword ptr fs:[0]
// 00746d3d  50                   push eax
// 00746d3e  83ec14               sub esp, 0x14
// 00746d41  53                   push ebx
// 00746d42  55                   push ebp
// 00746d43  56                   push esi
// 00746d44  57                   push edi
// 00746d45  a1304fa200           mov eax, dword ptr [0xa24f30]
// 00746d4a  33c4                 xor eax, esp
// 00746d4c  50                   push eax
// 00746d4d  8d442428             lea eax, [esp + 0x28]
// 00746d51  64a300000000         mov dword ptr fs:[0], eax
// 00746d57  8be9                 mov ebp, ecx
// 00746d59  8d4c2414             lea ecx, [esp + 0x14]
// 00746d5d  e8f6531000           call 0x84c158
// 00746d62  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00746d66  8d442414             lea eax, [esp + 0x14]
// 00746d6a  50                   push eax
// 00746d6b  68e8d18a00           push 0x8ad1e8
// 00746d70  33ff                 xor edi, edi
// 00746d72  51                   push ecx
// 00746d73  897c243c             mov dword ptr [esp + 0x3c], edi
// 00746d77  e874d6ffff           call 0x7443f0
// 00746d7c  8b442428             mov eax, dword ptr [esp + 0x28]
// 00746d80  83c40c               add esp, 0xc
// 00746d83  3bc7                 cmp eax, edi
// 00746d85  8bd8                 mov ebx, eax
// 00746d87  7f30                 jg 0x746db9
// 00746d89  8d4c2414             lea ecx, [esp + 0x14]
// 00746d8d  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 00746d95  e8b8531000           call 0x84c152
// 00746d9a  b801000000           mov eax, 1
// 00746d9f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00746da3  64890d00000000       mov dword ptr fs:[0], ecx
// 00746daa  59                   pop ecx
// 00746dab  5f                   pop edi
// 00746dac  5e                   pop esi
// 00746dad  5d                   pop ebp
// 00746dae  5b                   pop ebx
// 00746daf  83c420               add esp, 0x20
// 00746db2  c20800               ret 8
// 00746db5  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00746db9  85ff                 test edi, edi
// 00746dbb  7c6a                 jl 0x746e27
// 00746dbd  3bf8                 cmp edi, eax
// 00746dbf  7d66                 jge 0x746e27
// 00746dc1  8b542418             mov edx, dword ptr [esp + 0x18]
// 00746dc5  8d04ba               lea eax, [edx + edi*4]
// 00746dc8  50                   push eax
// 00746dc9  8d4c243c             lea ecx, [esp + 0x3c]
// 00746dcd  ff15e4fc8900         call dword ptr [0x89fce4]
// 00746dd3  8d4c2438             lea ecx, [esp + 0x38]
// 00746dd7  c644243001           mov byte ptr [esp + 0x30], 1
// 00746ddc  ff155cfb8900         call dword ptr [0x89fb5c]
// 00746de2  8d4c2438             lea ecx, [esp + 0x38]
// 00746de6  84c0                 test al, al
// 00746de8  7528                 jne 0x746e12
// 00746dea  8b7500               mov esi, dword ptr [ebp]
// 00746ded  81c644020000         add esi, 0x244
// 00746df3  ff15d0fc8900         call dword ptr [0x89fcd0]
// 00746df9  50                   push eax
// 00746dfa  8b06                 mov eax, dword ptr [esi]
// 00746dfc  8bcd                 mov ecx, ebp
// 00746dfe  ffd0                 call eax
// 00746e00  85c0                 test eax, eax
// 00746e02  740a                 je 0x746e0e
// 00746e04  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00746e08  50                   push eax
// 00746e09  e832b40000           call 0x752240
// 00746e0e  8d4c2438             lea ecx, [esp + 0x38]
// 00746e12  c644243000           mov byte ptr [esp + 0x30], 0
// 00746e17  ff1510fd8900         call dword ptr [0x89fd10]
// 00746e1d  47                   inc edi
// 00746e1e  3bfb                 cmp edi, ebx
// 00746e20  7c93                 jl 0x746db5
// 00746e22  e962ffffff           jmp 0x746d89
// 00746e27  e8b81efdff           call 0x718ce4
// copied from an identical function in another client (function ?_ReadRecodsFromText@CXTPReportControl@@MAEHPBDAAVCXTPReportRecords@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportControl.cpp