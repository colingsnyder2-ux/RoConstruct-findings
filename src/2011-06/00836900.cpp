// from server: 100% by auto
// roc 2011-06 00836900  unit: VCXTPReportRow::?$CXTPInternalCollectionT  size: 248 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00836900
//
// 00836900  8b442404             mov eax, dword ptr [esp + 4]
// 00836904  85c0                 test eax, eax
// 00836906  0f84eb000000         je 0x8369f7
// 0083690c  8d48f8               lea ecx, [eax - 8]
// 0083690f  8b01                 mov eax, dword ptr [ecx]
// 00836911  8b5004               mov edx, dword ptr [eax + 4]
// 00836914  895104               mov dword ptr [ecx + 4], edx
// 00836917  894804               mov dword ptr [eax + 4], ecx
// 0083691a  8b01                 mov eax, dword ptr [ecx]
// 0083691c  ff08                 dec dword ptr [eax]
// 0083691e  ff0d9c82d100         dec dword ptr [0xd1829c]
// 00836924  83790400             cmp dword ptr [ecx + 4], 0
// 00836928  7565                 jne 0x83698f
// 0083692a  8b01                 mov eax, dword ptr [ecx]
// 0083692c  8b5008               mov edx, dword ptr [eax + 8]
// 0083692f  56                   push esi
// 00836930  85d2                 test edx, edx
// 00836932  7406                 je 0x83693a
// 00836934  8b700c               mov esi, dword ptr [eax + 0xc]
// 00836937  89720c               mov dword ptr [edx + 0xc], esi
// 0083693a  8b500c               mov edx, dword ptr [eax + 0xc]
// 0083693d  85d2                 test edx, edx
// 0083693f  7406                 je 0x836947
// 00836941  8b7008               mov esi, dword ptr [eax + 8]
// 00836944  897208               mov dword ptr [edx + 8], esi
// 00836947  5e                   pop esi
// 00836948  3905ac82d100         cmp dword ptr [0xd182ac], eax
// 0083694e  7510                 jne 0x836960
// 00836950  8b5008               mov edx, dword ptr [eax + 8]
// 00836953  85d2                 test edx, edx
// 00836955  7503                 jne 0x83695a
// 00836957  8b500c               mov edx, dword ptr [eax + 0xc]
// 0083695a  8915ac82d100         mov dword ptr [0xd182ac], edx
// 00836960  8b15a882d100         mov edx, dword ptr [0xd182a8]
// 00836966  89500c               mov dword ptr [eax + 0xc], edx
// 00836969  8b15a882d100         mov edx, dword ptr [0xd182a8]
// 0083696f  85d2                 test edx, edx
// 00836971  7405                 je 0x836978
// 00836973  8b5208               mov edx, dword ptr [edx + 8]
// 00836976  eb02                 jmp 0x83697a
// 00836978  33d2                 xor edx, edx
// 0083697a  895008               mov dword ptr [eax + 8], edx
// 0083697d  8b15a882d100         mov edx, dword ptr [0xd182a8]
// 00836983  85d2                 test edx, edx
// 00836985  7403                 je 0x83698a
// 00836987  894208               mov dword ptr [edx + 8], eax
// 0083698a  a3a882d100           mov dword ptr [0xd182a8], eax
// 0083698f  8b09                 mov ecx, dword ptr [ecx]
// 00836991  833900               cmp dword ptr [ecx], 0
// 00836994  7561                 jne 0x8369f7
// 00836996  833da082d10000       cmp dword ptr [0xd182a0], 0
// 0083699d  7458                 je 0x8369f7
// 0083699f  8b4108               mov eax, dword ptr [ecx + 8]
// 008369a2  8bd0                 mov edx, eax
// 008369a4  85c0                 test eax, eax
// 008369a6  7503                 jne 0x8369ab
// 008369a8  8b510c               mov edx, dword ptr [ecx + 0xc]
// 008369ab  390da882d100         cmp dword ptr [0xd182a8], ecx
// 008369b1  750d                 jne 0x8369c0
// 008369b3  85d2                 test edx, edx
// 008369b5  7409                 je 0x8369c0
// 008369b7  833da482d10000       cmp dword ptr [0xd182a4], 0
// 008369be  7437                 je 0x8369f7
// 008369c0  85c0                 test eax, eax
// 008369c2  7406                 je 0x8369ca
// 008369c4  8b510c               mov edx, dword ptr [ecx + 0xc]
// 008369c7  89500c               mov dword ptr [eax + 0xc], edx
// 008369ca  8b410c               mov eax, dword ptr [ecx + 0xc]
// 008369cd  85c0                 test eax, eax
// 008369cf  7406                 je 0x8369d7
// 008369d1  8b5108               mov edx, dword ptr [ecx + 8]
// 008369d4  895008               mov dword ptr [eax + 8], edx
// 008369d7  390da882d100         cmp dword ptr [0xd182a8], ecx
// 008369dd  750f                 jne 0x8369ee
// 008369df  8b4108               mov eax, dword ptr [ecx + 8]
// 008369e2  85c0                 test eax, eax
// 008369e4  7503                 jne 0x8369e9
// 008369e6  8b410c               mov eax, dword ptr [ecx + 0xc]
// 008369e9  a3a882d100           mov dword ptr [0xd182a8], eax
// 008369ee  894c2404             mov dword ptr [esp + 4], ecx
// 008369f2  e9e9c0ffff           jmp 0x832ae0
// 008369f7  c3                   ret 
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ?FreeData@?$CXTPBatchAllocManagerT@VCXTPChartSeriesPointAllocator@@UCXTPChartSeriesBatchPointData@@@@SAXPAX@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp
