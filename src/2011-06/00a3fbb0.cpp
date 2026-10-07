// roc 2011-06 00a3fbb0  unit: seg_00a30000  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3fbb0
//
// 00a3fbb0  c7051461c9002848ac00 mov dword ptr [0xc96114], 0xac4828
// 00a3fbba  e82170dfff           call 0x836be0
// 00a3fbbf  833d7c82d10000       cmp dword ptr [0xd1827c], 0
// 00a3fbc6  751a                 jne 0xa3fbe2
// 00a3fbc8  a17882d100           mov eax, dword ptr [0xd18278]
// 00a3fbcd  85c0                 test eax, eax
// 00a3fbcf  7407                 je 0xa3fbd8
// 00a3fbd1  50                   push eax
// 00a3fbd2  ff159002a400         call dword ptr [0xa40290]
// 00a3fbd8  c7057882d10000000000 mov dword ptr [0xd18278], 0
// 00a3fbe2  c3                   ret 
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ??__Fgs_CXTPChartSeriesBatchPoint_BlocksManager@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp
