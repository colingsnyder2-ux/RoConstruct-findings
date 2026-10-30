// roc 2011-06 00843130  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00843130
//
// 00843130  53                   push ebx
// 00843131  56                   push esi
// 00843132  57                   push edi
// 00843133  8bf9                 mov edi, ecx
// 00843135  33f6                 xor esi, esi
// 00843137  397728               cmp dword ptr [edi + 0x28], esi
// 0084313a  7e24                 jle 0x843160
// 0084313c  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00843140  85f6                 test esi, esi
// 00843142  7c35                 jl 0x843179
// 00843144  3b7728               cmp esi, dword ptr [edi + 0x28]
// 00843147  7d30                 jge 0x843179
// 00843149  8b4724               mov eax, dword ptr [edi + 0x24]
// 0084314c  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 0084314f  8b11                 mov edx, dword ptr [ecx]
// 00843151  8b4260               mov eax, dword ptr [edx + 0x60]
// 00843154  ffd0                 call eax
// 00843156  3bc3                 cmp eax, ebx
// 00843158  740e                 je 0x843168
// 0084315a  46                   inc esi
// 0084315b  3b7728               cmp esi, dword ptr [edi + 0x28]
// 0084315e  7ce0                 jl 0x843140
// 00843160  5f                   pop edi
// 00843161  5e                   pop esi
// 00843162  33c0                 xor eax, eax
// 00843164  5b                   pop ebx
// 00843165  c20400               ret 4
// 00843168  3b7728               cmp esi, dword ptr [edi + 0x28]
// 0084316b  7d0c                 jge 0x843179
// 0084316d  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 00843170  8b04b1               mov eax, dword ptr [ecx + esi*4]
// 00843173  5f                   pop edi
// 00843174  5e                   pop esi
// 00843175  5b                   pop ebx
// 00843176  c20400               ret 4
// 00843179  e88c71fcff           call 0x80a30a
// copied from an identical function in another client (function ?Find@CXTPReportRows@@UAEPAVCXTPReportRow@@PAVCXTPReportRecord@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportRows.cpp