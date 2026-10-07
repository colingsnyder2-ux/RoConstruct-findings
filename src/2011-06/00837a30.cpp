// roc 2011-06 00837a30  unit: VCXTPReportRow::?$CXTPInternalCollectionT  size: 355 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00837a30
//
// 00837a30  8b0da882d100         mov ecx, dword ptr [0xd182a8]
// 00837a36  56                   push esi
// 00837a37  57                   push edi
// 00837a38  85c9                 test ecx, ecx
// 00837a3a  0f85bd000000         jne 0x837afd
// 00837a40  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00837a44  83c008               add eax, 8
// 00837a47  8bf0                 mov esi, eax
// 00837a49  81e603000080         and esi, 0x80000003
// 00837a4f  7905                 jns 0x837a56
// 00837a51  4e                   dec esi
// 00837a52  83cefc               or esi, 0xfffffffc
// 00837a55  46                   inc esi
// 00837a56  8b3dfc60c900         mov edi, dword ptr [0xc960fc]
// 00837a5c  f7de                 neg esi
// 00837a5e  1bf6                 sbb esi, esi
// 00837a60  99                   cdq 
// 00837a61  83e203               and edx, 3
// 00837a64  03c2                 add eax, edx
// 00837a66  f7de                 neg esi
// 00837a68  c1f802               sar eax, 2
// 00837a6b  03f0                 add esi, eax
// 00837a6d  03f6                 add esi, esi
// 00837a6f  03f6                 add esi, esi
// 00837a71  0faffe               imul edi, esi
// 00837a74  687c82d100           push 0xd1827c
// 00837a79  83c710               add edi, 0x10
// 00837a7c  ff154c03a400         call dword ptr [0xa4034c]
// 00837a82  833d8482d10000       cmp dword ptr [0xd18284], 0
// 00837a89  7416                 je 0x837aa1
// 00837a8b  e820b1ffff           call 0x832bb0
// 00837a90  a17882d100           mov eax, dword ptr [0xd18278]
// 00837a95  57                   push edi
// 00837a96  6a00                 push 0
// 00837a98  50                   push eax
// 00837a99  ff15b001a400         call dword ptr [0xa401b0]
// 00837a9f  eb09                 jmp 0x837aaa
// 00837aa1  57                   push edi
// 00837aa2  e89928fdff           call 0x80a340
// 00837aa7  83c404               add esp, 4
// 00837aaa  85c0                 test eax, eax
// 00837aac  0f84dc000000         je 0x837b8e
// 00837ab2  33c9                 xor ecx, ecx
// 00837ab4  894804               mov dword ptr [eax + 4], ecx
// 00837ab7  894808               mov dword ptr [eax + 8], ecx
// 00837aba  89480c               mov dword ptr [eax + 0xc], ecx
// 00837abd  8908                 mov dword ptr [eax], ecx
// 00837abf  8bf8                 mov edi, eax
// 00837ac1  a3a882d100           mov dword ptr [0xd182a8], eax
// 00837ac6  83c010               add eax, 0x10
// 00837ac9  894704               mov dword ptr [edi + 4], eax
// 00837acc  33d2                 xor edx, edx
// 00837ace  390dfc60c900         cmp dword ptr [0xc960fc], ecx
// 00837ad4  7e19                 jle 0x837aef
// 00837ad6  8bc8                 mov ecx, eax
// 00837ad8  03c6                 add eax, esi
// 00837ada  42                   inc edx
// 00837adb  8939                 mov dword ptr [ecx], edi
// 00837add  894104               mov dword ptr [ecx + 4], eax
// 00837ae0  3b15fc60c900         cmp edx, dword ptr [0xc960fc]
// 00837ae6  7cee                 jl 0x837ad6
// 00837ae8  c7410400000000       mov dword ptr [ecx + 4], 0
// 00837aef  8b0da882d100         mov ecx, dword ptr [0xd182a8]
// 00837af5  85c9                 test ecx, ecx
// 00837af7  0f8491000000         je 0x837b8e
// 00837afd  83790400             cmp dword ptr [ecx + 4], 0
// 00837b01  0f8487000000         je 0x837b8e
// 00837b07  8b4104               mov eax, dword ptr [ecx + 4]
// 00837b0a  ff01                 inc dword ptr [ecx]
// 00837b0c  ff059c82d100         inc dword ptr [0xd1829c]
// 00837b12  8b0da882d100         mov ecx, dword ptr [0xd182a8]
// 00837b18  8b4904               mov ecx, dword ptr [ecx + 4]
// 00837b1b  8b5104               mov edx, dword ptr [ecx + 4]
// 00837b1e  c7410400000000       mov dword ptr [ecx + 4], 0
// 00837b25  8b0da882d100         mov ecx, dword ptr [0xd182a8]
// 00837b2b  83c008               add eax, 8
// 00837b2e  895104               mov dword ptr [ecx + 4], edx
// 00837b31  85d2                 test edx, edx
// 00837b33  755b                 jne 0x837b90
// 00837b35  8b15a882d100         mov edx, dword ptr [0xd182a8]
// 00837b3b  837a0800             cmp dword ptr [edx + 8], 0
// 00837b3f  8d4a08               lea ecx, [edx + 8]
// 00837b42  8bf2                 mov esi, edx
// 00837b44  7404                 je 0x837b4a
// 00837b46  8b11                 mov edx, dword ptr [ecx]
// 00837b48  eb03                 jmp 0x837b4d
// 00837b4a  8b520c               mov edx, dword ptr [edx + 0xc]
// 00837b4d  8915a882d100         mov dword ptr [0xd182a8], edx
// 00837b53  85d2                 test edx, edx
// 00837b55  7405                 je 0x837b5c
// 00837b57  8b39                 mov edi, dword ptr [ecx]
// 00837b59  897a08               mov dword ptr [edx + 8], edi
// 00837b5c  8b15ac82d100         mov edx, dword ptr [0xd182ac]
// 00837b62  89560c               mov dword ptr [esi + 0xc], edx
// 00837b65  8b15ac82d100         mov edx, dword ptr [0xd182ac]
// 00837b6b  85d2                 test edx, edx
// 00837b6d  7405                 je 0x837b74
// 00837b6f  8b5208               mov edx, dword ptr [edx + 8]
// 00837b72  eb02                 jmp 0x837b76
// 00837b74  33d2                 xor edx, edx
// 00837b76  8911                 mov dword ptr [ecx], edx
// 00837b78  8b0dac82d100         mov ecx, dword ptr [0xd182ac]
// 00837b7e  85c9                 test ecx, ecx
// 00837b80  7403                 je 0x837b85
// 00837b82  897108               mov dword ptr [ecx + 8], esi
// 00837b85  5f                   pop edi
// 00837b86  8935ac82d100         mov dword ptr [0xd182ac], esi
// 00837b8c  5e                   pop esi
// 00837b8d  c3                   ret 
// 00837b8e  33c0                 xor eax, eax
// 00837b90  5f                   pop edi
// 00837b91  5e                   pop esi
// 00837b92  c3                   ret 
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ?AllocData@?$CXTPBatchAllocManagerT@VCXTPChartSeriesPointAllocator@@UCXTPChartSeriesBatchPointData@@@@SAPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp
