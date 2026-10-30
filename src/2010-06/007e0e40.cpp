// roc 2010-06 007e0e40  unit: VCXTPReportRecords::?$CXTPHeapObjectT  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007e0e40
//
// 007e0e40  53                   push ebx
// 007e0e41  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 007e0e45  56                   push esi
// 007e0e46  8bf1                 mov esi, ecx
// 007e0e48  85db                 test ebx, ebx
// 007e0e4a  743b                 je 0x7e0e87
// 007e0e4c  57                   push edi
// 007e0e4d  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 007e0e51  85ff                 test edi, edi
// 007e0e53  7c31                 jl 0x7e0e86
// 007e0e55  e826090000           call 0x7e1780
// 007e0e5a  3bf8                 cmp edi, eax
// 007e0e5c  7d28                 jge 0x7e0e86
// 007e0e5e  837e3c00             cmp dword ptr [esi + 0x3c], 0
// 007e0e62  7517                 jne 0x7e0e7b
// 007e0e64  57                   push edi
// 007e0e65  e846feffff           call 0x7e0cb0
// 007e0e6a  85c0                 test eax, eax
// 007e0e6c  7407                 je 0x7e0e75
// 007e0e6e  8bc8                 mov ecx, eax
// 007e0e70  e8a770fcff           call 0x7a7f1c
// 007e0e75  897b4c               mov dword ptr [ebx + 0x4c], edi
// 007e0e78  897350               mov dword ptr [ebx + 0x50], esi
// 007e0e7b  3b7e28               cmp edi, dword ptr [esi + 0x28]
// 007e0e7e  7d0c                 jge 0x7e0e8c
// 007e0e80  8b4624               mov eax, dword ptr [esi + 0x24]
// 007e0e83  891cb8               mov dword ptr [eax + edi*4], ebx
// 007e0e86  5f                   pop edi
// 007e0e87  5e                   pop esi
// 007e0e88  5b                   pop ebx
// 007e0e89  c20800               ret 8
// 007e0e8c  e8bb6dfcff           call 0x7a7c4c
// copied from an identical function in another client (function ?SetAt@CXTPReportRecords@@UAEXHPAVCXTPReportRecord@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportRecords.cpp