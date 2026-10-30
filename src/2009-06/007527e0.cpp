// roc 2009-06 007527e0  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007527e0
//
// 007527e0  56                   push esi
// 007527e1  57                   push edi
// 007527e2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007527e6  8d7120               lea esi, [ecx + 0x20]
// 007527e9  85ff                 test edi, edi
// 007527eb  7c1f                 jl 0x75280c
// 007527ed  3b7e08               cmp edi, dword ptr [esi + 8]
// 007527f0  7d1a                 jge 0x75280c
// 007527f2  8b4604               mov eax, dword ptr [esi + 4]
// 007527f5  8b0cb8               mov ecx, dword ptr [eax + edi*4]
// 007527f8  e8ab67fcff           call 0x718fa8
// 007527fd  6a01                 push 1
// 007527ff  57                   push edi
// 00752800  8bce                 mov ecx, esi
// 00752802  e859feffff           call 0x752660
// 00752807  5f                   pop edi
// 00752808  5e                   pop esi
// 00752809  c20400               ret 4
// 0075280c  e8d364fcff           call 0x718ce4
// copied from an identical function in another client (function ?RemoveAt@CXTPReportRows@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportRows.cpp