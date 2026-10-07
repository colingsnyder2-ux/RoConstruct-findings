// roc 2012-06 009b12f0  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009b12f0
//
// 009b12f0  56                   push esi
// 009b12f1  8bf1                 mov esi, ecx
// 009b12f3  e8689f0700           call 0xa2b260
// 009b12f8  f644240801           test byte ptr [esp + 8], 1
// 009b12fd  742c                 je 0x9b132b
// 009b12ff  833d0494e50000       cmp dword ptr [0xe59404], 0
// 009b1306  740f                 je 0x9b1317
// 009b1308  56                   push esi
// 009b1309  e852dbffff           call 0x9aee60
// 009b130e  83c404               add esp, 4
// 009b1311  8bc6                 mov eax, esi
// 009b1313  5e                   pop esi
// 009b1314  c20400               ret 4
// 009b1317  68fc93e500           push 0xe593fc
// 009b131c  ff159421b200         call dword ptr [0xb22194]
// 009b1322  56                   push esi
// 009b1323  e8ec0dfdff           call 0x982114
// 009b1328  83c404               add esp, 4
// 009b132b  8bc6                 mov eax, esi
// 009b132d  5e                   pop esi
// 009b132e  c20400               ret 4
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ??_G?$CXTPHeapObjectT@VCXTPChartSeriesPoint@@VCXTPChartSeriesPointAllocator@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp
