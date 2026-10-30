// from server: 100% by auto
// roc 2012-06 00b215f0  unit: seg_00b20000  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00b215f0
//
// 00b215f0  833dec93e50000       cmp dword ptr [0xe593ec], 0
// 00b215f7  c705e030e0004402c100 mov dword ptr [0xe030e0], 0xc10244
// 00b21601  751a                 jne 0xb2161d
// 00b21603  a1e893e500           mov eax, dword ptr [0xe593e8]
// 00b21608  85c0                 test eax, eax
// 00b2160a  7407                 je 0xb21613
// 00b2160c  50                   push eax
// 00b2160d  ff159c22b200         call dword ptr [0xb2229c]
// 00b21613  c705e893e50000000000 mov dword ptr [0xe593e8], 0
// 00b2161d  c3                   ret 
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ??__Fg_objCXTPChartSeriesPointAllocator@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp
