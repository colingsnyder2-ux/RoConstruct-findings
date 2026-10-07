// roc 2012-06 00b21620  unit: seg_00b20000  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00b21620
//
// 00b21620  833dfc93e50000       cmp dword ptr [0xe593fc], 0
// 00b21627  c705e430e0004c02c100 mov dword ptr [0xe030e4], 0xc1024c
// 00b21631  751a                 jne 0xb2164d
// 00b21633  a1f893e500           mov eax, dword ptr [0xe593f8]
// 00b21638  85c0                 test eax, eax
// 00b2163a  7407                 je 0xb21643
// 00b2163c  50                   push eax
// 00b2163d  ff159c22b200         call dword ptr [0xb2229c]
// 00b21643  c705f893e50000000000 mov dword ptr [0xe593f8], 0
// 00b2164d  c3                   ret 
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ??__Fg_objCXTPChartSeriesPointAllocator@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp
