// roc 2009-12 008196b0  unit: CRobloxReportView  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008196b0
//
// 008196b0  53                   push ebx
// 008196b1  55                   push ebp
// 008196b2  56                   push esi
// 008196b3  8bf1                 mov esi, ecx
// 008196b5  83be6003000000       cmp dword ptr [esi + 0x360], 0
// 008196bc  57                   push edi
// 008196bd  746b                 je 0x81972a
// 008196bf  837c241400           cmp dword ptr [esp + 0x14], 0
// 008196c4  7464                 je 0x81972a
// 008196c6  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008196ca  85c9                 test ecx, ecx
// 008196cc  745c                 je 0x81972a
// 008196ce  8b7914               mov edi, dword ptr [ecx + 0x14]
// 008196d1  8d47ff               lea eax, [edi - 1]
// 008196d4  8d5e60               lea ebx, [esi + 0x60]
// 008196d7  85c0                 test eax, eax
// 008196d9  7c6c                 jl 0x819747
// 008196db  3b4308               cmp eax, dword ptr [ebx + 8]
// 008196de  7d67                 jge 0x819747
// 008196e0  8b5304               mov edx, dword ptr [ebx + 4]
// 008196e3  8b0482               mov eax, dword ptr [edx + eax*4]
// 008196e6  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 008196ea  8b16                 mov edx, dword ptr [esi]
// 008196ec  8b9298010000         mov edx, dword ptr [edx + 0x198]
// 008196f2  50                   push eax
// 008196f3  83ec10               sub esp, 0x10
// 008196f6  8bc4                 mov eax, esp
// 008196f8  8928                 mov dword ptr [eax], ebp
// 008196fa  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 008196fe  896804               mov dword ptr [eax + 4], ebp
// 00819701  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 00819705  896808               mov dword ptr [eax + 8], ebp
// 00819708  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 0081970c  89680c               mov dword ptr [eax + 0xc], ebp
// 0081970f  8b442428             mov eax, dword ptr [esp + 0x28]
// 00819713  51                   push ecx
// 00819714  50                   push eax
// 00819715  8bce                 mov ecx, esi
// 00819717  ffd2                 call edx
// 00819719  3b7e68               cmp edi, dword ptr [esi + 0x68]
// 0081971c  7513                 jne 0x819731
// 0081971e  50                   push eax
// 0081971f  8b4308               mov eax, dword ptr [ebx + 8]
// 00819722  50                   push eax
// 00819723  8bcb                 mov ecx, ebx
// 00819725  e8ecce1000           call 0x926616
// 0081972a  5f                   pop edi
// 0081972b  5e                   pop esi
// 0081972c  5d                   pop ebp
// 0081972d  5b                   pop ebx
// 0081972e  c21800               ret 0x18
// 00819731  85ff                 test edi, edi
// 00819733  7c12                 jl 0x819747
// 00819735  3b7b08               cmp edi, dword ptr [ebx + 8]
// 00819738  7d0d                 jge 0x819747
// 0081973a  8b4b04               mov ecx, dword ptr [ebx + 4]
// 0081973d  8904b9               mov dword ptr [ecx + edi*4], eax
// 00819740  5f                   pop edi
// 00819741  5e                   pop esi
// 00819742  5d                   pop ebp
// 00819743  5b                   pop ebx
// 00819744  c21800               ret 0x18
// 00819747  e8c0a3fdff           call 0x7f3b0c
// copied from an identical function in another client (function ?_OnPrint2@CXTPReportView@@MAEXPAVCDC@@PAUCPrintInfo@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportView.cpp