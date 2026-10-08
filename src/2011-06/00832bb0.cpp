// from server: 100% by auto
// roc 2011-06 00832bb0  unit: CXTPReportControl  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00832bb0
//
// 00832bb0  51                   push ecx
// 00832bb1  833d7882d10000       cmp dword ptr [0xd18278], 0
// 00832bb8  755a                 jne 0x832c14
// 00832bba  56                   push esi
// 00832bbb  6a00                 push 0
// 00832bbd  6a00                 push 0
// 00832bbf  6a00                 push 0
// 00832bc1  ff15ac01a400         call dword ptr [0xa401ac]
// 00832bc7  687448a600           push 0xa64874
// 00832bcc  a37882d100           mov dword ptr [0xd18278], eax
// 00832bd1  8bf0                 mov esi, eax
// 00832bd3  c744240802000000     mov dword ptr [esp + 8], 2
// 00832bdb  ff156803a400         call dword ptr [0xa40368]
// 00832be1  85c0                 test eax, eax
// 00832be3  7424                 je 0x832c09
// 00832be5  686048a600           push 0xa64860
// 00832bea  50                   push eax
// 00832beb  ff156c03a400         call dword ptr [0xa4036c]
// 00832bf1  85c0                 test eax, eax
// 00832bf3  7414                 je 0x832c09
// 00832bf5  6a04                 push 4
// 00832bf7  8d4c2408             lea ecx, [esp + 8]
// 00832bfb  51                   push ecx
// 00832bfc  6a00                 push 0
// 00832bfe  56                   push esi
// 00832bff  ffd0                 call eax
// 00832c01  a38082d100           mov dword ptr [0xd18280], eax
// 00832c06  5e                   pop esi
// 00832c07  59                   pop ecx
// 00832c08  c3                   ret 
// 00832c09  b801000000           mov eax, 1
// 00832c0e  a38082d100           mov dword ptr [0xd18280], eax
// 00832c13  5e                   pop esi
// 00832c14  59                   pop ecx
// 00832c15  c3                   ret 
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ?CreateHeapIfNeed@?$CXTPHeapAllocatorT@UCXTPChartSeriesPointAllocatorData@@@@SAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp
