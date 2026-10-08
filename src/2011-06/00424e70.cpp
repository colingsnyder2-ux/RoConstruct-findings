// from server: 100% by auto
// roc 2011-06 00424e70  unit: CInstanceRecord  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00424e70
//
// 00424e70  56                   push esi
// 00424e71  8bf1                 mov esi, ecx
// 00424e73  e878ffffff           call 0x424df0
// 00424e78  f644240801           test byte ptr [esp + 8], 1
// 00424e7d  742c                 je 0x424eab
// 00424e7f  833d7482d10000       cmp dword ptr [0xd18274], 0
// 00424e86  740f                 je 0x424e97
// 00424e88  56                   push esi
// 00424e89  e812fdffff           call 0x424ba0
// 00424e8e  83c404               add esp, 4
// 00424e91  8bc6                 mov eax, esi
// 00424e93  5e                   pop esi
// 00424e94  c20400               ret 4
// 00424e97  686c82d100           push 0xd1826c
// 00424e9c  ff154803a400         call dword ptr [0xa40348]
// 00424ea2  56                   push esi
// 00424ea3  e8b0513e00           call 0x80a058
// 00424ea8  83c404               add esp, 4
// 00424eab  8bc6                 mov eax, esi
// 00424ead  5e                   pop esi
// 00424eae  c20400               ret 4
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ??_G?$CXTPHeapObjectT@VCXTPChartSeriesPoint@@VCXTPChartSeriesPointAllocator@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp
