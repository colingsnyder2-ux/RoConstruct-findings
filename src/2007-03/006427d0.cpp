// roc 2007-03 006427d0  unit: seg_00640000  size: 306 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006427d0
//
// 006427d0  6aff                 push -1
// 006427d2  6894ff7500           push 0x75ff94
// 006427d7  64a100000000         mov eax, dword ptr fs:[0]
// 006427dd  50                   push eax
// 006427de  83ec08               sub esp, 8
// 006427e1  53                   push ebx
// 006427e2  56                   push esi
// 006427e3  57                   push edi
// 006427e4  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 006427e9  33c4                 xor eax, esp
// 006427eb  50                   push eax
// 006427ec  8d442418             lea eax, [esp + 0x18]
// 006427f0  64a300000000         mov dword ptr fs:[0], eax
// 006427f6  8bf1                 mov esi, ecx
// 006427f8  8d7e5c               lea edi, [esi + 0x5c]
// 006427fb  8bcf                 mov ecx, edi
// 006427fd  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00642805  ff1528db7700         call dword ptr [0x77db28]
// 0064280b  84c0                 test al, al
// 0064280d  7512                 jne 0x642821
// 0064280f  8b742428             mov esi, dword ptr [esp + 0x28]
// 00642813  57                   push edi
// 00642814  8bce                 mov ecx, esi
// 00642816  ff152cdd7700         call dword ptr [0x77dd2c]
// 0064281c  e9ca000000           jmp 0x6428eb
// 00642821  8b06                 mov eax, dword ptr [esi]
// 00642823  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00642827  8b5078               mov edx, dword ptr [eax + 0x78]
// 0064282a  57                   push edi
// 0064282b  8bce                 mov ecx, esi
// 0064282d  ffd2                 call edx
// 0064282f  8bd8                 mov ebx, eax
// 00642831  85db                 test ebx, ebx
// 00642833  7e4a                 jle 0x64287f
// 00642835  8d4c242c             lea ecx, [esp + 0x2c]
// 00642839  ff1568dd7700         call dword ptr [0x77dd68]
// 0064283f  53                   push ebx
// 00642840  8d4c2430             lea ecx, [esp + 0x30]
// 00642844  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0064284c  ff15b0d57700         call dword ptr [0x77d5b0]
// 00642852  85c0                 test eax, eax
// 00642854  7417                 je 0x64286d
// 00642856  8b742428             mov esi, dword ptr [esp + 0x28]
// 0064285a  8d44242c             lea eax, [esp + 0x2c]
// 0064285e  50                   push eax
// 0064285f  8bce                 mov ecx, esi
// 00642861  ff152cdd7700         call dword ptr [0x77dd2c]
// 00642867  8d4c242c             lea ecx, [esp + 0x2c]
// 0064286b  eb78                 jmp 0x6428e5
// 0064286d  8d4c242c             lea ecx, [esp + 0x2c]
// 00642871  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 00642879  ff1578dd7700         call dword ptr [0x77dd78]
// 0064287f  8b16                 mov edx, dword ptr [esi]
// 00642881  8b526c               mov edx, dword ptr [edx + 0x6c]
// 00642884  57                   push edi
// 00642885  8d442418             lea eax, [esp + 0x18]
// 00642889  50                   push eax
// 0064288a  8bce                 mov ecx, esi
// 0064288c  ffd2                 call edx
// 0064288e  8bf0                 mov esi, eax
// 00642890  8d442410             lea eax, [esp + 0x10]
// 00642894  50                   push eax
// 00642895  8bcf                 mov ecx, edi
// 00642897  c744242401000000     mov dword ptr [esp + 0x24], 1
// 0064289f  e83c670900           call 0x6d8fe0
// 006428a4  6870567c00           push 0x7c5670
// 006428a9  50                   push eax
// 006428aa  8d4c2434             lea ecx, [esp + 0x34]
// 006428ae  51                   push ecx
// 006428af  c644242c02           mov byte ptr [esp + 0x2c], 2
// 006428b4  e8b796dcff           call 0x40bf70
// 006428b9  56                   push esi
// 006428ba  8b742438             mov esi, dword ptr [esp + 0x38]
// 006428be  50                   push eax
// 006428bf  56                   push esi
// 006428c0  c644243803           mov byte ptr [esp + 0x38], 3
// 006428c5  e8d614ddff           call 0x413da0
// 006428ca  83c418               add esp, 0x18
// 006428cd  8d4c242c             lea ecx, [esp + 0x2c]
// 006428d1  ff1578dd7700         call dword ptr [0x77dd78]
// 006428d7  8d4c2410             lea ecx, [esp + 0x10]
// 006428db  ff1578dd7700         call dword ptr [0x77dd78]
// 006428e1  8d4c2414             lea ecx, [esp + 0x14]
// 006428e5  ff1578dd7700         call dword ptr [0x77dd78]
// 006428eb  8bc6                 mov eax, esi
// 006428ed  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006428f1  64890d00000000       mov dword ptr fs:[0], ecx
// 006428f8  59                   pop ecx
// 006428f9  5f                   pop edi
// 006428fa  5e                   pop esi
// 006428fb  5b                   pop ebx
// 006428fc  83c414               add esp, 0x14
// 006428ff  c20800               ret 8
// copied from an identical function in another client (function ?GetGroupCaption@CXTPReportRecordItem@@UAE?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@PAVCXTPReportColumn@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\ReportControl\XTPReportRecordItem.cpp