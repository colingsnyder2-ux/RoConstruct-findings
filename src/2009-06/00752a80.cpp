// roc 2009-06 00752a80  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00752a80
//
// 00752a80  53                   push ebx
// 00752a81  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00752a85  56                   push esi
// 00752a86  8bf1                 mov esi, ecx
// 00752a88  85db                 test ebx, ebx
// 00752a8a  7437                 je 0x752ac3
// 00752a8c  57                   push edi
// 00752a8d  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00752a91  85ff                 test edi, edi
// 00752a93  7c2d                 jl 0x752ac2
// 00752a95  e816f4ffff           call 0x751eb0
// 00752a9a  3bf8                 cmp edi, eax
// 00752a9c  7d24                 jge 0x752ac2
// 00752a9e  8b06                 mov eax, dword ptr [esi]
// 00752aa0  8b505c               mov edx, dword ptr [eax + 0x5c]
// 00752aa3  57                   push edi
// 00752aa4  ffd2                 call edx
// 00752aa6  85c0                 test eax, eax
// 00752aa8  7407                 je 0x752ab1
// 00752aaa  8bc8                 mov ecx, eax
// 00752aac  e8f764fcff           call 0x718fa8
// 00752ab1  897b6c               mov dword ptr [ebx + 0x6c], edi
// 00752ab4  897350               mov dword ptr [ebx + 0x50], esi
// 00752ab7  3b7e28               cmp edi, dword ptr [esi + 0x28]
// 00752aba  7d0c                 jge 0x752ac8
// 00752abc  8b4624               mov eax, dword ptr [esi + 0x24]
// 00752abf  891cb8               mov dword ptr [eax + edi*4], ebx
// 00752ac2  5f                   pop edi
// 00752ac3  5e                   pop esi
// 00752ac4  5b                   pop ebx
// 00752ac5  c20800               ret 8
// 00752ac8  e81762fcff           call 0x718ce4
// copied from an identical function in another client (function ?SetAt@CXTPReportRows@@UAEXHPAVCXTPReportRow@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportRows.cpp