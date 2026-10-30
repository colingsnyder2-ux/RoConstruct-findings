// from server: 100% by auto
// roc 2011-06 00424ad0  unit: CInstanceRecord::CNameItem  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00424ad0
//
// 00424ad0  51                   push ecx
// 00424ad1  833d6882d10000       cmp dword ptr [0xd18268], 0
// 00424ad8  755a                 jne 0x424b34
// 00424ada  56                   push esi
// 00424adb  6a00                 push 0
// 00424add  6a00                 push 0
// 00424adf  6a00                 push 0
// 00424ae1  ff15ac01a400         call dword ptr [0xa401ac]
// 00424ae7  687448a600           push 0xa64874
// 00424aec  a36882d100           mov dword ptr [0xd18268], eax
// 00424af1  8bf0                 mov esi, eax
// 00424af3  c744240802000000     mov dword ptr [esp + 8], 2
// 00424afb  ff156803a400         call dword ptr [0xa40368]
// 00424b01  85c0                 test eax, eax
// 00424b03  7424                 je 0x424b29
// 00424b05  686048a600           push 0xa64860
// 00424b0a  50                   push eax
// 00424b0b  ff156c03a400         call dword ptr [0xa4036c]
// 00424b11  85c0                 test eax, eax
// 00424b13  7414                 je 0x424b29
// 00424b15  6a04                 push 4
// 00424b17  8d4c2408             lea ecx, [esp + 8]
// 00424b1b  51                   push ecx
// 00424b1c  6a00                 push 0
// 00424b1e  56                   push esi
// 00424b1f  ffd0                 call eax
// 00424b21  a37082d100           mov dword ptr [0xd18270], eax
// 00424b26  5e                   pop esi
// 00424b27  59                   pop ecx
// 00424b28  c3                   ret 
// 00424b29  b801000000           mov eax, 1
// 00424b2e  a37082d100           mov dword ptr [0xd18270], eax
// 00424b33  5e                   pop esi
// 00424b34  59                   pop ecx
// 00424b35  c3                   ret 
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ?CreateHeapIfNeed@?$CXTPHeapAllocatorT@UCXTPChartSeriesPointAllocatorData@@@@SAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp
