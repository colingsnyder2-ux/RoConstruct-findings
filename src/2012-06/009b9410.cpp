// from server: 100% by auto
// roc 2012-06 009b9410  unit: CXTPReportRecord  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009b9410
//
// 009b9410  56                   push esi
// 009b9411  8bf1                 mov esi, ecx
// 009b9413  e868fbffff           call 0x9b8f80
// 009b9418  f644240801           test byte ptr [esp + 8], 1
// 009b941d  742c                 je 0x9b944b
// 009b941f  833de493e50000       cmp dword ptr [0xe593e4], 0
// 009b9426  740f                 je 0x9b9437
// 009b9428  56                   push esi
// 009b9429  e872f2a6ff           call 0x4286a0
// 009b942e  83c404               add esp, 4
// 009b9431  8bc6                 mov eax, esi
// 009b9433  5e                   pop esi
// 009b9434  c20400               ret 4
// 009b9437  68dc93e500           push 0xe593dc
// 009b943c  ff159421b200         call dword ptr [0xb22194]
// 009b9442  56                   push esi
// 009b9443  e8cc8cfcff           call 0x982114
// 009b9448  83c404               add esp, 4
// 009b944b  8bc6                 mov eax, esi
// 009b944d  5e                   pop esi
// 009b944e  c20400               ret 4
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ??_G?$CXTPHeapObjectT@VCXTPChartSeriesPoint@@VCXTPChartSeriesPointAllocator@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp
