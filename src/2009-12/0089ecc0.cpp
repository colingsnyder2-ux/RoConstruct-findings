// roc 2009-12 0089ecc0  unit: CXTPReportPaintManager  size: 365 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0089ecc0
//
// 0089ecc0  6aff                 push -1
// 0089ecc2  68891e9600           push 0x961e89
// 0089ecc7  64a100000000         mov eax, dword ptr fs:[0]
// 0089eccd  50                   push eax
// 0089ecce  51                   push ecx
// 0089eccf  53                   push ebx
// 0089ecd0  55                   push ebp
// 0089ecd1  56                   push esi
// 0089ecd2  57                   push edi
// 0089ecd3  a10052b600           mov eax, dword ptr [0xb65200]
// 0089ecd8  33c4                 xor eax, esp
// 0089ecda  50                   push eax
// 0089ecdb  8d442418             lea eax, [esp + 0x18]
// 0089ecdf  64a300000000         mov dword ptr fs:[0], eax
// 0089ece5  8bf9                 mov edi, ecx
// 0089ece7  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0089eceb  83c52c               add ebp, 0x2c
// 0089ecee  55                   push ebp
// 0089ecef  8d4c2430             lea ecx, [esp + 0x30]
// 0089ecf3  ff1594de9800         call dword ptr [0x98de94]
// 0089ecf9  8b742428             mov esi, dword ptr [esp + 0x28]
// 0089ecfd  83461402             add dword ptr [esi + 0x14], 2
// 0089ed01  ff4618               inc dword ptr [esi + 0x18]
// 0089ed04  83461cfe             add dword ptr [esi + 0x1c], -2
// 0089ed08  33db                 xor ebx, ebx
// 0089ed0a  8d4c242c             lea ecx, [esp + 0x2c]
// 0089ed0e  895c2420             mov dword ptr [esp + 0x20], ebx
// 0089ed12  ff15bcdd9800         call dword ptr [0x98ddbc]
// 0089ed18  84c0                 test al, al
// 0089ed1a  0f85ed000000         jne 0x89ee0d
// 0089ed20  399fa8020000         cmp dword ptr [edi + 0x2a8], ebx
// 0089ed26  0f859c000000         jne 0x89edc8
// 0089ed2c  8b4628               mov eax, dword ptr [esi + 0x28]
// 0089ed2f  8bd8                 mov ebx, eax
// 0089ed31  c1eb04               shr ebx, 4
// 0089ed34  83e301               and ebx, 1
// 0089ed37  a804                 test al, 4
// 0089ed39  745c                 je 0x89ed97
// 0089ed3b  8b07                 mov eax, dword ptr [edi]
// 0089ed3d  8b5610               mov edx, dword ptr [esi + 0x10]
// 0089ed40  8b80fc000000         mov eax, dword ptr [eax + 0xfc]
// 0089ed46  6a01                 push 1
// 0089ed48  8d4c2430             lea ecx, [esp + 0x30]
// 0089ed4c  51                   push ecx
// 0089ed4d  52                   push edx
// 0089ed4e  8bcf                 mov ecx, edi
// 0089ed50  ffd0                 call eax
// 0089ed52  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0089ed55  2b4614               sub eax, dword ptr [esi + 0x14]
// 0089ed58  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0089ed5b  8b17                 mov edx, dword ptr [edi]
// 0089ed5d  8b92f0000000         mov edx, dword ptr [edx + 0xf0]
// 0089ed63  53                   push ebx
// 0089ed64  50                   push eax
// 0089ed65  8d442434             lea eax, [esp + 0x34]
// 0089ed69  50                   push eax
// 0089ed6a  51                   push ecx
// 0089ed6b  8bcf                 mov ecx, edi
// 0089ed6d  ffd2                 call edx
// 0089ed6f  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0089ed72  8bd0                 mov edx, eax
// 0089ed74  8b4620               mov eax, dword ptr [esi + 0x20]
// 0089ed77  2bc1                 sub eax, ecx
// 0089ed79  2bc2                 sub eax, edx
// 0089ed7b  83f804               cmp eax, 4
// 0089ed7e  7c0c                 jl 0x89ed8c
// 0089ed80  99                   cdq 
// 0089ed81  2bc2                 sub eax, edx
// 0089ed83  d1f8                 sar eax, 1
// 0089ed85  8d4408fe             lea eax, [eax + ecx - 2]
// 0089ed89  894618               mov dword ptr [esi + 0x18], eax
// 0089ed8c  55                   push ebp
// 0089ed8d  8d4c2430             lea ecx, [esp + 0x30]
// 0089ed91  ff1538d59800         call dword ptr [0x98d538]
// 0089ed97  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0089ed9a  8b17                 mov edx, dword ptr [edi]
// 0089ed9c  8b92e8000000         mov edx, dword ptr [edx + 0xe8]
// 0089eda2  53                   push ebx
// 0089eda3  83ec10               sub esp, 0x10
// 0089eda6  8bc4                 mov eax, esp
// 0089eda8  8908                 mov dword ptr [eax], ecx
// 0089edaa  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0089edad  894804               mov dword ptr [eax + 4], ecx
// 0089edb0  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0089edb3  894808               mov dword ptr [eax + 8], ecx
// 0089edb6  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0089edb9  89480c               mov dword ptr [eax + 0xc], ecx
// 0089edbc  8d442440             lea eax, [esp + 0x40]
// 0089edc0  50                   push eax
// 0089edc1  56                   push esi
// 0089edc2  8bcf                 mov ecx, edi
// 0089edc4  ffd2                 call edx
// 0089edc6  eb45                 jmp 0x89ee0d
// 0089edc8  8b17                 mov edx, dword ptr [edi]
// 0089edca  8b92d0000000         mov edx, dword ptr [edx + 0xd0]
// 0089edd0  8d442428             lea eax, [esp + 0x28]
// 0089edd4  50                   push eax
// 0089edd5  8d4c2418             lea ecx, [esp + 0x18]
// 0089edd9  51                   push ecx
// 0089edda  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0089eddd  6800800000           push 0x8000
// 0089ede2  83ec10               sub esp, 0x10
// 0089ede5  8bc4                 mov eax, esp
// 0089ede7  8908                 mov dword ptr [eax], ecx
// 0089ede9  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0089edec  894804               mov dword ptr [eax + 4], ecx
// 0089edef  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0089edf2  894808               mov dword ptr [eax + 8], ecx
// 0089edf5  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0089edf8  89480c               mov dword ptr [eax + 0xc], ecx
// 0089edfb  8d442448             lea eax, [esp + 0x48]
// 0089edff  50                   push eax
// 0089ee00  56                   push esi
// 0089ee01  8bcf                 mov ecx, edi
// 0089ee03  895c2438             mov dword ptr [esp + 0x38], ebx
// 0089ee07  895c244c             mov dword ptr [esp + 0x4c], ebx
// 0089ee0b  ffd2                 call edx
// 0089ee0d  8d4c242c             lea ecx, [esp + 0x2c]
// 0089ee11  ff15c0de9800         call dword ptr [0x98dec0]
// 0089ee17  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0089ee1b  64890d00000000       mov dword ptr fs:[0], ecx
// 0089ee22  59                   pop ecx
// 0089ee23  5f                   pop edi
// 0089ee24  5e                   pop esi
// 0089ee25  5d                   pop ebp
// 0089ee26  5b                   pop ebx
// 0089ee27  83c410               add esp, 0x10
// 0089ee2a  c20800               ret 8
// copied from an identical function in another client (function ?DrawItemCaption@CXTPReportPaintManager@@UAEXPAUXTP_REPORTRECORDITEM_DRAWARGS@@PAUXTP_REPORTRECORDITEM_METRICS@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/ReportControl/XTPReportPaintManager.cpp