// roc 2008-06 006c6710  unit: CRobloxReportView  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c6710
//
// 006c6710  83ec08               sub esp, 8
// 006c6713  8b442414             mov eax, dword ptr [esp + 0x14]
// 006c6717  8b11                 mov edx, dword ptr [ecx]
// 006c6719  53                   push ebx
// 006c671a  55                   push ebp
// 006c671b  56                   push esi
// 006c671c  8944240c             mov dword ptr [esp + 0xc], eax
// 006c6720  8b8294010000         mov eax, dword ptr [edx + 0x194]
// 006c6726  57                   push edi
// 006c6727  894c2414             mov dword ptr [esp + 0x14], ecx
// 006c672b  ffd0                 call eax
// 006c672d  837c243000           cmp dword ptr [esp + 0x30], 0
// 006c6732  7408                 je 0x6c673c
// 006c6734  8b98f8000000         mov ebx, dword ptr [eax + 0xf8]
// 006c673a  eb06                 jmp 0x6c6742
// 006c673c  8b98fc000000         mov ebx, dword ptr [eax + 0xfc]
// 006c6742  8bcb                 mov ecx, ebx
// 006c6744  33ed                 xor ebp, ebp
// 006c6746  e805390100           call 0x6da050
// 006c674b  85c0                 test eax, eax
// 006c674d  7e77                 jle 0x6c67c6
// 006c674f  90                   nop 
// 006c6750  8b13                 mov edx, dword ptr [ebx]
// 006c6752  8b425c               mov eax, dword ptr [edx + 0x5c]
// 006c6755  55                   push ebp
// 006c6756  8bcb                 mov ecx, ebx
// 006c6758  ffd0                 call eax
// 006c675a  8bf8                 mov edi, eax
// 006c675c  8b442428             mov eax, dword ptr [esp + 0x28]
// 006c6760  2b442420             sub eax, dword ptr [esp + 0x20]
// 006c6764  8b17                 mov edx, dword ptr [edi]
// 006c6766  8b5268               mov edx, dword ptr [edx + 0x68]
// 006c6769  50                   push eax
// 006c676a  8b442420             mov eax, dword ptr [esp + 0x20]
// 006c676e  50                   push eax
// 006c676f  8bcf                 mov ecx, edi
// 006c6771  ffd2                 call edx
// 006c6773  8b542410             mov edx, dword ptr [esp + 0x10]
// 006c6777  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006c677b  8d3410               lea esi, [eax + edx]
// 006c677e  3b74242c             cmp esi, dword ptr [esp + 0x2c]
// 006c6782  7f42                 jg 0x6c67c6
// 006c6784  8b442414             mov eax, dword ptr [esp + 0x14]
// 006c6788  8b10                 mov edx, dword ptr [eax]
// 006c678a  8b92ac010000         mov edx, dword ptr [edx + 0x1ac]
// 006c6790  6a00                 push 0
// 006c6792  83ec10               sub esp, 0x10
// 006c6795  8bc4                 mov eax, esp
// 006c6797  8908                 mov dword ptr [eax], ecx
// 006c6799  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006c679d  894804               mov dword ptr [eax + 4], ecx
// 006c67a0  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 006c67a4  894808               mov dword ptr [eax + 8], ecx
// 006c67a7  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006c67ab  89700c               mov dword ptr [eax + 0xc], esi
// 006c67ae  8b442430             mov eax, dword ptr [esp + 0x30]
// 006c67b2  57                   push edi
// 006c67b3  50                   push eax
// 006c67b4  ffd2                 call edx
// 006c67b6  8bcb                 mov ecx, ebx
// 006c67b8  89742410             mov dword ptr [esp + 0x10], esi
// 006c67bc  45                   inc ebp
// 006c67bd  e88e380100           call 0x6da050
// 006c67c2  3be8                 cmp ebp, eax
// 006c67c4  7c8a                 jl 0x6c6750
// 006c67c6  8b442410             mov eax, dword ptr [esp + 0x10]
// 006c67ca  2b442424             sub eax, dword ptr [esp + 0x24]
// 006c67ce  5f                   pop edi
// 006c67cf  5e                   pop esi
// 006c67d0  5d                   pop ebp
// 006c67d1  5b                   pop ebx
// 006c67d2  83c408               add esp, 8
// 006c67d5  c21800               ret 0x18
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportView.cpp (function ?PrintFixedRows@CXTPReportView@@IAEHPAVCDC@@VCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportView.cpp
