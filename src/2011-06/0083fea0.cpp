// roc 2011-06 0083fea0  unit: CInstanceRecord::CNameItem  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0083fea0
//
// 0083fea0  56                   push esi
// 0083fea1  8bf1                 mov esi, ecx
// 0083fea3  e8a8e7ffff           call 0x83e650
// 0083fea8  f644240801           test byte ptr [esp + 8], 1
// 0083fead  742c                 je 0x83fedb
// 0083feaf  833d7482d10000       cmp dword ptr [0xd18274], 0
// 0083feb6  740f                 je 0x83fec7
// 0083feb8  56                   push esi
// 0083feb9  e8e24cbeff           call 0x424ba0
// 0083febe  83c404               add esp, 4
// 0083fec1  8bc6                 mov eax, esi
// 0083fec3  5e                   pop esi
// 0083fec4  c20400               ret 4
// 0083fec7  686c82d100           push 0xd1826c
// 0083fecc  ff154803a400         call dword ptr [0xa40348]
// 0083fed2  56                   push esi
// 0083fed3  e880a1fcff           call 0x80a058
// 0083fed8  83c404               add esp, 4
// 0083fedb  8bc6                 mov eax, esi
// 0083fedd  5e                   pop esi
// 0083fede  c20400               ret 4
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ??_G?$CXTPHeapObjectT@VCXTPChartSeriesPoint@@VCXTPChartSeriesPointAllocator@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp
