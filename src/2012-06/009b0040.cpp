// from server: 100% by auto
// roc 2012-06 009b0040  unit: VCXTPReportRow::?$CXTPInternalCollectionT  size: 355 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009b0040
//
// 009b0040  8b0d1894e500         mov ecx, dword ptr [0xe59418]
// 009b0046  56                   push esi
// 009b0047  57                   push edi
// 009b0048  85c9                 test ecx, ecx
// 009b004a  0f85bd000000         jne 0x9b010d
// 009b0050  8b44240c             mov eax, dword ptr [esp + 0xc]
// 009b0054  83c008               add eax, 8
// 009b0057  8bf0                 mov esi, eax
// 009b0059  81e603000080         and esi, 0x80000003
// 009b005f  7905                 jns 0x9b0066
// 009b0061  4e                   dec esi
// 009b0062  83cefc               or esi, 0xfffffffc
// 009b0065  46                   inc esi
// 009b0066  8b3dd430e000         mov edi, dword ptr [0xe030d4]
// 009b006c  f7de                 neg esi
// 009b006e  1bf6                 sbb esi, esi
// 009b0070  99                   cdq 
// 009b0071  83e203               and edx, 3
// 009b0074  03c2                 add eax, edx
// 009b0076  f7de                 neg esi
// 009b0078  c1f802               sar eax, 2
// 009b007b  03f0                 add esi, eax
// 009b007d  03f6                 add esi, esi
// 009b007f  03f6                 add esi, esi
// 009b0081  0faffe               imul edi, esi
// 009b0084  68ec93e500           push 0xe593ec
// 009b0089  83c710               add edi, 0x10
// 009b008c  ff159821b200         call dword ptr [0xb22198]
// 009b0092  833df493e50000       cmp dword ptr [0xe593f4], 0
// 009b0099  7416                 je 0x9b00b1
// 009b009b  e810b1ffff           call 0x9ab1b0
// 009b00a0  a1e893e500           mov eax, dword ptr [0xe593e8]
// 009b00a5  57                   push edi
// 009b00a6  6a00                 push 0
// 009b00a8  50                   push eax
// 009b00a9  ff15a422b200         call dword ptr [0xb222a4]
// 009b00af  eb09                 jmp 0x9b00ba
// 009b00b1  57                   push edi
// 009b00b2  e83923fdff           call 0x9823f0
// 009b00b7  83c404               add esp, 4
// 009b00ba  85c0                 test eax, eax
// 009b00bc  0f84dc000000         je 0x9b019e
// 009b00c2  33c9                 xor ecx, ecx
// 009b00c4  894804               mov dword ptr [eax + 4], ecx
// 009b00c7  894808               mov dword ptr [eax + 8], ecx
// 009b00ca  89480c               mov dword ptr [eax + 0xc], ecx
// 009b00cd  8908                 mov dword ptr [eax], ecx
// 009b00cf  8bf8                 mov edi, eax
// 009b00d1  a31894e500           mov dword ptr [0xe59418], eax
// 009b00d6  83c010               add eax, 0x10
// 009b00d9  894704               mov dword ptr [edi + 4], eax
// 009b00dc  33d2                 xor edx, edx
// 009b00de  390dd430e000         cmp dword ptr [0xe030d4], ecx
// 009b00e4  7e19                 jle 0x9b00ff
// 009b00e6  8bc8                 mov ecx, eax
// 009b00e8  03c6                 add eax, esi
// 009b00ea  42                   inc edx
// 009b00eb  8939                 mov dword ptr [ecx], edi
// 009b00ed  894104               mov dword ptr [ecx + 4], eax
// 009b00f0  3b15d430e000         cmp edx, dword ptr [0xe030d4]
// 009b00f6  7cee                 jl 0x9b00e6
// 009b00f8  c7410400000000       mov dword ptr [ecx + 4], 0
// 009b00ff  8b0d1894e500         mov ecx, dword ptr [0xe59418]
// 009b0105  85c9                 test ecx, ecx
// 009b0107  0f8491000000         je 0x9b019e
// 009b010d  83790400             cmp dword ptr [ecx + 4], 0
// 009b0111  0f8487000000         je 0x9b019e
// 009b0117  8b4104               mov eax, dword ptr [ecx + 4]
// 009b011a  ff01                 inc dword ptr [ecx]
// 009b011c  ff050c94e500         inc dword ptr [0xe5940c]
// 009b0122  8b0d1894e500         mov ecx, dword ptr [0xe59418]
// 009b0128  8b4904               mov ecx, dword ptr [ecx + 4]
// 009b012b  8b5104               mov edx, dword ptr [ecx + 4]
// 009b012e  c7410400000000       mov dword ptr [ecx + 4], 0
// 009b0135  8b0d1894e500         mov ecx, dword ptr [0xe59418]
// 009b013b  83c008               add eax, 8
// 009b013e  895104               mov dword ptr [ecx + 4], edx
// 009b0141  85d2                 test edx, edx
// 009b0143  755b                 jne 0x9b01a0
// 009b0145  8b151894e500         mov edx, dword ptr [0xe59418]
// 009b014b  837a0800             cmp dword ptr [edx + 8], 0
// 009b014f  8d4a08               lea ecx, [edx + 8]
// 009b0152  8bf2                 mov esi, edx
// 009b0154  7404                 je 0x9b015a
// 009b0156  8b11                 mov edx, dword ptr [ecx]
// 009b0158  eb03                 jmp 0x9b015d
// 009b015a  8b520c               mov edx, dword ptr [edx + 0xc]
// 009b015d  89151894e500         mov dword ptr [0xe59418], edx
// 009b0163  85d2                 test edx, edx
// 009b0165  7405                 je 0x9b016c
// 009b0167  8b39                 mov edi, dword ptr [ecx]
// 009b0169  897a08               mov dword ptr [edx + 8], edi
// 009b016c  8b151c94e500         mov edx, dword ptr [0xe5941c]
// 009b0172  89560c               mov dword ptr [esi + 0xc], edx
// 009b0175  8b151c94e500         mov edx, dword ptr [0xe5941c]
// 009b017b  85d2                 test edx, edx
// 009b017d  7405                 je 0x9b0184
// 009b017f  8b5208               mov edx, dword ptr [edx + 8]
// 009b0182  eb02                 jmp 0x9b0186
// 009b0184  33d2                 xor edx, edx
// 009b0186  8911                 mov dword ptr [ecx], edx
// 009b0188  8b0d1c94e500         mov ecx, dword ptr [0xe5941c]
// 009b018e  85c9                 test ecx, ecx
// 009b0190  7403                 je 0x9b0195
// 009b0192  897108               mov dword ptr [ecx + 8], esi
// 009b0195  5f                   pop edi
// 009b0196  89351c94e500         mov dword ptr [0xe5941c], esi
// 009b019c  5e                   pop esi
// 009b019d  c3                   ret 
// 009b019e  33c0                 xor eax, eax
// 009b01a0  5f                   pop edi
// 009b01a1  5e                   pop esi
// 009b01a2  c3                   ret 
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ?AllocData@?$CXTPBatchAllocManagerT@VCXTPChartSeriesPointAllocator@@UCXTPChartSeriesBatchPointData@@@@SAPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp
