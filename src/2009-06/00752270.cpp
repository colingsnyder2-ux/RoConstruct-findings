// roc 2009-06 00752270  unit: VCXTPReportRecords::?$CXTPHeapObjectT  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00752270
//
// 00752270  56                   push esi
// 00752271  8b742408             mov esi, dword ptr [esp + 8]
// 00752275  57                   push edi
// 00752276  8bf9                 mov edi, ecx
// 00752278  3b7728               cmp esi, dword ptr [edi + 0x28]
// 0075227b  7d2d                 jge 0x7522aa
// 0075227d  53                   push ebx
// 0075227e  8d5f20               lea ebx, [edi + 0x20]
// 00752281  85f6                 test esi, esi
// 00752283  7c2a                 jl 0x7522af
// 00752285  3b7308               cmp esi, dword ptr [ebx + 8]
// 00752288  7d25                 jge 0x7522af
// 0075228a  8b4304               mov eax, dword ptr [ebx + 4]
// 0075228d  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 00752290  e8136dfcff           call 0x718fa8
// 00752295  6a01                 push 1
// 00752297  56                   push esi
// 00752298  8bcb                 mov ecx, ebx
// 0075229a  e8c1030000           call 0x752660
// 0075229f  8b17                 mov edx, dword ptr [edi]
// 007522a1  8b4268               mov eax, dword ptr [edx + 0x68]
// 007522a4  56                   push esi
// 007522a5  8bcf                 mov ecx, edi
// 007522a7  ffd0                 call eax
// 007522a9  5b                   pop ebx
// 007522aa  5f                   pop edi
// 007522ab  5e                   pop esi
// 007522ac  c20400               ret 4
// 007522af  e8306afcff           call 0x718ce4
// copied from an identical function in another client (function ?RemoveAt@CXTPReportRecords@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportRecords.cpp