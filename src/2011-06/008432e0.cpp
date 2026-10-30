// roc 2011-06 008432e0  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008432e0
//
// 008432e0  53                   push ebx
// 008432e1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 008432e5  56                   push esi
// 008432e6  8bf1                 mov esi, ecx
// 008432e8  85db                 test ebx, ebx
// 008432ea  7437                 je 0x843323
// 008432ec  57                   push edi
// 008432ed  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008432f1  85ff                 test edi, edi
// 008432f3  7c2d                 jl 0x843322
// 008432f5  e8e6fdffff           call 0x8430e0
// 008432fa  3bf8                 cmp edi, eax
// 008432fc  7d24                 jge 0x843322
// 008432fe  8b06                 mov eax, dword ptr [esi]
// 00843300  8b505c               mov edx, dword ptr [eax + 0x5c]
// 00843303  57                   push edi
// 00843304  ffd2                 call edx
// 00843306  85c0                 test eax, eax
// 00843308  7407                 je 0x843311
// 0084330a  8bc8                 mov ecx, eax
// 0084330c  e8c972fcff           call 0x80a5da
// 00843311  897b6c               mov dword ptr [ebx + 0x6c], edi
// 00843314  897350               mov dword ptr [ebx + 0x50], esi
// 00843317  3b7e28               cmp edi, dword ptr [esi + 0x28]
// 0084331a  7d0c                 jge 0x843328
// 0084331c  8b4624               mov eax, dword ptr [esi + 0x24]
// 0084331f  891cb8               mov dword ptr [eax + edi*4], ebx
// 00843322  5f                   pop edi
// 00843323  5e                   pop esi
// 00843324  5b                   pop ebx
// 00843325  c20800               ret 8
// 00843328  e8dd6ffcff           call 0x80a30a
// copied from an identical function in another client (function ?SetAt@CXTPReportRows@@UAEXHPAVCXTPReportRow@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportRows.cpp