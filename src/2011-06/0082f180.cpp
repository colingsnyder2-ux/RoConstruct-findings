// roc 2011-06 0082f180  unit: CRobloxReportView  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0082f180
//
// 0082f180  53                   push ebx
// 0082f181  55                   push ebp
// 0082f182  56                   push esi
// 0082f183  8bf1                 mov esi, ecx
// 0082f185  83be6003000000       cmp dword ptr [esi + 0x360], 0
// 0082f18c  57                   push edi
// 0082f18d  746b                 je 0x82f1fa
// 0082f18f  837c241400           cmp dword ptr [esp + 0x14], 0
// 0082f194  7464                 je 0x82f1fa
// 0082f196  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0082f19a  85c9                 test ecx, ecx
// 0082f19c  745c                 je 0x82f1fa
// 0082f19e  8b7914               mov edi, dword ptr [ecx + 0x14]
// 0082f1a1  8d47ff               lea eax, [edi - 1]
// 0082f1a4  8d5e60               lea ebx, [esi + 0x60]
// 0082f1a7  85c0                 test eax, eax
// 0082f1a9  7c6c                 jl 0x82f217
// 0082f1ab  3b4308               cmp eax, dword ptr [ebx + 8]
// 0082f1ae  7d67                 jge 0x82f217
// 0082f1b0  8b5304               mov edx, dword ptr [ebx + 4]
// 0082f1b3  8b0482               mov eax, dword ptr [edx + eax*4]
// 0082f1b6  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0082f1ba  8b16                 mov edx, dword ptr [esi]
// 0082f1bc  8b9298010000         mov edx, dword ptr [edx + 0x198]
// 0082f1c2  50                   push eax
// 0082f1c3  83ec10               sub esp, 0x10
// 0082f1c6  8bc4                 mov eax, esp
// 0082f1c8  8928                 mov dword ptr [eax], ebp
// 0082f1ca  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 0082f1ce  896804               mov dword ptr [eax + 4], ebp
// 0082f1d1  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 0082f1d5  896808               mov dword ptr [eax + 8], ebp
// 0082f1d8  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 0082f1dc  89680c               mov dword ptr [eax + 0xc], ebp
// 0082f1df  8b442428             mov eax, dword ptr [esp + 0x28]
// 0082f1e3  51                   push ecx
// 0082f1e4  50                   push eax
// 0082f1e5  8bce                 mov ecx, esi
// 0082f1e7  ffd2                 call edx
// 0082f1e9  3b7e68               cmp edi, dword ptr [esi + 0x68]
// 0082f1ec  7513                 jne 0x82f201
// 0082f1ee  50                   push eax
// 0082f1ef  8b4308               mov eax, dword ptr [ebx + 8]
// 0082f1f2  50                   push eax
// 0082f1f3  8bcb                 mov ecx, ebx
// 0082f1f5  e874d51900           call 0x9cc76e
// 0082f1fa  5f                   pop edi
// 0082f1fb  5e                   pop esi
// 0082f1fc  5d                   pop ebp
// 0082f1fd  5b                   pop ebx
// 0082f1fe  c21800               ret 0x18
// 0082f201  85ff                 test edi, edi
// 0082f203  7c12                 jl 0x82f217
// 0082f205  3b7b08               cmp edi, dword ptr [ebx + 8]
// 0082f208  7d0d                 jge 0x82f217
// 0082f20a  8b4b04               mov ecx, dword ptr [ebx + 4]
// 0082f20d  8904b9               mov dword ptr [ecx + edi*4], eax
// 0082f210  5f                   pop edi
// 0082f211  5e                   pop esi
// 0082f212  5d                   pop ebp
// 0082f213  5b                   pop ebx
// 0082f214  c21800               ret 0x18
// 0082f217  e8eeb0fdff           call 0x80a30a
// copied from an identical function in another client (function ?_OnPrint2@CXTPReportView@@MAEXPAVCDC@@PAUCPrintInfo@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportView.cpp