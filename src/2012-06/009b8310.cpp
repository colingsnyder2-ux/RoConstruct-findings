// from server: 100% by auto
// roc 2012-06 009b8310  unit: CInstanceRecord::CNameItem  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009b8310
//
// 009b8310  56                   push esi
// 009b8311  8bf1                 mov esi, ecx
// 009b8313  e868e9ffff           call 0x9b6c80
// 009b8318  f644240801           test byte ptr [esp + 8], 1
// 009b831d  742c                 je 0x9b834b
// 009b831f  833de493e50000       cmp dword ptr [0xe593e4], 0
// 009b8326  740f                 je 0x9b8337
// 009b8328  56                   push esi
// 009b8329  e87203a7ff           call 0x4286a0
// 009b832e  83c404               add esp, 4
// 009b8331  8bc6                 mov eax, esi
// 009b8333  5e                   pop esi
// 009b8334  c20400               ret 4
// 009b8337  68dc93e500           push 0xe593dc
// 009b833c  ff159421b200         call dword ptr [0xb22194]
// 009b8342  56                   push esi
// 009b8343  e8cc9dfcff           call 0x982114
// 009b8348  83c404               add esp, 4
// 009b834b  8bc6                 mov eax, esi
// 009b834d  5e                   pop esi
// 009b834e  c20400               ret 4
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ??_G?$CXTPHeapObjectT@VCXTPChartSeriesPoint@@VCXTPChartSeriesPointAllocator@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp
