// roc 2009-12 0082d7d0  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082d7d0
//
// 0082d7d0  53                   push ebx
// 0082d7d1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0082d7d5  56                   push esi
// 0082d7d6  8bf1                 mov esi, ecx
// 0082d7d8  85db                 test ebx, ebx
// 0082d7da  7437                 je 0x82d813
// 0082d7dc  57                   push edi
// 0082d7dd  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0082d7e1  85ff                 test edi, edi
// 0082d7e3  7c2d                 jl 0x82d812
// 0082d7e5  e836f4ffff           call 0x82cc20
// 0082d7ea  3bf8                 cmp edi, eax
// 0082d7ec  7d24                 jge 0x82d812
// 0082d7ee  8b06                 mov eax, dword ptr [esi]
// 0082d7f0  8b505c               mov edx, dword ptr [eax + 0x5c]
// 0082d7f3  57                   push edi
// 0082d7f4  ffd2                 call edx
// 0082d7f6  85c0                 test eax, eax
// 0082d7f8  7407                 je 0x82d801
// 0082d7fa  8bc8                 mov ecx, eax
// 0082d7fc  e8db65fcff           call 0x7f3ddc
// 0082d801  897b6c               mov dword ptr [ebx + 0x6c], edi
// 0082d804  897350               mov dword ptr [ebx + 0x50], esi
// 0082d807  3b7e28               cmp edi, dword ptr [esi + 0x28]
// 0082d80a  7d0c                 jge 0x82d818
// 0082d80c  8b4624               mov eax, dword ptr [esi + 0x24]
// 0082d80f  891cb8               mov dword ptr [eax + edi*4], ebx
// 0082d812  5f                   pop edi
// 0082d813  5e                   pop esi
// 0082d814  5b                   pop ebx
// 0082d815  c20800               ret 8
// 0082d818  e8ef62fcff           call 0x7f3b0c
// copied from an identical function in another client (function ?SetAt@CXTPReportRows@@UAEXHPAVCXTPReportRow@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportRows.cpp