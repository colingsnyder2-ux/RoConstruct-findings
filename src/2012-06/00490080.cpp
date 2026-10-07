// roc 2012-06 00490080  unit: CRobloxReportView::CStatsItemRecord::CNameItem  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00490080
//
// 00490080  56                   push esi
// 00490081  8bf1                 mov esi, ecx
// 00490083  e8d8feffff           call 0x48ff60
// 00490088  f644240801           test byte ptr [esp + 8], 1
// 0049008d  742c                 je 0x4900bb
// 0049008f  833de493e50000       cmp dword ptr [0xe593e4], 0
// 00490096  740f                 je 0x4900a7
// 00490098  56                   push esi
// 00490099  e80286f9ff           call 0x4286a0
// 0049009e  83c404               add esp, 4
// 004900a1  8bc6                 mov eax, esi
// 004900a3  5e                   pop esi
// 004900a4  c20400               ret 4
// 004900a7  68dc93e500           push 0xe593dc
// 004900ac  ff159421b200         call dword ptr [0xb22194]
// 004900b2  56                   push esi
// 004900b3  e85c204f00           call 0x982114
// 004900b8  83c404               add esp, 4
// 004900bb  8bc6                 mov eax, esi
// 004900bd  5e                   pop esi
// 004900be  c20400               ret 4
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ??_G?$CXTPHeapObjectT@VCXTPChartSeriesPoint@@VCXTPChartSeriesPointAllocator@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp
