// from server: 100% by auto
// roc 2011-06 00a3fb70  unit: seg_00a30000  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3fb70
//
// 00a3fb70  c7051061c9002048ac00 mov dword ptr [0xc96110], 0xac4820
// 00a3fb7a  e8816edfff           call 0x836a00
// 00a3fb7f  833d7c82d10000       cmp dword ptr [0xd1827c], 0
// 00a3fb86  751a                 jne 0xa3fba2
// 00a3fb88  a17882d100           mov eax, dword ptr [0xd18278]
// 00a3fb8d  85c0                 test eax, eax
// 00a3fb8f  7407                 je 0xa3fb98
// 00a3fb91  50                   push eax
// 00a3fb92  ff159002a400         call dword ptr [0xa40290]
// 00a3fb98  c7057882d10000000000 mov dword ptr [0xd18278], 0
// 00a3fba2  c3                   ret 
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ??__Fgs_CXTPChartSeriesBatchPoint_BlocksManager@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp
