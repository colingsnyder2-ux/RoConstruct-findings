// roc 2012-06 009a7780  unit: CRobloxReportView  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a7780
//
// 009a7780  53                   push ebx
// 009a7781  55                   push ebp
// 009a7782  56                   push esi
// 009a7783  8bf1                 mov esi, ecx
// 009a7785  83be6003000000       cmp dword ptr [esi + 0x360], 0
// 009a778c  57                   push edi
// 009a778d  746b                 je 0x9a77fa
// 009a778f  837c241400           cmp dword ptr [esp + 0x14], 0
// 009a7794  7464                 je 0x9a77fa
// 009a7796  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 009a779a  85c9                 test ecx, ecx
// 009a779c  745c                 je 0x9a77fa
// 009a779e  8b7914               mov edi, dword ptr [ecx + 0x14]
// 009a77a1  8d47ff               lea eax, [edi - 1]
// 009a77a4  8d5e60               lea ebx, [esi + 0x60]
// 009a77a7  85c0                 test eax, eax
// 009a77a9  7c6c                 jl 0x9a7817
// 009a77ab  3b4308               cmp eax, dword ptr [ebx + 8]
// 009a77ae  7d67                 jge 0x9a7817
// 009a77b0  8b5304               mov edx, dword ptr [ebx + 4]
// 009a77b3  8b0482               mov eax, dword ptr [edx + eax*4]
// 009a77b6  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 009a77ba  8b16                 mov edx, dword ptr [esi]
// 009a77bc  8b9298010000         mov edx, dword ptr [edx + 0x198]
// 009a77c2  50                   push eax
// 009a77c3  83ec10               sub esp, 0x10
// 009a77c6  8bc4                 mov eax, esp
// 009a77c8  8928                 mov dword ptr [eax], ebp
// 009a77ca  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 009a77ce  896804               mov dword ptr [eax + 4], ebp
// 009a77d1  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 009a77d5  896808               mov dword ptr [eax + 8], ebp
// 009a77d8  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 009a77dc  89680c               mov dword ptr [eax + 0xc], ebp
// 009a77df  8b442428             mov eax, dword ptr [esp + 0x28]
// 009a77e3  51                   push ecx
// 009a77e4  50                   push eax
// 009a77e5  8bce                 mov ecx, esi
// 009a77e7  ffd2                 call edx
// 009a77e9  3b7e68               cmp edi, dword ptr [esi + 0x68]
// 009a77ec  7513                 jne 0x9a7801
// 009a77ee  50                   push eax
// 009a77ef  8b4308               mov eax, dword ptr [ebx + 8]
// 009a77f2  50                   push eax
// 009a77f3  8bcb                 mov ecx, ebx
// 009a77f5  e82e1f0f00           call 0xa99728
// 009a77fa  5f                   pop edi
// 009a77fb  5e                   pop esi
// 009a77fc  5d                   pop ebp
// 009a77fd  5b                   pop ebx
// 009a77fe  c21800               ret 0x18
// 009a7801  85ff                 test edi, edi
// 009a7803  7c12                 jl 0x9a7817
// 009a7805  3b7b08               cmp edi, dword ptr [ebx + 8]
// 009a7808  7d0d                 jge 0x9a7817
// 009a780a  8b4b04               mov ecx, dword ptr [ebx + 4]
// 009a780d  8904b9               mov dword ptr [ecx + edi*4], eax
// 009a7810  5f                   pop edi
// 009a7811  5e                   pop esi
// 009a7812  5d                   pop ebp
// 009a7813  5b                   pop ebx
// 009a7814  c21800               ret 0x18
// 009a7817  e8a4abfdff           call 0x9823c0
// copied from an identical function in another client (function ?_OnPrint2@CXTPReportView@@MAEXPAVCDC@@PAUCPrintInfo@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportView.cpp