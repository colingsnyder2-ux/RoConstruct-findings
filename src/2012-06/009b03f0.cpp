// from server: 100% by auto
// roc 2012-06 009b03f0  unit: VCXTPReportRowAllocator::?$CXTPBatchAllocManagerT  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009b03f0
//
// 009b03f0  56                   push esi
// 009b03f1  8bf1                 mov esi, ecx
// 009b03f3  c70600ffc000         mov dword ptr [esi], 0xc0ff00
// 009b03f9  e8c2ebffff           call 0x9aefc0
// 009b03fe  833dec93e50000       cmp dword ptr [0xe593ec], 0
// 009b0405  751a                 jne 0x9b0421
// 009b0407  a1e893e500           mov eax, dword ptr [0xe593e8]
// 009b040c  85c0                 test eax, eax
// 009b040e  7407                 je 0x9b0417
// 009b0410  50                   push eax
// 009b0411  ff159c22b200         call dword ptr [0xb2229c]
// 009b0417  c705e893e50000000000 mov dword ptr [0xe593e8], 0
// 009b0421  f644240801           test byte ptr [esp + 8], 1
// 009b0426  7409                 je 0x9b0431
// 009b0428  56                   push esi
// 009b0429  e8e61cfdff           call 0x982114
// 009b042e  83c404               add esp, 4
// 009b0431  8bc6                 mov eax, esi
// 009b0433  5e                   pop esi
// 009b0434  c20400               ret 4
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ??_G?$CXTPBatchAllocManagerT@VCXTPChartSeriesPointAllocator@@UCXTPChartSeriesBatchPointData@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp
