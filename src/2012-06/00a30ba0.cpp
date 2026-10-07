// roc 2012-06 00a30ba0  unit: CXTPReportHyperlink  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a30ba0
//
// 00a30ba0  56                   push esi
// 00a30ba1  8bf1                 mov esi, ecx
// 00a30ba3  e878f9ffff           call 0xa30520
// 00a30ba8  f644240801           test byte ptr [esp + 8], 1
// 00a30bad  742c                 je 0xa30bdb
// 00a30baf  833de493e50000       cmp dword ptr [0xe593e4], 0
// 00a30bb6  740f                 je 0xa30bc7
// 00a30bb8  56                   push esi
// 00a30bb9  e8e27a9fff           call 0x4286a0
// 00a30bbe  83c404               add esp, 4
// 00a30bc1  8bc6                 mov eax, esi
// 00a30bc3  5e                   pop esi
// 00a30bc4  c20400               ret 4
// 00a30bc7  68dc93e500           push 0xe593dc
// 00a30bcc  ff159421b200         call dword ptr [0xb22194]
// 00a30bd2  56                   push esi
// 00a30bd3  e83c15f5ff           call 0x982114
// 00a30bd8  83c404               add esp, 4
// 00a30bdb  8bc6                 mov eax, esi
// 00a30bdd  5e                   pop esi
// 00a30bde  c20400               ret 4
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ??_G?$CXTPHeapObjectT@VCXTPChartSeriesPoint@@VCXTPChartSeriesPointAllocator@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp
