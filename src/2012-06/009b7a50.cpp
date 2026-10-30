// roc 2012-06 009b7a50  unit: CInstanceRecord::CNameItem  size: 306 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009b7a50
//
// 009b7a50  6aff                 push -1
// 009b7a52  6834ebad00           push 0xadeb34
// 009b7a57  64a100000000         mov eax, dword ptr fs:[0]
// 009b7a5d  50                   push eax
// 009b7a5e  83ec08               sub esp, 8
// 009b7a61  53                   push ebx
// 009b7a62  56                   push esi
// 009b7a63  57                   push edi
// 009b7a64  a1d027e000           mov eax, dword ptr [0xe027d0]
// 009b7a69  33c4                 xor eax, esp
// 009b7a6b  50                   push eax
// 009b7a6c  8d442418             lea eax, [esp + 0x18]
// 009b7a70  64a300000000         mov dword ptr fs:[0], eax
// 009b7a76  8bf1                 mov esi, ecx
// 009b7a78  8d7e5c               lea edi, [esi + 0x5c]
// 009b7a7b  8bcf                 mov ecx, edi
// 009b7a7d  c744241400000000     mov dword ptr [esp + 0x14], 0
// 009b7a85  ff156046b200         call dword ptr [0xb24660]
// 009b7a8b  84c0                 test al, al
// 009b7a8d  7512                 jne 0x9b7aa1
// 009b7a8f  8b742428             mov esi, dword ptr [esp + 0x28]
// 009b7a93  57                   push edi
// 009b7a94  8bce                 mov ecx, esi
// 009b7a96  ff158047b200         call dword ptr [0xb24780]
// 009b7a9c  e9ca000000           jmp 0x9b7b6b
// 009b7aa1  8b06                 mov eax, dword ptr [esi]
// 009b7aa3  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 009b7aa7  8b5078               mov edx, dword ptr [eax + 0x78]
// 009b7aaa  57                   push edi
// 009b7aab  8bce                 mov ecx, esi
// 009b7aad  ffd2                 call edx
// 009b7aaf  8bd8                 mov ebx, eax
// 009b7ab1  85db                 test ebx, ebx
// 009b7ab3  7e4a                 jle 0x9b7aff
// 009b7ab5  8d4c242c             lea ecx, [esp + 0x2c]
// 009b7ab9  ff158447b200         call dword ptr [0xb24784]
// 009b7abf  53                   push ebx
// 009b7ac0  8d4c2430             lea ecx, [esp + 0x30]
// 009b7ac4  c744242400000000     mov dword ptr [esp + 0x24], 0
// 009b7acc  ff151450b200         call dword ptr [0xb25014]
// 009b7ad2  85c0                 test eax, eax
// 009b7ad4  7417                 je 0x9b7aed
// 009b7ad6  8b742428             mov esi, dword ptr [esp + 0x28]
// 009b7ada  8d44242c             lea eax, [esp + 0x2c]
// 009b7ade  50                   push eax
// 009b7adf  8bce                 mov ecx, esi
// 009b7ae1  ff158047b200         call dword ptr [0xb24780]
// 009b7ae7  8d4c242c             lea ecx, [esp + 0x2c]
// 009b7aeb  eb78                 jmp 0x9b7b65
// 009b7aed  8d4c242c             lea ecx, [esp + 0x2c]
// 009b7af1  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 009b7af9  ff15d047b200         call dword ptr [0xb247d0]
// 009b7aff  8b16                 mov edx, dword ptr [esi]
// 009b7b01  8b526c               mov edx, dword ptr [edx + 0x6c]
// 009b7b04  57                   push edi
// 009b7b05  8d442418             lea eax, [esp + 0x18]
// 009b7b09  50                   push eax
// 009b7b0a  8bce                 mov ecx, esi
// 009b7b0c  ffd2                 call edx
// 009b7b0e  8bf0                 mov esi, eax
// 009b7b10  8d442410             lea eax, [esp + 0x10]
// 009b7b14  50                   push eax
// 009b7b15  8bcf                 mov ecx, edi
// 009b7b17  c744242401000000     mov dword ptr [esp + 0x24], 1
// 009b7b1f  e8dcc6ffff           call 0x9b4200
// 009b7b24  68fcbab500           push 0xb5bafc
// 009b7b29  50                   push eax
// 009b7b2a  8d4c2434             lea ecx, [esp + 0x34]
// 009b7b2e  51                   push ecx
// 009b7b2f  c644242c02           mov byte ptr [esp + 0x2c], 2
// 009b7b34  e867dea5ff           call 0x4159a0
// 009b7b39  56                   push esi
// 009b7b3a  8b742438             mov esi, dword ptr [esp + 0x38]
// 009b7b3e  50                   push eax
// 009b7b3f  56                   push esi
// 009b7b40  c644243803           mov byte ptr [esp + 0x38], 3
// 009b7b45  e8a6daa9ff           call 0x4555f0
// 009b7b4a  83c418               add esp, 0x18
// 009b7b4d  8d4c242c             lea ecx, [esp + 0x2c]
// 009b7b51  ff15d047b200         call dword ptr [0xb247d0]
// 009b7b57  8d4c2410             lea ecx, [esp + 0x10]
// 009b7b5b  ff15d047b200         call dword ptr [0xb247d0]
// 009b7b61  8d4c2414             lea ecx, [esp + 0x14]
// 009b7b65  ff15d047b200         call dword ptr [0xb247d0]
// 009b7b6b  8bc6                 mov eax, esi
// 009b7b6d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 009b7b71  64890d00000000       mov dword ptr fs:[0], ecx
// 009b7b78  59                   pop ecx
// 009b7b79  5f                   pop edi
// 009b7b7a  5e                   pop esi
// 009b7b7b  5b                   pop ebx
// 009b7b7c  83c414               add esp, 0x14
// 009b7b7f  c20800               ret 8
// copied from an identical function in another client (function ?GetGroupCaption@CXTPReportRecordItem@@UAE?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@PAVCXTPReportColumn@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\ReportControl\XTPReportRecordItem.cpp