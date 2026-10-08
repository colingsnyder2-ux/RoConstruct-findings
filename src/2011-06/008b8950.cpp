// from server: 100% by auto
// roc 2011-06 008b8950  unit: CXTPReportHyperlinks  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008b8950
//
// 008b8950  56                   push esi
// 008b8951  8bf1                 mov esi, ecx
// 008b8953  e8a8fdffff           call 0x8b8700
// 008b8958  f644240801           test byte ptr [esp + 8], 1
// 008b895d  742c                 je 0x8b898b
// 008b895f  833d7482d10000       cmp dword ptr [0xd18274], 0
// 008b8966  740f                 je 0x8b8977
// 008b8968  56                   push esi
// 008b8969  e832c2b6ff           call 0x424ba0
// 008b896e  83c404               add esp, 4
// 008b8971  8bc6                 mov eax, esi
// 008b8973  5e                   pop esi
// 008b8974  c20400               ret 4
// 008b8977  686c82d100           push 0xd1826c
// 008b897c  ff154803a400         call dword ptr [0xa40348]
// 008b8982  56                   push esi
// 008b8983  e8d016f5ff           call 0x80a058
// 008b8988  83c404               add esp, 4
// 008b898b  8bc6                 mov eax, esi
// 008b898d  5e                   pop esi
// 008b898e  c20400               ret 4
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ??_G?$CXTPHeapObjectT@VCXTPChartSeriesPoint@@VCXTPChartSeriesPointAllocator@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp
