// from server: 100% by auto
// roc 2012-06 009aeec0  unit: VCXTPReportRow::?$CXTPInternalCollectionT  size: 248 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009aeec0
//
// 009aeec0  8b442404             mov eax, dword ptr [esp + 4]
// 009aeec4  85c0                 test eax, eax
// 009aeec6  0f84eb000000         je 0x9aefb7
// 009aeecc  8d48f8               lea ecx, [eax - 8]
// 009aeecf  8b01                 mov eax, dword ptr [ecx]
// 009aeed1  8b5004               mov edx, dword ptr [eax + 4]
// 009aeed4  895104               mov dword ptr [ecx + 4], edx
// 009aeed7  894804               mov dword ptr [eax + 4], ecx
// 009aeeda  8b01                 mov eax, dword ptr [ecx]
// 009aeedc  ff08                 dec dword ptr [eax]
// 009aeede  ff0d0c94e500         dec dword ptr [0xe5940c]
// 009aeee4  83790400             cmp dword ptr [ecx + 4], 0
// 009aeee8  7565                 jne 0x9aef4f
// 009aeeea  8b01                 mov eax, dword ptr [ecx]
// 009aeeec  8b5008               mov edx, dword ptr [eax + 8]
// 009aeeef  56                   push esi
// 009aeef0  85d2                 test edx, edx
// 009aeef2  7406                 je 0x9aeefa
// 009aeef4  8b700c               mov esi, dword ptr [eax + 0xc]
// 009aeef7  89720c               mov dword ptr [edx + 0xc], esi
// 009aeefa  8b500c               mov edx, dword ptr [eax + 0xc]
// 009aeefd  85d2                 test edx, edx
// 009aeeff  7406                 je 0x9aef07
// 009aef01  8b7008               mov esi, dword ptr [eax + 8]
// 009aef04  897208               mov dword ptr [edx + 8], esi
// 009aef07  5e                   pop esi
// 009aef08  39051c94e500         cmp dword ptr [0xe5941c], eax
// 009aef0e  7510                 jne 0x9aef20
// 009aef10  8b5008               mov edx, dword ptr [eax + 8]
// 009aef13  85d2                 test edx, edx
// 009aef15  7503                 jne 0x9aef1a
// 009aef17  8b500c               mov edx, dword ptr [eax + 0xc]
// 009aef1a  89151c94e500         mov dword ptr [0xe5941c], edx
// 009aef20  8b151894e500         mov edx, dword ptr [0xe59418]
// 009aef26  89500c               mov dword ptr [eax + 0xc], edx
// 009aef29  8b151894e500         mov edx, dword ptr [0xe59418]
// 009aef2f  85d2                 test edx, edx
// 009aef31  7405                 je 0x9aef38
// 009aef33  8b5208               mov edx, dword ptr [edx + 8]
// 009aef36  eb02                 jmp 0x9aef3a
// 009aef38  33d2                 xor edx, edx
// 009aef3a  895008               mov dword ptr [eax + 8], edx
// 009aef3d  8b151894e500         mov edx, dword ptr [0xe59418]
// 009aef43  85d2                 test edx, edx
// 009aef45  7403                 je 0x9aef4a
// 009aef47  894208               mov dword ptr [edx + 8], eax
// 009aef4a  a31894e500           mov dword ptr [0xe59418], eax
// 009aef4f  8b09                 mov ecx, dword ptr [ecx]
// 009aef51  833900               cmp dword ptr [ecx], 0
// 009aef54  7561                 jne 0x9aefb7
// 009aef56  833d1094e50000       cmp dword ptr [0xe59410], 0
// 009aef5d  7458                 je 0x9aefb7
// 009aef5f  8b4108               mov eax, dword ptr [ecx + 8]
// 009aef62  8bd0                 mov edx, eax
// 009aef64  85c0                 test eax, eax
// 009aef66  7503                 jne 0x9aef6b
// 009aef68  8b510c               mov edx, dword ptr [ecx + 0xc]
// 009aef6b  390d1894e500         cmp dword ptr [0xe59418], ecx
// 009aef71  750d                 jne 0x9aef80
// 009aef73  85d2                 test edx, edx
// 009aef75  7409                 je 0x9aef80
// 009aef77  833d1494e50000       cmp dword ptr [0xe59414], 0
// 009aef7e  7437                 je 0x9aefb7
// 009aef80  85c0                 test eax, eax
// 009aef82  7406                 je 0x9aef8a
// 009aef84  8b510c               mov edx, dword ptr [ecx + 0xc]
// 009aef87  89500c               mov dword ptr [eax + 0xc], edx
// 009aef8a  8b410c               mov eax, dword ptr [ecx + 0xc]
// 009aef8d  85c0                 test eax, eax
// 009aef8f  7406                 je 0x9aef97
// 009aef91  8b5108               mov edx, dword ptr [ecx + 8]
// 009aef94  895008               mov dword ptr [eax + 8], edx
// 009aef97  390d1894e500         cmp dword ptr [0xe59418], ecx
// 009aef9d  750f                 jne 0x9aefae
// 009aef9f  8b4108               mov eax, dword ptr [ecx + 8]
// 009aefa2  85c0                 test eax, eax
// 009aefa4  7503                 jne 0x9aefa9
// 009aefa6  8b410c               mov eax, dword ptr [ecx + 0xc]
// 009aefa9  a31894e500           mov dword ptr [0xe59418], eax
// 009aefae  894c2404             mov dword ptr [esp + 4], ecx
// 009aefb2  e929c1ffff           jmp 0x9ab0e0
// 009aefb7  c3                   ret 
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ?FreeData@?$CXTPBatchAllocManagerT@VCXTPChartSeriesPointAllocator@@UCXTPChartSeriesBatchPointData@@@@SAXPAX@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp
