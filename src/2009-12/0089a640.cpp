// roc 2009-12 0089a640  unit: CXTPReportPaintManager  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0089a640
//
// 0089a640  56                   push esi
// 0089a641  57                   push edi
// 0089a642  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0089a646  8bf1                 mov esi, ecx
// 0089a648  85ff                 test edi, edi
// 0089a64a  0f84b3000000         je 0x89a703
// 0089a650  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 0089a653  85c9                 test ecx, ecx
// 0089a655  0f84a8000000         je 0x89a703
// 0089a65b  53                   push ebx
// 0089a65c  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0089a660  85db                 test ebx, ebx
// 0089a662  0f849a000000         je 0x89a702
// 0089a668  55                   push ebp
// 0089a669  e8d28df8ff           call 0x823440
// 0089a66e  8be8                 mov ebp, eax
// 0089a670  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 0089a676  83f8ff               cmp eax, -1
// 0089a679  7506                 jne 0x89a681
// 0089a67b  8b8698000000         mov eax, dword ptr [esi + 0x98]
// 0089a681  894324               mov dword ptr [ebx + 0x24], eax
// 0089a684  c74328ffffffff       mov dword ptr [ebx + 0x28], 0xffffffff
// 0089a68b  8b07                 mov eax, dword ptr [edi]
// 0089a68d  8b5074               mov edx, dword ptr [eax + 0x74]
// 0089a690  8bcf                 mov ecx, edi
// 0089a692  ffd2                 call edx
// 0089a694  85c0                 test eax, eax
// 0089a696  7426                 je 0x89a6be
// 0089a698  85ed                 test ebp, ebp
// 0089a69a  7422                 je 0x89a6be
// 0089a69c  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 0089a6a1  751b                 jne 0x89a6be
// 0089a6a3  8b466c               mov eax, dword ptr [esi + 0x6c]
// 0089a6a6  83f8ff               cmp eax, -1
// 0089a6a9  7503                 jne 0x89a6ae
// 0089a6ab  8b4668               mov eax, dword ptr [esi + 0x68]
// 0089a6ae  894324               mov dword ptr [ebx + 0x24], eax
// 0089a6b1  8b4648               mov eax, dword ptr [esi + 0x48]
// 0089a6b4  83f8ff               cmp eax, -1
// 0089a6b7  7533                 jne 0x89a6ec
// 0089a6b9  8b4644               mov eax, dword ptr [esi + 0x44]
// 0089a6bc  eb2e                 jmp 0x89a6ec
// 0089a6be  83be0402000000       cmp dword ptr [esi + 0x204], 0
// 0089a6c5  7428                 je 0x89a6ef
// 0089a6c7  8b86b4000000         mov eax, dword ptr [esi + 0xb4]
// 0089a6cd  83f8ff               cmp eax, -1
// 0089a6d0  7506                 jne 0x89a6d8
// 0089a6d2  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 0089a6d8  894324               mov dword ptr [ebx + 0x24], eax
// 0089a6db  8b86a8000000         mov eax, dword ptr [esi + 0xa8]
// 0089a6e1  83f8ff               cmp eax, -1
// 0089a6e4  7506                 jne 0x89a6ec
// 0089a6e6  8b86a4000000         mov eax, dword ptr [esi + 0xa4]
// 0089a6ec  894328               mov dword ptr [ebx + 0x28], eax
// 0089a6ef  83be0002000000       cmp dword ptr [esi + 0x200], 0
// 0089a6f6  5d                   pop ebp
// 0089a6f7  8d4628               lea eax, [esi + 0x28]
// 0089a6fa  7503                 jne 0x89a6ff
// 0089a6fc  8d4620               lea eax, [esi + 0x20]
// 0089a6ff  894320               mov dword ptr [ebx + 0x20], eax
// 0089a702  5b                   pop ebx
// 0089a703  5f                   pop edi
// 0089a704  5e                   pop esi
// 0089a705  c20c00               ret 0xc
// copied from an identical function in another client (function ?FillGroupRowMetrics@CXTPReportPaintManager@@UAEXPAVCXTPReportGroupRow@@PAUXTP_REPORTRECORDITEM_METRICS@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportPaintManager.cpp