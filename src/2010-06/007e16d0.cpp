// roc 2010-06 007e16d0  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007e16d0
//
// 007e16d0  56                   push esi
// 007e16d1  57                   push edi
// 007e16d2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007e16d6  8d7120               lea esi, [ecx + 0x20]
// 007e16d9  85ff                 test edi, edi
// 007e16db  7c1f                 jl 0x7e16fc
// 007e16dd  3b7e08               cmp edi, dword ptr [esi + 8]
// 007e16e0  7d1a                 jge 0x7e16fc
// 007e16e2  8b4604               mov eax, dword ptr [esi + 4]
// 007e16e5  8b0cb8               mov ecx, dword ptr [eax + edi*4]
// 007e16e8  e82f68fcff           call 0x7a7f1c
// 007e16ed  6a01                 push 1
// 007e16ef  57                   push edi
// 007e16f0  8bce                 mov ecx, esi
// 007e16f2  e84973fdff           call 0x7b8a40
// 007e16f7  5f                   pop edi
// 007e16f8  5e                   pop esi
// 007e16f9  c20400               ret 4
// 007e16fc  e84b65fcff           call 0x7a7c4c
// copied from an identical function in another client (function ?RemoveAt@CXTPReportRows@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportRows.cpp