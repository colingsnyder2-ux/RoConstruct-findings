// from server: 100% by auto
// roc 2011-06 008b86b0  unit: CXTPReportHyperlink  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008b86b0
//
// 008b86b0  56                   push esi
// 008b86b1  8bf1                 mov esi, ecx
// 008b86b3  e898f9ffff           call 0x8b8050
// 008b86b8  f644240801           test byte ptr [esp + 8], 1
// 008b86bd  742c                 je 0x8b86eb
// 008b86bf  833d7482d10000       cmp dword ptr [0xd18274], 0
// 008b86c6  740f                 je 0x8b86d7
// 008b86c8  56                   push esi
// 008b86c9  e8d2c4b6ff           call 0x424ba0
// 008b86ce  83c404               add esp, 4
// 008b86d1  8bc6                 mov eax, esi
// 008b86d3  5e                   pop esi
// 008b86d4  c20400               ret 4
// 008b86d7  686c82d100           push 0xd1826c
// 008b86dc  ff154803a400         call dword ptr [0xa40348]
// 008b86e2  56                   push esi
// 008b86e3  e87019f5ff           call 0x80a058
// 008b86e8  83c404               add esp, 4
// 008b86eb  8bc6                 mov eax, esi
// 008b86ed  5e                   pop esi
// 008b86ee  c20400               ret 4
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ??_G?$CXTPHeapObjectT@VCXTPChartSeriesPoint@@VCXTPChartSeriesPointAllocator@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp
