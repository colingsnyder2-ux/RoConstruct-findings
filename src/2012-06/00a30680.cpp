// roc 2012-06 00a30680  unit: PAVCXTPReportHyperlink::?$CXTPArrayT  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a30680
//
// 00a30680  53                   push ebx
// 00a30681  55                   push ebp
// 00a30682  56                   push esi
// 00a30683  57                   push edi
// 00a30684  8bf9                 mov edi, ecx
// 00a30686  8b07                 mov eax, dword ptr [edi]
// 00a30688  8b5058               mov edx, dword ptr [eax + 0x58]
// 00a3068b  ffd2                 call edx
// 00a3068d  8bd8                 mov ebx, eax
// 00a3068f  33f6                 xor esi, esi
// 00a30691  85db                 test ebx, ebx
// 00a30693  7e1e                 jle 0xa306b3
// 00a30695  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00a30699  8da42400000000       lea esp, [esp]
// 00a306a0  8b07                 mov eax, dword ptr [edi]
// 00a306a2  8b5060               mov edx, dword ptr [eax + 0x60]
// 00a306a5  56                   push esi
// 00a306a6  8bcf                 mov ecx, edi
// 00a306a8  ffd2                 call edx
// 00a306aa  3bc5                 cmp eax, ebp
// 00a306ac  740f                 je 0xa306bd
// 00a306ae  46                   inc esi
// 00a306af  3bf3                 cmp esi, ebx
// 00a306b1  7ced                 jl 0xa306a0
// 00a306b3  5f                   pop edi
// 00a306b4  5e                   pop esi
// 00a306b5  5d                   pop ebp
// 00a306b6  83c8ff               or eax, 0xffffffff
// 00a306b9  5b                   pop ebx
// 00a306ba  c20400               ret 4
// 00a306bd  5f                   pop edi
// 00a306be  8bc6                 mov eax, esi
// 00a306c0  5e                   pop esi
// 00a306c1  5d                   pop ebp
// 00a306c2  5b                   pop ebx
// 00a306c3  c20400               ret 4
// library xtp-15.2.1-shared-mfc/Source\Calendar\XTPCalendarEventLabel.cpp (function ?FindElement@?$CXTPArrayT@IIJ@@UBEHI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/Calendar/XTPCalendarEventLabel.cpp
