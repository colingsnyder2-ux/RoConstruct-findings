// from server: 100% by auto
// roc 2011-06 00a3fb40  unit: seg_00a30000  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3fb40
//
// 00a3fb40  833d8c82d10000       cmp dword ptr [0xd1828c], 0
// 00a3fb47  c7050c61c9006c4bac00 mov dword ptr [0xc9610c], 0xac4b6c
// 00a3fb51  751a                 jne 0xa3fb6d
// 00a3fb53  a18882d100           mov eax, dword ptr [0xd18288]
// 00a3fb58  85c0                 test eax, eax
// 00a3fb5a  7407                 je 0xa3fb63
// 00a3fb5c  50                   push eax
// 00a3fb5d  ff159002a400         call dword ptr [0xa40290]
// 00a3fb63  c7058882d10000000000 mov dword ptr [0xd18288], 0
// 00a3fb6d  c3                   ret 
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ??__Fg_objCXTPChartSeriesPointAllocator@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp
