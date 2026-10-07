// roc 2012-06 00491930  unit: CRobloxReportView::CStatsItemRecord  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00491930
//
// 00491930  56                   push esi
// 00491931  8bf1                 mov esi, ecx
// 00491933  e808ffffff           call 0x491840
// 00491938  f644240801           test byte ptr [esp + 8], 1
// 0049193d  742c                 je 0x49196b
// 0049193f  833de493e50000       cmp dword ptr [0xe593e4], 0
// 00491946  740f                 je 0x491957
// 00491948  56                   push esi
// 00491949  e8526df9ff           call 0x4286a0
// 0049194e  83c404               add esp, 4
// 00491951  8bc6                 mov eax, esi
// 00491953  5e                   pop esi
// 00491954  c20400               ret 4
// 00491957  68dc93e500           push 0xe593dc
// 0049195c  ff159421b200         call dword ptr [0xb22194]
// 00491962  56                   push esi
// 00491963  e8ac074f00           call 0x982114
// 00491968  83c404               add esp, 4
// 0049196b  8bc6                 mov eax, esi
// 0049196d  5e                   pop esi
// 0049196e  c20400               ret 4
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ??_G?$CXTPHeapObjectT@VCXTPChartSeriesPoint@@VCXTPChartSeriesPointAllocator@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp
