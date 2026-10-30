// roc 2009-12 0082cdc0  unit: VCXTPReportRecords::?$CXTPHeapObjectT  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082cdc0
//
// 0082cdc0  53                   push ebx
// 0082cdc1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0082cdc5  56                   push esi
// 0082cdc6  8bf1                 mov esi, ecx
// 0082cdc8  85db                 test ebx, ebx
// 0082cdca  743b                 je 0x82ce07
// 0082cdcc  57                   push edi
// 0082cdcd  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0082cdd1  85ff                 test edi, edi
// 0082cdd3  7c31                 jl 0x82ce06
// 0082cdd5  e846feffff           call 0x82cc20
// 0082cdda  3bf8                 cmp edi, eax
// 0082cddc  7d28                 jge 0x82ce06
// 0082cdde  837e3c00             cmp dword ptr [esi + 0x3c], 0
// 0082cde2  7517                 jne 0x82cdfb
// 0082cde4  57                   push edi
// 0082cde5  e846feffff           call 0x82cc30
// 0082cdea  85c0                 test eax, eax
// 0082cdec  7407                 je 0x82cdf5
// 0082cdee  8bc8                 mov ecx, eax
// 0082cdf0  e8e76ffcff           call 0x7f3ddc
// 0082cdf5  897b4c               mov dword ptr [ebx + 0x4c], edi
// 0082cdf8  897350               mov dword ptr [ebx + 0x50], esi
// 0082cdfb  3b7e28               cmp edi, dword ptr [esi + 0x28]
// 0082cdfe  7d0c                 jge 0x82ce0c
// 0082ce00  8b4624               mov eax, dword ptr [esi + 0x24]
// 0082ce03  891cb8               mov dword ptr [eax + edi*4], ebx
// 0082ce06  5f                   pop edi
// 0082ce07  5e                   pop esi
// 0082ce08  5b                   pop ebx
// 0082ce09  c20800               ret 8
// 0082ce0c  e8fb6cfcff           call 0x7f3b0c
// copied from an identical function in another client (function ?SetAt@CXTPReportRecords@@UAEXHPAVCXTPReportRecord@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportRecords.cpp