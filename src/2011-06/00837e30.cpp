// from server: 100% by auto
// roc 2011-06 00837e30  unit: VCXTPReportRowAllocator::?$CXTPBatchAllocManagerT  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00837e30
//
// 00837e30  56                   push esi
// 00837e31  8bf1                 mov esi, ecx
// 00837e33  c7062848ac00         mov dword ptr [esi], 0xac4828
// 00837e39  e8a2edffff           call 0x836be0
// 00837e3e  833d7c82d10000       cmp dword ptr [0xd1827c], 0
// 00837e45  751a                 jne 0x837e61
// 00837e47  a17882d100           mov eax, dword ptr [0xd18278]
// 00837e4c  85c0                 test eax, eax
// 00837e4e  7407                 je 0x837e57
// 00837e50  50                   push eax
// 00837e51  ff159002a400         call dword ptr [0xa40290]
// 00837e57  c7057882d10000000000 mov dword ptr [0xd18278], 0
// 00837e61  f644240801           test byte ptr [esp + 8], 1
// 00837e66  7409                 je 0x837e71
// 00837e68  56                   push esi
// 00837e69  e8ea21fdff           call 0x80a058
// 00837e6e  83c404               add esp, 4
// 00837e71  8bc6                 mov eax, esi
// 00837e73  5e                   pop esi
// 00837e74  c20400               ret 4
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ??_G?$CXTPBatchAllocManagerT@VCXTPChartSeriesPointAllocator@@UCXTPChartSeriesBatchPointData@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp
