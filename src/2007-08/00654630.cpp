// roc 2007-08 00654630  unit: CInstanceRecord::CNameItem  size: 306 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00654630
//
// 00654630  6aff                 push -1
// 00654632  6824f87500           push 0x75f824
// 00654637  64a100000000         mov eax, dword ptr fs:[0]
// 0065463d  50                   push eax
// 0065463e  83ec08               sub esp, 8
// 00654641  53                   push ebx
// 00654642  56                   push esi
// 00654643  57                   push edi
// 00654644  a188518b00           mov eax, dword ptr [0x8b5188]
// 00654649  33c4                 xor eax, esp
// 0065464b  50                   push eax
// 0065464c  8d442418             lea eax, [esp + 0x18]
// 00654650  64a300000000         mov dword ptr fs:[0], eax
// 00654656  8bf1                 mov esi, ecx
// 00654658  8d7e5c               lea edi, [esi + 0x5c]
// 0065465b  8bcf                 mov ecx, edi
// 0065465d  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00654665  ff15d0dc7700         call dword ptr [0x77dcd0]
// 0065466b  84c0                 test al, al
// 0065466d  7512                 jne 0x654681
// 0065466f  8b742428             mov esi, dword ptr [esp + 0x28]
// 00654673  57                   push edi
// 00654674  8bce                 mov ecx, esi
// 00654676  ff1574dd7700         call dword ptr [0x77dd74]
// 0065467c  e9ca000000           jmp 0x65474b
// 00654681  8b06                 mov eax, dword ptr [esi]
// 00654683  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00654687  8b5078               mov edx, dword ptr [eax + 0x78]
// 0065468a  57                   push edi
// 0065468b  8bce                 mov ecx, esi
// 0065468d  ffd2                 call edx
// 0065468f  8bd8                 mov ebx, eax
// 00654691  85db                 test ebx, ebx
// 00654693  7e4a                 jle 0x6546df
// 00654695  8d4c242c             lea ecx, [esp + 0x2c]
// 00654699  ff15acdd7700         call dword ptr [0x77ddac]
// 0065469f  53                   push ebx
// 006546a0  8d4c2430             lea ecx, [esp + 0x30]
// 006546a4  c744242400000000     mov dword ptr [esp + 0x24], 0
// 006546ac  ff159cd57700         call dword ptr [0x77d59c]
// 006546b2  85c0                 test eax, eax
// 006546b4  7417                 je 0x6546cd
// 006546b6  8b742428             mov esi, dword ptr [esp + 0x28]
// 006546ba  8d44242c             lea eax, [esp + 0x2c]
// 006546be  50                   push eax
// 006546bf  8bce                 mov ecx, esi
// 006546c1  ff1574dd7700         call dword ptr [0x77dd74]
// 006546c7  8d4c242c             lea ecx, [esp + 0x2c]
// 006546cb  eb78                 jmp 0x654745
// 006546cd  8d4c242c             lea ecx, [esp + 0x2c]
// 006546d1  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 006546d9  ff15bcdd7700         call dword ptr [0x77ddbc]
// 006546df  8b16                 mov edx, dword ptr [esi]
// 006546e1  8b526c               mov edx, dword ptr [edx + 0x6c]
// 006546e4  57                   push edi
// 006546e5  8d442418             lea eax, [esp + 0x18]
// 006546e9  50                   push eax
// 006546ea  8bce                 mov ecx, esi
// 006546ec  ffd2                 call edx
// 006546ee  8bf0                 mov esi, eax
// 006546f0  8d442410             lea eax, [esp + 0x10]
// 006546f4  50                   push eax
// 006546f5  8bcf                 mov ecx, edi
// 006546f7  c744242401000000     mov dword ptr [esp + 0x24], 1
// 006546ff  e87c450a00           call 0x6f8c80
// 00654704  68787f7c00           push 0x7c7f78
// 00654709  50                   push eax
// 0065470a  8d4c2434             lea ecx, [esp + 0x34]
// 0065470e  51                   push ecx
// 0065470f  c644242c02           mov byte ptr [esp + 0x2c], 2
// 00654714  e8e762dbff           call 0x40aa00
// 00654719  56                   push esi
// 0065471a  8b742438             mov esi, dword ptr [esp + 0x38]
// 0065471e  50                   push eax
// 0065471f  56                   push esi
// 00654720  c644243803           mov byte ptr [esp + 0x38], 3
// 00654725  e856e7dbff           call 0x412e80
// 0065472a  83c418               add esp, 0x18
// 0065472d  8d4c242c             lea ecx, [esp + 0x2c]
// 00654731  ff15bcdd7700         call dword ptr [0x77ddbc]
// 00654737  8d4c2410             lea ecx, [esp + 0x10]
// 0065473b  ff15bcdd7700         call dword ptr [0x77ddbc]
// 00654741  8d4c2414             lea ecx, [esp + 0x14]
// 00654745  ff15bcdd7700         call dword ptr [0x77ddbc]
// 0065474b  8bc6                 mov eax, esi
// 0065474d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00654751  64890d00000000       mov dword ptr fs:[0], ecx
// 00654758  59                   pop ecx
// 00654759  5f                   pop edi
// 0065475a  5e                   pop esi
// 0065475b  5b                   pop ebx
// 0065475c  83c414               add esp, 0x14
// 0065475f  c20800               ret 8
// copied from an identical function in another client (function ?GetGroupCaption@CXTPReportRecordItem@@UAE?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@PAVCXTPReportColumn@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\ReportControl\XTPReportRecordItem.cpp