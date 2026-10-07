// roc 2011-06 00836be0  unit: VCXTPReportRow::?$CXTPInternalCollectionT  size: 213 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00836be0
//
// 00836be0  56                   push esi
// 00836be1  8b35c082d100         mov esi, dword ptr [0xd182c0]
// 00836be7  85f6                 test esi, esi
// 00836be9  0f84c4000000         je 0x836cb3
// 00836bef  90                   nop 
// 00836bf0  8b4608               mov eax, dword ptr [esi + 8]
// 00836bf3  85c0                 test eax, eax
// 00836bf5  7408                 je 0x836bff
// 00836bf7  8bf0                 mov esi, eax
// 00836bf9  85f6                 test esi, esi
// 00836bfb  75f3                 jne 0x836bf0
// 00836bfd  5e                   pop esi
// 00836bfe  c3                   ret 
// 00836bff  53                   push ebx
// 00836c00  55                   push ebp
// 00836c01  8b2db401a400         mov ebp, dword ptr [0xa401b4]
// 00836c07  57                   push edi
// 00836c08  eb06                 jmp 0x836c10
// 00836c0a  8d9b00000000         lea ebx, [ebx]
// 00836c10  833e00               cmp dword ptr [esi], 0
// 00836c13  0f858c000000         jne 0x836ca5
// 00836c19  8b4608               mov eax, dword ptr [esi + 8]
// 00836c1c  8bde                 mov ebx, esi
// 00836c1e  85c0                 test eax, eax
// 00836c20  7406                 je 0x836c28
// 00836c22  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00836c25  89480c               mov dword ptr [eax + 0xc], ecx
// 00836c28  8b460c               mov eax, dword ptr [esi + 0xc]
// 00836c2b  85c0                 test eax, eax
// 00836c2d  7406                 je 0x836c35
// 00836c2f  8b5608               mov edx, dword ptr [esi + 8]
// 00836c32  895008               mov dword ptr [eax + 8], edx
// 00836c35  3935c082d100         cmp dword ptr [0xd182c0], esi
// 00836c3b  750f                 jne 0x836c4c
// 00836c3d  8b4608               mov eax, dword ptr [esi + 8]
// 00836c40  85c0                 test eax, eax
// 00836c42  7503                 jne 0x836c47
// 00836c44  8b460c               mov eax, dword ptr [esi + 0xc]
// 00836c47  a3c082d100           mov dword ptr [0xd182c0], eax
// 00836c4c  8b760c               mov esi, dword ptr [esi + 0xc]
// 00836c4f  33ff                 xor edi, edi
// 00836c51  393d7c82d100         cmp dword ptr [0xd1827c], edi
// 00836c57  740d                 je 0x836c66
// 00836c59  687c82d100           push 0xd1827c
// 00836c5e  ff154803a400         call dword ptr [0xa40348]
// 00836c64  8bf8                 mov edi, eax
// 00836c66  833d8482d10000       cmp dword ptr [0xd18284], 0
// 00836c6d  53                   push ebx
// 00836c6e  742b                 je 0x836c9b
// 00836c70  8b0d7882d100         mov ecx, dword ptr [0xd18278]
// 00836c76  6a00                 push 0
// 00836c78  51                   push ecx
// 00836c79  ffd5                 call ebp
// 00836c7b  85ff                 test edi, edi
// 00836c7d  7529                 jne 0x836ca8
// 00836c7f  a17882d100           mov eax, dword ptr [0xd18278]
// 00836c84  85c0                 test eax, eax
// 00836c86  7407                 je 0x836c8f
// 00836c88  50                   push eax
// 00836c89  ff159002a400         call dword ptr [0xa40290]
// 00836c8f  c7057882d10000000000 mov dword ptr [0xd18278], 0
// 00836c99  eb0d                 jmp 0x836ca8
// 00836c9b  e8b833fdff           call 0x80a058
// 00836ca0  83c404               add esp, 4
// 00836ca3  eb03                 jmp 0x836ca8
// 00836ca5  8b760c               mov esi, dword ptr [esi + 0xc]
// 00836ca8  85f6                 test esi, esi
// 00836caa  0f8560ffffff         jne 0x836c10
// 00836cb0  5f                   pop edi
// 00836cb1  5d                   pop ebp
// 00836cb2  5b                   pop ebx
// 00836cb3  5e                   pop esi
// 00836cb4  c3                   ret 
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ?FreeExtraData@?$CXTPBatchAllocManagerT@VCXTPChartSeriesPointAllocator@@UCXTPChartSeriesBatchPointData@@@@SAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp
