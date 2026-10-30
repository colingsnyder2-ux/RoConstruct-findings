// roc 2009-06 0073e790  unit: CRobloxReportView  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0073e790
//
// 0073e790  53                   push ebx
// 0073e791  55                   push ebp
// 0073e792  56                   push esi
// 0073e793  8bf1                 mov esi, ecx
// 0073e795  83be6003000000       cmp dword ptr [esi + 0x360], 0
// 0073e79c  57                   push edi
// 0073e79d  746b                 je 0x73e80a
// 0073e79f  837c241400           cmp dword ptr [esp + 0x14], 0
// 0073e7a4  7464                 je 0x73e80a
// 0073e7a6  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0073e7aa  85c9                 test ecx, ecx
// 0073e7ac  745c                 je 0x73e80a
// 0073e7ae  8b7914               mov edi, dword ptr [ecx + 0x14]
// 0073e7b1  8d47ff               lea eax, [edi - 1]
// 0073e7b4  8d5e60               lea ebx, [esi + 0x60]
// 0073e7b7  85c0                 test eax, eax
// 0073e7b9  7c6c                 jl 0x73e827
// 0073e7bb  3b4308               cmp eax, dword ptr [ebx + 8]
// 0073e7be  7d67                 jge 0x73e827
// 0073e7c0  8b5304               mov edx, dword ptr [ebx + 4]
// 0073e7c3  8b0482               mov eax, dword ptr [edx + eax*4]
// 0073e7c6  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0073e7ca  8b16                 mov edx, dword ptr [esi]
// 0073e7cc  8b9298010000         mov edx, dword ptr [edx + 0x198]
// 0073e7d2  50                   push eax
// 0073e7d3  83ec10               sub esp, 0x10
// 0073e7d6  8bc4                 mov eax, esp
// 0073e7d8  8928                 mov dword ptr [eax], ebp
// 0073e7da  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 0073e7de  896804               mov dword ptr [eax + 4], ebp
// 0073e7e1  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 0073e7e5  896808               mov dword ptr [eax + 8], ebp
// 0073e7e8  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 0073e7ec  89680c               mov dword ptr [eax + 0xc], ebp
// 0073e7ef  8b442428             mov eax, dword ptr [esp + 0x28]
// 0073e7f3  51                   push ecx
// 0073e7f4  50                   push eax
// 0073e7f5  8bce                 mov ecx, esi
// 0073e7f7  ffd2                 call edx
// 0073e7f9  3b7e68               cmp edi, dword ptr [esi + 0x68]
// 0073e7fc  7513                 jne 0x73e811
// 0073e7fe  50                   push eax
// 0073e7ff  8b4308               mov eax, dword ptr [ebx + 8]
// 0073e802  50                   push eax
// 0073e803  8bcb                 mov ecx, ebx
// 0073e805  e8a0d81000           call 0x84c0aa
// 0073e80a  5f                   pop edi
// 0073e80b  5e                   pop esi
// 0073e80c  5d                   pop ebp
// 0073e80d  5b                   pop ebx
// 0073e80e  c21800               ret 0x18
// 0073e811  85ff                 test edi, edi
// 0073e813  7c12                 jl 0x73e827
// 0073e815  3b7b08               cmp edi, dword ptr [ebx + 8]
// 0073e818  7d0d                 jge 0x73e827
// 0073e81a  8b4b04               mov ecx, dword ptr [ebx + 4]
// 0073e81d  8904b9               mov dword ptr [ecx + edi*4], eax
// 0073e820  5f                   pop edi
// 0073e821  5e                   pop esi
// 0073e822  5d                   pop ebp
// 0073e823  5b                   pop ebx
// 0073e824  c21800               ret 0x18
// 0073e827  e8b8a4fdff           call 0x718ce4
// copied from an identical function in another client (function ?_OnPrint2@CXTPReportView@@MAEXPAVCDC@@PAUCPrintInfo@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportView.cpp