// from server: 100% by auto
// roc 2011-06 00840fb0  unit: CXTPReportRecord  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00840fb0
//
// 00840fb0  56                   push esi
// 00840fb1  8bf1                 mov esi, ecx
// 00840fb3  e868fbffff           call 0x840b20
// 00840fb8  f644240801           test byte ptr [esp + 8], 1
// 00840fbd  742c                 je 0x840feb
// 00840fbf  833d7482d10000       cmp dword ptr [0xd18274], 0
// 00840fc6  740f                 je 0x840fd7
// 00840fc8  56                   push esi
// 00840fc9  e8d23bbeff           call 0x424ba0
// 00840fce  83c404               add esp, 4
// 00840fd1  8bc6                 mov eax, esi
// 00840fd3  5e                   pop esi
// 00840fd4  c20400               ret 4
// 00840fd7  686c82d100           push 0xd1826c
// 00840fdc  ff154803a400         call dword ptr [0xa40348]
// 00840fe2  56                   push esi
// 00840fe3  e87090fcff           call 0x80a058
// 00840fe8  83c404               add esp, 4
// 00840feb  8bc6                 mov eax, esi
// 00840fed  5e                   pop esi
// 00840fee  c20400               ret 4
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ??_G?$CXTPHeapObjectT@VCXTPChartSeriesPoint@@VCXTPChartSeriesPointAllocator@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp
