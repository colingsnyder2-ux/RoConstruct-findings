// roc 2012-06 009bb5b0  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009bb5b0
//
// 009bb5b0  53                   push ebx
// 009bb5b1  56                   push esi
// 009bb5b2  57                   push edi
// 009bb5b3  8bf9                 mov edi, ecx
// 009bb5b5  33f6                 xor esi, esi
// 009bb5b7  397728               cmp dword ptr [edi + 0x28], esi
// 009bb5ba  7e63                 jle 0x9bb61f
// 009bb5bc  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 009bb5c0  85f6                 test esi, esi
// 009bb5c2  7c74                 jl 0x9bb638
// 009bb5c4  3b7728               cmp esi, dword ptr [edi + 0x28]
// 009bb5c7  7d6f                 jge 0x9bb638
// 009bb5c9  8b4724               mov eax, dword ptr [edi + 0x24]
// 009bb5cc  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 009bb5cf  8b11                 mov edx, dword ptr [ecx]
// 009bb5d1  8b4260               mov eax, dword ptr [edx + 0x60]
// 009bb5d4  ffd0                 call eax
// 009bb5d6  3bc3                 cmp eax, ebx
// 009bb5d8  744d                 je 0x9bb627
// 009bb5da  3b7728               cmp esi, dword ptr [edi + 0x28]
// 009bb5dd  7d59                 jge 0x9bb638
// 009bb5df  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 009bb5e2  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 009bb5e5  8b11                 mov edx, dword ptr [ecx]
// 009bb5e7  8b82c0000000         mov eax, dword ptr [edx + 0xc0]
// 009bb5ed  ffd0                 call eax
// 009bb5ef  85c0                 test eax, eax
// 009bb5f1  7426                 je 0x9bb619
// 009bb5f3  3b7728               cmp esi, dword ptr [edi + 0x28]
// 009bb5f6  7d40                 jge 0x9bb638
// 009bb5f8  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 009bb5fb  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 009bb5fe  8b11                 mov edx, dword ptr [ecx]
// 009bb600  8b82b8000000         mov eax, dword ptr [edx + 0xb8]
// 009bb606  ffd0                 call eax
// 009bb608  8b10                 mov edx, dword ptr [eax]
// 009bb60a  8bc8                 mov ecx, eax
// 009bb60c  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 009bb612  53                   push ebx
// 009bb613  ffd0                 call eax
// 009bb615  85c0                 test eax, eax
// 009bb617  7508                 jne 0x9bb621
// 009bb619  46                   inc esi
// 009bb61a  3b7728               cmp esi, dword ptr [edi + 0x28]
// 009bb61d  7ca1                 jl 0x9bb5c0
// 009bb61f  33c0                 xor eax, eax
// 009bb621  5f                   pop edi
// 009bb622  5e                   pop esi
// 009bb623  5b                   pop ebx
// 009bb624  c20400               ret 4
// 009bb627  3b7728               cmp esi, dword ptr [edi + 0x28]
// 009bb62a  7d0c                 jge 0x9bb638
// 009bb62c  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 009bb62f  8b04b1               mov eax, dword ptr [ecx + esi*4]
// 009bb632  5f                   pop edi
// 009bb633  5e                   pop esi
// 009bb634  5b                   pop ebx
// 009bb635  c20400               ret 4
// 009bb638  e8836dfcff           call 0x9823c0
// copied from an identical function in another client (function ?FindInTree@CXTPReportRows@@UAEPAVCXTPReportRow@@PAVCXTPReportRecord@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportRows.cpp