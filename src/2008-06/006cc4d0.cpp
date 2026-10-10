// roc 2008-06 006cc4d0  unit: CXTPReportControl  size: 364 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006cc4d0
//
// 006cc4d0  83ec20               sub esp, 0x20
// 006cc4d3  53                   push ebx
// 006cc4d4  55                   push ebp
// 006cc4d5  56                   push esi
// 006cc4d6  57                   push edi
// 006cc4d7  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 006cc4db  8bf1                 mov esi, ecx
// 006cc4dd  39be18020000         cmp dword ptr [esi + 0x218], edi
// 006cc4e3  0f8444010000         je 0x6cc62d
// 006cc4e9  33db                 xor ebx, ebx
// 006cc4eb  399ed8010000         cmp dword ptr [esi + 0x1d8], ebx
// 006cc4f1  741a                 je 0x6cc50d
// 006cc4f3  8b06                 mov eax, dword ptr [esi]
// 006cc4f5  8b90e0010000         mov edx, dword ptr [eax + 0x1e0]
// 006cc4fb  57                   push edi
// 006cc4fc  53                   push ebx
// 006cc4fd  ffd2                 call edx
// 006cc4ff  85c0                 test eax, eax
// 006cc501  750a                 jne 0x6cc50d
// 006cc503  5f                   pop edi
// 006cc504  5e                   pop esi
// 006cc505  5d                   pop ebp
// 006cc506  5b                   pop ebx
// 006cc507  83c420               add esp, 0x20
// 006cc50a  c20400               ret 4
// 006cc50d  89be18020000         mov dword ptr [esi + 0x218], edi
// 006cc513  3bfb                 cmp edi, ebx
// 006cc515  0f84fd000000         je 0x6cc618
// 006cc51b  399ed8010000         cmp dword ptr [esi + 0x1d8], ebx
// 006cc521  0f84f1000000         je 0x6cc618
// 006cc527  8d442410             lea eax, [esp + 0x10]
// 006cc52b  50                   push eax
// 006cc52c  8bcf                 mov ecx, edi
// 006cc52e  e84d800000           call 0x6d4580
// 006cc533  8b9698000000         mov edx, dword ptr [esi + 0x98]
// 006cc539  2b9690000000         sub edx, dword ptr [esi + 0x90]
// 006cc53f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006cc543  3bca                 cmp ecx, edx
// 006cc545  7c32                 jl 0x6cc579
// 006cc547  8b9690000000         mov edx, dword ptr [esi + 0x90]
// 006cc54d  2b9698000000         sub edx, dword ptr [esi + 0x98]
// 006cc553  8b442410             mov eax, dword ptr [esp + 0x10]
// 006cc557  03d1                 add edx, ecx
// 006cc559  3bc2                 cmp eax, edx
// 006cc55b  7c0e                 jl 0x6cc56b
// 006cc55d  8b8690000000         mov eax, dword ptr [esi + 0x90]
// 006cc563  2b8698000000         sub eax, dword ptr [esi + 0x98]
// 006cc569  03c1                 add eax, ecx
// 006cc56b  8b8e0c010000         mov ecx, dword ptr [esi + 0x10c]
// 006cc571  03c8                 add ecx, eax
// 006cc573  51                   push ecx
// 006cc574  e998000000           jmp 0x6cc611
// 006cc579  8b8610010000         mov eax, dword ptr [esi + 0x110]
// 006cc57f  3bc3                 cmp eax, ebx
// 006cc581  895c2434             mov dword ptr [esp + 0x34], ebx
// 006cc585  7e6b                 jle 0x6cc5f2
// 006cc587  8b96ec000000         mov edx, dword ptr [esi + 0xec]
// 006cc58d  395a30               cmp dword ptr [edx + 0x30], ebx
// 006cc590  8be8                 mov ebp, eax
// 006cc592  7e5e                 jle 0x6cc5f2
// 006cc594  85ed                 test ebp, ebp
// 006cc596  7e5a                 jle 0x6cc5f2
// 006cc598  8b86ec000000         mov eax, dword ptr [esi + 0xec]
// 006cc59e  85db                 test ebx, ebx
// 006cc5a0  7c0d                 jl 0x6cc5af
// 006cc5a2  3b5830               cmp ebx, dword ptr [eax + 0x30]
// 006cc5a5  7d08                 jge 0x6cc5af
// 006cc5a7  8b402c               mov eax, dword ptr [eax + 0x2c]
// 006cc5aa  8b3c98               mov edi, dword ptr [eax + ebx*4]
// 006cc5ad  eb02                 jmp 0x6cc5b1
// 006cc5af  33ff                 xor edi, edi
// 006cc5b1  3bbe18020000         cmp edi, dword ptr [esi + 0x218]
// 006cc5b7  7431                 je 0x6cc5ea
// 006cc5b9  85ff                 test edi, edi
// 006cc5bb  741f                 je 0x6cc5dc
// 006cc5bd  8bcf                 mov ecx, edi
// 006cc5bf  e81c800000           call 0x6d45e0
// 006cc5c4  85c0                 test eax, eax
// 006cc5c6  7414                 je 0x6cc5dc
// 006cc5c8  8d4c2420             lea ecx, [esp + 0x20]
// 006cc5cc  51                   push ecx
// 006cc5cd  8bcf                 mov ecx, edi
// 006cc5cf  4d                   dec ebp
// 006cc5d0  e8ab7f0000           call 0x6d4580
// 006cc5d5  8b5008               mov edx, dword ptr [eax + 8]
// 006cc5d8  89542434             mov dword ptr [esp + 0x34], edx
// 006cc5dc  8b86ec000000         mov eax, dword ptr [esi + 0xec]
// 006cc5e2  43                   inc ebx
// 006cc5e3  3b5830               cmp ebx, dword ptr [eax + 0x30]
// 006cc5e6  7cac                 jl 0x6cc594
// 006cc5e8  eb08                 jmp 0x6cc5f2
// 006cc5ea  c744243400000000     mov dword ptr [esp + 0x34], 0
// 006cc5f2  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006cc5f6  8b542434             mov edx, dword ptr [esp + 0x34]
// 006cc5fa  8bc1                 mov eax, ecx
// 006cc5fc  2bc2                 sub eax, edx
// 006cc5fe  85c0                 test eax, eax
// 006cc600  7f16                 jg 0x6cc618
// 006cc602  8b860c010000         mov eax, dword ptr [esi + 0x10c]
// 006cc608  85c0                 test eax, eax
// 006cc60a  740c                 je 0x6cc618
// 006cc60c  2bc2                 sub eax, edx
// 006cc60e  03c1                 add eax, ecx
// 006cc610  50                   push eax
// 006cc611  8bce                 mov ecx, esi
// 006cc613  e898daffff           call 0x6ca0b0
// 006cc618  83bed801000000       cmp dword ptr [esi + 0x1d8], 0
// 006cc61f  740c                 je 0x6cc62d
// 006cc621  8b16                 mov edx, dword ptr [esi]
// 006cc623  8b82dc010000         mov eax, dword ptr [edx + 0x1dc]
// 006cc629  8bce                 mov ecx, esi
// 006cc62b  ffd0                 call eax
// 006cc62d  5f                   pop edi
// 006cc62e  5e                   pop esi
// 006cc62f  5d                   pop ebp
// 006cc630  b801000000           mov eax, 1
// 006cc635  5b                   pop ebx
// 006cc636  83c420               add esp, 0x20
// 006cc639  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportControl.cpp (function ?SetFocusedColumn@CXTPReportControl@@QAEHPAVCXTPReportColumn@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportControl.cpp
