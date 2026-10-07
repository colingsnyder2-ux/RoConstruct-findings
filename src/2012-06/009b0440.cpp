// roc 2012-06 009b0440  unit: VCXTPReportRowAllocator::?$CXTPBatchAllocManagerT  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009b0440
//
// 009b0440  56                   push esi
// 009b0441  8bf1                 mov esi, ecx
// 009b0443  c70608ffc000         mov dword ptr [esi], 0xc0ff08
// 009b0449  e852edffff           call 0x9af1a0
// 009b044e  833dec93e50000       cmp dword ptr [0xe593ec], 0
// 009b0455  751a                 jne 0x9b0471
// 009b0457  a1e893e500           mov eax, dword ptr [0xe593e8]
// 009b045c  85c0                 test eax, eax
// 009b045e  7407                 je 0x9b0467
// 009b0460  50                   push eax
// 009b0461  ff159c22b200         call dword ptr [0xb2229c]
// 009b0467  c705e893e50000000000 mov dword ptr [0xe593e8], 0
// 009b0471  f644240801           test byte ptr [esp + 8], 1
// 009b0476  7409                 je 0x9b0481
// 009b0478  56                   push esi
// 009b0479  e8961cfdff           call 0x982114
// 009b047e  83c404               add esp, 4
// 009b0481  8bc6                 mov eax, esi
// 009b0483  5e                   pop esi
// 009b0484  c20400               ret 4
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ??_G?$CXTPBatchAllocManagerT@VCXTPChartSeriesPointAllocator@@UCXTPChartSeriesBatchPointData@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp
