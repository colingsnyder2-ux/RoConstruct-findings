// from server: 100% by auto
// roc 2011-06 008379d0  unit: VCXTPReportRow::?$CXTPInternalCollectionT  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008379d0
//
// 008379d0  833d8482d10000       cmp dword ptr [0xd18284], 0
// 008379d7  687c82d100           push 0xd1827c
// 008379dc  743b                 je 0x837a19
// 008379de  ff154c03a400         call dword ptr [0xa4034c]
// 008379e4  833d8482d10000       cmp dword ptr [0xd18284], 0
// 008379eb  741c                 je 0x837a09
// 008379ed  e8beb1ffff           call 0x832bb0
// 008379f2  8b442404             mov eax, dword ptr [esp + 4]
// 008379f6  8b0d7882d100         mov ecx, dword ptr [0xd18278]
// 008379fc  50                   push eax
// 008379fd  6a00                 push 0
// 008379ff  51                   push ecx
// 00837a00  ff15b001a400         call dword ptr [0xa401b0]
// 00837a06  c20400               ret 4
// 00837a09  8b542404             mov edx, dword ptr [esp + 4]
// 00837a0d  52                   push edx
// 00837a0e  e82d29fdff           call 0x80a340
// 00837a13  83c404               add esp, 4
// 00837a16  c20400               ret 4
// 00837a19  ff154c03a400         call dword ptr [0xa4034c]
// 00837a1f  8b442404             mov eax, dword ptr [esp + 4]
// 00837a23  50                   push eax
// 00837a24  e83526fdff           call 0x80a05e
// 00837a29  83c404               add esp, 4
// 00837a2c  c20400               ret 4
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ??2?$CXTPHeapObjectT@VCXTPChartSeriesPoint@@VCXTPChartSeriesPointAllocator@@@@SGPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp
