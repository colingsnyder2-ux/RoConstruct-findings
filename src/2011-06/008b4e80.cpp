// roc 2011-06 008b4e80  unit: CXTPReportRow  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008b4e80
//
// 008b4e80  56                   push esi
// 008b4e81  8bf1                 mov esi, ecx
// 008b4e83  e868dfffff           call 0x8b2df0
// 008b4e88  f644240801           test byte ptr [esp + 8], 1
// 008b4e8d  742c                 je 0x8b4ebb
// 008b4e8f  833d8482d10000       cmp dword ptr [0xd18284], 0
// 008b4e96  740f                 je 0x8b4ea7
// 008b4e98  56                   push esi
// 008b4e99  e842dcf7ff           call 0x832ae0
// 008b4e9e  83c404               add esp, 4
// 008b4ea1  8bc6                 mov eax, esi
// 008b4ea3  5e                   pop esi
// 008b4ea4  c20400               ret 4
// 008b4ea7  687c82d100           push 0xd1827c
// 008b4eac  ff154803a400         call dword ptr [0xa40348]
// 008b4eb2  56                   push esi
// 008b4eb3  e8a051f5ff           call 0x80a058
// 008b4eb8  83c404               add esp, 4
// 008b4ebb  8bc6                 mov eax, esi
// 008b4ebd  5e                   pop esi
// 008b4ebe  c20400               ret 4
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ??_G?$CXTPHeapObjectT@VCXTPChartSeriesPoint@@VCXTPChartSeriesPointAllocator@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp
