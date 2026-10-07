// roc 2011-06 008368a0  unit: VCXTPReportRow::?$CXTPInternalCollectionT  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008368a0
//
// 008368a0  56                   push esi
// 008368a1  33f6                 xor esi, esi
// 008368a3  39358c82d100         cmp dword ptr [0xd1828c], esi
// 008368a9  740d                 je 0x8368b8
// 008368ab  688c82d100           push 0xd1828c
// 008368b0  ff154803a400         call dword ptr [0xa40348]
// 008368b6  8bf0                 mov esi, eax
// 008368b8  833d9482d10000       cmp dword ptr [0xd18294], 0
// 008368bf  7434                 je 0x8368f5
// 008368c1  8b442408             mov eax, dword ptr [esp + 8]
// 008368c5  8b0d8882d100         mov ecx, dword ptr [0xd18288]
// 008368cb  50                   push eax
// 008368cc  6a00                 push 0
// 008368ce  51                   push ecx
// 008368cf  ff15b401a400         call dword ptr [0xa401b4]
// 008368d5  85f6                 test esi, esi
// 008368d7  751a                 jne 0x8368f3
// 008368d9  a18882d100           mov eax, dword ptr [0xd18288]
// 008368de  85c0                 test eax, eax
// 008368e0  7407                 je 0x8368e9
// 008368e2  50                   push eax
// 008368e3  ff159002a400         call dword ptr [0xa40290]
// 008368e9  c7058882d10000000000 mov dword ptr [0xd18288], 0
// 008368f3  5e                   pop esi
// 008368f4  c3                   ret 
// 008368f5  5e                   pop esi
// 008368f6  e95d37fdff           jmp 0x80a058
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ?Free_mem@?$CXTPHeapAllocatorT@UCXTPChartSeriesPointAllocatorData@@@@SAXPAX@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp
