// roc 2010-06 007e1060  unit: VCXTPReportRecords::?$CXTPHeapObjectT  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007e1060
//
// 007e1060  56                   push esi
// 007e1061  8b742408             mov esi, dword ptr [esp + 8]
// 007e1065  57                   push edi
// 007e1066  8bf9                 mov edi, ecx
// 007e1068  3b7728               cmp esi, dword ptr [edi + 0x28]
// 007e106b  7d2d                 jge 0x7e109a
// 007e106d  53                   push ebx
// 007e106e  8d5f20               lea ebx, [edi + 0x20]
// 007e1071  85f6                 test esi, esi
// 007e1073  7c2a                 jl 0x7e109f
// 007e1075  3b7308               cmp esi, dword ptr [ebx + 8]
// 007e1078  7d25                 jge 0x7e109f
// 007e107a  8b4304               mov eax, dword ptr [ebx + 4]
// 007e107d  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 007e1080  e8976efcff           call 0x7a7f1c
// 007e1085  6a01                 push 1
// 007e1087  56                   push esi
// 007e1088  8bcb                 mov ecx, ebx
// 007e108a  e8b179fdff           call 0x7b8a40
// 007e108f  8b17                 mov edx, dword ptr [edi]
// 007e1091  8b4268               mov eax, dword ptr [edx + 0x68]
// 007e1094  56                   push esi
// 007e1095  8bcf                 mov ecx, edi
// 007e1097  ffd0                 call eax
// 007e1099  5b                   pop ebx
// 007e109a  5f                   pop edi
// 007e109b  5e                   pop esi
// 007e109c  c20400               ret 4
// 007e109f  e8a86bfcff           call 0x7a7c4c
// copied from an identical function in another client (function ?RemoveAt@CXTPReportRecords@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportRecords.cpp