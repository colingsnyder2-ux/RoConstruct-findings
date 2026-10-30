// from server: 100% by auto
// roc 2011-06 00480200  unit: CRobloxReportView::CStatsItemRecord::CNameItem  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00480200
//
// 00480200  56                   push esi
// 00480201  8bf1                 mov esi, ecx
// 00480203  e8c8fdffff           call 0x47ffd0
// 00480208  f644240801           test byte ptr [esp + 8], 1
// 0048020d  742c                 je 0x48023b
// 0048020f  833d7482d10000       cmp dword ptr [0xd18274], 0
// 00480216  740f                 je 0x480227
// 00480218  56                   push esi
// 00480219  e88249faff           call 0x424ba0
// 0048021e  83c404               add esp, 4
// 00480221  8bc6                 mov eax, esi
// 00480223  5e                   pop esi
// 00480224  c20400               ret 4
// 00480227  686c82d100           push 0xd1826c
// 0048022c  ff154803a400         call dword ptr [0xa40348]
// 00480232  56                   push esi
// 00480233  e8209e3800           call 0x80a058
// 00480238  83c404               add esp, 4
// 0048023b  8bc6                 mov eax, esi
// 0048023d  5e                   pop esi
// 0048023e  c20400               ret 4
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ??_G?$CXTPHeapObjectT@VCXTPChartSeriesPoint@@VCXTPChartSeriesPointAllocator@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp
