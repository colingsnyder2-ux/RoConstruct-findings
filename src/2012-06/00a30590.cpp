// roc 2012-06 00a30590  unit: CXTPReportHyperlinks  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a30590
//
// 00a30590  55                   push ebp
// 00a30591  57                   push edi
// 00a30592  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00a30596  8be9                 mov ebp, ecx
// 00a30598  3bfd                 cmp edi, ebp
// 00a3059a  7452                 je 0xa305ee
// 00a3059c  8b4500               mov eax, dword ptr [ebp]
// 00a3059f  8b9090000000         mov edx, dword ptr [eax + 0x90]
// 00a305a5  ffd2                 call edx
// 00a305a7  85ff                 test edi, edi
// 00a305a9  7443                 je 0xa305ee
// 00a305ab  8b07                 mov eax, dword ptr [edi]
// 00a305ad  8b5058               mov edx, dword ptr [eax + 0x58]
// 00a305b0  53                   push ebx
// 00a305b1  8bcf                 mov ecx, edi
// 00a305b3  ffd2                 call edx
// 00a305b5  33db                 xor ebx, ebx
// 00a305b7  89442410             mov dword ptr [esp + 0x10], eax
// 00a305bb  85c0                 test eax, eax
// 00a305bd  7e2e                 jle 0xa305ed
// 00a305bf  56                   push esi
// 00a305c0  8b07                 mov eax, dword ptr [edi]
// 00a305c2  8b5060               mov edx, dword ptr [eax + 0x60]
// 00a305c5  53                   push ebx
// 00a305c6  8bcf                 mov ecx, edi
// 00a305c8  ffd2                 call edx
// 00a305ca  8bf0                 mov esi, eax
// 00a305cc  85f6                 test esi, esi
// 00a305ce  7415                 je 0xa305e5
// 00a305d0  8d4604               lea eax, [esi + 4]
// 00a305d3  50                   push eax
// 00a305d4  ff159821b200         call dword ptr [0xb22198]
// 00a305da  8b5500               mov edx, dword ptr [ebp]
// 00a305dd  8b4278               mov eax, dword ptr [edx + 0x78]
// 00a305e0  56                   push esi
// 00a305e1  8bcd                 mov ecx, ebp
// 00a305e3  ffd0                 call eax
// 00a305e5  43                   inc ebx
// 00a305e6  3b5c2414             cmp ebx, dword ptr [esp + 0x14]
// 00a305ea  7cd4                 jl 0xa305c0
// 00a305ec  5e                   pop esi
// 00a305ed  5b                   pop ebx
// 00a305ee  5f                   pop edi
// 00a305ef  5d                   pop ebp
// 00a305f0  c20400               ret 4
// library xtp-15.2.1-shared-mfc/Source\ReportControl\XTPReportHyperlink.cpp (function ?CopyFrom@CXTPReportHyperlinks@@UAEXPAV1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/ReportControl/XTPReportHyperlink.cpp
