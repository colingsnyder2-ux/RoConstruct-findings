// from server: 100% by auto
// roc 2012-06 009aee60  unit: VCXTPReportRow::?$CXTPInternalCollectionT  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009aee60
//
// 009aee60  56                   push esi
// 009aee61  33f6                 xor esi, esi
// 009aee63  3935fc93e500         cmp dword ptr [0xe593fc], esi
// 009aee69  740d                 je 0x9aee78
// 009aee6b  68fc93e500           push 0xe593fc
// 009aee70  ff159421b200         call dword ptr [0xb22194]
// 009aee76  8bf0                 mov esi, eax
// 009aee78  833d0494e50000       cmp dword ptr [0xe59404], 0
// 009aee7f  7434                 je 0x9aeeb5
// 009aee81  8b442408             mov eax, dword ptr [esp + 8]
// 009aee85  8b0df893e500         mov ecx, dword ptr [0xe593f8]
// 009aee8b  50                   push eax
// 009aee8c  6a00                 push 0
// 009aee8e  51                   push ecx
// 009aee8f  ff15a822b200         call dword ptr [0xb222a8]
// 009aee95  85f6                 test esi, esi
// 009aee97  751a                 jne 0x9aeeb3
// 009aee99  a1f893e500           mov eax, dword ptr [0xe593f8]
// 009aee9e  85c0                 test eax, eax
// 009aeea0  7407                 je 0x9aeea9
// 009aeea2  50                   push eax
// 009aeea3  ff159c22b200         call dword ptr [0xb2229c]
// 009aeea9  c705f893e50000000000 mov dword ptr [0xe593f8], 0
// 009aeeb3  5e                   pop esi
// 009aeeb4  c3                   ret 
// 009aeeb5  5e                   pop esi
// 009aeeb6  e95932fdff           jmp 0x982114
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ?Free_mem@?$CXTPHeapAllocatorT@UCXTPChartSeriesPointAllocatorData@@@@SAXPAX@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp
