// roc 2012-06 004a4a80  unit: CScriptStatsRecord  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004a4a80
//
// 004a4a80  56                   push esi
// 004a4a81  8bf1                 mov esi, ecx
// 004a4a83  e828fbffff           call 0x4a45b0
// 004a4a88  f644240801           test byte ptr [esp + 8], 1
// 004a4a8d  742c                 je 0x4a4abb
// 004a4a8f  833de493e50000       cmp dword ptr [0xe593e4], 0
// 004a4a96  740f                 je 0x4a4aa7
// 004a4a98  56                   push esi
// 004a4a99  e8023cf8ff           call 0x4286a0
// 004a4a9e  83c404               add esp, 4
// 004a4aa1  8bc6                 mov eax, esi
// 004a4aa3  5e                   pop esi
// 004a4aa4  c20400               ret 4
// 004a4aa7  68dc93e500           push 0xe593dc
// 004a4aac  ff159421b200         call dword ptr [0xb22194]
// 004a4ab2  56                   push esi
// 004a4ab3  e85cd64d00           call 0x982114
// 004a4ab8  83c404               add esp, 4
// 004a4abb  8bc6                 mov eax, esi
// 004a4abd  5e                   pop esi
// 004a4abe  c20400               ret 4
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ??_G?$CXTPHeapObjectT@VCXTPChartSeriesPoint@@VCXTPChartSeriesPointAllocator@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp
