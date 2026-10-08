// from server: 100% by auto
// roc 2011-06 00a3fb10  unit: seg_00a30000  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3fb10
//
// 00a3fb10  833d7c82d10000       cmp dword ptr [0xd1827c], 0
// 00a3fb17  c7050861c900644bac00 mov dword ptr [0xc96108], 0xac4b64
// 00a3fb21  751a                 jne 0xa3fb3d
// 00a3fb23  a17882d100           mov eax, dword ptr [0xd18278]
// 00a3fb28  85c0                 test eax, eax
// 00a3fb2a  7407                 je 0xa3fb33
// 00a3fb2c  50                   push eax
// 00a3fb2d  ff159002a400         call dword ptr [0xa40290]
// 00a3fb33  c7057882d10000000000 mov dword ptr [0xd18278], 0
// 00a3fb3d  c3                   ret 
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ??__Fg_objCXTPChartSeriesPointAllocator@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp
