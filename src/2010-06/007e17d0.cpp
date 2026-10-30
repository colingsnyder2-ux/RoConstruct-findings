// roc 2010-06 007e17d0  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007e17d0
//
// 007e17d0  53                   push ebx
// 007e17d1  56                   push esi
// 007e17d2  57                   push edi
// 007e17d3  8bf9                 mov edi, ecx
// 007e17d5  33f6                 xor esi, esi
// 007e17d7  397728               cmp dword ptr [edi + 0x28], esi
// 007e17da  7e24                 jle 0x7e1800
// 007e17dc  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 007e17e0  85f6                 test esi, esi
// 007e17e2  7c35                 jl 0x7e1819
// 007e17e4  3b7728               cmp esi, dword ptr [edi + 0x28]
// 007e17e7  7d30                 jge 0x7e1819
// 007e17e9  8b4724               mov eax, dword ptr [edi + 0x24]
// 007e17ec  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 007e17ef  8b11                 mov edx, dword ptr [ecx]
// 007e17f1  8b4260               mov eax, dword ptr [edx + 0x60]
// 007e17f4  ffd0                 call eax
// 007e17f6  3bc3                 cmp eax, ebx
// 007e17f8  740e                 je 0x7e1808
// 007e17fa  46                   inc esi
// 007e17fb  3b7728               cmp esi, dword ptr [edi + 0x28]
// 007e17fe  7ce0                 jl 0x7e17e0
// 007e1800  5f                   pop edi
// 007e1801  5e                   pop esi
// 007e1802  33c0                 xor eax, eax
// 007e1804  5b                   pop ebx
// 007e1805  c20400               ret 4
// 007e1808  3b7728               cmp esi, dword ptr [edi + 0x28]
// 007e180b  7d0c                 jge 0x7e1819
// 007e180d  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 007e1810  8b04b1               mov eax, dword ptr [ecx + esi*4]
// 007e1813  5f                   pop edi
// 007e1814  5e                   pop esi
// 007e1815  5b                   pop ebx
// 007e1816  c20400               ret 4
// 007e1819  e82e64fcff           call 0x7a7c4c
// copied from an identical function in another client (function ?Find@CXTPReportRows@@UAEPAVCXTPReportRow@@PAVCXTPReportRecord@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportRows.cpp