// roc 2012-06 00428c70  unit: CInstanceRecord  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00428c70
//
// 00428c70  56                   push esi
// 00428c71  8bf1                 mov esi, ecx
// 00428c73  e878ffffff           call 0x428bf0
// 00428c78  f644240801           test byte ptr [esp + 8], 1
// 00428c7d  742c                 je 0x428cab
// 00428c7f  833de493e50000       cmp dword ptr [0xe593e4], 0
// 00428c86  740f                 je 0x428c97
// 00428c88  56                   push esi
// 00428c89  e812faffff           call 0x4286a0
// 00428c8e  83c404               add esp, 4
// 00428c91  8bc6                 mov eax, esi
// 00428c93  5e                   pop esi
// 00428c94  c20400               ret 4
// 00428c97  68dc93e500           push 0xe593dc
// 00428c9c  ff159421b200         call dword ptr [0xb22194]
// 00428ca2  56                   push esi
// 00428ca3  e86c945500           call 0x982114
// 00428ca8  83c404               add esp, 4
// 00428cab  8bc6                 mov eax, esi
// 00428cad  5e                   pop esi
// 00428cae  c20400               ret 4
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ??_G?$CXTPHeapObjectT@VCXTPChartSeriesPoint@@VCXTPChartSeriesPointAllocator@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp
