// roc 2009-12 0082d780  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082d780
//
// 0082d780  53                   push ebx
// 0082d781  55                   push ebp
// 0082d782  57                   push edi
// 0082d783  8bf9                 mov edi, ecx
// 0082d785  e896f4ffff           call 0x82cc20
// 0082d78a  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0082d78e  8bd8                 mov ebx, eax
// 0082d790  3beb                 cmp ebp, ebx
// 0082d792  7d1e                 jge 0x82d7b2
// 0082d794  56                   push esi
// 0082d795  8bf5                 mov esi, ebp
// 0082d797  8b07                 mov eax, dword ptr [edi]
// 0082d799  8b505c               mov edx, dword ptr [eax + 0x5c]
// 0082d79c  56                   push esi
// 0082d79d  8bcf                 mov ecx, edi
// 0082d79f  ffd2                 call edx
// 0082d7a1  85c0                 test eax, eax
// 0082d7a3  7407                 je 0x82d7ac
// 0082d7a5  8bc8                 mov ecx, eax
// 0082d7a7  e83066fcff           call 0x7f3ddc
// 0082d7ac  46                   inc esi
// 0082d7ad  3bf3                 cmp esi, ebx
// 0082d7af  7ce6                 jl 0x82d797
// 0082d7b1  5e                   pop esi
// 0082d7b2  8b442414             mov eax, dword ptr [esp + 0x14]
// 0082d7b6  50                   push eax
// 0082d7b7  55                   push ebp
// 0082d7b8  8d4f20               lea ecx, [edi + 0x20]
// 0082d7bb  e8e07b0200           call 0x8553a0
// 0082d7c0  5f                   pop edi
// 0082d7c1  5d                   pop ebp
// 0082d7c2  5b                   pop ebx
// 0082d7c3  c20800               ret 8
// copied from an identical function in another client (function ?SetSize@CXTPReportRows@@UAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportRows.cpp