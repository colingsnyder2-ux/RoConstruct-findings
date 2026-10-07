// roc 2012-06 004286a0  unit: CInstanceRecord::CNameItem  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004286a0
//
// 004286a0  56                   push esi
// 004286a1  33f6                 xor esi, esi
// 004286a3  3935dc93e500         cmp dword ptr [0xe593dc], esi
// 004286a9  740d                 je 0x4286b8
// 004286ab  68dc93e500           push 0xe593dc
// 004286b0  ff159421b200         call dword ptr [0xb22194]
// 004286b6  8bf0                 mov esi, eax
// 004286b8  833de493e50000       cmp dword ptr [0xe593e4], 0
// 004286bf  7434                 je 0x4286f5
// 004286c1  8b442408             mov eax, dword ptr [esp + 8]
// 004286c5  8b0dd893e500         mov ecx, dword ptr [0xe593d8]
// 004286cb  50                   push eax
// 004286cc  6a00                 push 0
// 004286ce  51                   push ecx
// 004286cf  ff15a822b200         call dword ptr [0xb222a8]
// 004286d5  85f6                 test esi, esi
// 004286d7  751a                 jne 0x4286f3
// 004286d9  a1d893e500           mov eax, dword ptr [0xe593d8]
// 004286de  85c0                 test eax, eax
// 004286e0  7407                 je 0x4286e9
// 004286e2  50                   push eax
// 004286e3  ff159c22b200         call dword ptr [0xb2229c]
// 004286e9  c705d893e50000000000 mov dword ptr [0xe593d8], 0
// 004286f3  5e                   pop esi
// 004286f4  c3                   ret 
// 004286f5  5e                   pop esi
// 004286f6  e9199a5500           jmp 0x982114
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ?Free_mem@?$CXTPHeapAllocatorT@UCXTPChartSeriesPointAllocatorData@@@@SAXPAX@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp
