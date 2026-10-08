// from server: 100% by auto
// roc 2011-06 00842e90  unit: CXTPReportRecords  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00842e90
//
// 00842e90  56                   push esi
// 00842e91  8bf1                 mov esi, ecx
// 00842e93  e828fdffff           call 0x842bc0
// 00842e98  f644240801           test byte ptr [esp + 8], 1
// 00842e9d  742c                 je 0x842ecb
// 00842e9f  833d7482d10000       cmp dword ptr [0xd18274], 0
// 00842ea6  740f                 je 0x842eb7
// 00842ea8  56                   push esi
// 00842ea9  e8f21cbeff           call 0x424ba0
// 00842eae  83c404               add esp, 4
// 00842eb1  8bc6                 mov eax, esi
// 00842eb3  5e                   pop esi
// 00842eb4  c20400               ret 4
// 00842eb7  686c82d100           push 0xd1826c
// 00842ebc  ff154803a400         call dword ptr [0xa40348]
// 00842ec2  56                   push esi
// 00842ec3  e89071fcff           call 0x80a058
// 00842ec8  83c404               add esp, 4
// 00842ecb  8bc6                 mov eax, esi
// 00842ecd  5e                   pop esi
// 00842ece  c20400               ret 4
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ??_G?$CXTPHeapObjectT@VCXTPChartSeriesPoint@@VCXTPChartSeriesPointAllocator@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp
