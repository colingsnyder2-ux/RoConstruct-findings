// from server: 100% by auto
// roc 2011-06 00838650  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00838650
//
// 00838650  56                   push esi
// 00838651  8bf1                 mov esi, ecx
// 00838653  e818af0000           call 0x843570
// 00838658  f644240801           test byte ptr [esp + 8], 1
// 0083865d  742c                 je 0x83868b
// 0083865f  833d9482d10000       cmp dword ptr [0xd18294], 0
// 00838666  740f                 je 0x838677
// 00838668  56                   push esi
// 00838669  e832e2ffff           call 0x8368a0
// 0083866e  83c404               add esp, 4
// 00838671  8bc6                 mov eax, esi
// 00838673  5e                   pop esi
// 00838674  c20400               ret 4
// 00838677  688c82d100           push 0xd1828c
// 0083867c  ff154803a400         call dword ptr [0xa40348]
// 00838682  56                   push esi
// 00838683  e8d019fdff           call 0x80a058
// 00838688  83c404               add esp, 4
// 0083868b  8bc6                 mov eax, esi
// 0083868d  5e                   pop esi
// 0083868e  c20400               ret 4
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ??_G?$CXTPHeapObjectT@VCXTPChartSeriesPoint@@VCXTPChartSeriesPointAllocator@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp
