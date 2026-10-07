// roc 2012-06 009ab1b0  unit: CXTPReportControl  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ab1b0
//
// 009ab1b0  51                   push ecx
// 009ab1b1  833de893e50000       cmp dword ptr [0xe593e8], 0
// 009ab1b8  755a                 jne 0x9ab214
// 009ab1ba  56                   push esi
// 009ab1bb  6a00                 push 0
// 009ab1bd  6a00                 push 0
// 009ab1bf  6a00                 push 0
// 009ab1c1  ff15a022b200         call dword ptr [0xb222a0]
// 009ab1c7  6834dfb400           push 0xb4df34
// 009ab1cc  a3e893e500           mov dword ptr [0xe593e8], eax
// 009ab1d1  8bf0                 mov esi, eax
// 009ab1d3  c744240802000000     mov dword ptr [esp + 8], 2
// 009ab1db  ff15ac21b200         call dword ptr [0xb221ac]
// 009ab1e1  85c0                 test eax, eax
// 009ab1e3  7424                 je 0x9ab209
// 009ab1e5  6820dfb400           push 0xb4df20
// 009ab1ea  50                   push eax
// 009ab1eb  ff15b021b200         call dword ptr [0xb221b0]
// 009ab1f1  85c0                 test eax, eax
// 009ab1f3  7414                 je 0x9ab209
// 009ab1f5  6a04                 push 4
// 009ab1f7  8d4c2408             lea ecx, [esp + 8]
// 009ab1fb  51                   push ecx
// 009ab1fc  6a00                 push 0
// 009ab1fe  56                   push esi
// 009ab1ff  ffd0                 call eax
// 009ab201  a3f093e500           mov dword ptr [0xe593f0], eax
// 009ab206  5e                   pop esi
// 009ab207  59                   pop ecx
// 009ab208  c3                   ret 
// 009ab209  b801000000           mov eax, 1
// 009ab20e  a3f093e500           mov dword ptr [0xe593f0], eax
// 009ab213  5e                   pop esi
// 009ab214  59                   pop ecx
// 009ab215  c3                   ret 
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ?CreateHeapIfNeed@?$CXTPHeapAllocatorT@UCXTPChartSeriesPointAllocatorData@@@@SAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp
