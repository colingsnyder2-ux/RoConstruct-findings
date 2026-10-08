// from server: 100% by auto
// roc 2011-06 00836ae0  unit: VCXTPReportRow::?$CXTPInternalCollectionT  size: 248 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00836ae0
//
// 00836ae0  8b442404             mov eax, dword ptr [esp + 4]
// 00836ae4  85c0                 test eax, eax
// 00836ae6  0f84eb000000         je 0x836bd7
// 00836aec  8d48f8               lea ecx, [eax - 8]
// 00836aef  8b01                 mov eax, dword ptr [ecx]
// 00836af1  8b5004               mov edx, dword ptr [eax + 4]
// 00836af4  895104               mov dword ptr [ecx + 4], edx
// 00836af7  894804               mov dword ptr [eax + 4], ecx
// 00836afa  8b01                 mov eax, dword ptr [ecx]
// 00836afc  ff08                 dec dword ptr [eax]
// 00836afe  ff0db482d100         dec dword ptr [0xd182b4]
// 00836b04  83790400             cmp dword ptr [ecx + 4], 0
// 00836b08  7565                 jne 0x836b6f
// 00836b0a  8b01                 mov eax, dword ptr [ecx]
// 00836b0c  8b5008               mov edx, dword ptr [eax + 8]
// 00836b0f  56                   push esi
// 00836b10  85d2                 test edx, edx
// 00836b12  7406                 je 0x836b1a
// 00836b14  8b700c               mov esi, dword ptr [eax + 0xc]
// 00836b17  89720c               mov dword ptr [edx + 0xc], esi
// 00836b1a  8b500c               mov edx, dword ptr [eax + 0xc]
// 00836b1d  85d2                 test edx, edx
// 00836b1f  7406                 je 0x836b27
// 00836b21  8b7008               mov esi, dword ptr [eax + 8]
// 00836b24  897208               mov dword ptr [edx + 8], esi
// 00836b27  5e                   pop esi
// 00836b28  3905c482d100         cmp dword ptr [0xd182c4], eax
// 00836b2e  7510                 jne 0x836b40
// 00836b30  8b5008               mov edx, dword ptr [eax + 8]
// 00836b33  85d2                 test edx, edx
// 00836b35  7503                 jne 0x836b3a
// 00836b37  8b500c               mov edx, dword ptr [eax + 0xc]
// 00836b3a  8915c482d100         mov dword ptr [0xd182c4], edx
// 00836b40  8b15c082d100         mov edx, dword ptr [0xd182c0]
// 00836b46  89500c               mov dword ptr [eax + 0xc], edx
// 00836b49  8b15c082d100         mov edx, dword ptr [0xd182c0]
// 00836b4f  85d2                 test edx, edx
// 00836b51  7405                 je 0x836b58
// 00836b53  8b5208               mov edx, dword ptr [edx + 8]
// 00836b56  eb02                 jmp 0x836b5a
// 00836b58  33d2                 xor edx, edx
// 00836b5a  895008               mov dword ptr [eax + 8], edx
// 00836b5d  8b15c082d100         mov edx, dword ptr [0xd182c0]
// 00836b63  85d2                 test edx, edx
// 00836b65  7403                 je 0x836b6a
// 00836b67  894208               mov dword ptr [edx + 8], eax
// 00836b6a  a3c082d100           mov dword ptr [0xd182c0], eax
// 00836b6f  8b09                 mov ecx, dword ptr [ecx]
// 00836b71  833900               cmp dword ptr [ecx], 0
// 00836b74  7561                 jne 0x836bd7
// 00836b76  833db882d10000       cmp dword ptr [0xd182b8], 0
// 00836b7d  7458                 je 0x836bd7
// 00836b7f  8b4108               mov eax, dword ptr [ecx + 8]
// 00836b82  8bd0                 mov edx, eax
// 00836b84  85c0                 test eax, eax
// 00836b86  7503                 jne 0x836b8b
// 00836b88  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00836b8b  390dc082d100         cmp dword ptr [0xd182c0], ecx
// 00836b91  750d                 jne 0x836ba0
// 00836b93  85d2                 test edx, edx
// 00836b95  7409                 je 0x836ba0
// 00836b97  833dbc82d10000       cmp dword ptr [0xd182bc], 0
// 00836b9e  7437                 je 0x836bd7
// 00836ba0  85c0                 test eax, eax
// 00836ba2  7406                 je 0x836baa
// 00836ba4  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00836ba7  89500c               mov dword ptr [eax + 0xc], edx
// 00836baa  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00836bad  85c0                 test eax, eax
// 00836baf  7406                 je 0x836bb7
// 00836bb1  8b5108               mov edx, dword ptr [ecx + 8]
// 00836bb4  895008               mov dword ptr [eax + 8], edx
// 00836bb7  390dc082d100         cmp dword ptr [0xd182c0], ecx
// 00836bbd  750f                 jne 0x836bce
// 00836bbf  8b4108               mov eax, dword ptr [ecx + 8]
// 00836bc2  85c0                 test eax, eax
// 00836bc4  7503                 jne 0x836bc9
// 00836bc6  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00836bc9  a3c082d100           mov dword ptr [0xd182c0], eax
// 00836bce  894c2404             mov dword ptr [esp + 4], ecx
// 00836bd2  e909bfffff           jmp 0x832ae0
// 00836bd7  c3                   ret 
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ?FreeData@?$CXTPBatchAllocManagerT@VCXTPChartSeriesPointAllocator@@UCXTPChartSeriesBatchPointData@@@@SAXPAX@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp
