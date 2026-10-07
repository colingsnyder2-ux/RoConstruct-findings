// roc 2012-06 009aefc0  unit: VCXTPReportRow::?$CXTPInternalCollectionT  size: 213 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009aefc0
//
// 009aefc0  56                   push esi
// 009aefc1  8b351894e500         mov esi, dword ptr [0xe59418]
// 009aefc7  85f6                 test esi, esi
// 009aefc9  0f84c4000000         je 0x9af093
// 009aefcf  90                   nop 
// 009aefd0  8b4608               mov eax, dword ptr [esi + 8]
// 009aefd3  85c0                 test eax, eax
// 009aefd5  7408                 je 0x9aefdf
// 009aefd7  8bf0                 mov esi, eax
// 009aefd9  85f6                 test esi, esi
// 009aefdb  75f3                 jne 0x9aefd0
// 009aefdd  5e                   pop esi
// 009aefde  c3                   ret 
// 009aefdf  53                   push ebx
// 009aefe0  55                   push ebp
// 009aefe1  8b2da822b200         mov ebp, dword ptr [0xb222a8]
// 009aefe7  57                   push edi
// 009aefe8  eb06                 jmp 0x9aeff0
// 009aefea  8d9b00000000         lea ebx, [ebx]
// 009aeff0  833e00               cmp dword ptr [esi], 0
// 009aeff3  0f858c000000         jne 0x9af085
// 009aeff9  8b4608               mov eax, dword ptr [esi + 8]
// 009aeffc  8bde                 mov ebx, esi
// 009aeffe  85c0                 test eax, eax
// 009af000  7406                 je 0x9af008
// 009af002  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 009af005  89480c               mov dword ptr [eax + 0xc], ecx
// 009af008  8b460c               mov eax, dword ptr [esi + 0xc]
// 009af00b  85c0                 test eax, eax
// 009af00d  7406                 je 0x9af015
// 009af00f  8b5608               mov edx, dword ptr [esi + 8]
// 009af012  895008               mov dword ptr [eax + 8], edx
// 009af015  39351894e500         cmp dword ptr [0xe59418], esi
// 009af01b  750f                 jne 0x9af02c
// 009af01d  8b4608               mov eax, dword ptr [esi + 8]
// 009af020  85c0                 test eax, eax
// 009af022  7503                 jne 0x9af027
// 009af024  8b460c               mov eax, dword ptr [esi + 0xc]
// 009af027  a31894e500           mov dword ptr [0xe59418], eax
// 009af02c  8b760c               mov esi, dword ptr [esi + 0xc]
// 009af02f  33ff                 xor edi, edi
// 009af031  393dec93e500         cmp dword ptr [0xe593ec], edi
// 009af037  740d                 je 0x9af046
// 009af039  68ec93e500           push 0xe593ec
// 009af03e  ff159421b200         call dword ptr [0xb22194]
// 009af044  8bf8                 mov edi, eax
// 009af046  833df493e50000       cmp dword ptr [0xe593f4], 0
// 009af04d  53                   push ebx
// 009af04e  742b                 je 0x9af07b
// 009af050  8b0de893e500         mov ecx, dword ptr [0xe593e8]
// 009af056  6a00                 push 0
// 009af058  51                   push ecx
// 009af059  ffd5                 call ebp
// 009af05b  85ff                 test edi, edi
// 009af05d  7529                 jne 0x9af088
// 009af05f  a1e893e500           mov eax, dword ptr [0xe593e8]
// 009af064  85c0                 test eax, eax
// 009af066  7407                 je 0x9af06f
// 009af068  50                   push eax
// 009af069  ff159c22b200         call dword ptr [0xb2229c]
// 009af06f  c705e893e50000000000 mov dword ptr [0xe593e8], 0
// 009af079  eb0d                 jmp 0x9af088
// 009af07b  e89430fdff           call 0x982114
// 009af080  83c404               add esp, 4
// 009af083  eb03                 jmp 0x9af088
// 009af085  8b760c               mov esi, dword ptr [esi + 0xc]
// 009af088  85f6                 test esi, esi
// 009af08a  0f8560ffffff         jne 0x9aeff0
// 009af090  5f                   pop edi
// 009af091  5d                   pop ebp
// 009af092  5b                   pop ebx
// 009af093  5e                   pop esi
// 009af094  c3                   ret 
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ?FreeExtraData@?$CXTPBatchAllocManagerT@VCXTPChartSeriesPointAllocator@@UCXTPChartSeriesBatchPointData@@@@SAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp
