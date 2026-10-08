// from server: 100% by auto
// roc 2011-06 008378f0  unit: CXTPReportControl  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008378f0
//
// 008378f0  833d9482d10000       cmp dword ptr [0xd18294], 0
// 008378f7  688c82d100           push 0xd1828c
// 008378fc  743b                 je 0x837939
// 008378fe  ff154c03a400         call dword ptr [0xa4034c]
// 00837904  833d9482d10000       cmp dword ptr [0xd18294], 0
// 0083790b  741c                 je 0x837929
// 0083790d  e82eb2ffff           call 0x832b40
// 00837912  8b442404             mov eax, dword ptr [esp + 4]
// 00837916  8b0d8882d100         mov ecx, dword ptr [0xd18288]
// 0083791c  50                   push eax
// 0083791d  6a00                 push 0
// 0083791f  51                   push ecx
// 00837920  ff15b001a400         call dword ptr [0xa401b0]
// 00837926  c20400               ret 4
// 00837929  8b542404             mov edx, dword ptr [esp + 4]
// 0083792d  52                   push edx
// 0083792e  e80d2afdff           call 0x80a340
// 00837933  83c404               add esp, 4
// 00837936  c20400               ret 4
// 00837939  ff154c03a400         call dword ptr [0xa4034c]
// 0083793f  8b442404             mov eax, dword ptr [esp + 4]
// 00837943  50                   push eax
// 00837944  e81527fdff           call 0x80a05e
// 00837949  83c404               add esp, 4
// 0083794c  c20400               ret 4
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ??2?$CXTPHeapObjectT@VCXTPChartSeriesPoint@@VCXTPChartSeriesPointAllocator@@@@SGPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp
