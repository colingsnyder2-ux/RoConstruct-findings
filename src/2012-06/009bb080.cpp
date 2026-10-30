// roc 2012-06 009bb080  unit: VCXTPReportRecords::?$CXTPHeapObjectT  size: 409 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009bb080
//
// 009bb080  6aff                 push -1
// 009bb082  6868f0ad00           push 0xadf068
// 009bb087  64a100000000         mov eax, dword ptr fs:[0]
// 009bb08d  50                   push eax
// 009bb08e  83ec10               sub esp, 0x10
// 009bb091  53                   push ebx
// 009bb092  55                   push ebp
// 009bb093  56                   push esi
// 009bb094  57                   push edi
// 009bb095  a1d027e000           mov eax, dword ptr [0xe027d0]
// 009bb09a  33c4                 xor eax, esp
// 009bb09c  50                   push eax
// 009bb09d  8d442424             lea eax, [esp + 0x24]
// 009bb0a1  64a300000000         mov dword ptr fs:[0], eax
// 009bb0a7  8bf9                 mov edi, ecx
// 009bb0a9  897c2414             mov dword ptr [esp + 0x14], edi
// 009bb0ad  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 009bb0b1  8b03                 mov eax, dword ptr [ebx]
// 009bb0b3  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 009bb0b9  681804c100           push 0xc10418
// 009bb0be  8bcb                 mov ecx, ebx
// 009bb0c0  ffd2                 call edx
// 009bb0c2  8bf0                 mov esi, eax
// 009bb0c4  8974241c             mov dword ptr [esp + 0x1c], esi
// 009bb0c8  33ed                 xor ebp, ebp
// 009bb0ca  896c242c             mov dword ptr [esp + 0x2c], ebp
// 009bb0ce  8bcf                 mov ecx, edi
// 009bb0d0  396b28               cmp dword ptr [ebx + 0x28], ebp
// 009bb0d3  0f85aa000000         jne 0x9bb183
// 009bb0d9  e892fbffff           call 0x9bac70
// 009bb0de  8bd8                 mov ebx, eax
// 009bb0e0  8b06                 mov eax, dword ptr [esi]
// 009bb0e2  8b5004               mov edx, dword ptr [eax + 4]
// 009bb0e5  6a01                 push 1
// 009bb0e7  53                   push ebx
// 009bb0e8  8bce                 mov ecx, esi
// 009bb0ea  ffd2                 call edx
// 009bb0ec  3bdd                 cmp ebx, ebp
// 009bb0ee  89442418             mov dword ptr [esp + 0x18], eax
// 009bb0f2  7f30                 jg 0x9bb124
// 009bb0f4  8b06                 mov eax, dword ptr [esi]
// 009bb0f6  8b10                 mov edx, dword ptr [eax]
// 009bb0f8  6a01                 push 1
// 009bb0fa  8bce                 mov ecx, esi
// 009bb0fc  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 009bb104  ffd2                 call edx
// 009bb106  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 009bb10a  64890d00000000       mov dword ptr fs:[0], ecx
// 009bb111  59                   pop ecx
// 009bb112  5f                   pop edi
// 009bb113  5e                   pop esi
// 009bb114  5d                   pop ebp
// 009bb115  5b                   pop ebx
// 009bb116  83c41c               add esp, 0x1c
// 009bb119  c20400               ret 4
// 009bb11c  8d642400             lea esp, [esp]
// 009bb120  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 009bb124  55                   push ebp
// 009bb125  8bcf                 mov ecx, edi
// 009bb127  e854fbffff           call 0x9bac80
// 009bb12c  89442434             mov dword ptr [esp + 0x34], eax
// 009bb130  8b06                 mov eax, dword ptr [esi]
// 009bb132  8b5008               mov edx, dword ptr [eax + 8]
// 009bb135  8d4c2418             lea ecx, [esp + 0x18]
// 009bb139  51                   push ecx
// 009bb13a  8bce                 mov ecx, esi
// 009bb13c  ffd2                 call edx
// 009bb13e  8bf8                 mov edi, eax
// 009bb140  897c2420             mov dword ptr [esp + 0x20], edi
// 009bb144  c644242c01           mov byte ptr [esp + 0x2c], 1
// 009bb149  e842dcffff           call 0x9b8d90
// 009bb14e  8b17                 mov edx, dword ptr [edi]
// 009bb150  8b5264               mov edx, dword ptr [edx + 0x64]
// 009bb153  50                   push eax
// 009bb154  8d442438             lea eax, [esp + 0x38]
// 009bb158  50                   push eax
// 009bb159  8bcf                 mov ecx, edi
// 009bb15b  ffd2                 call edx
// 009bb15d  85c0                 test eax, eax
// 009bb15f  740c                 je 0x9bb16d
// 009bb161  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 009bb165  8b01                 mov eax, dword ptr [ecx]
// 009bb167  8b5060               mov edx, dword ptr [eax + 0x60]
// 009bb16a  57                   push edi
// 009bb16b  ffd2                 call edx
// 009bb16d  8bcf                 mov ecx, edi
// 009bb16f  c644242c00           mov byte ptr [esp + 0x2c], 0
// 009bb174  e81175fcff           call 0x98268a
// 009bb179  45                   inc ebp
// 009bb17a  3beb                 cmp ebp, ebx
// 009bb17c  7ca2                 jl 0x9bb120
// 009bb17e  e971ffffff           jmp 0x9bb0f4
// 009bb183  e818faffff           call 0x9baba0
// 009bb188  8b06                 mov eax, dword ptr [esi]
// 009bb18a  8b5004               mov edx, dword ptr [eax + 4]
// 009bb18d  6a01                 push 1
// 009bb18f  55                   push ebp
// 009bb190  8bce                 mov ecx, esi
// 009bb192  ffd2                 call edx
// 009bb194  89442418             mov dword ptr [esp + 0x18], eax
// 009bb198  3bc5                 cmp eax, ebp
// 009bb19a  0f8454ffffff         je 0x9bb0f4
// 009bb1a0  b302                 mov bl, 2
// 009bb1a2  c744243400000000     mov dword ptr [esp + 0x34], 0
// 009bb1aa  8b06                 mov eax, dword ptr [esi]
// 009bb1ac  8b5008               mov edx, dword ptr [eax + 8]
// 009bb1af  8d4c2418             lea ecx, [esp + 0x18]
// 009bb1b3  51                   push ecx
// 009bb1b4  8bce                 mov ecx, esi
// 009bb1b6  ffd2                 call edx
// 009bb1b8  8bf8                 mov edi, eax
// 009bb1ba  897c2420             mov dword ptr [esp + 0x20], edi
// 009bb1be  885c242c             mov byte ptr [esp + 0x2c], bl
// 009bb1c2  e8c9dbffff           call 0x9b8d90
// 009bb1c7  8b17                 mov edx, dword ptr [edi]
// 009bb1c9  8b5264               mov edx, dword ptr [edx + 0x64]
// 009bb1cc  50                   push eax
// 009bb1cd  8d442438             lea eax, [esp + 0x38]
// 009bb1d1  50                   push eax
// 009bb1d2  8bcf                 mov ecx, edi
// 009bb1d4  ffd2                 call edx
// 009bb1d6  85c0                 test eax, eax
// 009bb1d8  740c                 je 0x9bb1e6
// 009bb1da  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 009bb1de  8b01                 mov eax, dword ptr [ecx]
// 009bb1e0  8b5060               mov edx, dword ptr [eax + 0x60]
// 009bb1e3  57                   push edi
// 009bb1e4  ffd2                 call edx
// 009bb1e6  8b442434             mov eax, dword ptr [esp + 0x34]
// 009bb1ea  85c0                 test eax, eax
// 009bb1ec  7422                 je 0x9bb210
// 009bb1ee  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 009bb1f2  50                   push eax
// 009bb1f3  e808feffff           call 0x9bb000
// 009bb1f8  8bcf                 mov ecx, edi
// 009bb1fa  c644242c00           mov byte ptr [esp + 0x2c], 0
// 009bb1ff  e88674fcff           call 0x98268a
// 009bb204  837c241800           cmp dword ptr [esp + 0x18], 0
// 009bb209  7597                 jne 0x9bb1a2
// 009bb20b  e9e4feffff           jmp 0x9bb0f4
// 009bb210  6a00                 push 0
// 009bb212  6a06                 push 6
// 009bb214  e8417afcff           call 0x982c5a
// copied from an identical function in another client (function ?_DoPropExchange@CXTPReportRecords@@MAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportRecords.cpp