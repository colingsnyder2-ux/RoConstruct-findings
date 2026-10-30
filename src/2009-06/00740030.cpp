// roc 2009-06 00740030  unit: CInstanceRecord::CNameItem  size: 306 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00740030
//
// 00740030  6aff                 push -1
// 00740032  6824688700           push 0x876824
// 00740037  64a100000000         mov eax, dword ptr fs:[0]
// 0074003d  50                   push eax
// 0074003e  83ec08               sub esp, 8
// 00740041  53                   push ebx
// 00740042  56                   push esi
// 00740043  57                   push edi
// 00740044  a1304fa200           mov eax, dword ptr [0xa24f30]
// 00740049  33c4                 xor eax, esp
// 0074004b  50                   push eax
// 0074004c  8d442418             lea eax, [esp + 0x18]
// 00740050  64a300000000         mov dword ptr fs:[0], eax
// 00740056  8bf1                 mov esi, ecx
// 00740058  8d7e5c               lea edi, [esi + 0x5c]
// 0074005b  8bcf                 mov ecx, edi
// 0074005d  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00740065  ff155cfb8900         call dword ptr [0x89fb5c]
// 0074006b  84c0                 test al, al
// 0074006d  7512                 jne 0x740081
// 0074006f  8b742428             mov esi, dword ptr [esp + 0x28]
// 00740073  57                   push edi
// 00740074  8bce                 mov ecx, esi
// 00740076  ff15e4fc8900         call dword ptr [0x89fce4]
// 0074007c  e9ca000000           jmp 0x74014b
// 00740081  8b06                 mov eax, dword ptr [esi]
// 00740083  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00740087  8b5078               mov edx, dword ptr [eax + 0x78]
// 0074008a  57                   push edi
// 0074008b  8bce                 mov ecx, esi
// 0074008d  ffd2                 call edx
// 0074008f  8bd8                 mov ebx, eax
// 00740091  85db                 test ebx, ebx
// 00740093  7e4a                 jle 0x7400df
// 00740095  8d4c242c             lea ecx, [esp + 0x2c]
// 00740099  ff15bcfc8900         call dword ptr [0x89fcbc]
// 0074009f  53                   push ebx
// 007400a0  8d4c2430             lea ecx, [esp + 0x30]
// 007400a4  c744242400000000     mov dword ptr [esp + 0x24], 0
// 007400ac  ff15fcf38900         call dword ptr [0x89f3fc]
// 007400b2  85c0                 test eax, eax
// 007400b4  7417                 je 0x7400cd
// 007400b6  8b742428             mov esi, dword ptr [esp + 0x28]
// 007400ba  8d44242c             lea eax, [esp + 0x2c]
// 007400be  50                   push eax
// 007400bf  8bce                 mov ecx, esi
// 007400c1  ff15e4fc8900         call dword ptr [0x89fce4]
// 007400c7  8d4c242c             lea ecx, [esp + 0x2c]
// 007400cb  eb78                 jmp 0x740145
// 007400cd  8d4c242c             lea ecx, [esp + 0x2c]
// 007400d1  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 007400d9  ff1510fd8900         call dword ptr [0x89fd10]
// 007400df  8b16                 mov edx, dword ptr [esi]
// 007400e1  8b526c               mov edx, dword ptr [edx + 0x6c]
// 007400e4  57                   push edi
// 007400e5  8d442418             lea eax, [esp + 0x18]
// 007400e9  50                   push eax
// 007400ea  8bce                 mov ecx, esi
// 007400ec  ffd2                 call edx
// 007400ee  8bf0                 mov esi, eax
// 007400f0  8d442410             lea eax, [esp + 0x10]
// 007400f4  50                   push eax
// 007400f5  8bcf                 mov ecx, edi
// 007400f7  c744242401000000     mov dword ptr [esp + 0x24], 1
// 007400ff  e84cf0ffff           call 0x73f150
// 00740104  68dc448f00           push 0x8f44dc
// 00740109  50                   push eax
// 0074010a  8d4c2434             lea ecx, [esp + 0x34]
// 0074010e  51                   push ecx
// 0074010f  c644242c02           mov byte ptr [esp + 0x2c], 2
// 00740114  e807cdccff           call 0x40ce20
// 00740119  56                   push esi
// 0074011a  8b742438             mov esi, dword ptr [esp + 0x38]
// 0074011e  50                   push eax
// 0074011f  56                   push esi
// 00740120  c644243803           mov byte ptr [esp + 0x38], 3
// 00740125  e82642d1ff           call 0x454350
// 0074012a  83c418               add esp, 0x18
// 0074012d  8d4c242c             lea ecx, [esp + 0x2c]
// 00740131  ff1510fd8900         call dword ptr [0x89fd10]
// 00740137  8d4c2410             lea ecx, [esp + 0x10]
// 0074013b  ff1510fd8900         call dword ptr [0x89fd10]
// 00740141  8d4c2414             lea ecx, [esp + 0x14]
// 00740145  ff1510fd8900         call dword ptr [0x89fd10]
// 0074014b  8bc6                 mov eax, esi
// 0074014d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00740151  64890d00000000       mov dword ptr fs:[0], ecx
// 00740158  59                   pop ecx
// 00740159  5f                   pop edi
// 0074015a  5e                   pop esi
// 0074015b  5b                   pop ebx
// 0074015c  83c414               add esp, 0x14
// 0074015f  c20800               ret 8
// copied from an identical function in another client (function ?GetGroupCaption@CXTPReportRecordItem@@UAE?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@PAVCXTPReportColumn@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\ReportControl\XTPReportRecordItem.cpp