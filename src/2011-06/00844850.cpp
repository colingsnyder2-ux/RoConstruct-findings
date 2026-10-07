// roc 2011-06 00844850  unit: CXTPReportRows  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00844850
//
// 00844850  56                   push esi
// 00844851  8bf1                 mov esi, ecx
// 00844853  e818edffff           call 0x843570
// 00844858  f644240801           test byte ptr [esp + 8], 1
// 0084485d  742c                 je 0x84488b
// 0084485f  833d7482d10000       cmp dword ptr [0xd18274], 0
// 00844866  740f                 je 0x844877
// 00844868  56                   push esi
// 00844869  e83203beff           call 0x424ba0
// 0084486e  83c404               add esp, 4
// 00844871  8bc6                 mov eax, esi
// 00844873  5e                   pop esi
// 00844874  c20400               ret 4
// 00844877  686c82d100           push 0xd1826c
// 0084487c  ff154803a400         call dword ptr [0xa40348]
// 00844882  56                   push esi
// 00844883  e8d057fcff           call 0x80a058
// 00844888  83c404               add esp, 4
// 0084488b  8bc6                 mov eax, esi
// 0084488d  5e                   pop esi
// 0084488e  c20400               ret 4
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ??_G?$CXTPHeapObjectT@VCXTPChartSeriesPoint@@VCXTPChartSeriesPointAllocator@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp
