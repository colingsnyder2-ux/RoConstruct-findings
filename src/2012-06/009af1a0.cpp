// roc 2012-06 009af1a0  unit: VCXTPReportRow::?$CXTPInternalCollectionT  size: 213 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009af1a0
//
// 009af1a0  56                   push esi
// 009af1a1  8b353094e500         mov esi, dword ptr [0xe59430]
// 009af1a7  85f6                 test esi, esi
// 009af1a9  0f84c4000000         je 0x9af273
// 009af1af  90                   nop 
// 009af1b0  8b4608               mov eax, dword ptr [esi + 8]
// 009af1b3  85c0                 test eax, eax
// 009af1b5  7408                 je 0x9af1bf
// 009af1b7  8bf0                 mov esi, eax
// 009af1b9  85f6                 test esi, esi
// 009af1bb  75f3                 jne 0x9af1b0
// 009af1bd  5e                   pop esi
// 009af1be  c3                   ret 
// 009af1bf  53                   push ebx
// 009af1c0  55                   push ebp
// 009af1c1  8b2da822b200         mov ebp, dword ptr [0xb222a8]
// 009af1c7  57                   push edi
// 009af1c8  eb06                 jmp 0x9af1d0
// 009af1ca  8d9b00000000         lea ebx, [ebx]
// 009af1d0  833e00               cmp dword ptr [esi], 0
// 009af1d3  0f858c000000         jne 0x9af265
// 009af1d9  8b4608               mov eax, dword ptr [esi + 8]
// 009af1dc  8bde                 mov ebx, esi
// 009af1de  85c0                 test eax, eax
// 009af1e0  7406                 je 0x9af1e8
// 009af1e2  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 009af1e5  89480c               mov dword ptr [eax + 0xc], ecx
// 009af1e8  8b460c               mov eax, dword ptr [esi + 0xc]
// 009af1eb  85c0                 test eax, eax
// 009af1ed  7406                 je 0x9af1f5
// 009af1ef  8b5608               mov edx, dword ptr [esi + 8]
// 009af1f2  895008               mov dword ptr [eax + 8], edx
// 009af1f5  39353094e500         cmp dword ptr [0xe59430], esi
// 009af1fb  750f                 jne 0x9af20c
// 009af1fd  8b4608               mov eax, dword ptr [esi + 8]
// 009af200  85c0                 test eax, eax
// 009af202  7503                 jne 0x9af207
// 009af204  8b460c               mov eax, dword ptr [esi + 0xc]
// 009af207  a33094e500           mov dword ptr [0xe59430], eax
// 009af20c  8b760c               mov esi, dword ptr [esi + 0xc]
// 009af20f  33ff                 xor edi, edi
// 009af211  393dec93e500         cmp dword ptr [0xe593ec], edi
// 009af217  740d                 je 0x9af226
// 009af219  68ec93e500           push 0xe593ec
// 009af21e  ff159421b200         call dword ptr [0xb22194]
// 009af224  8bf8                 mov edi, eax
// 009af226  833df493e50000       cmp dword ptr [0xe593f4], 0
// 009af22d  53                   push ebx
// 009af22e  742b                 je 0x9af25b
// 009af230  8b0de893e500         mov ecx, dword ptr [0xe593e8]
// 009af236  6a00                 push 0
// 009af238  51                   push ecx
// 009af239  ffd5                 call ebp
// 009af23b  85ff                 test edi, edi
// 009af23d  7529                 jne 0x9af268
// 009af23f  a1e893e500           mov eax, dword ptr [0xe593e8]
// 009af244  85c0                 test eax, eax
// 009af246  7407                 je 0x9af24f
// 009af248  50                   push eax
// 009af249  ff159c22b200         call dword ptr [0xb2229c]
// 009af24f  c705e893e50000000000 mov dword ptr [0xe593e8], 0
// 009af259  eb0d                 jmp 0x9af268
// 009af25b  e8b42efdff           call 0x982114
// 009af260  83c404               add esp, 4
// 009af263  eb03                 jmp 0x9af268
// 009af265  8b760c               mov esi, dword ptr [esi + 0xc]
// 009af268  85f6                 test esi, esi
// 009af26a  0f8560ffffff         jne 0x9af1d0
// 009af270  5f                   pop edi
// 009af271  5d                   pop ebp
// 009af272  5b                   pop ebx
// 009af273  5e                   pop esi
// 009af274  c3                   ret 
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ?FreeExtraData@?$CXTPBatchAllocManagerT@VCXTPChartSeriesPointAllocator@@UCXTPChartSeriesBatchPointData@@@@SAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp
