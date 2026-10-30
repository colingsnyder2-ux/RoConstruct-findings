// roc 2009-12 0081af40  unit: CInstanceRecord::CNameItem  size: 306 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081af40
//
// 0081af40  6aff                 push -1
// 0081af42  68b4aa9500           push 0x95aab4
// 0081af47  64a100000000         mov eax, dword ptr fs:[0]
// 0081af4d  50                   push eax
// 0081af4e  83ec08               sub esp, 8
// 0081af51  53                   push ebx
// 0081af52  56                   push esi
// 0081af53  57                   push edi
// 0081af54  a10052b600           mov eax, dword ptr [0xb65200]
// 0081af59  33c4                 xor eax, esp
// 0081af5b  50                   push eax
// 0081af5c  8d442418             lea eax, [esp + 0x18]
// 0081af60  64a300000000         mov dword ptr fs:[0], eax
// 0081af66  8bf1                 mov esi, ecx
// 0081af68  8d7e5c               lea edi, [esi + 0x5c]
// 0081af6b  8bcf                 mov ecx, edi
// 0081af6d  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0081af75  ff15bcdd9800         call dword ptr [0x98ddbc]
// 0081af7b  84c0                 test al, al
// 0081af7d  7512                 jne 0x81af91
// 0081af7f  8b742428             mov esi, dword ptr [esp + 0x28]
// 0081af83  57                   push edi
// 0081af84  8bce                 mov ecx, esi
// 0081af86  ff1594de9800         call dword ptr [0x98de94]
// 0081af8c  e9ca000000           jmp 0x81b05b
// 0081af91  8b06                 mov eax, dword ptr [esi]
// 0081af93  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 0081af97  8b5078               mov edx, dword ptr [eax + 0x78]
// 0081af9a  57                   push edi
// 0081af9b  8bce                 mov ecx, esi
// 0081af9d  ffd2                 call edx
// 0081af9f  8bd8                 mov ebx, eax
// 0081afa1  85db                 test ebx, ebx
// 0081afa3  7e4a                 jle 0x81afef
// 0081afa5  8d4c242c             lea ecx, [esp + 0x2c]
// 0081afa9  ff1574de9800         call dword ptr [0x98de74]
// 0081afaf  53                   push ebx
// 0081afb0  8d4c2430             lea ecx, [esp + 0x30]
// 0081afb4  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0081afbc  ff1560cf9800         call dword ptr [0x98cf60]
// 0081afc2  85c0                 test eax, eax
// 0081afc4  7417                 je 0x81afdd
// 0081afc6  8b742428             mov esi, dword ptr [esp + 0x28]
// 0081afca  8d44242c             lea eax, [esp + 0x2c]
// 0081afce  50                   push eax
// 0081afcf  8bce                 mov ecx, esi
// 0081afd1  ff1594de9800         call dword ptr [0x98de94]
// 0081afd7  8d4c242c             lea ecx, [esp + 0x2c]
// 0081afdb  eb78                 jmp 0x81b055
// 0081afdd  8d4c242c             lea ecx, [esp + 0x2c]
// 0081afe1  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 0081afe9  ff15c0de9800         call dword ptr [0x98dec0]
// 0081afef  8b16                 mov edx, dword ptr [esi]
// 0081aff1  8b526c               mov edx, dword ptr [edx + 0x6c]
// 0081aff4  57                   push edi
// 0081aff5  8d442418             lea eax, [esp + 0x18]
// 0081aff9  50                   push eax
// 0081affa  8bce                 mov ecx, esi
// 0081affc  ffd2                 call edx
// 0081affe  8bf0                 mov esi, eax
// 0081b000  8d442410             lea eax, [esp + 0x10]
// 0081b004  50                   push eax
// 0081b005  8bcf                 mov ecx, edi
// 0081b007  c744242401000000     mov dword ptr [esp + 0x24], 1
// 0081b00f  e85cf0ffff           call 0x81a070
// 0081b014  682cfc9e00           push 0x9efc2c
// 0081b019  50                   push eax
// 0081b01a  8d4c2434             lea ecx, [esp + 0x34]
// 0081b01e  51                   push ecx
// 0081b01f  c644242c02           mov byte ptr [esp + 0x2c], 2
// 0081b024  e8b71dbfff           call 0x40cde0
// 0081b029  56                   push esi
// 0081b02a  8b742438             mov esi, dword ptr [esp + 0x38]
// 0081b02e  50                   push eax
// 0081b02f  56                   push esi
// 0081b030  c644243803           mov byte ptr [esp + 0x38], 3
// 0081b035  e8060dc4ff           call 0x45bd40
// 0081b03a  83c418               add esp, 0x18
// 0081b03d  8d4c242c             lea ecx, [esp + 0x2c]
// 0081b041  ff15c0de9800         call dword ptr [0x98dec0]
// 0081b047  8d4c2410             lea ecx, [esp + 0x10]
// 0081b04b  ff15c0de9800         call dword ptr [0x98dec0]
// 0081b051  8d4c2414             lea ecx, [esp + 0x14]
// 0081b055  ff15c0de9800         call dword ptr [0x98dec0]
// 0081b05b  8bc6                 mov eax, esi
// 0081b05d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0081b061  64890d00000000       mov dword ptr fs:[0], ecx
// 0081b068  59                   pop ecx
// 0081b069  5f                   pop edi
// 0081b06a  5e                   pop esi
// 0081b06b  5b                   pop ebx
// 0081b06c  83c414               add esp, 0x14
// 0081b06f  c20800               ret 8
// copied from an identical function in another client (function ?GetGroupCaption@CXTPReportRecordItem@@UAE?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@PAVCXTPReportColumn@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\ReportControl\XTPReportRecordItem.cpp