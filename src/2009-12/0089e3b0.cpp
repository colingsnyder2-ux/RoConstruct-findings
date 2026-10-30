// roc 2009-12 0089e3b0  unit: CXTPReportPaintManager  size: 611 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0089e3b0
//
// 0089e3b0  83ec0c               sub esp, 0xc
// 0089e3b3  57                   push edi
// 0089e3b4  8bf9                 mov edi, ecx
// 0089e3b6  83bf3c02000000       cmp dword ptr [edi + 0x23c], 0
// 0089e3bd  0f8449020000         je 0x89e60c
// 0089e3c3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0089e3c7  8b5124               mov edx, dword ptr [ecx + 0x24]
// 0089e3ca  55                   push ebp
// 0089e3cb  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0089e3cf  8b4524               mov eax, dword ptr [ebp + 0x24]
// 0089e3d2  56                   push esi
// 0089e3d3  8b7508               mov esi, dword ptr [ebp + 8]
// 0089e3d6  8944240c             mov dword ptr [esp + 0xc], eax
// 0089e3da  8b06                 mov eax, dword ptr [esi]
// 0089e3dc  8954241c             mov dword ptr [esp + 0x1c], edx
// 0089e3e0  8b9088000000         mov edx, dword ptr [eax + 0x88]
// 0089e3e6  8bce                 mov ecx, esi
// 0089e3e8  89742410             mov dword ptr [esp + 0x10], esi
// 0089e3ec  ffd2                 call edx
// 0089e3ee  85c0                 test eax, eax
// 0089e3f0  0f8514020000         jne 0x89e60a
// 0089e3f6  398738020000         cmp dword ptr [edi + 0x238], eax
// 0089e3fc  7534                 jne 0x89e432
// 0089e3fe  8b06                 mov eax, dword ptr [esi]
// 0089e400  8b90a8000000         mov edx, dword ptr [eax + 0xa8]
// 0089e406  8bce                 mov ecx, esi
// 0089e408  ffd2                 call edx
// 0089e40a  85c0                 test eax, eax
// 0089e40c  0f84f8010000         je 0x89e60a
// 0089e412  8b06                 mov eax, dword ptr [esi]
// 0089e414  8b90a8000000         mov edx, dword ptr [eax + 0xa8]
// 0089e41a  8bce                 mov ecx, esi
// 0089e41c  ffd2                 call edx
// 0089e41e  8b10                 mov edx, dword ptr [eax]
// 0089e420  8bc8                 mov ecx, eax
// 0089e422  8b8288000000         mov eax, dword ptr [edx + 0x88]
// 0089e428  ffd0                 call eax
// 0089e42a  85c0                 test eax, eax
// 0089e42c  0f85d8010000         jne 0x89e60a
// 0089e432  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0089e435  8b9100010000         mov edx, dword ptr [ecx + 0x100]
// 0089e43b  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0089e43f  8b8258020000         mov eax, dword ptr [edx + 0x258]
// 0089e445  53                   push ebx
// 0089e446  89442418             mov dword ptr [esp + 0x18], eax
// 0089e44a  8bd9                 mov ebx, ecx
// 0089e44c  2b5c242c             sub ebx, dword ptr [esp + 0x2c]
// 0089e450  8bc3                 mov eax, ebx
// 0089e452  99                   cdq 
// 0089e453  2bc2                 sub eax, edx
// 0089e455  8bf0                 mov esi, eax
// 0089e457  8b4528               mov eax, dword ptr [ebp + 0x28]
// 0089e45a  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 0089e45e  250000f00f           and eax, 0xff00000
// 0089e463  d1fe                 sar esi, 1
// 0089e465  3d00000001           cmp eax, 0x1000000
// 0089e46a  741b                 je 0x89e487
// 0089e46c  3d00000004           cmp eax, 0x4000000
// 0089e471  751d                 jne 0x89e490
// 0089e473  8bc5                 mov eax, ebp
// 0089e475  99                   cdq 
// 0089e476  2bc2                 sub eax, edx
// 0089e478  d1f8                 sar eax, 1
// 0089e47a  2bc8                 sub ecx, eax
// 0089e47c  2b4c242c             sub ecx, dword ptr [esp + 0x2c]
// 0089e480  83e902               sub ecx, 2
// 0089e483  8bf1                 mov esi, ecx
// 0089e485  eb09                 jmp 0x89e490
// 0089e487  8bc5                 mov eax, ebp
// 0089e489  99                   cdq 
// 0089e48a  2bc2                 sub eax, edx
// 0089e48c  8bf0                 mov esi, eax
// 0089e48e  d1fe                 sar esi, 1
// 0089e490  83bf3802000000       cmp dword ptr [edi + 0x238], 0
// 0089e497  7e19                 jle 0x89e4b2
// 0089e499  8d4501               lea eax, [ebp + 1]
// 0089e49c  99                   cdq 
// 0089e49d  2bc2                 sub eax, edx
// 0089e49f  d1f8                 sar eax, 1
// 0089e4a1  6a00                 push 0
// 0089e4a3  83c002               add eax, 2
// 0089e4a6  50                   push eax
// 0089e4a7  8d4c2430             lea ecx, [esp + 0x30]
// 0089e4ab  51                   push ecx
// 0089e4ac  ff156ccc9800         call dword ptr [0x98cc6c]
// 0089e4b2  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0089e4b6  8b5500               mov edx, dword ptr [ebp]
// 0089e4b9  8b82c4000000         mov eax, dword ptr [edx + 0xc4]
// 0089e4bf  8bcd                 mov ecx, ebp
// 0089e4c1  ffd0                 call eax
// 0089e4c3  85c0                 test eax, eax
// 0089e4c5  7529                 jne 0x89e4f0
// 0089e4c7  8b442420             mov eax, dword ptr [esp + 0x20]
// 0089e4cb  8b17                 mov edx, dword ptr [edi]
// 0089e4cd  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0089e4d1  8b92f8000000         mov edx, dword ptr [edx + 0xf8]
// 0089e4d7  50                   push eax
// 0089e4d8  8b442430             mov eax, dword ptr [esp + 0x30]
// 0089e4dc  8d4e01               lea ecx, [esi + 1]
// 0089e4df  51                   push ecx
// 0089e4e0  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0089e4e4  6a01                 push 1
// 0089e4e6  48                   dec eax
// 0089e4e7  50                   push eax
// 0089e4e8  51                   push ecx
// 0089e4e9  53                   push ebx
// 0089e4ea  8bcf                 mov ecx, edi
// 0089e4ec  ffd2                 call edx
// 0089e4ee  eb29                 jmp 0x89e519
// 0089e4f0  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0089e4f4  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0089e4f8  8b07                 mov eax, dword ptr [edi]
// 0089e4fa  8b80f8000000         mov eax, dword ptr [eax + 0xf8]
// 0089e500  51                   push ecx
// 0089e501  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0089e505  43                   inc ebx
// 0089e506  53                   push ebx
// 0089e507  6a01                 push 1
// 0089e509  4a                   dec edx
// 0089e50a  52                   push edx
// 0089e50b  8b542420             mov edx, dword ptr [esp + 0x20]
// 0089e50f  51                   push ecx
// 0089e510  52                   push edx
// 0089e511  8bcf                 mov ecx, edi
// 0089e513  ffd0                 call eax
// 0089e515  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0089e519  8b442438             mov eax, dword ptr [esp + 0x38]
// 0089e51d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0089e521  99                   cdq 
// 0089e522  2bc2                 sub eax, edx
// 0089e524  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0089e528  51                   push ecx
// 0089e529  d1f8                 sar eax, 1
// 0089e52b  6a01                 push 1
// 0089e52d  40                   inc eax
// 0089e52e  50                   push eax
// 0089e52f  8b442434             mov eax, dword ptr [esp + 0x34]
// 0089e533  03d6                 add edx, esi
// 0089e535  52                   push edx
// 0089e536  50                   push eax
// 0089e537  8b07                 mov eax, dword ptr [edi]
// 0089e539  8b90f8000000         mov edx, dword ptr [eax + 0xf8]
// 0089e53f  53                   push ebx
// 0089e540  8bcf                 mov ecx, edi
// 0089e542  ffd2                 call edx
// 0089e544  8b4500               mov eax, dword ptr [ebp]
// 0089e547  8b90a8000000         mov edx, dword ptr [eax + 0xa8]
// 0089e54d  8bcd                 mov ecx, ebp
// 0089e54f  ffd2                 call edx
// 0089e551  8bf0                 mov esi, eax
// 0089e553  85f6                 test esi, esi
// 0089e555  0f84ae000000         je 0x89e609
// 0089e55b  eb03                 jmp 0x89e560
// 0089e55d  8d4900               lea ecx, [ecx]
// 0089e560  8b06                 mov eax, dword ptr [esi]
// 0089e562  8b9088000000         mov edx, dword ptr [eax + 0x88]
// 0089e568  8bce                 mov ecx, esi
// 0089e56a  ffd2                 call edx
// 0089e56c  85c0                 test eax, eax
// 0089e56e  0f8595000000         jne 0x89e609
// 0089e574  398738020000         cmp dword ptr [edi + 0x238], eax
// 0089e57a  752c                 jne 0x89e5a8
// 0089e57c  8b06                 mov eax, dword ptr [esi]
// 0089e57e  8b90a8000000         mov edx, dword ptr [eax + 0xa8]
// 0089e584  8bce                 mov ecx, esi
// 0089e586  ffd2                 call edx
// 0089e588  85c0                 test eax, eax
// 0089e58a  747d                 je 0x89e609
// 0089e58c  8b06                 mov eax, dword ptr [esi]
// 0089e58e  8b90a8000000         mov edx, dword ptr [eax + 0xa8]
// 0089e594  8bce                 mov ecx, esi
// 0089e596  ffd2                 call edx
// 0089e598  8b10                 mov edx, dword ptr [eax]
// 0089e59a  8bc8                 mov ecx, eax
// 0089e59c  8b8288000000         mov eax, dword ptr [edx + 0x88]
// 0089e5a2  ffd0                 call eax
// 0089e5a4  85c0                 test eax, eax
// 0089e5a6  7561                 jne 0x89e609
// 0089e5a8  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0089e5ac  6a00                 push 0
// 0089e5ae  f7d9                 neg ecx
// 0089e5b0  51                   push ecx
// 0089e5b1  8d542430             lea edx, [esp + 0x30]
// 0089e5b5  52                   push edx
// 0089e5b6  ff156ccc9800         call dword ptr [0x98cc6c]
// 0089e5bc  8b06                 mov eax, dword ptr [esi]
// 0089e5be  8b90c4000000         mov edx, dword ptr [eax + 0xc4]
// 0089e5c4  8bce                 mov ecx, esi
// 0089e5c6  ffd2                 call edx
// 0089e5c8  85c0                 test eax, eax
// 0089e5ca  7427                 je 0x89e5f3
// 0089e5cc  8b442420             mov eax, dword ptr [esp + 0x20]
// 0089e5d0  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0089e5d4  8b17                 mov edx, dword ptr [edi]
// 0089e5d6  8b92f8000000         mov edx, dword ptr [edx + 0xf8]
// 0089e5dc  50                   push eax
// 0089e5dd  8b442430             mov eax, dword ptr [esp + 0x30]
// 0089e5e1  2bc8                 sub ecx, eax
// 0089e5e3  41                   inc ecx
// 0089e5e4  51                   push ecx
// 0089e5e5  6a01                 push 1
// 0089e5e7  48                   dec eax
// 0089e5e8  50                   push eax
// 0089e5e9  8b442438             mov eax, dword ptr [esp + 0x38]
// 0089e5ed  50                   push eax
// 0089e5ee  53                   push ebx
// 0089e5ef  8bcf                 mov ecx, edi
// 0089e5f1  ffd2                 call edx
// 0089e5f3  8b06                 mov eax, dword ptr [esi]
// 0089e5f5  8b90a8000000         mov edx, dword ptr [eax + 0xa8]
// 0089e5fb  8bce                 mov ecx, esi
// 0089e5fd  ffd2                 call edx
// 0089e5ff  8bf0                 mov esi, eax
// 0089e601  85f6                 test esi, esi
// 0089e603  0f8557ffffff         jne 0x89e560
// 0089e609  5b                   pop ebx
// 0089e60a  5e                   pop esi
// 0089e60b  5d                   pop ebp
// 0089e60c  5f                   pop edi
// 0089e60d  83c40c               add esp, 0xc
// 0089e610  c22000               ret 0x20
// copied from an identical function in another client (function ?DrawTreeStructure@CXTPReportPaintManager@@UAEXPAUXTP_REPORTRECORDITEM_DRAWARGS@@PAUXTP_REPORTRECORDITEM_METRICS@@VCRect@@VCSize@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportPaintManager.cpp