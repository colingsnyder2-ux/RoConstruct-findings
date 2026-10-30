// from server: 100% by auto
// roc 2012-06 009aff40  unit: CXTPReportControl  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009aff40
//
// 009aff40  833d0494e50000       cmp dword ptr [0xe59404], 0
// 009aff47  68fc93e500           push 0xe593fc
// 009aff4c  743b                 je 0x9aff89
// 009aff4e  ff159821b200         call dword ptr [0xb22198]
// 009aff54  833d0494e50000       cmp dword ptr [0xe59404], 0
// 009aff5b  741c                 je 0x9aff79
// 009aff5d  e8deb1ffff           call 0x9ab140
// 009aff62  8b442404             mov eax, dword ptr [esp + 4]
// 009aff66  8b0df893e500         mov ecx, dword ptr [0xe593f8]
// 009aff6c  50                   push eax
// 009aff6d  6a00                 push 0
// 009aff6f  51                   push ecx
// 009aff70  ff15a422b200         call dword ptr [0xb222a4]
// 009aff76  c20400               ret 4
// 009aff79  8b542404             mov edx, dword ptr [esp + 4]
// 009aff7d  52                   push edx
// 009aff7e  e86d24fdff           call 0x9823f0
// 009aff83  83c404               add esp, 4
// 009aff86  c20400               ret 4
// 009aff89  ff159821b200         call dword ptr [0xb22198]
// 009aff8f  8b442404             mov eax, dword ptr [esp + 4]
// 009aff93  50                   push eax
// 009aff94  e88121fdff           call 0x98211a
// 009aff99  83c404               add esp, 4
// 009aff9c  c20400               ret 4
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ??2?$CXTPHeapObjectT@VCXTPChartSeriesPoint@@VCXTPChartSeriesPointAllocator@@@@SGPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp
