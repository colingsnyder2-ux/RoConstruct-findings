// roc 2008-06 0074a2b0  unit: CXTPReportPaintManager  size: 611 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0074a2b0
//
// 0074a2b0  83ec0c               sub esp, 0xc
// 0074a2b3  57                   push edi
// 0074a2b4  8bf9                 mov edi, ecx
// 0074a2b6  83bf3c02000000       cmp dword ptr [edi + 0x23c], 0
// 0074a2bd  0f8449020000         je 0x74a50c
// 0074a2c3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0074a2c7  8b5124               mov edx, dword ptr [ecx + 0x24]
// 0074a2ca  55                   push ebp
// 0074a2cb  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0074a2cf  8b4524               mov eax, dword ptr [ebp + 0x24]
// 0074a2d2  56                   push esi
// 0074a2d3  8b7508               mov esi, dword ptr [ebp + 8]
// 0074a2d6  8944240c             mov dword ptr [esp + 0xc], eax
// 0074a2da  8b06                 mov eax, dword ptr [esi]
// 0074a2dc  8954241c             mov dword ptr [esp + 0x1c], edx
// 0074a2e0  8b9088000000         mov edx, dword ptr [eax + 0x88]
// 0074a2e6  8bce                 mov ecx, esi
// 0074a2e8  89742410             mov dword ptr [esp + 0x10], esi
// 0074a2ec  ffd2                 call edx
// 0074a2ee  85c0                 test eax, eax
// 0074a2f0  0f8514020000         jne 0x74a50a
// 0074a2f6  398738020000         cmp dword ptr [edi + 0x238], eax
// 0074a2fc  7534                 jne 0x74a332
// 0074a2fe  8b06                 mov eax, dword ptr [esi]
// 0074a300  8b90a8000000         mov edx, dword ptr [eax + 0xa8]
// 0074a306  8bce                 mov ecx, esi
// 0074a308  ffd2                 call edx
// 0074a30a  85c0                 test eax, eax
// 0074a30c  0f84f8010000         je 0x74a50a
// 0074a312  8b06                 mov eax, dword ptr [esi]
// 0074a314  8b90a8000000         mov edx, dword ptr [eax + 0xa8]
// 0074a31a  8bce                 mov ecx, esi
// 0074a31c  ffd2                 call edx
// 0074a31e  8b10                 mov edx, dword ptr [eax]
// 0074a320  8bc8                 mov ecx, eax
// 0074a322  8b8288000000         mov eax, dword ptr [edx + 0x88]
// 0074a328  ffd0                 call eax
// 0074a32a  85c0                 test eax, eax
// 0074a32c  0f85d8010000         jne 0x74a50a
// 0074a332  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0074a335  8b9100010000         mov edx, dword ptr [ecx + 0x100]
// 0074a33b  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0074a33f  8b8258020000         mov eax, dword ptr [edx + 0x258]
// 0074a345  53                   push ebx
// 0074a346  89442418             mov dword ptr [esp + 0x18], eax
// 0074a34a  8bd9                 mov ebx, ecx
// 0074a34c  2b5c242c             sub ebx, dword ptr [esp + 0x2c]
// 0074a350  8bc3                 mov eax, ebx
// 0074a352  99                   cdq 
// 0074a353  2bc2                 sub eax, edx
// 0074a355  8bf0                 mov esi, eax
// 0074a357  8b4528               mov eax, dword ptr [ebp + 0x28]
// 0074a35a  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 0074a35e  250000f00f           and eax, 0xff00000
// 0074a363  d1fe                 sar esi, 1
// 0074a365  3d00000001           cmp eax, 0x1000000
// 0074a36a  741b                 je 0x74a387
// 0074a36c  3d00000004           cmp eax, 0x4000000
// 0074a371  751d                 jne 0x74a390
// 0074a373  8bc5                 mov eax, ebp
// 0074a375  99                   cdq 
// 0074a376  2bc2                 sub eax, edx
// 0074a378  d1f8                 sar eax, 1
// 0074a37a  2bc8                 sub ecx, eax
// 0074a37c  2b4c242c             sub ecx, dword ptr [esp + 0x2c]
// 0074a380  83e902               sub ecx, 2
// 0074a383  8bf1                 mov esi, ecx
// 0074a385  eb09                 jmp 0x74a390
// 0074a387  8bc5                 mov eax, ebp
// 0074a389  99                   cdq 
// 0074a38a  2bc2                 sub eax, edx
// 0074a38c  8bf0                 mov esi, eax
// 0074a38e  d1fe                 sar esi, 1
// 0074a390  83bf3802000000       cmp dword ptr [edi + 0x238], 0
// 0074a397  7e19                 jle 0x74a3b2
// 0074a399  8d4501               lea eax, [ebp + 1]
// 0074a39c  99                   cdq 
// 0074a39d  2bc2                 sub eax, edx
// 0074a39f  d1f8                 sar eax, 1
// 0074a3a1  6a00                 push 0
// 0074a3a3  83c002               add eax, 2
// 0074a3a6  50                   push eax
// 0074a3a7  8d4c2430             lea ecx, [esp + 0x30]
// 0074a3ab  51                   push ecx
// 0074a3ac  ff15682d8000         call dword ptr [0x802d68]
// 0074a3b2  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0074a3b6  8b5500               mov edx, dword ptr [ebp]
// 0074a3b9  8b82c4000000         mov eax, dword ptr [edx + 0xc4]
// 0074a3bf  8bcd                 mov ecx, ebp
// 0074a3c1  ffd0                 call eax
// 0074a3c3  85c0                 test eax, eax
// 0074a3c5  7529                 jne 0x74a3f0
// 0074a3c7  8b442420             mov eax, dword ptr [esp + 0x20]
// 0074a3cb  8b17                 mov edx, dword ptr [edi]
// 0074a3cd  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0074a3d1  8b92f8000000         mov edx, dword ptr [edx + 0xf8]
// 0074a3d7  50                   push eax
// 0074a3d8  8b442430             mov eax, dword ptr [esp + 0x30]
// 0074a3dc  8d4e01               lea ecx, [esi + 1]
// 0074a3df  51                   push ecx
// 0074a3e0  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0074a3e4  6a01                 push 1
// 0074a3e6  48                   dec eax
// 0074a3e7  50                   push eax
// 0074a3e8  51                   push ecx
// 0074a3e9  53                   push ebx
// 0074a3ea  8bcf                 mov ecx, edi
// 0074a3ec  ffd2                 call edx
// 0074a3ee  eb29                 jmp 0x74a419
// 0074a3f0  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0074a3f4  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0074a3f8  8b07                 mov eax, dword ptr [edi]
// 0074a3fa  8b80f8000000         mov eax, dword ptr [eax + 0xf8]
// 0074a400  51                   push ecx
// 0074a401  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0074a405  43                   inc ebx
// 0074a406  53                   push ebx
// 0074a407  6a01                 push 1
// 0074a409  4a                   dec edx
// 0074a40a  52                   push edx
// 0074a40b  8b542420             mov edx, dword ptr [esp + 0x20]
// 0074a40f  51                   push ecx
// 0074a410  52                   push edx
// 0074a411  8bcf                 mov ecx, edi
// 0074a413  ffd0                 call eax
// 0074a415  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0074a419  8b442438             mov eax, dword ptr [esp + 0x38]
// 0074a41d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0074a421  99                   cdq 
// 0074a422  2bc2                 sub eax, edx
// 0074a424  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0074a428  51                   push ecx
// 0074a429  d1f8                 sar eax, 1
// 0074a42b  6a01                 push 1
// 0074a42d  40                   inc eax
// 0074a42e  50                   push eax
// 0074a42f  8b442434             mov eax, dword ptr [esp + 0x34]
// 0074a433  03d6                 add edx, esi
// 0074a435  52                   push edx
// 0074a436  50                   push eax
// 0074a437  8b07                 mov eax, dword ptr [edi]
// 0074a439  8b90f8000000         mov edx, dword ptr [eax + 0xf8]
// 0074a43f  53                   push ebx
// 0074a440  8bcf                 mov ecx, edi
// 0074a442  ffd2                 call edx
// 0074a444  8b4500               mov eax, dword ptr [ebp]
// 0074a447  8b90a8000000         mov edx, dword ptr [eax + 0xa8]
// 0074a44d  8bcd                 mov ecx, ebp
// 0074a44f  ffd2                 call edx
// 0074a451  8bf0                 mov esi, eax
// 0074a453  85f6                 test esi, esi
// 0074a455  0f84ae000000         je 0x74a509
// 0074a45b  eb03                 jmp 0x74a460
// 0074a45d  8d4900               lea ecx, [ecx]
// 0074a460  8b06                 mov eax, dword ptr [esi]
// 0074a462  8b9088000000         mov edx, dword ptr [eax + 0x88]
// 0074a468  8bce                 mov ecx, esi
// 0074a46a  ffd2                 call edx
// 0074a46c  85c0                 test eax, eax
// 0074a46e  0f8595000000         jne 0x74a509
// 0074a474  398738020000         cmp dword ptr [edi + 0x238], eax
// 0074a47a  752c                 jne 0x74a4a8
// 0074a47c  8b06                 mov eax, dword ptr [esi]
// 0074a47e  8b90a8000000         mov edx, dword ptr [eax + 0xa8]
// 0074a484  8bce                 mov ecx, esi
// 0074a486  ffd2                 call edx
// 0074a488  85c0                 test eax, eax
// 0074a48a  747d                 je 0x74a509
// 0074a48c  8b06                 mov eax, dword ptr [esi]
// 0074a48e  8b90a8000000         mov edx, dword ptr [eax + 0xa8]
// 0074a494  8bce                 mov ecx, esi
// 0074a496  ffd2                 call edx
// 0074a498  8b10                 mov edx, dword ptr [eax]
// 0074a49a  8bc8                 mov ecx, eax
// 0074a49c  8b8288000000         mov eax, dword ptr [edx + 0x88]
// 0074a4a2  ffd0                 call eax
// 0074a4a4  85c0                 test eax, eax
// 0074a4a6  7561                 jne 0x74a509
// 0074a4a8  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0074a4ac  6a00                 push 0
// 0074a4ae  f7d9                 neg ecx
// 0074a4b0  51                   push ecx
// 0074a4b1  8d542430             lea edx, [esp + 0x30]
// 0074a4b5  52                   push edx
// 0074a4b6  ff15682d8000         call dword ptr [0x802d68]
// 0074a4bc  8b06                 mov eax, dword ptr [esi]
// 0074a4be  8b90c4000000         mov edx, dword ptr [eax + 0xc4]
// 0074a4c4  8bce                 mov ecx, esi
// 0074a4c6  ffd2                 call edx
// 0074a4c8  85c0                 test eax, eax
// 0074a4ca  7427                 je 0x74a4f3
// 0074a4cc  8b442420             mov eax, dword ptr [esp + 0x20]
// 0074a4d0  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0074a4d4  8b17                 mov edx, dword ptr [edi]
// 0074a4d6  8b92f8000000         mov edx, dword ptr [edx + 0xf8]
// 0074a4dc  50                   push eax
// 0074a4dd  8b442430             mov eax, dword ptr [esp + 0x30]
// 0074a4e1  2bc8                 sub ecx, eax
// 0074a4e3  41                   inc ecx
// 0074a4e4  51                   push ecx
// 0074a4e5  6a01                 push 1
// 0074a4e7  48                   dec eax
// 0074a4e8  50                   push eax
// 0074a4e9  8b442438             mov eax, dword ptr [esp + 0x38]
// 0074a4ed  50                   push eax
// 0074a4ee  53                   push ebx
// 0074a4ef  8bcf                 mov ecx, edi
// 0074a4f1  ffd2                 call edx
// 0074a4f3  8b06                 mov eax, dword ptr [esi]
// 0074a4f5  8b90a8000000         mov edx, dword ptr [eax + 0xa8]
// 0074a4fb  8bce                 mov ecx, esi
// 0074a4fd  ffd2                 call edx
// 0074a4ff  8bf0                 mov esi, eax
// 0074a501  85f6                 test esi, esi
// 0074a503  0f8557ffffff         jne 0x74a460
// 0074a509  5b                   pop ebx
// 0074a50a  5e                   pop esi
// 0074a50b  5d                   pop ebp
// 0074a50c  5f                   pop edi
// 0074a50d  83c40c               add esp, 0xc
// 0074a510  c22000               ret 0x20
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportPaintManager.cpp (function ?DrawTreeStructure@CXTPReportPaintManager@@UAEXPAUXTP_REPORTRECORDITEM_DRAWARGS@@PAUXTP_REPORTRECORDITEM_METRICS@@VCRect@@VCSize@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportPaintManager.cpp
