// roc 2012-06 00b215c0  unit: seg_00b20000  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00b215c0
//
// 00b215c0  833ddc93e50000       cmp dword ptr [0xe593dc], 0
// 00b215c7  c705dc30e0003c02c100 mov dword ptr [0xe030dc], 0xc1023c
// 00b215d1  751a                 jne 0xb215ed
// 00b215d3  a1d893e500           mov eax, dword ptr [0xe593d8]
// 00b215d8  85c0                 test eax, eax
// 00b215da  7407                 je 0xb215e3
// 00b215dc  50                   push eax
// 00b215dd  ff159c22b200         call dword ptr [0xb2229c]
// 00b215e3  c705d893e50000000000 mov dword ptr [0xe593d8], 0
// 00b215ed  c3                   ret 
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ??__Fg_objCXTPChartSeriesPointAllocator@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp
