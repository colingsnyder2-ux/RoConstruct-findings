// roc 2012-06 009af510  unit: UCXTPReportDataAllocatorData::?$CXTPHeapAllocatorT  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009af510
//
// 009af510  56                   push esi
// 009af511  8bf1                 mov esi, ecx
// 009af513  c7063c02c100         mov dword ptr [esi], 0xc1023c
// 009af519  833ddc93e50000       cmp dword ptr [0xe593dc], 0
// 009af520  751a                 jne 0x9af53c
// 009af522  a1d893e500           mov eax, dword ptr [0xe593d8]
// 009af527  85c0                 test eax, eax
// 009af529  7407                 je 0x9af532
// 009af52b  50                   push eax
// 009af52c  ff159c22b200         call dword ptr [0xb2229c]
// 009af532  c705d893e50000000000 mov dword ptr [0xe593d8], 0
// 009af53c  f644240801           test byte ptr [esp + 8], 1
// 009af541  7409                 je 0x9af54c
// 009af543  56                   push esi
// 009af544  e8cb2bfdff           call 0x982114
// 009af549  83c404               add esp, 4
// 009af54c  8bc6                 mov eax, esi
// 009af54e  5e                   pop esi
// 009af54f  c20400               ret 4
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ??_G?$CXTPHeapAllocatorT@UCXTPChartSeriesPointAllocatorData@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp
