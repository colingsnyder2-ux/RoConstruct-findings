// roc 2011-06 00843030  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00843030
//
// 00843030  56                   push esi
// 00843031  57                   push edi
// 00843032  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00843036  8d7120               lea esi, [ecx + 0x20]
// 00843039  85ff                 test edi, edi
// 0084303b  7c1f                 jl 0x84305c
// 0084303d  3b7e08               cmp edi, dword ptr [esi + 8]
// 00843040  7d1a                 jge 0x84305c
// 00843042  8b4604               mov eax, dword ptr [esi + 4]
// 00843045  8b0cb8               mov ecx, dword ptr [eax + edi*4]
// 00843048  e88d75fcff           call 0x80a5da
// 0084304d  6a01                 push 1
// 0084304f  57                   push edi
// 00843050  8bce                 mov ecx, esi
// 00843052  e82972feff           call 0x82a280
// 00843057  5f                   pop edi
// 00843058  5e                   pop esi
// 00843059  c20400               ret 4
// 0084305c  e8a972fcff           call 0x80a30a
// copied from an identical function in another client (function ?RemoveAt@CXTPReportRows@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportRows.cpp