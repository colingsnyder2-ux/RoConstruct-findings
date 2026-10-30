// roc 2009-06 00752050  unit: VCXTPReportRecords::?$CXTPHeapObjectT  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00752050
//
// 00752050  53                   push ebx
// 00752051  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00752055  56                   push esi
// 00752056  8bf1                 mov esi, ecx
// 00752058  85db                 test ebx, ebx
// 0075205a  743b                 je 0x752097
// 0075205c  57                   push edi
// 0075205d  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00752061  85ff                 test edi, edi
// 00752063  7c31                 jl 0x752096
// 00752065  e846feffff           call 0x751eb0
// 0075206a  3bf8                 cmp edi, eax
// 0075206c  7d28                 jge 0x752096
// 0075206e  837e3c00             cmp dword ptr [esi + 0x3c], 0
// 00752072  7517                 jne 0x75208b
// 00752074  57                   push edi
// 00752075  e846feffff           call 0x751ec0
// 0075207a  85c0                 test eax, eax
// 0075207c  7407                 je 0x752085
// 0075207e  8bc8                 mov ecx, eax
// 00752080  e8236ffcff           call 0x718fa8
// 00752085  897b4c               mov dword ptr [ebx + 0x4c], edi
// 00752088  897350               mov dword ptr [ebx + 0x50], esi
// 0075208b  3b7e28               cmp edi, dword ptr [esi + 0x28]
// 0075208e  7d0c                 jge 0x75209c
// 00752090  8b4624               mov eax, dword ptr [esi + 0x24]
// 00752093  891cb8               mov dword ptr [eax + edi*4], ebx
// 00752096  5f                   pop edi
// 00752097  5e                   pop esi
// 00752098  5b                   pop ebx
// 00752099  c20800               ret 8
// 0075209c  e8436cfcff           call 0x718ce4
// copied from an identical function in another client (function ?SetAt@CXTPReportRecords@@UAEXHPAVCXTPReportRecord@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportRecords.cpp