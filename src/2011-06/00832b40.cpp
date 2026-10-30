// from server: 100% by auto
// roc 2011-06 00832b40  unit: CXTPReportControl  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00832b40
//
// 00832b40  51                   push ecx
// 00832b41  833d8882d10000       cmp dword ptr [0xd18288], 0
// 00832b48  755a                 jne 0x832ba4
// 00832b4a  56                   push esi
// 00832b4b  6a00                 push 0
// 00832b4d  6a00                 push 0
// 00832b4f  6a00                 push 0
// 00832b51  ff15ac01a400         call dword ptr [0xa401ac]
// 00832b57  687448a600           push 0xa64874
// 00832b5c  a38882d100           mov dword ptr [0xd18288], eax
// 00832b61  8bf0                 mov esi, eax
// 00832b63  c744240802000000     mov dword ptr [esp + 8], 2
// 00832b6b  ff156803a400         call dword ptr [0xa40368]
// 00832b71  85c0                 test eax, eax
// 00832b73  7424                 je 0x832b99
// 00832b75  686048a600           push 0xa64860
// 00832b7a  50                   push eax
// 00832b7b  ff156c03a400         call dword ptr [0xa4036c]
// 00832b81  85c0                 test eax, eax
// 00832b83  7414                 je 0x832b99
// 00832b85  6a04                 push 4
// 00832b87  8d4c2408             lea ecx, [esp + 8]
// 00832b8b  51                   push ecx
// 00832b8c  6a00                 push 0
// 00832b8e  56                   push esi
// 00832b8f  ffd0                 call eax
// 00832b91  a39082d100           mov dword ptr [0xd18290], eax
// 00832b96  5e                   pop esi
// 00832b97  59                   pop ecx
// 00832b98  c3                   ret 
// 00832b99  b801000000           mov eax, 1
// 00832b9e  a39082d100           mov dword ptr [0xd18290], eax
// 00832ba3  5e                   pop esi
// 00832ba4  59                   pop ecx
// 00832ba5  c3                   ret 
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ?CreateHeapIfNeed@?$CXTPHeapAllocatorT@UCXTPChartSeriesPointAllocatorData@@@@SAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp
