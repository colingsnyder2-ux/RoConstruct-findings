// roc 2012-06 009bb710  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009bb710
//
// 009bb710  53                   push ebx
// 009bb711  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 009bb715  56                   push esi
// 009bb716  8bf1                 mov esi, ecx
// 009bb718  85db                 test ebx, ebx
// 009bb71a  7437                 je 0x9bb753
// 009bb71c  57                   push edi
// 009bb71d  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 009bb721  85ff                 test edi, edi
// 009bb723  7c2d                 jl 0x9bb752
// 009bb725  e846f5ffff           call 0x9bac70
// 009bb72a  3bf8                 cmp edi, eax
// 009bb72c  7d24                 jge 0x9bb752
// 009bb72e  8b06                 mov eax, dword ptr [esi]
// 009bb730  8b505c               mov edx, dword ptr [eax + 0x5c]
// 009bb733  57                   push edi
// 009bb734  ffd2                 call edx
// 009bb736  85c0                 test eax, eax
// 009bb738  7407                 je 0x9bb741
// 009bb73a  8bc8                 mov ecx, eax
// 009bb73c  e8496ffcff           call 0x98268a
// 009bb741  897b6c               mov dword ptr [ebx + 0x6c], edi
// 009bb744  897350               mov dword ptr [ebx + 0x50], esi
// 009bb747  3b7e28               cmp edi, dword ptr [esi + 0x28]
// 009bb74a  7d0c                 jge 0x9bb758
// 009bb74c  8b4624               mov eax, dword ptr [esi + 0x24]
// 009bb74f  891cb8               mov dword ptr [eax + edi*4], ebx
// 009bb752  5f                   pop edi
// 009bb753  5e                   pop esi
// 009bb754  5b                   pop ebx
// 009bb755  c20800               ret 8
// 009bb758  e8636cfcff           call 0x9823c0
// copied from an identical function in another client (function ?SetAt@CXTPReportRows@@UAEXHPAVCXTPReportRow@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportRows.cpp