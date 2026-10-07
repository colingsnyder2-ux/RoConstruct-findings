// roc 2011-06 00838ce0  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00838ce0
//
// 00838ce0  56                   push esi
// 00838ce1  8bf1                 mov esi, ecx
// 00838ce3  e808a10700           call 0x8b2df0
// 00838ce8  f644240801           test byte ptr [esp + 8], 1
// 00838ced  742c                 je 0x838d1b
// 00838cef  833d9482d10000       cmp dword ptr [0xd18294], 0
// 00838cf6  740f                 je 0x838d07
// 00838cf8  56                   push esi
// 00838cf9  e8a2dbffff           call 0x8368a0
// 00838cfe  83c404               add esp, 4
// 00838d01  8bc6                 mov eax, esi
// 00838d03  5e                   pop esi
// 00838d04  c20400               ret 4
// 00838d07  688c82d100           push 0xd1828c
// 00838d0c  ff154803a400         call dword ptr [0xa40348]
// 00838d12  56                   push esi
// 00838d13  e84013fdff           call 0x80a058
// 00838d18  83c404               add esp, 4
// 00838d1b  8bc6                 mov eax, esi
// 00838d1d  5e                   pop esi
// 00838d1e  c20400               ret 4
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ??_G?$CXTPHeapObjectT@VCXTPChartSeriesPoint@@VCXTPChartSeriesPointAllocator@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp
