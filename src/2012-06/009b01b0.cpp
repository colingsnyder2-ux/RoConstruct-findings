// from server: 100% by auto
// roc 2012-06 009b01b0  unit: VCXTPReportRow::?$CXTPInternalCollectionT  size: 355 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009b01b0
//
// 009b01b0  8b0d3094e500         mov ecx, dword ptr [0xe59430]
// 009b01b6  56                   push esi
// 009b01b7  57                   push edi
// 009b01b8  85c9                 test ecx, ecx
// 009b01ba  0f85bd000000         jne 0x9b027d
// 009b01c0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 009b01c4  83c008               add eax, 8
// 009b01c7  8bf0                 mov esi, eax
// 009b01c9  81e603000080         and esi, 0x80000003
// 009b01cf  7905                 jns 0x9b01d6
// 009b01d1  4e                   dec esi
// 009b01d2  83cefc               or esi, 0xfffffffc
// 009b01d5  46                   inc esi
// 009b01d6  8b3dd830e000         mov edi, dword ptr [0xe030d8]
// 009b01dc  f7de                 neg esi
// 009b01de  1bf6                 sbb esi, esi
// 009b01e0  99                   cdq 
// 009b01e1  83e203               and edx, 3
// 009b01e4  03c2                 add eax, edx
// 009b01e6  f7de                 neg esi
// 009b01e8  c1f802               sar eax, 2
// 009b01eb  03f0                 add esi, eax
// 009b01ed  03f6                 add esi, esi
// 009b01ef  03f6                 add esi, esi
// 009b01f1  0faffe               imul edi, esi
// 009b01f4  68ec93e500           push 0xe593ec
// 009b01f9  83c710               add edi, 0x10
// 009b01fc  ff159821b200         call dword ptr [0xb22198]
// 009b0202  833df493e50000       cmp dword ptr [0xe593f4], 0
// 009b0209  7416                 je 0x9b0221
// 009b020b  e8a0afffff           call 0x9ab1b0
// 009b0210  a1e893e500           mov eax, dword ptr [0xe593e8]
// 009b0215  57                   push edi
// 009b0216  6a00                 push 0
// 009b0218  50                   push eax
// 009b0219  ff15a422b200         call dword ptr [0xb222a4]
// 009b021f  eb09                 jmp 0x9b022a
// 009b0221  57                   push edi
// 009b0222  e8c921fdff           call 0x9823f0
// 009b0227  83c404               add esp, 4
// 009b022a  85c0                 test eax, eax
// 009b022c  0f84dc000000         je 0x9b030e
// 009b0232  33c9                 xor ecx, ecx
// 009b0234  894804               mov dword ptr [eax + 4], ecx
// 009b0237  894808               mov dword ptr [eax + 8], ecx
// 009b023a  89480c               mov dword ptr [eax + 0xc], ecx
// 009b023d  8908                 mov dword ptr [eax], ecx
// 009b023f  8bf8                 mov edi, eax
// 009b0241  a33094e500           mov dword ptr [0xe59430], eax
// 009b0246  83c010               add eax, 0x10
// 009b0249  894704               mov dword ptr [edi + 4], eax
// 009b024c  33d2                 xor edx, edx
// 009b024e  390dd830e000         cmp dword ptr [0xe030d8], ecx
// 009b0254  7e19                 jle 0x9b026f
// 009b0256  8bc8                 mov ecx, eax
// 009b0258  03c6                 add eax, esi
// 009b025a  42                   inc edx
// 009b025b  8939                 mov dword ptr [ecx], edi
// 009b025d  894104               mov dword ptr [ecx + 4], eax
// 009b0260  3b15d830e000         cmp edx, dword ptr [0xe030d8]
// 009b0266  7cee                 jl 0x9b0256
// 009b0268  c7410400000000       mov dword ptr [ecx + 4], 0
// 009b026f  8b0d3094e500         mov ecx, dword ptr [0xe59430]
// 009b0275  85c9                 test ecx, ecx
// 009b0277  0f8491000000         je 0x9b030e
// 009b027d  83790400             cmp dword ptr [ecx + 4], 0
// 009b0281  0f8487000000         je 0x9b030e
// 009b0287  8b4104               mov eax, dword ptr [ecx + 4]
// 009b028a  ff01                 inc dword ptr [ecx]
// 009b028c  ff052494e500         inc dword ptr [0xe59424]
// 009b0292  8b0d3094e500         mov ecx, dword ptr [0xe59430]
// 009b0298  8b4904               mov ecx, dword ptr [ecx + 4]
// 009b029b  8b5104               mov edx, dword ptr [ecx + 4]
// 009b029e  c7410400000000       mov dword ptr [ecx + 4], 0
// 009b02a5  8b0d3094e500         mov ecx, dword ptr [0xe59430]
// 009b02ab  83c008               add eax, 8
// 009b02ae  895104               mov dword ptr [ecx + 4], edx
// 009b02b1  85d2                 test edx, edx
// 009b02b3  755b                 jne 0x9b0310
// 009b02b5  8b153094e500         mov edx, dword ptr [0xe59430]
// 009b02bb  837a0800             cmp dword ptr [edx + 8], 0
// 009b02bf  8d4a08               lea ecx, [edx + 8]
// 009b02c2  8bf2                 mov esi, edx
// 009b02c4  7404                 je 0x9b02ca
// 009b02c6  8b11                 mov edx, dword ptr [ecx]
// 009b02c8  eb03                 jmp 0x9b02cd
// 009b02ca  8b520c               mov edx, dword ptr [edx + 0xc]
// 009b02cd  89153094e500         mov dword ptr [0xe59430], edx
// 009b02d3  85d2                 test edx, edx
// 009b02d5  7405                 je 0x9b02dc
// 009b02d7  8b39                 mov edi, dword ptr [ecx]
// 009b02d9  897a08               mov dword ptr [edx + 8], edi
// 009b02dc  8b153494e500         mov edx, dword ptr [0xe59434]
// 009b02e2  89560c               mov dword ptr [esi + 0xc], edx
// 009b02e5  8b153494e500         mov edx, dword ptr [0xe59434]
// 009b02eb  85d2                 test edx, edx
// 009b02ed  7405                 je 0x9b02f4
// 009b02ef  8b5208               mov edx, dword ptr [edx + 8]
// 009b02f2  eb02                 jmp 0x9b02f6
// 009b02f4  33d2                 xor edx, edx
// 009b02f6  8911                 mov dword ptr [ecx], edx
// 009b02f8  8b0d3494e500         mov ecx, dword ptr [0xe59434]
// 009b02fe  85c9                 test ecx, ecx
// 009b0300  7403                 je 0x9b0305
// 009b0302  897108               mov dword ptr [ecx + 8], esi
// 009b0305  5f                   pop edi
// 009b0306  89353494e500         mov dword ptr [0xe59434], esi
// 009b030c  5e                   pop esi
// 009b030d  c3                   ret 
// 009b030e  33c0                 xor eax, eax
// 009b0310  5f                   pop edi
// 009b0311  5e                   pop esi
// 009b0312  c3                   ret 
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ?AllocData@?$CXTPBatchAllocManagerT@VCXTPChartSeriesPointAllocator@@UCXTPChartSeriesBatchPointData@@@@SAPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp
