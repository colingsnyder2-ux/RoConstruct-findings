// from server: 100% by auto
// roc 2012-06 004284d0  unit: CInstanceRecord::CNameItem  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004284d0
//
// 004284d0  51                   push ecx
// 004284d1  833dd893e50000       cmp dword ptr [0xe593d8], 0
// 004284d8  755a                 jne 0x428534
// 004284da  56                   push esi
// 004284db  6a00                 push 0
// 004284dd  6a00                 push 0
// 004284df  6a00                 push 0
// 004284e1  ff15a022b200         call dword ptr [0xb222a0]
// 004284e7  6834dfb400           push 0xb4df34
// 004284ec  a3d893e500           mov dword ptr [0xe593d8], eax
// 004284f1  8bf0                 mov esi, eax
// 004284f3  c744240802000000     mov dword ptr [esp + 8], 2
// 004284fb  ff15ac21b200         call dword ptr [0xb221ac]
// 00428501  85c0                 test eax, eax
// 00428503  7424                 je 0x428529
// 00428505  6820dfb400           push 0xb4df20
// 0042850a  50                   push eax
// 0042850b  ff15b021b200         call dword ptr [0xb221b0]
// 00428511  85c0                 test eax, eax
// 00428513  7414                 je 0x428529
// 00428515  6a04                 push 4
// 00428517  8d4c2408             lea ecx, [esp + 8]
// 0042851b  51                   push ecx
// 0042851c  6a00                 push 0
// 0042851e  56                   push esi
// 0042851f  ffd0                 call eax
// 00428521  a3e093e500           mov dword ptr [0xe593e0], eax
// 00428526  5e                   pop esi
// 00428527  59                   pop ecx
// 00428528  c3                   ret 
// 00428529  b801000000           mov eax, 1
// 0042852e  a3e093e500           mov dword ptr [0xe593e0], eax
// 00428533  5e                   pop esi
// 00428534  59                   pop ecx
// 00428535  c3                   ret 
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ?CreateHeapIfNeed@?$CXTPHeapAllocatorT@UCXTPChartSeriesPointAllocatorData@@@@SAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp
