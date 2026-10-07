// roc 2011-06 00836f50  unit: UCXTPReportRowAllocatorData::?$CXTPHeapAllocatorT  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00836f50
//
// 00836f50  56                   push esi
// 00836f51  8bf1                 mov esi, ecx
// 00836f53  c706644bac00         mov dword ptr [esi], 0xac4b64
// 00836f59  833d7c82d10000       cmp dword ptr [0xd1827c], 0
// 00836f60  751a                 jne 0x836f7c
// 00836f62  a17882d100           mov eax, dword ptr [0xd18278]
// 00836f67  85c0                 test eax, eax
// 00836f69  7407                 je 0x836f72
// 00836f6b  50                   push eax
// 00836f6c  ff159002a400         call dword ptr [0xa40290]
// 00836f72  c7057882d10000000000 mov dword ptr [0xd18278], 0
// 00836f7c  f644240801           test byte ptr [esp + 8], 1
// 00836f81  7409                 je 0x836f8c
// 00836f83  56                   push esi
// 00836f84  e8cf30fdff           call 0x80a058
// 00836f89  83c404               add esp, 4
// 00836f8c  8bc6                 mov eax, esi
// 00836f8e  5e                   pop esi
// 00836f8f  c20400               ret 4
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ??_G?$CXTPHeapAllocatorT@UCXTPChartSeriesPointAllocatorData@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp
