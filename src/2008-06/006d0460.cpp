// roc 2008-06 006d0460  unit: VCXTPReportRow::?$CXTPInternalCollectionT  size: 355 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d0460
//
// 006d0460  8b0d60e19700         mov ecx, dword ptr [0x97e160]
// 006d0466  56                   push esi
// 006d0467  57                   push edi
// 006d0468  85c9                 test ecx, ecx
// 006d046a  0f85bd000000         jne 0x6d052d
// 006d0470  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006d0474  83c008               add eax, 8
// 006d0477  8bf0                 mov esi, eax
// 006d0479  81e603000080         and esi, 0x80000003
// 006d047f  7905                 jns 0x6d0486
// 006d0481  4e                   dec esi
// 006d0482  83cefc               or esi, 0xfffffffc
// 006d0485  46                   inc esi
// 006d0486  8b3dc8669600         mov edi, dword ptr [0x9666c8]
// 006d048c  f7de                 neg esi
// 006d048e  1bf6                 sbb esi, esi
// 006d0490  99                   cdq 
// 006d0491  83e203               and edx, 3
// 006d0494  03c2                 add eax, edx
// 006d0496  f7de                 neg esi
// 006d0498  c1f802               sar eax, 2
// 006d049b  03f0                 add esi, eax
// 006d049d  03f6                 add esi, esi
// 006d049f  03f6                 add esi, esi
// 006d04a1  0faffe               imul edi, esi
// 006d04a4  681ce19700           push 0x97e11c
// 006d04a9  83c710               add edi, 0x10
// 006d04ac  ff15b0218000         call dword ptr [0x8021b0]
// 006d04b2  833d24e1970000       cmp dword ptr [0x97e124], 0
// 006d04b9  7416                 je 0x6d04d1
// 006d04bb  e8c0b0ffff           call 0x6cb580
// 006d04c0  a118e19700           mov eax, dword ptr [0x97e118]
// 006d04c5  57                   push edi
// 006d04c6  6a00                 push 0
// 006d04c8  50                   push eax
// 006d04c9  ff15f8218000         call dword ptr [0x8021f8]
// 006d04cf  eb09                 jmp 0x6d04da
// 006d04d1  57                   push edi
// 006d04d2  e87f04fdff           call 0x6a0956
// 006d04d7  83c404               add esp, 4
// 006d04da  85c0                 test eax, eax
// 006d04dc  0f84dc000000         je 0x6d05be
// 006d04e2  33c9                 xor ecx, ecx
// 006d04e4  894804               mov dword ptr [eax + 4], ecx
// 006d04e7  894808               mov dword ptr [eax + 8], ecx
// 006d04ea  89480c               mov dword ptr [eax + 0xc], ecx
// 006d04ed  8908                 mov dword ptr [eax], ecx
// 006d04ef  8bf8                 mov edi, eax
// 006d04f1  a360e19700           mov dword ptr [0x97e160], eax
// 006d04f6  83c010               add eax, 0x10
// 006d04f9  894704               mov dword ptr [edi + 4], eax
// 006d04fc  33d2                 xor edx, edx
// 006d04fe  390dc8669600         cmp dword ptr [0x9666c8], ecx
// 006d0504  7e19                 jle 0x6d051f
// 006d0506  8bc8                 mov ecx, eax
// 006d0508  03c6                 add eax, esi
// 006d050a  42                   inc edx
// 006d050b  8939                 mov dword ptr [ecx], edi
// 006d050d  894104               mov dword ptr [ecx + 4], eax
// 006d0510  3b15c8669600         cmp edx, dword ptr [0x9666c8]
// 006d0516  7cee                 jl 0x6d0506
// 006d0518  c7410400000000       mov dword ptr [ecx + 4], 0
// 006d051f  8b0d60e19700         mov ecx, dword ptr [0x97e160]
// 006d0525  85c9                 test ecx, ecx
// 006d0527  0f8491000000         je 0x6d05be
// 006d052d  83790400             cmp dword ptr [ecx + 4], 0
// 006d0531  0f8487000000         je 0x6d05be
// 006d0537  8b4104               mov eax, dword ptr [ecx + 4]
// 006d053a  ff01                 inc dword ptr [ecx]
// 006d053c  ff0554e19700         inc dword ptr [0x97e154]
// 006d0542  8b0d60e19700         mov ecx, dword ptr [0x97e160]
// 006d0548  8b4904               mov ecx, dword ptr [ecx + 4]
// 006d054b  8b5104               mov edx, dword ptr [ecx + 4]
// 006d054e  c7410400000000       mov dword ptr [ecx + 4], 0
// 006d0555  8b0d60e19700         mov ecx, dword ptr [0x97e160]
// 006d055b  83c008               add eax, 8
// 006d055e  895104               mov dword ptr [ecx + 4], edx
// 006d0561  85d2                 test edx, edx
// 006d0563  755b                 jne 0x6d05c0
// 006d0565  8b1560e19700         mov edx, dword ptr [0x97e160]
// 006d056b  837a0800             cmp dword ptr [edx + 8], 0
// 006d056f  8d4a08               lea ecx, [edx + 8]
// 006d0572  8bf2                 mov esi, edx
// 006d0574  7404                 je 0x6d057a
// 006d0576  8b11                 mov edx, dword ptr [ecx]
// 006d0578  eb03                 jmp 0x6d057d
// 006d057a  8b520c               mov edx, dword ptr [edx + 0xc]
// 006d057d  891560e19700         mov dword ptr [0x97e160], edx
// 006d0583  85d2                 test edx, edx
// 006d0585  7405                 je 0x6d058c
// 006d0587  8b39                 mov edi, dword ptr [ecx]
// 006d0589  897a08               mov dword ptr [edx + 8], edi
// 006d058c  8b1564e19700         mov edx, dword ptr [0x97e164]
// 006d0592  89560c               mov dword ptr [esi + 0xc], edx
// 006d0595  8b1564e19700         mov edx, dword ptr [0x97e164]
// 006d059b  85d2                 test edx, edx
// 006d059d  7405                 je 0x6d05a4
// 006d059f  8b5208               mov edx, dword ptr [edx + 8]
// 006d05a2  eb02                 jmp 0x6d05a6
// 006d05a4  33d2                 xor edx, edx
// 006d05a6  8911                 mov dword ptr [ecx], edx
// 006d05a8  8b0d64e19700         mov ecx, dword ptr [0x97e164]
// 006d05ae  85c9                 test ecx, ecx
// 006d05b0  7403                 je 0x6d05b5
// 006d05b2  897108               mov dword ptr [ecx + 8], esi
// 006d05b5  5f                   pop edi
// 006d05b6  893564e19700         mov dword ptr [0x97e164], esi
// 006d05bc  5e                   pop esi
// 006d05bd  c3                   ret 
// 006d05be  33c0                 xor eax, eax
// 006d05c0  5f                   pop edi
// 006d05c1  5e                   pop esi
// 006d05c2  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?AllocData@?$CXTPBatchAllocManagerT@VCXTPReportRowAllocator@@UCXTPReportRow_BatchData@@@@SAPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
