// from server: 100% by auto
// roc 2012-06 009ab140  unit: CXTPReportControl  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ab140
//
// 009ab140  51                   push ecx
// 009ab141  833df893e50000       cmp dword ptr [0xe593f8], 0
// 009ab148  755a                 jne 0x9ab1a4
// 009ab14a  56                   push esi
// 009ab14b  6a00                 push 0
// 009ab14d  6a00                 push 0
// 009ab14f  6a00                 push 0
// 009ab151  ff15a022b200         call dword ptr [0xb222a0]
// 009ab157  6834dfb400           push 0xb4df34
// 009ab15c  a3f893e500           mov dword ptr [0xe593f8], eax
// 009ab161  8bf0                 mov esi, eax
// 009ab163  c744240802000000     mov dword ptr [esp + 8], 2
// 009ab16b  ff15ac21b200         call dword ptr [0xb221ac]
// 009ab171  85c0                 test eax, eax
// 009ab173  7424                 je 0x9ab199
// 009ab175  6820dfb400           push 0xb4df20
// 009ab17a  50                   push eax
// 009ab17b  ff15b021b200         call dword ptr [0xb221b0]
// 009ab181  85c0                 test eax, eax
// 009ab183  7414                 je 0x9ab199
// 009ab185  6a04                 push 4
// 009ab187  8d4c2408             lea ecx, [esp + 8]
// 009ab18b  51                   push ecx
// 009ab18c  6a00                 push 0
// 009ab18e  56                   push esi
// 009ab18f  ffd0                 call eax
// 009ab191  a30094e500           mov dword ptr [0xe59400], eax
// 009ab196  5e                   pop esi
// 009ab197  59                   pop ecx
// 009ab198  c3                   ret 
// 009ab199  b801000000           mov eax, 1
// 009ab19e  a30094e500           mov dword ptr [0xe59400], eax
// 009ab1a3  5e                   pop esi
// 009ab1a4  59                   pop ecx
// 009ab1a5  c3                   ret 
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ?CreateHeapIfNeed@?$CXTPHeapAllocatorT@UCXTPChartSeriesPointAllocatorData@@@@SAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp
