// roc 2012-06 00b21650  unit: seg_00b20000  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00b21650
//
// 00b21650  c705e830e00000ffc000 mov dword ptr [0xe030e8], 0xc0ff00
// 00b2165a  e861d9e8ff           call 0x9aefc0
// 00b2165f  833dec93e50000       cmp dword ptr [0xe593ec], 0
// 00b21666  751a                 jne 0xb21682
// 00b21668  a1e893e500           mov eax, dword ptr [0xe593e8]
// 00b2166d  85c0                 test eax, eax
// 00b2166f  7407                 je 0xb21678
// 00b21671  50                   push eax
// 00b21672  ff159c22b200         call dword ptr [0xb2229c]
// 00b21678  c705e893e50000000000 mov dword ptr [0xe593e8], 0
// 00b21682  c3                   ret 
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ??__Fgs_CXTPChartSeriesBatchPoint_BlocksManager@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp
