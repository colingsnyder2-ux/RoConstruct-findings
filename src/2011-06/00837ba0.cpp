// roc 2011-06 00837ba0  unit: VCXTPReportRow::?$CXTPInternalCollectionT  size: 355 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00837ba0
//
// 00837ba0  8b0dc082d100         mov ecx, dword ptr [0xd182c0]
// 00837ba6  56                   push esi
// 00837ba7  57                   push edi
// 00837ba8  85c9                 test ecx, ecx
// 00837baa  0f85bd000000         jne 0x837c6d
// 00837bb0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00837bb4  83c008               add eax, 8
// 00837bb7  8bf0                 mov esi, eax
// 00837bb9  81e603000080         and esi, 0x80000003
// 00837bbf  7905                 jns 0x837bc6
// 00837bc1  4e                   dec esi
// 00837bc2  83cefc               or esi, 0xfffffffc
// 00837bc5  46                   inc esi
// 00837bc6  8b3d0061c900         mov edi, dword ptr [0xc96100]
// 00837bcc  f7de                 neg esi
// 00837bce  1bf6                 sbb esi, esi
// 00837bd0  99                   cdq 
// 00837bd1  83e203               and edx, 3
// 00837bd4  03c2                 add eax, edx
// 00837bd6  f7de                 neg esi
// 00837bd8  c1f802               sar eax, 2
// 00837bdb  03f0                 add esi, eax
// 00837bdd  03f6                 add esi, esi
// 00837bdf  03f6                 add esi, esi
// 00837be1  0faffe               imul edi, esi
// 00837be4  687c82d100           push 0xd1827c
// 00837be9  83c710               add edi, 0x10
// 00837bec  ff154c03a400         call dword ptr [0xa4034c]
// 00837bf2  833d8482d10000       cmp dword ptr [0xd18284], 0
// 00837bf9  7416                 je 0x837c11
// 00837bfb  e8b0afffff           call 0x832bb0
// 00837c00  a17882d100           mov eax, dword ptr [0xd18278]
// 00837c05  57                   push edi
// 00837c06  6a00                 push 0
// 00837c08  50                   push eax
// 00837c09  ff15b001a400         call dword ptr [0xa401b0]
// 00837c0f  eb09                 jmp 0x837c1a
// 00837c11  57                   push edi
// 00837c12  e82927fdff           call 0x80a340
// 00837c17  83c404               add esp, 4
// 00837c1a  85c0                 test eax, eax
// 00837c1c  0f84dc000000         je 0x837cfe
// 00837c22  33c9                 xor ecx, ecx
// 00837c24  894804               mov dword ptr [eax + 4], ecx
// 00837c27  894808               mov dword ptr [eax + 8], ecx
// 00837c2a  89480c               mov dword ptr [eax + 0xc], ecx
// 00837c2d  8908                 mov dword ptr [eax], ecx
// 00837c2f  8bf8                 mov edi, eax
// 00837c31  a3c082d100           mov dword ptr [0xd182c0], eax
// 00837c36  83c010               add eax, 0x10
// 00837c39  894704               mov dword ptr [edi + 4], eax
// 00837c3c  33d2                 xor edx, edx
// 00837c3e  390d0061c900         cmp dword ptr [0xc96100], ecx
// 00837c44  7e19                 jle 0x837c5f
// 00837c46  8bc8                 mov ecx, eax
// 00837c48  03c6                 add eax, esi
// 00837c4a  42                   inc edx
// 00837c4b  8939                 mov dword ptr [ecx], edi
// 00837c4d  894104               mov dword ptr [ecx + 4], eax
// 00837c50  3b150061c900         cmp edx, dword ptr [0xc96100]
// 00837c56  7cee                 jl 0x837c46
// 00837c58  c7410400000000       mov dword ptr [ecx + 4], 0
// 00837c5f  8b0dc082d100         mov ecx, dword ptr [0xd182c0]
// 00837c65  85c9                 test ecx, ecx
// 00837c67  0f8491000000         je 0x837cfe
// 00837c6d  83790400             cmp dword ptr [ecx + 4], 0
// 00837c71  0f8487000000         je 0x837cfe
// 00837c77  8b4104               mov eax, dword ptr [ecx + 4]
// 00837c7a  ff01                 inc dword ptr [ecx]
// 00837c7c  ff05b482d100         inc dword ptr [0xd182b4]
// 00837c82  8b0dc082d100         mov ecx, dword ptr [0xd182c0]
// 00837c88  8b4904               mov ecx, dword ptr [ecx + 4]
// 00837c8b  8b5104               mov edx, dword ptr [ecx + 4]
// 00837c8e  c7410400000000       mov dword ptr [ecx + 4], 0
// 00837c95  8b0dc082d100         mov ecx, dword ptr [0xd182c0]
// 00837c9b  83c008               add eax, 8
// 00837c9e  895104               mov dword ptr [ecx + 4], edx
// 00837ca1  85d2                 test edx, edx
// 00837ca3  755b                 jne 0x837d00
// 00837ca5  8b15c082d100         mov edx, dword ptr [0xd182c0]
// 00837cab  837a0800             cmp dword ptr [edx + 8], 0
// 00837caf  8d4a08               lea ecx, [edx + 8]
// 00837cb2  8bf2                 mov esi, edx
// 00837cb4  7404                 je 0x837cba
// 00837cb6  8b11                 mov edx, dword ptr [ecx]
// 00837cb8  eb03                 jmp 0x837cbd
// 00837cba  8b520c               mov edx, dword ptr [edx + 0xc]
// 00837cbd  8915c082d100         mov dword ptr [0xd182c0], edx
// 00837cc3  85d2                 test edx, edx
// 00837cc5  7405                 je 0x837ccc
// 00837cc7  8b39                 mov edi, dword ptr [ecx]
// 00837cc9  897a08               mov dword ptr [edx + 8], edi
// 00837ccc  8b15c482d100         mov edx, dword ptr [0xd182c4]
// 00837cd2  89560c               mov dword ptr [esi + 0xc], edx
// 00837cd5  8b15c482d100         mov edx, dword ptr [0xd182c4]
// 00837cdb  85d2                 test edx, edx
// 00837cdd  7405                 je 0x837ce4
// 00837cdf  8b5208               mov edx, dword ptr [edx + 8]
// 00837ce2  eb02                 jmp 0x837ce6
// 00837ce4  33d2                 xor edx, edx
// 00837ce6  8911                 mov dword ptr [ecx], edx
// 00837ce8  8b0dc482d100         mov ecx, dword ptr [0xd182c4]
// 00837cee  85c9                 test ecx, ecx
// 00837cf0  7403                 je 0x837cf5
// 00837cf2  897108               mov dword ptr [ecx + 8], esi
// 00837cf5  5f                   pop edi
// 00837cf6  8935c482d100         mov dword ptr [0xd182c4], esi
// 00837cfc  5e                   pop esi
// 00837cfd  c3                   ret 
// 00837cfe  33c0                 xor eax, eax
// 00837d00  5f                   pop edi
// 00837d01  5e                   pop esi
// 00837d02  c3                   ret 
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ?AllocData@?$CXTPBatchAllocManagerT@VCXTPChartSeriesPointAllocator@@UCXTPChartSeriesBatchPointData@@@@SAPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp
