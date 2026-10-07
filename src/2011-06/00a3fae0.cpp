// roc 2011-06 00a3fae0  unit: seg_00a30000  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3fae0
//
// 00a3fae0  833d6c82d10000       cmp dword ptr [0xd1826c], 0
// 00a3fae7  c7050461c9005c4bac00 mov dword ptr [0xc96104], 0xac4b5c
// 00a3faf1  751a                 jne 0xa3fb0d
// 00a3faf3  a16882d100           mov eax, dword ptr [0xd18268]
// 00a3faf8  85c0                 test eax, eax
// 00a3fafa  7407                 je 0xa3fb03
// 00a3fafc  50                   push eax
// 00a3fafd  ff159002a400         call dword ptr [0xa40290]
// 00a3fb03  c7056882d10000000000 mov dword ptr [0xd18268], 0
// 00a3fb0d  c3                   ret 
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ??__Fg_objCXTPChartSeriesPointAllocator@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp
