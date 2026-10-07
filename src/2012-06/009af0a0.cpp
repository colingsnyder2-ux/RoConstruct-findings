// roc 2012-06 009af0a0  unit: VCXTPReportRow::?$CXTPInternalCollectionT  size: 248 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009af0a0
//
// 009af0a0  8b442404             mov eax, dword ptr [esp + 4]
// 009af0a4  85c0                 test eax, eax
// 009af0a6  0f84eb000000         je 0x9af197
// 009af0ac  8d48f8               lea ecx, [eax - 8]
// 009af0af  8b01                 mov eax, dword ptr [ecx]
// 009af0b1  8b5004               mov edx, dword ptr [eax + 4]
// 009af0b4  895104               mov dword ptr [ecx + 4], edx
// 009af0b7  894804               mov dword ptr [eax + 4], ecx
// 009af0ba  8b01                 mov eax, dword ptr [ecx]
// 009af0bc  ff08                 dec dword ptr [eax]
// 009af0be  ff0d2494e500         dec dword ptr [0xe59424]
// 009af0c4  83790400             cmp dword ptr [ecx + 4], 0
// 009af0c8  7565                 jne 0x9af12f
// 009af0ca  8b01                 mov eax, dword ptr [ecx]
// 009af0cc  8b5008               mov edx, dword ptr [eax + 8]
// 009af0cf  56                   push esi
// 009af0d0  85d2                 test edx, edx
// 009af0d2  7406                 je 0x9af0da
// 009af0d4  8b700c               mov esi, dword ptr [eax + 0xc]
// 009af0d7  89720c               mov dword ptr [edx + 0xc], esi
// 009af0da  8b500c               mov edx, dword ptr [eax + 0xc]
// 009af0dd  85d2                 test edx, edx
// 009af0df  7406                 je 0x9af0e7
// 009af0e1  8b7008               mov esi, dword ptr [eax + 8]
// 009af0e4  897208               mov dword ptr [edx + 8], esi
// 009af0e7  5e                   pop esi
// 009af0e8  39053494e500         cmp dword ptr [0xe59434], eax
// 009af0ee  7510                 jne 0x9af100
// 009af0f0  8b5008               mov edx, dword ptr [eax + 8]
// 009af0f3  85d2                 test edx, edx
// 009af0f5  7503                 jne 0x9af0fa
// 009af0f7  8b500c               mov edx, dword ptr [eax + 0xc]
// 009af0fa  89153494e500         mov dword ptr [0xe59434], edx
// 009af100  8b153094e500         mov edx, dword ptr [0xe59430]
// 009af106  89500c               mov dword ptr [eax + 0xc], edx
// 009af109  8b153094e500         mov edx, dword ptr [0xe59430]
// 009af10f  85d2                 test edx, edx
// 009af111  7405                 je 0x9af118
// 009af113  8b5208               mov edx, dword ptr [edx + 8]
// 009af116  eb02                 jmp 0x9af11a
// 009af118  33d2                 xor edx, edx
// 009af11a  895008               mov dword ptr [eax + 8], edx
// 009af11d  8b153094e500         mov edx, dword ptr [0xe59430]
// 009af123  85d2                 test edx, edx
// 009af125  7403                 je 0x9af12a
// 009af127  894208               mov dword ptr [edx + 8], eax
// 009af12a  a33094e500           mov dword ptr [0xe59430], eax
// 009af12f  8b09                 mov ecx, dword ptr [ecx]
// 009af131  833900               cmp dword ptr [ecx], 0
// 009af134  7561                 jne 0x9af197
// 009af136  833d2894e50000       cmp dword ptr [0xe59428], 0
// 009af13d  7458                 je 0x9af197
// 009af13f  8b4108               mov eax, dword ptr [ecx + 8]
// 009af142  8bd0                 mov edx, eax
// 009af144  85c0                 test eax, eax
// 009af146  7503                 jne 0x9af14b
// 009af148  8b510c               mov edx, dword ptr [ecx + 0xc]
// 009af14b  390d3094e500         cmp dword ptr [0xe59430], ecx
// 009af151  750d                 jne 0x9af160
// 009af153  85d2                 test edx, edx
// 009af155  7409                 je 0x9af160
// 009af157  833d2c94e50000       cmp dword ptr [0xe5942c], 0
// 009af15e  7437                 je 0x9af197
// 009af160  85c0                 test eax, eax
// 009af162  7406                 je 0x9af16a
// 009af164  8b510c               mov edx, dword ptr [ecx + 0xc]
// 009af167  89500c               mov dword ptr [eax + 0xc], edx
// 009af16a  8b410c               mov eax, dword ptr [ecx + 0xc]
// 009af16d  85c0                 test eax, eax
// 009af16f  7406                 je 0x9af177
// 009af171  8b5108               mov edx, dword ptr [ecx + 8]
// 009af174  895008               mov dword ptr [eax + 8], edx
// 009af177  390d3094e500         cmp dword ptr [0xe59430], ecx
// 009af17d  750f                 jne 0x9af18e
// 009af17f  8b4108               mov eax, dword ptr [ecx + 8]
// 009af182  85c0                 test eax, eax
// 009af184  7503                 jne 0x9af189
// 009af186  8b410c               mov eax, dword ptr [ecx + 0xc]
// 009af189  a33094e500           mov dword ptr [0xe59430], eax
// 009af18e  894c2404             mov dword ptr [esp + 4], ecx
// 009af192  e949bfffff           jmp 0x9ab0e0
// 009af197  c3                   ret 
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ?FreeData@?$CXTPBatchAllocManagerT@VCXTPChartSeriesPointAllocator@@UCXTPChartSeriesBatchPointData@@@@SAXPAX@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp
