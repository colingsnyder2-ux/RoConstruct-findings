// roc 2010-06 007cd790  unit: CRobloxReportView  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007cd790
//
// 007cd790  53                   push ebx
// 007cd791  55                   push ebp
// 007cd792  56                   push esi
// 007cd793  8bf1                 mov esi, ecx
// 007cd795  83be6003000000       cmp dword ptr [esi + 0x360], 0
// 007cd79c  57                   push edi
// 007cd79d  746b                 je 0x7cd80a
// 007cd79f  837c241400           cmp dword ptr [esp + 0x14], 0
// 007cd7a4  7464                 je 0x7cd80a
// 007cd7a6  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007cd7aa  85c9                 test ecx, ecx
// 007cd7ac  745c                 je 0x7cd80a
// 007cd7ae  8b7914               mov edi, dword ptr [ecx + 0x14]
// 007cd7b1  8d47ff               lea eax, [edi - 1]
// 007cd7b4  8d5e60               lea ebx, [esi + 0x60]
// 007cd7b7  85c0                 test eax, eax
// 007cd7b9  7c6c                 jl 0x7cd827
// 007cd7bb  3b4308               cmp eax, dword ptr [ebx + 8]
// 007cd7be  7d67                 jge 0x7cd827
// 007cd7c0  8b5304               mov edx, dword ptr [ebx + 4]
// 007cd7c3  8b0482               mov eax, dword ptr [edx + eax*4]
// 007cd7c6  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 007cd7ca  8b16                 mov edx, dword ptr [esi]
// 007cd7cc  8b9298010000         mov edx, dword ptr [edx + 0x198]
// 007cd7d2  50                   push eax
// 007cd7d3  83ec10               sub esp, 0x10
// 007cd7d6  8bc4                 mov eax, esp
// 007cd7d8  8928                 mov dword ptr [eax], ebp
// 007cd7da  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 007cd7de  896804               mov dword ptr [eax + 4], ebp
// 007cd7e1  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 007cd7e5  896808               mov dword ptr [eax + 8], ebp
// 007cd7e8  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 007cd7ec  89680c               mov dword ptr [eax + 0xc], ebp
// 007cd7ef  8b442428             mov eax, dword ptr [esp + 0x28]
// 007cd7f3  51                   push ecx
// 007cd7f4  50                   push eax
// 007cd7f5  8bce                 mov ecx, esi
// 007cd7f7  ffd2                 call edx
// 007cd7f9  3b7e68               cmp edi, dword ptr [esi + 0x68]
// 007cd7fc  7513                 jne 0x7cd811
// 007cd7fe  50                   push eax
// 007cd7ff  8b4308               mov eax, dword ptr [ebx + 8]
// 007cd802  50                   push eax
// 007cd803  8bcb                 mov ecx, ebx
// 007cd805  e848f71a00           call 0x97cf52
// 007cd80a  5f                   pop edi
// 007cd80b  5e                   pop esi
// 007cd80c  5d                   pop ebp
// 007cd80d  5b                   pop ebx
// 007cd80e  c21800               ret 0x18
// 007cd811  85ff                 test edi, edi
// 007cd813  7c12                 jl 0x7cd827
// 007cd815  3b7b08               cmp edi, dword ptr [ebx + 8]
// 007cd818  7d0d                 jge 0x7cd827
// 007cd81a  8b4b04               mov ecx, dword ptr [ebx + 4]
// 007cd81d  8904b9               mov dword ptr [ecx + edi*4], eax
// 007cd820  5f                   pop edi
// 007cd821  5e                   pop esi
// 007cd822  5d                   pop ebp
// 007cd823  5b                   pop ebx
// 007cd824  c21800               ret 0x18
// 007cd827  e820a4fdff           call 0x7a7c4c
// copied from an identical function in another client (function ?_OnPrint2@CXTPReportView@@MAEXPAVCDC@@PAUCPrintInfo@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportView.cpp