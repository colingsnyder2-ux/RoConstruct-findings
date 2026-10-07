// roc 2011-06 008386a0  unit: VCXTPReportRecords::?$CXTPHeapObjectT  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008386a0
//
// 008386a0  56                   push esi
// 008386a1  8bf1                 mov esi, ecx
// 008386a3  e818a50000           call 0x842bc0
// 008386a8  f644240801           test byte ptr [esp + 8], 1
// 008386ad  742c                 je 0x8386db
// 008386af  833d9482d10000       cmp dword ptr [0xd18294], 0
// 008386b6  740f                 je 0x8386c7
// 008386b8  56                   push esi
// 008386b9  e8e2e1ffff           call 0x8368a0
// 008386be  83c404               add esp, 4
// 008386c1  8bc6                 mov eax, esi
// 008386c3  5e                   pop esi
// 008386c4  c20400               ret 4
// 008386c7  688c82d100           push 0xd1828c
// 008386cc  ff154803a400         call dword ptr [0xa40348]
// 008386d2  56                   push esi
// 008386d3  e88019fdff           call 0x80a058
// 008386d8  83c404               add esp, 4
// 008386db  8bc6                 mov eax, esi
// 008386dd  5e                   pop esi
// 008386de  c20400               ret 4
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ??_G?$CXTPHeapObjectT@VCXTPChartSeriesPoint@@VCXTPChartSeriesPointAllocator@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp
