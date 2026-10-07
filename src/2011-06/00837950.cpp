// roc 2011-06 00837950  unit: CXTPReportControl  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00837950
//
// 00837950  833d9482d10000       cmp dword ptr [0xd18294], 0
// 00837957  7410                 je 0x837969
// 00837959  8b442404             mov eax, dword ptr [esp + 4]
// 0083795d  50                   push eax
// 0083795e  e83defffff           call 0x8368a0
// 00837963  83c404               add esp, 4
// 00837966  c20400               ret 4
// 00837969  688c82d100           push 0xd1828c
// 0083796e  ff154803a400         call dword ptr [0xa40348]
// 00837974  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00837978  51                   push ecx
// 00837979  e8da26fdff           call 0x80a058
// 0083797e  59                   pop ecx
// 0083797f  c20400               ret 4
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ??3?$CXTPHeapObjectT@VCXTPChartSeriesPoint@@VCXTPChartSeriesPointAllocator@@@@SGXPAX@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp
