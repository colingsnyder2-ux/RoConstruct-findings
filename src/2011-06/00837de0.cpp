// roc 2011-06 00837de0  unit: VCXTPReportRowAllocator::?$CXTPBatchAllocManagerT  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00837de0
//
// 00837de0  56                   push esi
// 00837de1  8bf1                 mov esi, ecx
// 00837de3  c7062048ac00         mov dword ptr [esi], 0xac4820
// 00837de9  e812ecffff           call 0x836a00
// 00837dee  833d7c82d10000       cmp dword ptr [0xd1827c], 0
// 00837df5  751a                 jne 0x837e11
// 00837df7  a17882d100           mov eax, dword ptr [0xd18278]
// 00837dfc  85c0                 test eax, eax
// 00837dfe  7407                 je 0x837e07
// 00837e00  50                   push eax
// 00837e01  ff159002a400         call dword ptr [0xa40290]
// 00837e07  c7057882d10000000000 mov dword ptr [0xd18278], 0
// 00837e11  f644240801           test byte ptr [esp + 8], 1
// 00837e16  7409                 je 0x837e21
// 00837e18  56                   push esi
// 00837e19  e83a22fdff           call 0x80a058
// 00837e1e  83c404               add esp, 4
// 00837e21  8bc6                 mov eax, esi
// 00837e23  5e                   pop esi
// 00837e24  c20400               ret 4
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ??_G?$CXTPBatchAllocManagerT@VCXTPChartSeriesPointAllocator@@UCXTPChartSeriesBatchPointData@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp
