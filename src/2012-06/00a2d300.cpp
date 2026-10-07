// roc 2012-06 00a2d300  unit: CXTPReportRow  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a2d300
//
// 00a2d300  56                   push esi
// 00a2d301  8bf1                 mov esi, ecx
// 00a2d303  e858dfffff           call 0xa2b260
// 00a2d308  f644240801           test byte ptr [esp + 8], 1
// 00a2d30d  742c                 je 0xa2d33b
// 00a2d30f  833df493e50000       cmp dword ptr [0xe593f4], 0
// 00a2d316  740f                 je 0xa2d327
// 00a2d318  56                   push esi
// 00a2d319  e8c2ddf7ff           call 0x9ab0e0
// 00a2d31e  83c404               add esp, 4
// 00a2d321  8bc6                 mov eax, esi
// 00a2d323  5e                   pop esi
// 00a2d324  c20400               ret 4
// 00a2d327  68ec93e500           push 0xe593ec
// 00a2d32c  ff159421b200         call dword ptr [0xb22194]
// 00a2d332  56                   push esi
// 00a2d333  e8dc4df5ff           call 0x982114
// 00a2d338  83c404               add esp, 4
// 00a2d33b  8bc6                 mov eax, esi
// 00a2d33d  5e                   pop esi
// 00a2d33e  c20400               ret 4
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ??_G?$CXTPHeapObjectT@VCXTPChartSeriesPoint@@VCXTPChartSeriesPointAllocator@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp
