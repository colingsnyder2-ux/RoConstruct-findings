// roc 2011-06 00836a00  unit: VCXTPReportRow::?$CXTPInternalCollectionT  size: 213 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00836a00
//
// 00836a00  56                   push esi
// 00836a01  8b35a882d100         mov esi, dword ptr [0xd182a8]
// 00836a07  85f6                 test esi, esi
// 00836a09  0f84c4000000         je 0x836ad3
// 00836a0f  90                   nop 
// 00836a10  8b4608               mov eax, dword ptr [esi + 8]
// 00836a13  85c0                 test eax, eax
// 00836a15  7408                 je 0x836a1f
// 00836a17  8bf0                 mov esi, eax
// 00836a19  85f6                 test esi, esi
// 00836a1b  75f3                 jne 0x836a10
// 00836a1d  5e                   pop esi
// 00836a1e  c3                   ret 
// 00836a1f  53                   push ebx
// 00836a20  55                   push ebp
// 00836a21  8b2db401a400         mov ebp, dword ptr [0xa401b4]
// 00836a27  57                   push edi
// 00836a28  eb06                 jmp 0x836a30
// 00836a2a  8d9b00000000         lea ebx, [ebx]
// 00836a30  833e00               cmp dword ptr [esi], 0
// 00836a33  0f858c000000         jne 0x836ac5
// 00836a39  8b4608               mov eax, dword ptr [esi + 8]
// 00836a3c  8bde                 mov ebx, esi
// 00836a3e  85c0                 test eax, eax
// 00836a40  7406                 je 0x836a48
// 00836a42  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00836a45  89480c               mov dword ptr [eax + 0xc], ecx
// 00836a48  8b460c               mov eax, dword ptr [esi + 0xc]
// 00836a4b  85c0                 test eax, eax
// 00836a4d  7406                 je 0x836a55
// 00836a4f  8b5608               mov edx, dword ptr [esi + 8]
// 00836a52  895008               mov dword ptr [eax + 8], edx
// 00836a55  3935a882d100         cmp dword ptr [0xd182a8], esi
// 00836a5b  750f                 jne 0x836a6c
// 00836a5d  8b4608               mov eax, dword ptr [esi + 8]
// 00836a60  85c0                 test eax, eax
// 00836a62  7503                 jne 0x836a67
// 00836a64  8b460c               mov eax, dword ptr [esi + 0xc]
// 00836a67  a3a882d100           mov dword ptr [0xd182a8], eax
// 00836a6c  8b760c               mov esi, dword ptr [esi + 0xc]
// 00836a6f  33ff                 xor edi, edi
// 00836a71  393d7c82d100         cmp dword ptr [0xd1827c], edi
// 00836a77  740d                 je 0x836a86
// 00836a79  687c82d100           push 0xd1827c
// 00836a7e  ff154803a400         call dword ptr [0xa40348]
// 00836a84  8bf8                 mov edi, eax
// 00836a86  833d8482d10000       cmp dword ptr [0xd18284], 0
// 00836a8d  53                   push ebx
// 00836a8e  742b                 je 0x836abb
// 00836a90  8b0d7882d100         mov ecx, dword ptr [0xd18278]
// 00836a96  6a00                 push 0
// 00836a98  51                   push ecx
// 00836a99  ffd5                 call ebp
// 00836a9b  85ff                 test edi, edi
// 00836a9d  7529                 jne 0x836ac8
// 00836a9f  a17882d100           mov eax, dword ptr [0xd18278]
// 00836aa4  85c0                 test eax, eax
// 00836aa6  7407                 je 0x836aaf
// 00836aa8  50                   push eax
// 00836aa9  ff159002a400         call dword ptr [0xa40290]
// 00836aaf  c7057882d10000000000 mov dword ptr [0xd18278], 0
// 00836ab9  eb0d                 jmp 0x836ac8
// 00836abb  e89835fdff           call 0x80a058
// 00836ac0  83c404               add esp, 4
// 00836ac3  eb03                 jmp 0x836ac8
// 00836ac5  8b760c               mov esi, dword ptr [esi + 0xc]
// 00836ac8  85f6                 test esi, esi
// 00836aca  0f8560ffffff         jne 0x836a30
// 00836ad0  5f                   pop edi
// 00836ad1  5d                   pop ebp
// 00836ad2  5b                   pop ebx
// 00836ad3  5e                   pop esi
// 00836ad4  c3                   ret 
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ?FreeExtraData@?$CXTPBatchAllocManagerT@VCXTPChartSeriesPointAllocator@@UCXTPChartSeriesBatchPointData@@@@SAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp
