// roc 2012-06 009bb030  unit: VCXTPReportRecords::?$CXTPHeapObjectT  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009bb030
//
// 009bb030  56                   push esi
// 009bb031  8b742408             mov esi, dword ptr [esp + 8]
// 009bb035  57                   push edi
// 009bb036  8bf9                 mov edi, ecx
// 009bb038  3b7728               cmp esi, dword ptr [edi + 0x28]
// 009bb03b  7d2d                 jge 0x9bb06a
// 009bb03d  53                   push ebx
// 009bb03e  8d5f20               lea ebx, [edi + 0x20]
// 009bb041  85f6                 test esi, esi
// 009bb043  7c2a                 jl 0x9bb06f
// 009bb045  3b7308               cmp esi, dword ptr [ebx + 8]
// 009bb048  7d25                 jge 0x9bb06f
// 009bb04a  8b4304               mov eax, dword ptr [ebx + 4]
// 009bb04d  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 009bb050  e83576fcff           call 0x98268a
// 009bb055  6a01                 push 1
// 009bb057  56                   push esi
// 009bb058  8bcb                 mov ecx, ebx
// 009bb05a  e81181fdff           call 0x993170
// 009bb05f  8b17                 mov edx, dword ptr [edi]
// 009bb061  8b4268               mov eax, dword ptr [edx + 0x68]
// 009bb064  56                   push esi
// 009bb065  8bcf                 mov ecx, edi
// 009bb067  ffd0                 call eax
// 009bb069  5b                   pop ebx
// 009bb06a  5f                   pop edi
// 009bb06b  5e                   pop esi
// 009bb06c  c20400               ret 4
// 009bb06f  e84c73fcff           call 0x9823c0
// copied from an identical function in another client (function ?RemoveAt@CXTPReportRecords@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportRecords.cpp