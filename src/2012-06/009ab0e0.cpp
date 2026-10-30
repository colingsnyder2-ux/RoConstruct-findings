// from server: 100% by auto
// roc 2012-06 009ab0e0  unit: CXTPReportControl  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ab0e0
//
// 009ab0e0  56                   push esi
// 009ab0e1  33f6                 xor esi, esi
// 009ab0e3  3935ec93e500         cmp dword ptr [0xe593ec], esi
// 009ab0e9  740d                 je 0x9ab0f8
// 009ab0eb  68ec93e500           push 0xe593ec
// 009ab0f0  ff159421b200         call dword ptr [0xb22194]
// 009ab0f6  8bf0                 mov esi, eax
// 009ab0f8  833df493e50000       cmp dword ptr [0xe593f4], 0
// 009ab0ff  7434                 je 0x9ab135
// 009ab101  8b442408             mov eax, dword ptr [esp + 8]
// 009ab105  8b0de893e500         mov ecx, dword ptr [0xe593e8]
// 009ab10b  50                   push eax
// 009ab10c  6a00                 push 0
// 009ab10e  51                   push ecx
// 009ab10f  ff15a822b200         call dword ptr [0xb222a8]
// 009ab115  85f6                 test esi, esi
// 009ab117  751a                 jne 0x9ab133
// 009ab119  a1e893e500           mov eax, dword ptr [0xe593e8]
// 009ab11e  85c0                 test eax, eax
// 009ab120  7407                 je 0x9ab129
// 009ab122  50                   push eax
// 009ab123  ff159c22b200         call dword ptr [0xb2229c]
// 009ab129  c705e893e50000000000 mov dword ptr [0xe593e8], 0
// 009ab133  5e                   pop esi
// 009ab134  c3                   ret 
// 009ab135  5e                   pop esi
// 009ab136  e9d96ffdff           jmp 0x982114
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ?Free_mem@?$CXTPHeapAllocatorT@UCXTPChartSeriesPointAllocatorData@@@@SAXPAX@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp
