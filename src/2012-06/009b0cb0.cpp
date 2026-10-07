// roc 2012-06 009b0cb0  unit: VCXTPReportRecords::?$CXTPHeapObjectT  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009b0cb0
//
// 009b0cb0  56                   push esi
// 009b0cb1  8bf1                 mov esi, ecx
// 009b0cb3  e898a20000           call 0x9baf50
// 009b0cb8  f644240801           test byte ptr [esp + 8], 1
// 009b0cbd  742c                 je 0x9b0ceb
// 009b0cbf  833d0494e50000       cmp dword ptr [0xe59404], 0
// 009b0cc6  740f                 je 0x9b0cd7
// 009b0cc8  56                   push esi
// 009b0cc9  e892e1ffff           call 0x9aee60
// 009b0cce  83c404               add esp, 4
// 009b0cd1  8bc6                 mov eax, esi
// 009b0cd3  5e                   pop esi
// 009b0cd4  c20400               ret 4
// 009b0cd7  68fc93e500           push 0xe593fc
// 009b0cdc  ff159421b200         call dword ptr [0xb22194]
// 009b0ce2  56                   push esi
// 009b0ce3  e82c14fdff           call 0x982114
// 009b0ce8  83c404               add esp, 4
// 009b0ceb  8bc6                 mov eax, esi
// 009b0ced  5e                   pop esi
// 009b0cee  c20400               ret 4
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ??_G?$CXTPHeapObjectT@VCXTPChartSeriesPoint@@VCXTPChartSeriesPointAllocator@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp
