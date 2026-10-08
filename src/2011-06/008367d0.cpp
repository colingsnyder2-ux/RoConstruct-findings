// from server: 100% by auto
// roc 2011-06 008367d0  unit: UCXTPReportDataAllocatorData::?$CXTPHeapAllocatorT  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008367d0
//
// 008367d0  56                   push esi
// 008367d1  8bf1                 mov esi, ecx
// 008367d3  c7065c4bac00         mov dword ptr [esi], 0xac4b5c
// 008367d9  833d6c82d10000       cmp dword ptr [0xd1826c], 0
// 008367e0  751a                 jne 0x8367fc
// 008367e2  a16882d100           mov eax, dword ptr [0xd18268]
// 008367e7  85c0                 test eax, eax
// 008367e9  7407                 je 0x8367f2
// 008367eb  50                   push eax
// 008367ec  ff159002a400         call dword ptr [0xa40290]
// 008367f2  c7056882d10000000000 mov dword ptr [0xd18268], 0
// 008367fc  f644240801           test byte ptr [esp + 8], 1
// 00836801  7409                 je 0x83680c
// 00836803  56                   push esi
// 00836804  e84f38fdff           call 0x80a058
// 00836809  83c404               add esp, 4
// 0083680c  8bc6                 mov eax, esi
// 0083680e  5e                   pop esi
// 0083680f  c20400               ret 4
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ??_G?$CXTPHeapAllocatorT@UCXTPChartSeriesPointAllocatorData@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp
