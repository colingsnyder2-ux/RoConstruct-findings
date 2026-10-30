// from server: 100% by auto
// roc 2012-06 009b0c60  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009b0c60
//
// 009b0c60  56                   push esi
// 009b0c61  8bf1                 mov esi, ecx
// 009b0c63  e838ad0000           call 0x9bb9a0
// 009b0c68  f644240801           test byte ptr [esp + 8], 1
// 009b0c6d  742c                 je 0x9b0c9b
// 009b0c6f  833d0494e50000       cmp dword ptr [0xe59404], 0
// 009b0c76  740f                 je 0x9b0c87
// 009b0c78  56                   push esi
// 009b0c79  e8e2e1ffff           call 0x9aee60
// 009b0c7e  83c404               add esp, 4
// 009b0c81  8bc6                 mov eax, esi
// 009b0c83  5e                   pop esi
// 009b0c84  c20400               ret 4
// 009b0c87  68fc93e500           push 0xe593fc
// 009b0c8c  ff159421b200         call dword ptr [0xb22194]
// 009b0c92  56                   push esi
// 009b0c93  e87c14fdff           call 0x982114
// 009b0c98  83c404               add esp, 4
// 009b0c9b  8bc6                 mov eax, esi
// 009b0c9d  5e                   pop esi
// 009b0c9e  c20400               ret 4
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ??_G?$CXTPHeapObjectT@VCXTPChartSeriesPoint@@VCXTPChartSeriesPointAllocator@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp
