// roc 2008-06 00746540  unit: CXTPReportPaintManager  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00746540
//
// 00746540  56                   push esi
// 00746541  57                   push edi
// 00746542  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00746546  8bf1                 mov esi, ecx
// 00746548  85ff                 test edi, edi
// 0074654a  0f84b3000000         je 0x746603
// 00746550  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 00746553  85c9                 test ecx, ecx
// 00746555  0f84a8000000         je 0x746603
// 0074655b  53                   push ebx
// 0074655c  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00746560  85db                 test ebx, ebx
// 00746562  0f849a000000         je 0x746602
// 00746568  55                   push ebp
// 00746569  e88299f8ff           call 0x6cfef0
// 0074656e  8be8                 mov ebp, eax
// 00746570  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 00746576  83f8ff               cmp eax, -1
// 00746579  7506                 jne 0x746581
// 0074657b  8b8698000000         mov eax, dword ptr [esi + 0x98]
// 00746581  894324               mov dword ptr [ebx + 0x24], eax
// 00746584  c74328ffffffff       mov dword ptr [ebx + 0x28], 0xffffffff
// 0074658b  8b07                 mov eax, dword ptr [edi]
// 0074658d  8b5074               mov edx, dword ptr [eax + 0x74]
// 00746590  8bcf                 mov ecx, edi
// 00746592  ffd2                 call edx
// 00746594  85c0                 test eax, eax
// 00746596  7426                 je 0x7465be
// 00746598  85ed                 test ebp, ebp
// 0074659a  7422                 je 0x7465be
// 0074659c  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 007465a1  751b                 jne 0x7465be
// 007465a3  8b466c               mov eax, dword ptr [esi + 0x6c]
// 007465a6  83f8ff               cmp eax, -1
// 007465a9  7503                 jne 0x7465ae
// 007465ab  8b4668               mov eax, dword ptr [esi + 0x68]
// 007465ae  894324               mov dword ptr [ebx + 0x24], eax
// 007465b1  8b4648               mov eax, dword ptr [esi + 0x48]
// 007465b4  83f8ff               cmp eax, -1
// 007465b7  7533                 jne 0x7465ec
// 007465b9  8b4644               mov eax, dword ptr [esi + 0x44]
// 007465bc  eb2e                 jmp 0x7465ec
// 007465be  83be0402000000       cmp dword ptr [esi + 0x204], 0
// 007465c5  7428                 je 0x7465ef
// 007465c7  8b86b4000000         mov eax, dword ptr [esi + 0xb4]
// 007465cd  83f8ff               cmp eax, -1
// 007465d0  7506                 jne 0x7465d8
// 007465d2  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 007465d8  894324               mov dword ptr [ebx + 0x24], eax
// 007465db  8b86a8000000         mov eax, dword ptr [esi + 0xa8]
// 007465e1  83f8ff               cmp eax, -1
// 007465e4  7506                 jne 0x7465ec
// 007465e6  8b86a4000000         mov eax, dword ptr [esi + 0xa4]
// 007465ec  894328               mov dword ptr [ebx + 0x28], eax
// 007465ef  83be0002000000       cmp dword ptr [esi + 0x200], 0
// 007465f6  5d                   pop ebp
// 007465f7  8d4628               lea eax, [esi + 0x28]
// 007465fa  7503                 jne 0x7465ff
// 007465fc  8d4620               lea eax, [esi + 0x20]
// 007465ff  894320               mov dword ptr [ebx + 0x20], eax
// 00746602  5b                   pop ebx
// 00746603  5f                   pop edi
// 00746604  5e                   pop esi
// 00746605  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportPaintManager.cpp (function ?FillGroupRowMetrics@CXTPReportPaintManager@@UAEXPAVCXTPReportGroupRow@@PAUXTP_REPORTRECORDITEM_METRICS@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportPaintManager.cpp
