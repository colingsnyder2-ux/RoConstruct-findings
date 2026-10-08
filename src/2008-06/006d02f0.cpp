// from server: 100% by auto
// roc 2008-06 006d02f0  unit: VCXTPReportRow::?$CXTPInternalCollectionT  size: 355 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d02f0
//
// 006d02f0  8b0d48e19700         mov ecx, dword ptr [0x97e148]
// 006d02f6  56                   push esi
// 006d02f7  57                   push edi
// 006d02f8  85c9                 test ecx, ecx
// 006d02fa  0f85bd000000         jne 0x6d03bd
// 006d0300  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006d0304  83c008               add eax, 8
// 006d0307  8bf0                 mov esi, eax
// 006d0309  81e603000080         and esi, 0x80000003
// 006d030f  7905                 jns 0x6d0316
// 006d0311  4e                   dec esi
// 006d0312  83cefc               or esi, 0xfffffffc
// 006d0315  46                   inc esi
// 006d0316  8b3dc4669600         mov edi, dword ptr [0x9666c4]
// 006d031c  f7de                 neg esi
// 006d031e  1bf6                 sbb esi, esi
// 006d0320  99                   cdq 
// 006d0321  83e203               and edx, 3
// 006d0324  03c2                 add eax, edx
// 006d0326  f7de                 neg esi
// 006d0328  c1f802               sar eax, 2
// 006d032b  03f0                 add esi, eax
// 006d032d  03f6                 add esi, esi
// 006d032f  03f6                 add esi, esi
// 006d0331  0faffe               imul edi, esi
// 006d0334  681ce19700           push 0x97e11c
// 006d0339  83c710               add edi, 0x10
// 006d033c  ff15b0218000         call dword ptr [0x8021b0]
// 006d0342  833d24e1970000       cmp dword ptr [0x97e124], 0
// 006d0349  7416                 je 0x6d0361
// 006d034b  e830b2ffff           call 0x6cb580
// 006d0350  a118e19700           mov eax, dword ptr [0x97e118]
// 006d0355  57                   push edi
// 006d0356  6a00                 push 0
// 006d0358  50                   push eax
// 006d0359  ff15f8218000         call dword ptr [0x8021f8]
// 006d035f  eb09                 jmp 0x6d036a
// 006d0361  57                   push edi
// 006d0362  e8ef05fdff           call 0x6a0956
// 006d0367  83c404               add esp, 4
// 006d036a  85c0                 test eax, eax
// 006d036c  0f84dc000000         je 0x6d044e
// 006d0372  33c9                 xor ecx, ecx
// 006d0374  894804               mov dword ptr [eax + 4], ecx
// 006d0377  894808               mov dword ptr [eax + 8], ecx
// 006d037a  89480c               mov dword ptr [eax + 0xc], ecx
// 006d037d  8908                 mov dword ptr [eax], ecx
// 006d037f  8bf8                 mov edi, eax
// 006d0381  a348e19700           mov dword ptr [0x97e148], eax
// 006d0386  83c010               add eax, 0x10
// 006d0389  894704               mov dword ptr [edi + 4], eax
// 006d038c  33d2                 xor edx, edx
// 006d038e  390dc4669600         cmp dword ptr [0x9666c4], ecx
// 006d0394  7e19                 jle 0x6d03af
// 006d0396  8bc8                 mov ecx, eax
// 006d0398  03c6                 add eax, esi
// 006d039a  42                   inc edx
// 006d039b  8939                 mov dword ptr [ecx], edi
// 006d039d  894104               mov dword ptr [ecx + 4], eax
// 006d03a0  3b15c4669600         cmp edx, dword ptr [0x9666c4]
// 006d03a6  7cee                 jl 0x6d0396
// 006d03a8  c7410400000000       mov dword ptr [ecx + 4], 0
// 006d03af  8b0d48e19700         mov ecx, dword ptr [0x97e148]
// 006d03b5  85c9                 test ecx, ecx
// 006d03b7  0f8491000000         je 0x6d044e
// 006d03bd  83790400             cmp dword ptr [ecx + 4], 0
// 006d03c1  0f8487000000         je 0x6d044e
// 006d03c7  8b4104               mov eax, dword ptr [ecx + 4]
// 006d03ca  ff01                 inc dword ptr [ecx]
// 006d03cc  ff053ce19700         inc dword ptr [0x97e13c]
// 006d03d2  8b0d48e19700         mov ecx, dword ptr [0x97e148]
// 006d03d8  8b4904               mov ecx, dword ptr [ecx + 4]
// 006d03db  8b5104               mov edx, dword ptr [ecx + 4]
// 006d03de  c7410400000000       mov dword ptr [ecx + 4], 0
// 006d03e5  8b0d48e19700         mov ecx, dword ptr [0x97e148]
// 006d03eb  83c008               add eax, 8
// 006d03ee  895104               mov dword ptr [ecx + 4], edx
// 006d03f1  85d2                 test edx, edx
// 006d03f3  755b                 jne 0x6d0450
// 006d03f5  8b1548e19700         mov edx, dword ptr [0x97e148]
// 006d03fb  837a0800             cmp dword ptr [edx + 8], 0
// 006d03ff  8d4a08               lea ecx, [edx + 8]
// 006d0402  8bf2                 mov esi, edx
// 006d0404  7404                 je 0x6d040a
// 006d0406  8b11                 mov edx, dword ptr [ecx]
// 006d0408  eb03                 jmp 0x6d040d
// 006d040a  8b520c               mov edx, dword ptr [edx + 0xc]
// 006d040d  891548e19700         mov dword ptr [0x97e148], edx
// 006d0413  85d2                 test edx, edx
// 006d0415  7405                 je 0x6d041c
// 006d0417  8b39                 mov edi, dword ptr [ecx]
// 006d0419  897a08               mov dword ptr [edx + 8], edi
// 006d041c  8b154ce19700         mov edx, dword ptr [0x97e14c]
// 006d0422  89560c               mov dword ptr [esi + 0xc], edx
// 006d0425  8b154ce19700         mov edx, dword ptr [0x97e14c]
// 006d042b  85d2                 test edx, edx
// 006d042d  7405                 je 0x6d0434
// 006d042f  8b5208               mov edx, dword ptr [edx + 8]
// 006d0432  eb02                 jmp 0x6d0436
// 006d0434  33d2                 xor edx, edx
// 006d0436  8911                 mov dword ptr [ecx], edx
// 006d0438  8b0d4ce19700         mov ecx, dword ptr [0x97e14c]
// 006d043e  85c9                 test ecx, ecx
// 006d0440  7403                 je 0x6d0445
// 006d0442  897108               mov dword ptr [ecx + 8], esi
// 006d0445  5f                   pop edi
// 006d0446  89354ce19700         mov dword ptr [0x97e14c], esi
// 006d044c  5e                   pop esi
// 006d044d  c3                   ret 
// 006d044e  33c0                 xor eax, eax
// 006d0450  5f                   pop edi
// 006d0451  5e                   pop esi
// 006d0452  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?AllocData@?$CXTPBatchAllocManagerT@VCXTPReportRowAllocator@@UCXTPReportRow_BatchData@@@@SAPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
