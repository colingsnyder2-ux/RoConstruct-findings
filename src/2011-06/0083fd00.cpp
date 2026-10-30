// from server: 100% by auto
// roc 2011-06 0083fd00  unit: CInstanceRecord::CNameItem  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0083fd00
//
// 0083fd00  833d7482d10000       cmp dword ptr [0xd18274], 0
// 0083fd07  7410                 je 0x83fd19
// 0083fd09  8b442404             mov eax, dword ptr [esp + 4]
// 0083fd0d  50                   push eax
// 0083fd0e  e88d4ebeff           call 0x424ba0
// 0083fd13  83c404               add esp, 4
// 0083fd16  c20400               ret 4
// 0083fd19  686c82d100           push 0xd1826c
// 0083fd1e  ff154803a400         call dword ptr [0xa40348]
// 0083fd24  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0083fd28  51                   push ecx
// 0083fd29  e82aa3fcff           call 0x80a058
// 0083fd2e  59                   pop ecx
// 0083fd2f  c20400               ret 4
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ??3?$CXTPHeapObjectT@VCXTPChartSeriesPoint@@VCXTPChartSeriesPointAllocator@@@@SGXPAX@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp
