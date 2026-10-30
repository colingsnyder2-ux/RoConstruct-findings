// roc 2009-06 007528d0  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007528d0
//
// 007528d0  53                   push ebx
// 007528d1  56                   push esi
// 007528d2  57                   push edi
// 007528d3  8bf9                 mov edi, ecx
// 007528d5  33f6                 xor esi, esi
// 007528d7  397728               cmp dword ptr [edi + 0x28], esi
// 007528da  7e24                 jle 0x752900
// 007528dc  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 007528e0  85f6                 test esi, esi
// 007528e2  7c35                 jl 0x752919
// 007528e4  3b7728               cmp esi, dword ptr [edi + 0x28]
// 007528e7  7d30                 jge 0x752919
// 007528e9  8b4724               mov eax, dword ptr [edi + 0x24]
// 007528ec  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 007528ef  8b11                 mov edx, dword ptr [ecx]
// 007528f1  8b4260               mov eax, dword ptr [edx + 0x60]
// 007528f4  ffd0                 call eax
// 007528f6  3bc3                 cmp eax, ebx
// 007528f8  740e                 je 0x752908
// 007528fa  46                   inc esi
// 007528fb  3b7728               cmp esi, dword ptr [edi + 0x28]
// 007528fe  7ce0                 jl 0x7528e0
// 00752900  5f                   pop edi
// 00752901  5e                   pop esi
// 00752902  33c0                 xor eax, eax
// 00752904  5b                   pop ebx
// 00752905  c20400               ret 4
// 00752908  3b7728               cmp esi, dword ptr [edi + 0x28]
// 0075290b  7d0c                 jge 0x752919
// 0075290d  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 00752910  8b04b1               mov eax, dword ptr [ecx + esi*4]
// 00752913  5f                   pop edi
// 00752914  5e                   pop esi
// 00752915  5b                   pop ebx
// 00752916  c20400               ret 4
// 00752919  e8c663fcff           call 0x718ce4
// copied from an identical function in another client (function ?Find@CXTPReportRows@@UAEPAVCXTPReportRow@@PAVCXTPReportRecord@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportRows.cpp