// roc 2011-06 008429d0  unit: VCXTPReportRecords::?$CXTPHeapObjectT  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008429d0
//
// 008429d0  53                   push ebx
// 008429d1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 008429d5  56                   push esi
// 008429d6  8bf1                 mov esi, ecx
// 008429d8  85db                 test ebx, ebx
// 008429da  743b                 je 0x842a17
// 008429dc  57                   push edi
// 008429dd  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008429e1  85ff                 test edi, edi
// 008429e3  7c31                 jl 0x842a16
// 008429e5  e8f6060000           call 0x8430e0
// 008429ea  3bf8                 cmp edi, eax
// 008429ec  7d28                 jge 0x842a16
// 008429ee  837e3c00             cmp dword ptr [esi + 0x3c], 0
// 008429f2  7517                 jne 0x842a0b
// 008429f4  57                   push edi
// 008429f5  e846feffff           call 0x842840
// 008429fa  85c0                 test eax, eax
// 008429fc  7407                 je 0x842a05
// 008429fe  8bc8                 mov ecx, eax
// 00842a00  e8d57bfcff           call 0x80a5da
// 00842a05  897b4c               mov dword ptr [ebx + 0x4c], edi
// 00842a08  897350               mov dword ptr [ebx + 0x50], esi
// 00842a0b  3b7e28               cmp edi, dword ptr [esi + 0x28]
// 00842a0e  7d0c                 jge 0x842a1c
// 00842a10  8b4624               mov eax, dword ptr [esi + 0x24]
// 00842a13  891cb8               mov dword ptr [eax + edi*4], ebx
// 00842a16  5f                   pop edi
// 00842a17  5e                   pop esi
// 00842a18  5b                   pop ebx
// 00842a19  c20800               ret 8
// 00842a1c  e8e978fcff           call 0x80a30a
// copied from an identical function in another client (function ?SetAt@CXTPReportRecords@@UAEXHPAVCXTPReportRecord@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportRecords.cpp