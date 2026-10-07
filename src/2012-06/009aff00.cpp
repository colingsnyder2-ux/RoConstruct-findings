// roc 2012-06 009aff00  unit: CXTPReportControl  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009aff00
//
// 009aff00  833d0494e50000       cmp dword ptr [0xe59404], 0
// 009aff07  7410                 je 0x9aff19
// 009aff09  8b442404             mov eax, dword ptr [esp + 4]
// 009aff0d  50                   push eax
// 009aff0e  e84defffff           call 0x9aee60
// 009aff13  83c404               add esp, 4
// 009aff16  c20400               ret 4
// 009aff19  68fc93e500           push 0xe593fc
// 009aff1e  ff159421b200         call dword ptr [0xb22194]
// 009aff24  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009aff28  51                   push ecx
// 009aff29  e8e621fdff           call 0x982114
// 009aff2e  59                   pop ecx
// 009aff2f  c20400               ret 4
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ??3?$CXTPHeapObjectT@VCXTPChartSeriesPoint@@VCXTPChartSeriesPointAllocator@@@@SGXPAX@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp
