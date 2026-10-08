// from server: 100% by auto
// roc 2012-06 009bb220  unit: CXTPReportRecords  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009bb220
//
// 009bb220  56                   push esi
// 009bb221  8bf1                 mov esi, ecx
// 009bb223  e828fdffff           call 0x9baf50
// 009bb228  f644240801           test byte ptr [esp + 8], 1
// 009bb22d  742c                 je 0x9bb25b
// 009bb22f  833de493e50000       cmp dword ptr [0xe593e4], 0
// 009bb236  740f                 je 0x9bb247
// 009bb238  56                   push esi
// 009bb239  e862d4a6ff           call 0x4286a0
// 009bb23e  83c404               add esp, 4
// 009bb241  8bc6                 mov eax, esi
// 009bb243  5e                   pop esi
// 009bb244  c20400               ret 4
// 009bb247  68dc93e500           push 0xe593dc
// 009bb24c  ff159421b200         call dword ptr [0xb22194]
// 009bb252  56                   push esi
// 009bb253  e8bc6efcff           call 0x982114
// 009bb258  83c404               add esp, 4
// 009bb25b  8bc6                 mov eax, esi
// 009bb25d  5e                   pop esi
// 009bb25e  c20400               ret 4
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ??_G?$CXTPHeapObjectT@VCXTPChartSeriesPoint@@VCXTPChartSeriesPointAllocator@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp
