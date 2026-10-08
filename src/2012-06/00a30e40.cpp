// from server: 100% by auto
// roc 2012-06 00a30e40  unit: CXTPReportHyperlinks  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a30e40
//
// 00a30e40  56                   push esi
// 00a30e41  8bf1                 mov esi, ecx
// 00a30e43  e8a8fdffff           call 0xa30bf0
// 00a30e48  f644240801           test byte ptr [esp + 8], 1
// 00a30e4d  742c                 je 0xa30e7b
// 00a30e4f  833de493e50000       cmp dword ptr [0xe593e4], 0
// 00a30e56  740f                 je 0xa30e67
// 00a30e58  56                   push esi
// 00a30e59  e842789fff           call 0x4286a0
// 00a30e5e  83c404               add esp, 4
// 00a30e61  8bc6                 mov eax, esi
// 00a30e63  5e                   pop esi
// 00a30e64  c20400               ret 4
// 00a30e67  68dc93e500           push 0xe593dc
// 00a30e6c  ff159421b200         call dword ptr [0xb22194]
// 00a30e72  56                   push esi
// 00a30e73  e89c12f5ff           call 0x982114
// 00a30e78  83c404               add esp, 4
// 00a30e7b  8bc6                 mov eax, esi
// 00a30e7d  5e                   pop esi
// 00a30e7e  c20400               ret 4
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ??_G?$CXTPHeapObjectT@VCXTPChartSeriesPoint@@VCXTPChartSeriesPointAllocator@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp
