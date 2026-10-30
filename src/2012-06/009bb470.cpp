// roc 2012-06 009bb470  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009bb470
//
// 009bb470  56                   push esi
// 009bb471  57                   push edi
// 009bb472  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 009bb476  8d7120               lea esi, [ecx + 0x20]
// 009bb479  85ff                 test edi, edi
// 009bb47b  7c1f                 jl 0x9bb49c
// 009bb47d  3b7e08               cmp edi, dword ptr [esi + 8]
// 009bb480  7d1a                 jge 0x9bb49c
// 009bb482  8b4604               mov eax, dword ptr [esi + 4]
// 009bb485  8b0cb8               mov ecx, dword ptr [eax + edi*4]
// 009bb488  e8fd71fcff           call 0x98268a
// 009bb48d  6a01                 push 1
// 009bb48f  57                   push edi
// 009bb490  8bce                 mov ecx, esi
// 009bb492  e8d97cfdff           call 0x993170
// 009bb497  5f                   pop edi
// 009bb498  5e                   pop esi
// 009bb499  c20400               ret 4
// 009bb49c  e81f6ffcff           call 0x9823c0
// copied from an identical function in another client (function ?RemoveAt@CXTPReportRows@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportRows.cpp