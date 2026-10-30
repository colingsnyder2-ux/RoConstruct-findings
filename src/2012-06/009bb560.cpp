// roc 2012-06 009bb560  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009bb560
//
// 009bb560  53                   push ebx
// 009bb561  56                   push esi
// 009bb562  57                   push edi
// 009bb563  8bf9                 mov edi, ecx
// 009bb565  33f6                 xor esi, esi
// 009bb567  397728               cmp dword ptr [edi + 0x28], esi
// 009bb56a  7e24                 jle 0x9bb590
// 009bb56c  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 009bb570  85f6                 test esi, esi
// 009bb572  7c35                 jl 0x9bb5a9
// 009bb574  3b7728               cmp esi, dword ptr [edi + 0x28]
// 009bb577  7d30                 jge 0x9bb5a9
// 009bb579  8b4724               mov eax, dword ptr [edi + 0x24]
// 009bb57c  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 009bb57f  8b11                 mov edx, dword ptr [ecx]
// 009bb581  8b4260               mov eax, dword ptr [edx + 0x60]
// 009bb584  ffd0                 call eax
// 009bb586  3bc3                 cmp eax, ebx
// 009bb588  740e                 je 0x9bb598
// 009bb58a  46                   inc esi
// 009bb58b  3b7728               cmp esi, dword ptr [edi + 0x28]
// 009bb58e  7ce0                 jl 0x9bb570
// 009bb590  5f                   pop edi
// 009bb591  5e                   pop esi
// 009bb592  33c0                 xor eax, eax
// 009bb594  5b                   pop ebx
// 009bb595  c20400               ret 4
// 009bb598  3b7728               cmp esi, dword ptr [edi + 0x28]
// 009bb59b  7d0c                 jge 0x9bb5a9
// 009bb59d  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 009bb5a0  8b04b1               mov eax, dword ptr [ecx + esi*4]
// 009bb5a3  5f                   pop edi
// 009bb5a4  5e                   pop esi
// 009bb5a5  5b                   pop ebx
// 009bb5a6  c20400               ret 4
// 009bb5a9  e8126efcff           call 0x9823c0
// copied from an identical function in another client (function ?Find@CXTPReportRows@@UAEPAVCXTPReportRow@@PAVCXTPReportRecord@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportRows.cpp