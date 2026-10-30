// roc 2010-06 007e1980  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007e1980
//
// 007e1980  53                   push ebx
// 007e1981  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 007e1985  56                   push esi
// 007e1986  8bf1                 mov esi, ecx
// 007e1988  85db                 test ebx, ebx
// 007e198a  7437                 je 0x7e19c3
// 007e198c  57                   push edi
// 007e198d  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 007e1991  85ff                 test edi, edi
// 007e1993  7c2d                 jl 0x7e19c2
// 007e1995  e8e6fdffff           call 0x7e1780
// 007e199a  3bf8                 cmp edi, eax
// 007e199c  7d24                 jge 0x7e19c2
// 007e199e  8b06                 mov eax, dword ptr [esi]
// 007e19a0  8b505c               mov edx, dword ptr [eax + 0x5c]
// 007e19a3  57                   push edi
// 007e19a4  ffd2                 call edx
// 007e19a6  85c0                 test eax, eax
// 007e19a8  7407                 je 0x7e19b1
// 007e19aa  8bc8                 mov ecx, eax
// 007e19ac  e86b65fcff           call 0x7a7f1c
// 007e19b1  897b6c               mov dword ptr [ebx + 0x6c], edi
// 007e19b4  897350               mov dword ptr [ebx + 0x50], esi
// 007e19b7  3b7e28               cmp edi, dword ptr [esi + 0x28]
// 007e19ba  7d0c                 jge 0x7e19c8
// 007e19bc  8b4624               mov eax, dword ptr [esi + 0x24]
// 007e19bf  891cb8               mov dword ptr [eax + edi*4], ebx
// 007e19c2  5f                   pop edi
// 007e19c3  5e                   pop esi
// 007e19c4  5b                   pop ebx
// 007e19c5  c20800               ret 8
// 007e19c8  e87f62fcff           call 0x7a7c4c
// copied from an identical function in another client (function ?SetAt@CXTPReportRows@@UAEXHPAVCXTPReportRow@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportRows.cpp