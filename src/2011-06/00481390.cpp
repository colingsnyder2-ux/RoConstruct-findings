// from server: 100% by auto
// roc 2011-06 00481390  unit: CRobloxReportView::CStatsItemRecord  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00481390
//
// 00481390  56                   push esi
// 00481391  8bf1                 mov esi, ecx
// 00481393  e8d8feffff           call 0x481270
// 00481398  f644240801           test byte ptr [esp + 8], 1
// 0048139d  742c                 je 0x4813cb
// 0048139f  833d7482d10000       cmp dword ptr [0xd18274], 0
// 004813a6  740f                 je 0x4813b7
// 004813a8  56                   push esi
// 004813a9  e8f237faff           call 0x424ba0
// 004813ae  83c404               add esp, 4
// 004813b1  8bc6                 mov eax, esi
// 004813b3  5e                   pop esi
// 004813b4  c20400               ret 4
// 004813b7  686c82d100           push 0xd1826c
// 004813bc  ff154803a400         call dword ptr [0xa40348]
// 004813c2  56                   push esi
// 004813c3  e8908c3800           call 0x80a058
// 004813c8  83c404               add esp, 4
// 004813cb  8bc6                 mov eax, esi
// 004813cd  5e                   pop esi
// 004813ce  c20400               ret 4
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ??_G?$CXTPHeapObjectT@VCXTPChartSeriesPoint@@VCXTPChartSeriesPointAllocator@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp
