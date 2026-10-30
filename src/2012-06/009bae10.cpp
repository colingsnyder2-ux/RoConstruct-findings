// roc 2012-06 009bae10  unit: VCXTPReportRecords::?$CXTPHeapObjectT  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009bae10
//
// 009bae10  53                   push ebx
// 009bae11  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 009bae15  56                   push esi
// 009bae16  8bf1                 mov esi, ecx
// 009bae18  85db                 test ebx, ebx
// 009bae1a  743b                 je 0x9bae57
// 009bae1c  57                   push edi
// 009bae1d  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 009bae21  85ff                 test edi, edi
// 009bae23  7c31                 jl 0x9bae56
// 009bae25  e846feffff           call 0x9bac70
// 009bae2a  3bf8                 cmp edi, eax
// 009bae2c  7d28                 jge 0x9bae56
// 009bae2e  837e3c00             cmp dword ptr [esi + 0x3c], 0
// 009bae32  7517                 jne 0x9bae4b
// 009bae34  57                   push edi
// 009bae35  e846feffff           call 0x9bac80
// 009bae3a  85c0                 test eax, eax
// 009bae3c  7407                 je 0x9bae45
// 009bae3e  8bc8                 mov ecx, eax
// 009bae40  e84578fcff           call 0x98268a
// 009bae45  897b4c               mov dword ptr [ebx + 0x4c], edi
// 009bae48  897350               mov dword ptr [ebx + 0x50], esi
// 009bae4b  3b7e28               cmp edi, dword ptr [esi + 0x28]
// 009bae4e  7d0c                 jge 0x9bae5c
// 009bae50  8b4624               mov eax, dword ptr [esi + 0x24]
// 009bae53  891cb8               mov dword ptr [eax + edi*4], ebx
// 009bae56  5f                   pop edi
// 009bae57  5e                   pop esi
// 009bae58  5b                   pop ebx
// 009bae59  c20800               ret 8
// 009bae5c  e85f75fcff           call 0x9823c0
// copied from an identical function in another client (function ?SetAt@CXTPReportRecords@@UAEXHPAVCXTPReportRecord@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportRecords.cpp