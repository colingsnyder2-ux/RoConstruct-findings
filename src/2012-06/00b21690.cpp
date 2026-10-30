// from server: 100% by auto
// roc 2012-06 00b21690  unit: seg_00b20000  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00b21690
//
// 00b21690  c705ec30e00008ffc000 mov dword ptr [0xe030ec], 0xc0ff08
// 00b2169a  e801dbe8ff           call 0x9af1a0
// 00b2169f  833dec93e50000       cmp dword ptr [0xe593ec], 0
// 00b216a6  751a                 jne 0xb216c2
// 00b216a8  a1e893e500           mov eax, dword ptr [0xe593e8]
// 00b216ad  85c0                 test eax, eax
// 00b216af  7407                 je 0xb216b8
// 00b216b1  50                   push eax
// 00b216b2  ff159c22b200         call dword ptr [0xb2229c]
// 00b216b8  c705e893e50000000000 mov dword ptr [0xe593e8], 0
// 00b216c2  c3                   ret 
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ??__Fgs_CXTPChartSeriesBatchPoint_BlocksManager@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp
